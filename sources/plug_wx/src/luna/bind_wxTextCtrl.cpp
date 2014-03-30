#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextCtrl.h>

class luna_wrapper_wxTextCtrl {
public:
	typedef Luna< wxTextCtrl > luna_t;

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

		wxTextCtrl* self= (wxTextCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextCtrl >::push(L,self,false);
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
		//wxTextCtrl* ptr= dynamic_cast< wxTextCtrl* >(Luna< wxObject >::check(L,1));
		wxTextCtrl* ptr= luna_caster< wxObject, wxTextCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxTextCtrl* ptr= dynamic_cast< wxTextCtrl* >(Luna< wxTextEntry >::check(L,1));
		wxTextCtrl* ptr= luna_caster< wxTextEntry, wxTextCtrl >::cast(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,7))) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,8))) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DiscardEdits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EmulateKeyPress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLineLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfLines(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsMultiLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSingleLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MarkDirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnDropFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionToXY(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PositionToCoords(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveFile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XYToPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_GetInsertionPoint(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_IsEmpty(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DiscardEdits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EmulateKeyPress(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLineLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetLineText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetNumberOfLines(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_MarkDirty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_PositionToXY(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetDefaultStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,37117058) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_XYToPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 6 valid operators)
	inline static bool _lg_typecheck_op_write_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_write_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// wxTextCtrl::wxTextCtrl()
	static wxTextCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl::wxTextCtrl() function, expected prototype:\nwxTextCtrl::wxTextCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTextCtrl();
	}

	// wxTextCtrl::wxTextCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)
	static wxTextCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl::wxTextCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr) function, expected prototype:\nwxTextCtrl::wxTextCtrl(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTextCtrl::wxTextCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::wxTextCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextCtrl::wxTextCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxTextCtrl(parent, id, value, pos, size, style, validator, name);
	}

	// wxTextCtrl::wxTextCtrl(lua_Table * data)
	static wxTextCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl::wxTextCtrl(lua_Table * data) function, expected prototype:\nwxTextCtrl::wxTextCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTextCtrl(L,NULL);
	}

	// wxTextCtrl::wxTextCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)
	static wxTextCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl::wxTextCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr) function, expected prototype:\nwxTextCtrl::wxTextCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTextCtrl::wxTextCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::wxTextCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)0;
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextCtrl::wxTextCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxTextCtrl(L,NULL, parent, id, value, pos, size, style, validator, name);
	}

	// Overload binder for wxTextCtrl::wxTextCtrl
	static wxTextCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTextCtrl, cannot match any of the overloads for function wxTextCtrl:\n  wxTextCtrl()\n  wxTextCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxTextCtrl(lua_Table *)\n  wxTextCtrl(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTextCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr) function, expected prototype:\nbool wxTextCtrl::Create(wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTextCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTextCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)0;
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, value, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::Cut()
	static int _bind_Cut(lua_State *L) {
		if (!_lg_typecheck_Cut(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::Cut() function, expected prototype:\nvoid wxTextCtrl::Cut()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::Cut(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Cut();

		return 0;
	}

	// void wxTextCtrl::DiscardEdits()
	static int _bind_DiscardEdits(lua_State *L) {
		if (!_lg_typecheck_DiscardEdits(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::DiscardEdits() function, expected prototype:\nvoid wxTextCtrl::DiscardEdits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::DiscardEdits(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DiscardEdits();

		return 0;
	}

	// bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event)
	static int _bind_EmulateKeyPress(lua_State *L) {
		if (!_lg_typecheck_EmulateKeyPress(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event) function, expected prototype:\nbool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::EmulateKeyPress function");
		}
		const wxKeyEvent & event=*event_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EmulateKeyPress(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxTextAttr & wxTextCtrl::GetDefaultStyle() const
	static int _bind_GetDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_GetDefaultStyle(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttr & wxTextCtrl::GetDefaultStyle() const function, expected prototype:\nconst wxTextAttr & wxTextCtrl::GetDefaultStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttr & wxTextCtrl::GetDefaultStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttr* lret = &self->GetDefaultStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttr >::push(L,lret,false);

		return 1;
	}

	// int wxTextCtrl::GetLineLength(long lineNo) const
	static int _bind_GetLineLength(lua_State *L) {
		if (!_lg_typecheck_GetLineLength(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::GetLineLength(long lineNo) const function, expected prototype:\nint wxTextCtrl::GetLineLength(long lineNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long lineNo=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::GetLineLength(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetLineLength(lineNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextCtrl::GetLineText(long lineNo) const
	static int _bind_GetLineText(lua_State *L) {
		if (!_lg_typecheck_GetLineText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::GetLineText(long lineNo) const function, expected prototype:\nwxString wxTextCtrl::GetLineText(long lineNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long lineNo=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::GetLineText(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLineText(lineNo);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextCtrl::GetNumberOfLines() const
	static int _bind_GetNumberOfLines(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfLines(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::GetNumberOfLines() const function, expected prototype:\nint wxTextCtrl::GetNumberOfLines() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::GetNumberOfLines() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberOfLines();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextCtrl::GetStyle(long position, wxTextAttr & style)
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::GetStyle(long position, wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::GetStyle(long position, wxTextAttr & style)\nClass arguments details:\narg 2 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		long position=(long)lua_tonumber(L,2);
		wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,3));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::GetStyle function");
		}
		wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::GetStyle(long, wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetStyle(position, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * pos) const
	static int _bind_HitTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * pos) const function, expected prototype:\nwxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * pos) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTextCtrl::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long* pos=(long*)Luna< void >::check(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint &, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrlHitTestResult lret = self->HitTest(pt, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * col, long * row) const
	static int _bind_HitTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * col, long * row) const function, expected prototype:\nwxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint & pt, long * col, long * row) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTextCtrl::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long* col=(long*)Luna< void >::check(L,3);
		long* row=(long*)Luna< void >::check(L,4);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrlHitTestResult wxTextCtrl::HitTest(const wxPoint &, long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrlHitTestResult lret = self->HitTest(pt, col, row);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxTextCtrl::HitTest
	static int _bind_HitTest(lua_State *L) {
		if (_lg_typecheck_HitTest_overload_1(L)) return _bind_HitTest_overload_1(L);
		if (_lg_typecheck_HitTest_overload_2(L)) return _bind_HitTest_overload_2(L);

		luaL_error(L, "error in function HitTest, cannot match any of the overloads for function HitTest:\n  HitTest(const wxPoint &, long *)\n  HitTest(const wxPoint &, long *, long *)\n");
		return 0;
	}

	// bool wxTextCtrl::IsModified() const
	static int _bind_IsModified(lua_State *L) {
		if (!_lg_typecheck_IsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::IsModified() const function, expected prototype:\nbool wxTextCtrl::IsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::IsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::IsMultiLine() const
	static int _bind_IsMultiLine(lua_State *L) {
		if (!_lg_typecheck_IsMultiLine(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::IsMultiLine() const function, expected prototype:\nbool wxTextCtrl::IsMultiLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::IsMultiLine() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsMultiLine();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::IsSingleLine() const
	static int _bind_IsSingleLine(lua_State *L) {
		if (!_lg_typecheck_IsSingleLine(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::IsSingleLine() const function, expected prototype:\nbool wxTextCtrl::IsSingleLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::IsSingleLine() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSingleLine();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::LoadFile(const wxString & filename, int fileType = wxTEXT_TYPE_ANY)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::LoadFile(const wxString & filename, int fileType = wxTEXT_TYPE_ANY) function, expected prototype:\nbool wxTextCtrl::LoadFile(const wxString & filename, int fileType = wxTEXT_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		int fileType=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxTEXT_TYPE_ANY;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::LoadFile(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(filename, fileType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::MarkDirty()
	static int _bind_MarkDirty(lua_State *L) {
		if (!_lg_typecheck_MarkDirty(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::MarkDirty() function, expected prototype:\nvoid wxTextCtrl::MarkDirty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::MarkDirty(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MarkDirty();

		return 0;
	}

	// void wxTextCtrl::OnDropFiles(wxDropFilesEvent & event)
	static int _bind_OnDropFiles(lua_State *L) {
		if (!_lg_typecheck_OnDropFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::OnDropFiles(wxDropFilesEvent & event) function, expected prototype:\nvoid wxTextCtrl::OnDropFiles(wxDropFilesEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropFilesEvent* event_ptr=(Luna< wxObject >::checkSubType< wxDropFilesEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::OnDropFiles function");
		}
		wxDropFilesEvent & event=*event_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::OnDropFiles(wxDropFilesEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnDropFiles(event);

		return 0;
	}

	// bool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const
	static int _bind_PositionToXY(lua_State *L) {
		if (!_lg_typecheck_PositionToXY(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const function, expected prototype:\nbool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);
		long* x=(long*)Luna< void >::check(L,3);
		long* y=(long*)Luna< void >::check(L,4);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::PositionToXY(long, long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PositionToXY(pos, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxTextCtrl::PositionToCoords(long pos) const
	static int _bind_PositionToCoords(lua_State *L) {
		if (!_lg_typecheck_PositionToCoords(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxTextCtrl::PositionToCoords(long pos) const function, expected prototype:\nwxPoint wxTextCtrl::PositionToCoords(long pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxTextCtrl::PositionToCoords(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->PositionToCoords(pos);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// bool wxTextCtrl::SaveFile(const wxString & filename = wxEmptyString, int fileType = wxTEXT_TYPE_ANY)
	static int _bind_SaveFile(lua_State *L) {
		if (!_lg_typecheck_SaveFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::SaveFile(const wxString & filename = wxEmptyString, int fileType = wxTEXT_TYPE_ANY) function, expected prototype:\nbool wxTextCtrl::SaveFile(const wxString & filename = wxEmptyString, int fileType = wxTEXT_TYPE_ANY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,2),lua_objlen(L,2));
		int fileType=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxTEXT_TYPE_ANY;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::SaveFile(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SaveFile(filename, fileType);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style)
	static int _bind_SetDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_SetDefaultStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style)\nClass arguments details:\narg 1 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::SetDefaultStyle function");
		}
		const wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::SetDefaultStyle(const wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDefaultStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::SetModified(bool modified)
	static int _bind_SetModified(lua_State *L) {
		if (!_lg_typecheck_SetModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::SetModified(bool modified) function, expected prototype:\nvoid wxTextCtrl::SetModified(bool modified)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::SetModified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetModified(modified);

		return 0;
	}

	// bool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style)\nClass arguments details:\narg 3 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		long start=(long)lua_tonumber(L,2);
		long end=(long)lua_tonumber(L,3);
		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,4));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::SetStyle function");
		}
		const wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::SetStyle(long, long, const wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetStyle(start, end, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::ShowPosition(long pos)
	static int _bind_ShowPosition(lua_State *L) {
		if (!_lg_typecheck_ShowPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::ShowPosition(long pos) function, expected prototype:\nvoid wxTextCtrl::ShowPosition(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::ShowPosition(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowPosition(pos);

		return 0;
	}

	// long wxTextCtrl::XYToPosition(long x, long y) const
	static int _bind_XYToPosition(lua_State *L) {
		if (!_lg_typecheck_XYToPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextCtrl::XYToPosition(long x, long y) const function, expected prototype:\nlong wxTextCtrl::XYToPosition(long x, long y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long x=(long)lua_tonumber(L,2);
		long y=(long)lua_tonumber(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextCtrl::XYToPosition(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->XYToPosition(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxTextCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTextCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTextCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTextCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTextCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxTextCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxTextCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxTextCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxTextCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_HasFocus() const function, expected prototype:\nbool wxTextCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxTextCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxTextCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetFocus() function, expected prototype:\nvoid wxTextCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetFocus();

		return 0;
	}

	// void wxTextCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxTextCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxTextCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxTextCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::AddChild(child);

		return 0;
	}

	// void wxTextCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxTextCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxTextCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxTextCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxTextCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxTextCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxTextCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxTextCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxTextCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxTextCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxTextCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxTextCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxTextCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxTextCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxTextCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxTextCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxTextCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxTextCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxTextCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxTextCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxTextCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Fit() function, expected prototype:\nvoid wxTextCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Fit();

		return 0;
	}

	// void wxTextCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_FitInside() function, expected prototype:\nvoid wxTextCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::FitInside();

		return 0;
	}

	// wxSize wxTextCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTextCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTextCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxTextCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTextCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTextCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxTextCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxTextCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxTextCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxTextCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxTextCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxTextCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxTextCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxTextCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxTextCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxTextCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxTextCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTextCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetMinSize(size);

		return 0;
	}

	// void wxTextCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxTextCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxTextCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxTextCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxTextCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxTextCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxTextCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxTextCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxTextCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxTextCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxTextCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxTextCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxTextCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxTextCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_ClearBackground() function, expected prototype:\nvoid wxTextCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxTextCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxTextCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxTextCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxTextCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxTextCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetCharHeight() const function, expected prototype:\nint wxTextCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTextCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetCharWidth() const function, expected prototype:\nint wxTextCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxTextCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxTextCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxTextCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxTextCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxTextCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxTextCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxTextCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxTextCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Update() function, expected prototype:\nvoid wxTextCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Update();

		return 0;
	}

	// bool wxTextCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxTextCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxTextCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTextCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxTextCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxTextCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxTextCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxTextCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxTextCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxTextCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTextCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxTextCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTextCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxTextCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxTextCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTextCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTextCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxTextCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxTextCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxTextCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxTextCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Lower() function, expected prototype:\nvoid wxTextCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Lower();

		return 0;
	}

	// void wxTextCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Raise() function, expected prototype:\nvoid wxTextCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Raise();

		return 0;
	}

	// bool wxTextCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxTextCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsShown() const function, expected prototype:\nbool wxTextCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxTextCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxTextCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxTextCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxTextCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxTextCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxTextCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxTextCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxTextCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxTextCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxTextCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxTextCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxTextCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxTextCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxTextCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxTextCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxTextCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_Validate() function, expected prototype:\nbool wxTextCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxTextCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxTextCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxTextCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxTextCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxTextCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetName() const function, expected prototype:\nwxString wxTextCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxTextCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxTextCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxTextCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetName(name);

		return 0;
	}

	// void wxTextCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxTextCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxTextCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxTextCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_Destroy() function, expected prototype:\nbool wxTextCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxTextCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxTextCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxTextCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxTextCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxTextCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxTextCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxTextCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxTextCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxTextCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxTextCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_Layout() function, expected prototype:\nbool wxTextCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_HasCapture() const function, expected prototype:\nbool wxTextCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxTextCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxTextCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxTextCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxTextCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxTextCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxTextCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxTextCtrl::base_GetHandle() const function, expected prototype:\nHWND wxTextCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxTextCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxTextCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxTextCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxTextCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxTextCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::InheritAttributes();

		return 0;
	}

	// void wxTextCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_InitDialog() function, expected prototype:\nvoid wxTextCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::InitDialog();

		return 0;
	}

	// bool wxTextCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsRetained() const function, expected prototype:\nbool wxTextCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxTextCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxTextCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::MakeModal(modal);

		return 0;
	}

	// void wxTextCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxTextCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxTextCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxTextCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxTextCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxTextCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxTextCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxTextCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Command(event);

		return 0;
	}

	// wxString wxTextCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetLabel() const function, expected prototype:\nwxString wxTextCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxTextCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetLabel(label);

		return 0;
	}

	// void wxTextCtrl::base_AppendText(const wxString & text)
	static int _bind_base_AppendText(lua_State *L) {
		if (!_lg_typecheck_base_AppendText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_AppendText(const wxString & text) function, expected prototype:\nvoid wxTextCtrl::base_AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_AppendText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::AppendText(text);

		return 0;
	}

	// bool wxTextCtrl::base_CanCopy() const
	static int _bind_base_CanCopy(lua_State *L) {
		if (!_lg_typecheck_base_CanCopy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_CanCopy() const function, expected prototype:\nbool wxTextCtrl::base_CanCopy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_CanCopy() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::CanCopy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_CanCut() const
	static int _bind_base_CanCut(lua_State *L) {
		if (!_lg_typecheck_base_CanCut(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_CanCut() const function, expected prototype:\nbool wxTextCtrl::base_CanCut() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_CanCut() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::CanCut();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_CanPaste() const
	static int _bind_base_CanPaste(lua_State *L) {
		if (!_lg_typecheck_base_CanPaste(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_CanPaste() const function, expected prototype:\nbool wxTextCtrl::base_CanPaste() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_CanPaste() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_CanRedo() const
	static int _bind_base_CanRedo(lua_State *L) {
		if (!_lg_typecheck_base_CanRedo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_CanRedo() const function, expected prototype:\nbool wxTextCtrl::base_CanRedo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_CanRedo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_CanUndo() const
	static int _bind_base_CanUndo(lua_State *L) {
		if (!_lg_typecheck_base_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_CanUndo() const function, expected prototype:\nbool wxTextCtrl::base_CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_ChangeValue(const wxString & value)
	static int _bind_base_ChangeValue(lua_State *L) {
		if (!_lg_typecheck_base_ChangeValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_ChangeValue(const wxString & value) function, expected prototype:\nvoid wxTextCtrl::base_ChangeValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_ChangeValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::ChangeValue(value);

		return 0;
	}

	// void wxTextCtrl::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Clear() function, expected prototype:\nvoid wxTextCtrl::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Clear();

		return 0;
	}

	// void wxTextCtrl::base_Copy()
	static int _bind_base_Copy(lua_State *L) {
		if (!_lg_typecheck_base_Copy(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Copy() function, expected prototype:\nvoid wxTextCtrl::base_Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Copy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Copy();

		return 0;
	}

	// long wxTextCtrl::base_GetInsertionPoint() const
	static int _bind_base_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextCtrl::base_GetInsertionPoint() const function, expected prototype:\nlong wxTextCtrl::base_GetInsertionPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextCtrl::base_GetInsertionPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTextCtrl::GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextCtrl::base_GetLastPosition() const
	static int _bind_base_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetLastPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextCtrl::base_GetLastPosition() const function, expected prototype:\nlong wxTextCtrl::base_GetLastPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextCtrl::base_GetLastPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTextCtrl::GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextCtrl::base_GetRange(long from, long to) const
	static int _bind_base_GetRange(lua_State *L) {
		if (!_lg_typecheck_base_GetRange(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetRange(long from, long to) const function, expected prototype:\nwxString wxTextCtrl::base_GetRange(long from, long to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetRange(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetRange(from, to);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextCtrl::base_GetSelection(long * from, long * to) const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxTextCtrl::base_GetSelection(long * from, long * to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long* from=(long*)Luna< void >::check(L,2);
		long* to=(long*)Luna< void >::check(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_GetSelection(long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::GetSelection(from, to);

		return 0;
	}

	// wxString wxTextCtrl::base_GetStringSelection() const
	static int _bind_base_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetStringSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetStringSelection() const function, expected prototype:\nwxString wxTextCtrl::base_GetStringSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetStringSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxTextCtrl::base_GetValue() const
	static int _bind_base_GetValue(lua_State *L) {
		if (!_lg_typecheck_base_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetValue() const function, expected prototype:\nwxString wxTextCtrl::base_GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextCtrl::base_IsEditable() const
	static int _bind_base_IsEditable(lua_State *L) {
		if (!_lg_typecheck_base_IsEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsEditable() const function, expected prototype:\nbool wxTextCtrl::base_IsEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_IsEmpty() const
	static int _bind_base_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_base_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsEmpty() const function, expected prototype:\nbool wxTextCtrl::base_IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_Paste()
	static int _bind_base_Paste(lua_State *L) {
		if (!_lg_typecheck_base_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Paste() function, expected prototype:\nvoid wxTextCtrl::base_Paste()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Paste(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Paste();

		return 0;
	}

	// void wxTextCtrl::base_Redo()
	static int _bind_base_Redo(lua_State *L) {
		if (!_lg_typecheck_base_Redo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Redo() function, expected prototype:\nvoid wxTextCtrl::base_Redo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Redo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Redo();

		return 0;
	}

	// void wxTextCtrl::base_Remove(long from, long to)
	static int _bind_base_Remove(lua_State *L) {
		if (!_lg_typecheck_base_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Remove(long from, long to) function, expected prototype:\nvoid wxTextCtrl::base_Remove(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Remove(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Remove(from, to);

		return 0;
	}

	// void wxTextCtrl::base_Replace(long from, long to, const wxString & value)
	static int _bind_base_Replace(lua_State *L) {
		if (!_lg_typecheck_base_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Replace(long from, long to, const wxString & value) function, expected prototype:\nvoid wxTextCtrl::base_Replace(long from, long to, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Replace(long, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Replace(from, to, value);

		return 0;
	}

	// void wxTextCtrl::base_SetEditable(bool editable)
	static int _bind_base_SetEditable(lua_State *L) {
		if (!_lg_typecheck_base_SetEditable(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetEditable(bool editable) function, expected prototype:\nvoid wxTextCtrl::base_SetEditable(bool editable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool editable=(bool)(lua_toboolean(L,2)==1);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetEditable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetEditable(editable);

		return 0;
	}

	// void wxTextCtrl::base_SetInsertionPoint(long pos)
	static int _bind_base_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetInsertionPoint(long pos) function, expected prototype:\nvoid wxTextCtrl::base_SetInsertionPoint(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetInsertionPoint(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetInsertionPoint(pos);

		return 0;
	}

	// void wxTextCtrl::base_SetInsertionPointEnd()
	static int _bind_base_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPointEnd(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetInsertionPointEnd() function, expected prototype:\nvoid wxTextCtrl::base_SetInsertionPointEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetInsertionPointEnd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetInsertionPointEnd();

		return 0;
	}

	// void wxTextCtrl::base_SetMaxLength(unsigned long len)
	static int _bind_base_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetMaxLength(unsigned long len) function, expected prototype:\nvoid wxTextCtrl::base_SetMaxLength(unsigned long len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long len=(unsigned long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetMaxLength(unsigned long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetMaxLength(len);

		return 0;
	}

	// void wxTextCtrl::base_SetSelection(long from, long to)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetSelection(long from, long to) function, expected prototype:\nvoid wxTextCtrl::base_SetSelection(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetSelection(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetSelection(from, to);

		return 0;
	}

	// void wxTextCtrl::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SelectAll() function, expected prototype:\nvoid wxTextCtrl::base_SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SelectAll();

		return 0;
	}

	// bool wxTextCtrl::base_SetHint(const wxString & hint)
	static int _bind_base_SetHint(lua_State *L) {
		if (!_lg_typecheck_base_SetHint(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetHint(const wxString & hint) function, expected prototype:\nbool wxTextCtrl::base_SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetHint(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextCtrl::base_GetHint() const
	static int _bind_base_GetHint(lua_State *L) {
		if (!_lg_typecheck_base_GetHint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetHint() const function, expected prototype:\nwxString wxTextCtrl::base_GetHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetHint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextCtrl::base_SetValue(const wxString & value)
	static int _bind_base_SetValue(lua_State *L) {
		if (!_lg_typecheck_base_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_SetValue(const wxString & value) function, expected prototype:\nvoid wxTextCtrl::base_SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::SetValue(value);

		return 0;
	}

	// void wxTextCtrl::base_Undo()
	static int _bind_base_Undo(lua_State *L) {
		if (!_lg_typecheck_base_Undo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Undo() function, expected prototype:\nvoid wxTextCtrl::base_Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Undo();

		return 0;
	}

	// void wxTextCtrl::base_WriteText(const wxString & text)
	static int _bind_base_WriteText(lua_State *L) {
		if (!_lg_typecheck_base_WriteText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_WriteText(const wxString & text) function, expected prototype:\nvoid wxTextCtrl::base_WriteText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_WriteText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::WriteText(text);

		return 0;
	}

	// void wxTextCtrl::base_Cut()
	static int _bind_base_Cut(lua_State *L) {
		if (!_lg_typecheck_base_Cut(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_Cut() function, expected prototype:\nvoid wxTextCtrl::base_Cut()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_Cut(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::Cut();

		return 0;
	}

	// void wxTextCtrl::base_DiscardEdits()
	static int _bind_base_DiscardEdits(lua_State *L) {
		if (!_lg_typecheck_base_DiscardEdits(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_DiscardEdits() function, expected prototype:\nvoid wxTextCtrl::base_DiscardEdits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_DiscardEdits(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::DiscardEdits();

		return 0;
	}

	// bool wxTextCtrl::base_EmulateKeyPress(const wxKeyEvent & event)
	static int _bind_base_EmulateKeyPress(lua_State *L) {
		if (!_lg_typecheck_base_EmulateKeyPress(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_EmulateKeyPress(const wxKeyEvent & event) function, expected prototype:\nbool wxTextCtrl::base_EmulateKeyPress(const wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextCtrl::base_EmulateKeyPress function");
		}
		const wxKeyEvent & event=*event_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_EmulateKeyPress(const wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::EmulateKeyPress(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxTextAttr & wxTextCtrl::base_GetDefaultStyle() const
	static int _bind_base_GetDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultStyle(L)) {
			luaL_error(L, "luna typecheck failed in const wxTextAttr & wxTextCtrl::base_GetDefaultStyle() const function, expected prototype:\nconst wxTextAttr & wxTextCtrl::base_GetDefaultStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTextAttr & wxTextCtrl::base_GetDefaultStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextAttr* lret = &self->wxTextCtrl::GetDefaultStyle();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextAttr >::push(L,lret,false);

		return 1;
	}

	// int wxTextCtrl::base_GetLineLength(long lineNo) const
	static int _bind_base_GetLineLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLineLength(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetLineLength(long lineNo) const function, expected prototype:\nint wxTextCtrl::base_GetLineLength(long lineNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long lineNo=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetLineLength(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetLineLength(lineNo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextCtrl::base_GetLineText(long lineNo) const
	static int _bind_base_GetLineText(lua_State *L) {
		if (!_lg_typecheck_base_GetLineText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCtrl::base_GetLineText(long lineNo) const function, expected prototype:\nwxString wxTextCtrl::base_GetLineText(long lineNo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long lineNo=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCtrl::base_GetLineText(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextCtrl::GetLineText(lineNo);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxTextCtrl::base_GetNumberOfLines() const
	static int _bind_base_GetNumberOfLines(lua_State *L) {
		if (!_lg_typecheck_base_GetNumberOfLines(L)) {
			luaL_error(L, "luna typecheck failed in int wxTextCtrl::base_GetNumberOfLines() const function, expected prototype:\nint wxTextCtrl::base_GetNumberOfLines() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTextCtrl::base_GetNumberOfLines() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTextCtrl::GetNumberOfLines();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextCtrl::base_GetStyle(long position, wxTextAttr & style)
	static int _bind_base_GetStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_GetStyle(long position, wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::base_GetStyle(long position, wxTextAttr & style)\nClass arguments details:\narg 2 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		long position=(long)lua_tonumber(L,2);
		wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,3));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::base_GetStyle function");
		}
		wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_GetStyle(long, wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::GetStyle(position, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_IsModified() const
	static int _bind_base_IsModified(lua_State *L) {
		if (!_lg_typecheck_base_IsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_IsModified() const function, expected prototype:\nbool wxTextCtrl::base_IsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_IsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::IsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_MarkDirty()
	static int _bind_base_MarkDirty(lua_State *L) {
		if (!_lg_typecheck_base_MarkDirty(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_MarkDirty() function, expected prototype:\nvoid wxTextCtrl::base_MarkDirty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_MarkDirty(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::MarkDirty();

		return 0;
	}

	// bool wxTextCtrl::base_PositionToXY(long pos, long * x, long * y) const
	static int _bind_base_PositionToXY(lua_State *L) {
		if (!_lg_typecheck_base_PositionToXY(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_PositionToXY(long pos, long * x, long * y) const function, expected prototype:\nbool wxTextCtrl::base_PositionToXY(long pos, long * x, long * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);
		long* x=(long*)Luna< void >::check(L,3);
		long* y=(long*)Luna< void >::check(L,4);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_PositionToXY(long, long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::PositionToXY(pos, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_SetDefaultStyle(const wxTextAttr & style)
	static int _bind_base_SetDefaultStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetDefaultStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetDefaultStyle(const wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::base_SetDefaultStyle(const wxTextAttr & style)\nClass arguments details:\narg 1 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,2));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::base_SetDefaultStyle function");
		}
		const wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetDefaultStyle(const wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetDefaultStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextCtrl::base_SetStyle(long start, long end, const wxTextAttr & style)
	static int _bind_base_SetStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCtrl::base_SetStyle(long start, long end, const wxTextAttr & style) function, expected prototype:\nbool wxTextCtrl::base_SetStyle(long start, long end, const wxTextAttr & style)\nClass arguments details:\narg 3 ID = 37117058\n\n%s",luna_dumpStack(L).c_str());
		}

		long start=(long)lua_tonumber(L,2);
		long end=(long)lua_tonumber(L,3);
		const wxTextAttr* style_ptr=(Luna< wxTextAttr >::check(L,4));
		if( !style_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg style in wxTextCtrl::base_SetStyle function");
		}
		const wxTextAttr & style=*style_ptr;

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCtrl::base_SetStyle(long, long, const wxTextAttr &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextCtrl::SetStyle(start, end, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextCtrl::base_ShowPosition(long pos)
	static int _bind_base_ShowPosition(lua_State *L) {
		if (!_lg_typecheck_base_ShowPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCtrl::base_ShowPosition(long pos) function, expected prototype:\nvoid wxTextCtrl::base_ShowPosition(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCtrl::base_ShowPosition(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextCtrl::ShowPosition(pos);

		return 0;
	}

	// long wxTextCtrl::base_XYToPosition(long x, long y) const
	static int _bind_base_XYToPosition(lua_State *L) {
		if (!_lg_typecheck_base_XYToPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextCtrl::base_XYToPosition(long x, long y) const function, expected prototype:\nlong wxTextCtrl::base_XYToPosition(long x, long y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long x=(long)lua_tonumber(L,2);
		long y=(long)lua_tonumber(L,3);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextCtrl::base_XYToPosition(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTextCtrl::XYToPosition(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// wxTextCtrl & wxTextCtrl::operator<<(const wxString & s)
	static int _bind_op_write_overload_1(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl & wxTextCtrl::operator<<(const wxString & s) function, expected prototype:\nwxTextCtrl & wxTextCtrl::operator<<(const wxString & s)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl & wxTextCtrl::operator<<(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextCtrl* lret = &self->operator<<(s);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl & wxTextCtrl::operator<<(int i)
	static int _bind_op_write_overload_2(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl & wxTextCtrl::operator<<(int i) function, expected prototype:\nwxTextCtrl & wxTextCtrl::operator<<(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl & wxTextCtrl::operator<<(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextCtrl* lret = &self->operator<<(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl & wxTextCtrl::operator<<(long i)
	static int _bind_op_write_overload_3(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl & wxTextCtrl::operator<<(long i) function, expected prototype:\nwxTextCtrl & wxTextCtrl::operator<<(long i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long i=(long)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl & wxTextCtrl::operator<<(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextCtrl* lret = &self->operator<<(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl & wxTextCtrl::operator<<(float f)
	static int _bind_op_write_overload_4(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl & wxTextCtrl::operator<<(float f) function, expected prototype:\nwxTextCtrl & wxTextCtrl::operator<<(float f)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float f=(float)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl & wxTextCtrl::operator<<(float). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextCtrl* lret = &self->operator<<(f);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl & wxTextCtrl::operator<<(double d)
	static int _bind_op_write_overload_5(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl & wxTextCtrl::operator<<(double d) function, expected prototype:\nwxTextCtrl & wxTextCtrl::operator<<(double d)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double d=(double)lua_tonumber(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl & wxTextCtrl::operator<<(double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextCtrl* lret = &self->operator<<(d);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl & wxTextCtrl::operator<<(char c)
	static int _bind_op_write_overload_6(lua_State *L) {
		if (!_lg_typecheck_op_write_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl & wxTextCtrl::operator<<(char c) function, expected prototype:\nwxTextCtrl & wxTextCtrl::operator<<(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		wxTextCtrl* self=Luna< wxObject >::checkSubType< wxTextCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl & wxTextCtrl::operator<<(char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTextCtrl* lret = &self->operator<<(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxTextCtrl::operator<<
	static int _bind_op_write(lua_State *L) {
		if (_lg_typecheck_op_write_overload_1(L)) return _bind_op_write_overload_1(L);
		if (_lg_typecheck_op_write_overload_2(L)) return _bind_op_write_overload_2(L);
		if (_lg_typecheck_op_write_overload_3(L)) return _bind_op_write_overload_3(L);
		if (_lg_typecheck_op_write_overload_4(L)) return _bind_op_write_overload_4(L);
		if (_lg_typecheck_op_write_overload_5(L)) return _bind_op_write_overload_5(L);
		if (_lg_typecheck_op_write_overload_6(L)) return _bind_op_write_overload_6(L);

		luaL_error(L, "error in function operator<<, cannot match any of the overloads for function operator<<:\n  operator<<(const wxString &)\n  operator<<(int)\n  operator<<(long)\n  operator<<(float)\n  operator<<(double)\n  operator<<(char)\n");
		return 0;
	}


	inline static bool _lg_typecheck_baseCast_wxTextEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxTextEntry(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxTextEntry(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxTextEntry function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxTextEntry* res = luna_caster<wxObject,wxTextEntry>::cast(self); // dynamic_cast<wxTextEntry*>(self);
		if(!res)
			return 0;
			
		Luna< wxTextEntry >::push(L,res,false);
		return 1;

	}

};

wxTextCtrl* LunaTraits< wxTextCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextCtrl::_bind_ctor(L);
}

void LunaTraits< wxTextCtrl >::_bind_dtor(wxTextCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxTextCtrl >::className[] = "wxTextCtrl";
const char LunaTraits< wxTextCtrl >::fullName[] = "wxTextCtrl";
const char LunaTraits< wxTextCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxTextCtrl >::parents[] = {"wx.wxControl", "wx.wxTextEntry", 0};
const int LunaTraits< wxTextCtrl >::hash = 37176572;
const int LunaTraits< wxTextCtrl >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxTextCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxTextCtrl::_bind_Create},
	{"Cut", &luna_wrapper_wxTextCtrl::_bind_Cut},
	{"DiscardEdits", &luna_wrapper_wxTextCtrl::_bind_DiscardEdits},
	{"EmulateKeyPress", &luna_wrapper_wxTextCtrl::_bind_EmulateKeyPress},
	{"GetDefaultStyle", &luna_wrapper_wxTextCtrl::_bind_GetDefaultStyle},
	{"GetLineLength", &luna_wrapper_wxTextCtrl::_bind_GetLineLength},
	{"GetLineText", &luna_wrapper_wxTextCtrl::_bind_GetLineText},
	{"GetNumberOfLines", &luna_wrapper_wxTextCtrl::_bind_GetNumberOfLines},
	{"GetStyle", &luna_wrapper_wxTextCtrl::_bind_GetStyle},
	{"HitTest", &luna_wrapper_wxTextCtrl::_bind_HitTest},
	{"IsModified", &luna_wrapper_wxTextCtrl::_bind_IsModified},
	{"IsMultiLine", &luna_wrapper_wxTextCtrl::_bind_IsMultiLine},
	{"IsSingleLine", &luna_wrapper_wxTextCtrl::_bind_IsSingleLine},
	{"LoadFile", &luna_wrapper_wxTextCtrl::_bind_LoadFile},
	{"MarkDirty", &luna_wrapper_wxTextCtrl::_bind_MarkDirty},
	{"OnDropFiles", &luna_wrapper_wxTextCtrl::_bind_OnDropFiles},
	{"PositionToXY", &luna_wrapper_wxTextCtrl::_bind_PositionToXY},
	{"PositionToCoords", &luna_wrapper_wxTextCtrl::_bind_PositionToCoords},
	{"SaveFile", &luna_wrapper_wxTextCtrl::_bind_SaveFile},
	{"SetDefaultStyle", &luna_wrapper_wxTextCtrl::_bind_SetDefaultStyle},
	{"SetModified", &luna_wrapper_wxTextCtrl::_bind_SetModified},
	{"SetStyle", &luna_wrapper_wxTextCtrl::_bind_SetStyle},
	{"ShowPosition", &luna_wrapper_wxTextCtrl::_bind_ShowPosition},
	{"XYToPosition", &luna_wrapper_wxTextCtrl::_bind_XYToPosition},
	{"base_GetClassInfo", &luna_wrapper_wxTextCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxTextCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxTextCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxTextCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxTextCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxTextCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxTextCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxTextCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxTextCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxTextCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxTextCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxTextCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxTextCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxTextCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxTextCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxTextCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxTextCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxTextCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxTextCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxTextCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxTextCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxTextCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxTextCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxTextCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxTextCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxTextCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxTextCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxTextCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxTextCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxTextCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxTextCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxTextCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxTextCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxTextCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxTextCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxTextCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxTextCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxTextCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxTextCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxTextCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxTextCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxTextCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxTextCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxTextCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxTextCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxTextCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxTextCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxTextCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxTextCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxTextCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxTextCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxTextCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxTextCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxTextCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxTextCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxTextCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxTextCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxTextCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxTextCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxTextCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxTextCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxTextCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxTextCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxTextCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxTextCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxTextCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxTextCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxTextCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxTextCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxTextCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxTextCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxTextCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxTextCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxTextCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxTextCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxTextCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxTextCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxTextCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxTextCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxTextCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxTextCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxTextCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxTextCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxTextCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxTextCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxTextCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxTextCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxTextCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxTextCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxTextCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxTextCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxTextCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxTextCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxTextCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxTextCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxTextCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxTextCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxTextCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxTextCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxTextCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxTextCtrl::_bind_base_SetLabel},
	{"base_AppendText", &luna_wrapper_wxTextCtrl::_bind_base_AppendText},
	{"base_CanCopy", &luna_wrapper_wxTextCtrl::_bind_base_CanCopy},
	{"base_CanCut", &luna_wrapper_wxTextCtrl::_bind_base_CanCut},
	{"base_CanPaste", &luna_wrapper_wxTextCtrl::_bind_base_CanPaste},
	{"base_CanRedo", &luna_wrapper_wxTextCtrl::_bind_base_CanRedo},
	{"base_CanUndo", &luna_wrapper_wxTextCtrl::_bind_base_CanUndo},
	{"base_ChangeValue", &luna_wrapper_wxTextCtrl::_bind_base_ChangeValue},
	{"base_Clear", &luna_wrapper_wxTextCtrl::_bind_base_Clear},
	{"base_Copy", &luna_wrapper_wxTextCtrl::_bind_base_Copy},
	{"base_GetInsertionPoint", &luna_wrapper_wxTextCtrl::_bind_base_GetInsertionPoint},
	{"base_GetLastPosition", &luna_wrapper_wxTextCtrl::_bind_base_GetLastPosition},
	{"base_GetRange", &luna_wrapper_wxTextCtrl::_bind_base_GetRange},
	{"base_GetSelection", &luna_wrapper_wxTextCtrl::_bind_base_GetSelection},
	{"base_GetStringSelection", &luna_wrapper_wxTextCtrl::_bind_base_GetStringSelection},
	{"base_GetValue", &luna_wrapper_wxTextCtrl::_bind_base_GetValue},
	{"base_IsEditable", &luna_wrapper_wxTextCtrl::_bind_base_IsEditable},
	{"base_IsEmpty", &luna_wrapper_wxTextCtrl::_bind_base_IsEmpty},
	{"base_Paste", &luna_wrapper_wxTextCtrl::_bind_base_Paste},
	{"base_Redo", &luna_wrapper_wxTextCtrl::_bind_base_Redo},
	{"base_Remove", &luna_wrapper_wxTextCtrl::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxTextCtrl::_bind_base_Replace},
	{"base_SetEditable", &luna_wrapper_wxTextCtrl::_bind_base_SetEditable},
	{"base_SetInsertionPoint", &luna_wrapper_wxTextCtrl::_bind_base_SetInsertionPoint},
	{"base_SetInsertionPointEnd", &luna_wrapper_wxTextCtrl::_bind_base_SetInsertionPointEnd},
	{"base_SetMaxLength", &luna_wrapper_wxTextCtrl::_bind_base_SetMaxLength},
	{"base_SetSelection", &luna_wrapper_wxTextCtrl::_bind_base_SetSelection},
	{"base_SelectAll", &luna_wrapper_wxTextCtrl::_bind_base_SelectAll},
	{"base_SetHint", &luna_wrapper_wxTextCtrl::_bind_base_SetHint},
	{"base_GetHint", &luna_wrapper_wxTextCtrl::_bind_base_GetHint},
	{"base_SetValue", &luna_wrapper_wxTextCtrl::_bind_base_SetValue},
	{"base_Undo", &luna_wrapper_wxTextCtrl::_bind_base_Undo},
	{"base_WriteText", &luna_wrapper_wxTextCtrl::_bind_base_WriteText},
	{"base_Cut", &luna_wrapper_wxTextCtrl::_bind_base_Cut},
	{"base_DiscardEdits", &luna_wrapper_wxTextCtrl::_bind_base_DiscardEdits},
	{"base_EmulateKeyPress", &luna_wrapper_wxTextCtrl::_bind_base_EmulateKeyPress},
	{"base_GetDefaultStyle", &luna_wrapper_wxTextCtrl::_bind_base_GetDefaultStyle},
	{"base_GetLineLength", &luna_wrapper_wxTextCtrl::_bind_base_GetLineLength},
	{"base_GetLineText", &luna_wrapper_wxTextCtrl::_bind_base_GetLineText},
	{"base_GetNumberOfLines", &luna_wrapper_wxTextCtrl::_bind_base_GetNumberOfLines},
	{"base_GetStyle", &luna_wrapper_wxTextCtrl::_bind_base_GetStyle},
	{"base_IsModified", &luna_wrapper_wxTextCtrl::_bind_base_IsModified},
	{"base_MarkDirty", &luna_wrapper_wxTextCtrl::_bind_base_MarkDirty},
	{"base_PositionToXY", &luna_wrapper_wxTextCtrl::_bind_base_PositionToXY},
	{"base_SetDefaultStyle", &luna_wrapper_wxTextCtrl::_bind_base_SetDefaultStyle},
	{"base_SetStyle", &luna_wrapper_wxTextCtrl::_bind_base_SetStyle},
	{"base_ShowPosition", &luna_wrapper_wxTextCtrl::_bind_base_ShowPosition},
	{"base_XYToPosition", &luna_wrapper_wxTextCtrl::_bind_base_XYToPosition},
	{"op_write", &luna_wrapper_wxTextCtrl::_bind_op_write},
	{"fromVoid", &luna_wrapper_wxTextCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTextCtrl::_bind_getTable},
	{"aswxTextEntry", &luna_wrapper_wxTextCtrl::_bind_baseCast_wxTextEntry},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxTextCtrl::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxTextCtrl::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextCtrl >::enumValues[] = {
	{0,0}
};


