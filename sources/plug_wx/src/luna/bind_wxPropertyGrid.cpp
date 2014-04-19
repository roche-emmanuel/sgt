#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPropertyGrid.h>

class luna_wrapper_wxPropertyGrid {
public:
	typedef Luna< wxPropertyGrid > luna_t;

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

		wxPropertyGrid* self= (wxPropertyGrid*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPropertyGrid >::push(L,self,false);
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
		//wxPropertyGrid* ptr= dynamic_cast< wxPropertyGrid* >(Luna< wxObject >::check(L,1));
		wxPropertyGrid* ptr= luna_caster< wxObject, wxPropertyGrid >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGrid >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxPropertyGridInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxPropertyGrid* ptr= dynamic_cast< wxPropertyGrid* >(Luna< wxPropertyGridInterface >::check(L,1));
		wxPropertyGrid* ptr= luna_caster< wxPropertyGridInterface, wxPropertyGrid >::cast(Luna< wxPropertyGridInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGrid >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddActionTrigger(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BeginLabelEdit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CenterSplitter(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearActionTriggers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CommitChangesFromEditor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DedicateKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableCategories(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndLabelEdit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabelEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPanel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaptionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaptionFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaptionForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellDisabledTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEmptySpaceColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFontHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGrid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImageRect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMarginColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEditorTextCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUnspecifiedValueAppearance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUnspecifiedValueText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVerticalSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAnyModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditorFocused(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeColumnEditable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnTLPChanging(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RefreshProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ResetColumnSizes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaptionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCaptionTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellDisabledTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEmptySpaceColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLineColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMarginColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterLeft(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUnspecifiedValueAppearance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVerticalSpacing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoShowPropertyError(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoHidePropertyError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EditorsValueWasModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EditorsValueWasNotModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditorsValueModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WasValueChangedInEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoGetTranslation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_isboolean(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CommitChangesFromEditor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RefreshProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoShowPropertyError(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoHidePropertyError(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropertyGrid::wxPropertyGrid()
	static wxPropertyGrid* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid::wxPropertyGrid() function, expected prototype:\nwxPropertyGrid::wxPropertyGrid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPropertyGrid();
	}

	// wxPropertyGrid::wxPropertyGrid(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr)
	static wxPropertyGrid* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid::wxPropertyGrid(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr) function, expected prototype:\nwxPropertyGrid::wxPropertyGrid(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertyGrid::wxPropertyGrid function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::wxPropertyGrid function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)(0);
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxPropertyGrid(parent, id, pos, size, style, name);
	}

	// wxPropertyGrid::wxPropertyGrid(lua_Table * data)
	static wxPropertyGrid* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid::wxPropertyGrid(lua_Table * data) function, expected prototype:\nwxPropertyGrid::wxPropertyGrid(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPropertyGrid(L,NULL);
	}

	// wxPropertyGrid::wxPropertyGrid(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr)
	static wxPropertyGrid* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid::wxPropertyGrid(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr) function, expected prototype:\nwxPropertyGrid::wxPropertyGrid(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = (0), const wxString & name = wxPropertyGridNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertyGrid::wxPropertyGrid function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::wxPropertyGrid function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)(0);
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxPropertyGrid(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxPropertyGrid::wxPropertyGrid
	static wxPropertyGrid* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPropertyGrid, cannot match any of the overloads for function wxPropertyGrid:\n  wxPropertyGrid()\n  wxPropertyGrid(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxPropertyGrid(lua_Table *)\n  wxPropertyGrid(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPropertyGrid::AddActionTrigger(int action, int keycode, int modifiers = 0)
	static int _bind_AddActionTrigger(lua_State *L) {
		if (!_lg_typecheck_AddActionTrigger(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::AddActionTrigger(int action, int keycode, int modifiers = 0) function, expected prototype:\nvoid wxPropertyGrid::AddActionTrigger(int action, int keycode, int modifiers = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int action=(int)lua_tointeger(L,2);
		int keycode=(int)lua_tointeger(L,3);
		int modifiers=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::AddActionTrigger(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddActionTrigger(action, keycode, modifiers);

		return 0;
	}

	// void wxPropertyGrid::BeginLabelEdit(unsigned int colIndex = 0)
	static int _bind_BeginLabelEdit(lua_State *L) {
		if (!_lg_typecheck_BeginLabelEdit(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::BeginLabelEdit(unsigned int colIndex = 0) function, expected prototype:\nvoid wxPropertyGrid::BeginLabelEdit(unsigned int colIndex = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int colIndex=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::BeginLabelEdit(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BeginLabelEdit(colIndex);

		return 0;
	}

	// void wxPropertyGrid::CenterSplitter(bool enableAutoResizing = false)
	static int _bind_CenterSplitter(lua_State *L) {
		if (!_lg_typecheck_CenterSplitter(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::CenterSplitter(bool enableAutoResizing = false) function, expected prototype:\nvoid wxPropertyGrid::CenterSplitter(bool enableAutoResizing = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enableAutoResizing=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::CenterSplitter(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenterSplitter(enableAutoResizing);

		return 0;
	}

	// void wxPropertyGrid::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::Clear() function, expected prototype:\nvoid wxPropertyGrid::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// void wxPropertyGrid::ClearActionTriggers(int action)
	static int _bind_ClearActionTriggers(lua_State *L) {
		if (!_lg_typecheck_ClearActionTriggers(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::ClearActionTriggers(int action) function, expected prototype:\nvoid wxPropertyGrid::ClearActionTriggers(int action)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int action=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::ClearActionTriggers(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearActionTriggers(action);

		return 0;
	}

	// bool wxPropertyGrid::CommitChangesFromEditor(unsigned int flags = 0)
	static int _bind_CommitChangesFromEditor(lua_State *L) {
		if (!_lg_typecheck_CommitChangesFromEditor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::CommitChangesFromEditor(unsigned int flags = 0) function, expected prototype:\nbool wxPropertyGrid::CommitChangesFromEditor(unsigned int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::CommitChangesFromEditor(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CommitChangesFromEditor(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::DedicateKey(int keycode)
	static int _bind_DedicateKey(lua_State *L) {
		if (!_lg_typecheck_DedicateKey(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::DedicateKey(int keycode) function, expected prototype:\nvoid wxPropertyGrid::DedicateKey(int keycode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int keycode=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::DedicateKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DedicateKey(keycode);

		return 0;
	}

	// bool wxPropertyGrid::EnableCategories(bool enable)
	static int _bind_EnableCategories(lua_State *L) {
		if (!_lg_typecheck_EnableCategories(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::EnableCategories(bool enable) function, expected prototype:\nbool wxPropertyGrid::EnableCategories(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::EnableCategories(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnableCategories(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::EndLabelEdit(bool commit = true)
	static int _bind_EndLabelEdit(lua_State *L) {
		if (!_lg_typecheck_EndLabelEdit(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::EndLabelEdit(bool commit = true) function, expected prototype:\nvoid wxPropertyGrid::EndLabelEdit(bool commit = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool commit=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::EndLabelEdit(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndLabelEdit(commit);

		return 0;
	}

	// wxSize wxPropertyGrid::FitColumns()
	static int _bind_FitColumns(lua_State *L) {
		if (!_lg_typecheck_FitColumns(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::FitColumns() function, expected prototype:\nwxSize wxPropertyGrid::FitColumns()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::FitColumns(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->FitColumns();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxTextCtrl * wxPropertyGrid::GetLabelEditor() const
	static int _bind_GetLabelEditor(lua_State *L) {
		if (!_lg_typecheck_GetLabelEditor(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxPropertyGrid::GetLabelEditor() const function, expected prototype:\nwxTextCtrl * wxPropertyGrid::GetLabelEditor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxPropertyGrid::GetLabelEditor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->GetLabelEditor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxPropertyGrid::GetPanel()
	static int _bind_GetPanel(lua_State *L) {
		if (!_lg_typecheck_GetPanel(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxPropertyGrid::GetPanel() function, expected prototype:\nwxWindow * wxPropertyGrid::GetPanel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxPropertyGrid::GetPanel(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetPanel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCaptionBackgroundColour() const
	static int _bind_GetCaptionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCaptionBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCaptionBackgroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCaptionBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCaptionBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCaptionBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFont & wxPropertyGrid::GetCaptionFont()
	static int _bind_GetCaptionFont(lua_State *L) {
		if (!_lg_typecheck_GetCaptionFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont & wxPropertyGrid::GetCaptionFont() function, expected prototype:\nwxFont & wxPropertyGrid::GetCaptionFont()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont & wxPropertyGrid::GetCaptionFont(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->GetCaptionFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCaptionForegroundColour() const
	static int _bind_GetCaptionForegroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCaptionForegroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCaptionForegroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCaptionForegroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCaptionForegroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCaptionForegroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCellBackgroundColour() const
	static int _bind_GetCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCellBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCellBackgroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCellBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCellBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCellBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCellDisabledTextColour() const
	static int _bind_GetCellDisabledTextColour(lua_State *L) {
		if (!_lg_typecheck_GetCellDisabledTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCellDisabledTextColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCellDisabledTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCellDisabledTextColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCellDisabledTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetCellTextColour() const
	static int _bind_GetCellTextColour(lua_State *L) {
		if (!_lg_typecheck_GetCellTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetCellTextColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetCellTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetCellTextColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCellTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// unsigned int wxPropertyGrid::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPropertyGrid::GetColumnCount() const function, expected prototype:\nunsigned int wxPropertyGrid::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPropertyGrid::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxPropertyGrid::GetEmptySpaceColour() const
	static int _bind_GetEmptySpaceColour(lua_State *L) {
		if (!_lg_typecheck_GetEmptySpaceColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetEmptySpaceColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetEmptySpaceColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetEmptySpaceColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetEmptySpaceColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxPropertyGrid::GetFontHeight() const
	static int _bind_GetFontHeight(lua_State *L) {
		if (!_lg_typecheck_GetFontHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetFontHeight() const function, expected prototype:\nint wxPropertyGrid::GetFontHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetFontHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFontHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGrid * wxPropertyGrid::GetGrid()
	static int _bind_GetGrid(lua_State *L) {
		if (!_lg_typecheck_GetGrid(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid * wxPropertyGrid::GetGrid() function, expected prototype:\nwxPropertyGrid * wxPropertyGrid::GetGrid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGrid * wxPropertyGrid::GetGrid(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGrid * lret = self->GetGrid();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGrid >::push(L,lret,false);

		return 1;
	}

	// wxRect wxPropertyGrid::GetImageRect(wxPGProperty * property, int item) const
	static int _bind_GetImageRect(lua_State *L) {
		if (!_lg_typecheck_GetImageRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxPropertyGrid::GetImageRect(wxPGProperty * property, int item) const function, expected prototype:\nwxRect wxPropertyGrid::GetImageRect(wxPGProperty * property, int item) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		int item=(int)lua_tointeger(L,3);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxPropertyGrid::GetImageRect(wxPGProperty *, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetImageRect(property, item);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::GetImageSize(wxPGProperty * property = NULL, int item = -1) const
	static int _bind_GetImageSize(lua_State *L) {
		if (!_lg_typecheck_GetImageSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::GetImageSize(wxPGProperty * property = NULL, int item = -1) const function, expected prototype:\nwxSize wxPropertyGrid::GetImageSize(wxPGProperty * property = NULL, int item = -1) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxPGProperty* property=luatop>1 ? (Luna< wxObject >::checkSubType< wxPGProperty >(L,2)) : (wxPGProperty*)NULL;
		int item=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::GetImageSize(wxPGProperty *, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetImageSize(property, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetLastItem(int flags = ::wxPG_ITERATE_DEFAULT)
	static int _bind_GetLastItem(lua_State *L) {
		if (!_lg_typecheck_GetLastItem(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetLastItem(int flags = ::wxPG_ITERATE_DEFAULT) function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetLastItem(int flags = ::wxPG_ITERATE_DEFAULT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxPG_ITERATE_DEFAULT;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetLastItem(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetLastItem(flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetLineColour() const
	static int _bind_GetLineColour(lua_State *L) {
		if (!_lg_typecheck_GetLineColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetLineColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetLineColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetLineColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetLineColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetMarginColour() const
	static int _bind_GetMarginColour(lua_State *L) {
		if (!_lg_typecheck_GetMarginColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetMarginColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetMarginColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetMarginColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetMarginColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetRoot() const
	static int _bind_GetRoot(lua_State *L) {
		if (!_lg_typecheck_GetRoot(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetRoot() const function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetRoot() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetRoot() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetRoot();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPropertyGrid::GetRowHeight() const
	static int _bind_GetRowHeight(lua_State *L) {
		if (!_lg_typecheck_GetRowHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetRowHeight() const function, expected prototype:\nint wxPropertyGrid::GetRowHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetRowHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetSelectedProperty() const
	static int _bind_GetSelectedProperty(lua_State *L) {
		if (!_lg_typecheck_GetSelectedProperty(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetSelectedProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetSelectedProperty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetSelectedProperty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetSelectedProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGrid::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGrid::GetSelection() const function, expected prototype:\nwxPGProperty * wxPropertyGrid::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGrid::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxColour wxPropertyGrid::GetSelectionBackgroundColour() const
	static int _bind_GetSelectionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectionBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetSelectionBackgroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetSelectionBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetSelectionBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetSelectionBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxPropertyGrid::GetSelectionForegroundColour() const
	static int _bind_GetSelectionForegroundColour(lua_State *L) {
		if (!_lg_typecheck_GetSelectionForegroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxPropertyGrid::GetSelectionForegroundColour() const function, expected prototype:\nwxColour wxPropertyGrid::GetSelectionForegroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxPropertyGrid::GetSelectionForegroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetSelectionForegroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxPropertyGrid::GetSplitterPosition(unsigned int splitterIndex = 0) const
	static int _bind_GetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_GetSplitterPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetSplitterPosition(unsigned int splitterIndex = 0) const function, expected prototype:\nint wxPropertyGrid::GetSplitterPosition(unsigned int splitterIndex = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int splitterIndex=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetSplitterPosition(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSplitterPosition(splitterIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const
	static int _bind_GetEditorTextCtrl(lua_State *L) {
		if (!_lg_typecheck_GetEditorTextCtrl(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const function, expected prototype:\nwxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxPropertyGrid::GetEditorTextCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->GetEditorTextCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// const wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const
	static int _bind_GetUnspecifiedValueAppearance(lua_State *L) {
		if (!_lg_typecheck_GetUnspecifiedValueAppearance(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const function, expected prototype:\nconst wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGCell & wxPropertyGrid::GetUnspecifiedValueAppearance() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGCell* lret = &self->GetUnspecifiedValueAppearance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCell >::push(L,lret,false);

		return 1;
	}

	// wxString wxPropertyGrid::GetUnspecifiedValueText(int argFlags = 0) const
	static int _bind_GetUnspecifiedValueText(lua_State *L) {
		if (!_lg_typecheck_GetUnspecifiedValueText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGrid::GetUnspecifiedValueText(int argFlags = 0) const function, expected prototype:\nwxString wxPropertyGrid::GetUnspecifiedValueText(int argFlags = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int argFlags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGrid::GetUnspecifiedValueText(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUnspecifiedValueText(argFlags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxPropertyGrid::GetVerticalSpacing() const
	static int _bind_GetVerticalSpacing(lua_State *L) {
		if (!_lg_typecheck_GetVerticalSpacing(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::GetVerticalSpacing() const function, expected prototype:\nint wxPropertyGrid::GetVerticalSpacing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::GetVerticalSpacing() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetVerticalSpacing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint & pt) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint & pt) const function, expected prototype:\nwxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxPropertyGrid::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridHitTestResult wxPropertyGrid::HitTest(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridHitTestResult stack_lret = self->HitTest(pt);
		wxPropertyGridHitTestResult* lret = new wxPropertyGridHitTestResult(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridHitTestResult >::push(L,lret,true);

		return 1;
	}

	// bool wxPropertyGrid::IsAnyModified() const
	static int _bind_IsAnyModified(lua_State *L) {
		if (!_lg_typecheck_IsAnyModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsAnyModified() const function, expected prototype:\nbool wxPropertyGrid::IsAnyModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsAnyModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAnyModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::IsEditorFocused() const
	static int _bind_IsEditorFocused(lua_State *L) {
		if (!_lg_typecheck_IsEditorFocused(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsEditorFocused() const function, expected prototype:\nbool wxPropertyGrid::IsEditorFocused() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsEditorFocused() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditorFocused();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::IsFrozen() const
	static int _bind_IsFrozen(lua_State *L) {
		if (!_lg_typecheck_IsFrozen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsFrozen() const function, expected prototype:\nbool wxPropertyGrid::IsFrozen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsFrozen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::MakeColumnEditable(unsigned int column, bool editable = true)
	static int _bind_MakeColumnEditable(lua_State *L) {
		if (!_lg_typecheck_MakeColumnEditable(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::MakeColumnEditable(unsigned int column, bool editable = true) function, expected prototype:\nvoid wxPropertyGrid::MakeColumnEditable(unsigned int column, bool editable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int column=(unsigned int)lua_tointeger(L,2);
		bool editable=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::MakeColumnEditable(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MakeColumnEditable(column, editable);

		return 0;
	}

	// void wxPropertyGrid::OnTLPChanging(wxWindow * newTLP)
	static int _bind_OnTLPChanging(lua_State *L) {
		if (!_lg_typecheck_OnTLPChanging(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::OnTLPChanging(wxWindow * newTLP) function, expected prototype:\nvoid wxPropertyGrid::OnTLPChanging(wxWindow * newTLP)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newTLP=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::OnTLPChanging(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnTLPChanging(newTLP);

		return 0;
	}

	// void wxPropertyGrid::RefreshEditor()
	static int _bind_RefreshEditor(lua_State *L) {
		if (!_lg_typecheck_RefreshEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::RefreshEditor() function, expected prototype:\nvoid wxPropertyGrid::RefreshEditor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::RefreshEditor(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshEditor();

		return 0;
	}

	// void wxPropertyGrid::RefreshProperty(wxPGProperty * p)
	static int _bind_RefreshProperty(lua_State *L) {
		if (!_lg_typecheck_RefreshProperty(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::RefreshProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGrid::RefreshProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* p=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::RefreshProperty(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshProperty(p);

		return 0;
	}

	// void wxPropertyGrid::ResetColours()
	static int _bind_ResetColours(lua_State *L) {
		if (!_lg_typecheck_ResetColours(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::ResetColours() function, expected prototype:\nvoid wxPropertyGrid::ResetColours()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::ResetColours(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResetColours();

		return 0;
	}

	// void wxPropertyGrid::ResetColumnSizes(bool enableAutoResizing = false)
	static int _bind_ResetColumnSizes(lua_State *L) {
		if (!_lg_typecheck_ResetColumnSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::ResetColumnSizes(bool enableAutoResizing = false) function, expected prototype:\nvoid wxPropertyGrid::ResetColumnSizes(bool enableAutoResizing = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enableAutoResizing=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::ResetColumnSizes(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResetColumnSizes(enableAutoResizing);

		return 0;
	}

	// void wxPropertyGrid::SetCaptionBackgroundColour(const wxColour & col)
	static int _bind_SetCaptionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetCaptionBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCaptionBackgroundColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCaptionBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCaptionBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCaptionBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCaptionBackgroundColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCaptionTextColour(const wxColour & col)
	static int _bind_SetCaptionTextColour(lua_State *L) {
		if (!_lg_typecheck_SetCaptionTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCaptionTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCaptionTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCaptionTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCaptionTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCaptionTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCellBackgroundColour(const wxColour & col)
	static int _bind_SetCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetCellBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCellBackgroundColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCellBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCellBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCellBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellBackgroundColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCellDisabledTextColour(const wxColour & col)
	static int _bind_SetCellDisabledTextColour(lua_State *L) {
		if (!_lg_typecheck_SetCellDisabledTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCellDisabledTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCellDisabledTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCellDisabledTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCellDisabledTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellDisabledTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetCellTextColour(const wxColour & col)
	static int _bind_SetCellTextColour(lua_State *L) {
		if (!_lg_typecheck_SetCellTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetCellTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetCellTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetCellTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetCellTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetColumnCount(int colCount)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetColumnCount(int colCount) function, expected prototype:\nvoid wxPropertyGrid::SetColumnCount(int colCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int colCount=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetColumnCount(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnCount(colCount);

		return 0;
	}

	// void wxPropertyGrid::SetEmptySpaceColour(const wxColour & col)
	static int _bind_SetEmptySpaceColour(lua_State *L) {
		if (!_lg_typecheck_SetEmptySpaceColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetEmptySpaceColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetEmptySpaceColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetEmptySpaceColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetEmptySpaceColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEmptySpaceColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetLineColour(const wxColour & col)
	static int _bind_SetLineColour(lua_State *L) {
		if (!_lg_typecheck_SetLineColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetLineColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetLineColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetLineColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetLineColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLineColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetMarginColour(const wxColour & col)
	static int _bind_SetMarginColour(lua_State *L) {
		if (!_lg_typecheck_SetMarginColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetMarginColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetMarginColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetMarginColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetMarginColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMarginColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetSelectionBackgroundColour(const wxColour & col)
	static int _bind_SetSelectionBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetSelectionBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSelectionBackgroundColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetSelectionBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetSelectionBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSelectionBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectionBackgroundColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetSelectionTextColour(const wxColour & col)
	static int _bind_SetSelectionTextColour(lua_State *L) {
		if (!_lg_typecheck_SetSelectionTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSelectionTextColour(const wxColour & col) function, expected prototype:\nvoid wxPropertyGrid::SetSelectionTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPropertyGrid::SetSelectionTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSelectionTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectionTextColour(col);

		return 0;
	}

	// void wxPropertyGrid::SetSplitterPosition(int newxpos, int col = 0)
	static int _bind_SetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetSplitterPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSplitterPosition(int newxpos, int col = 0) function, expected prototype:\nvoid wxPropertyGrid::SetSplitterPosition(int newxpos, int col = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int newxpos=(int)lua_tointeger(L,2);
		int col=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSplitterPosition(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSplitterPosition(newxpos, col);

		return 0;
	}

	// void wxPropertyGrid::SetSplitterLeft(bool privateChildrenToo = false)
	static int _bind_SetSplitterLeft(lua_State *L) {
		if (!_lg_typecheck_SetSplitterLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetSplitterLeft(bool privateChildrenToo = false) function, expected prototype:\nvoid wxPropertyGrid::SetSplitterLeft(bool privateChildrenToo = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool privateChildrenToo=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetSplitterLeft(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSplitterLeft(privateChildrenToo);

		return 0;
	}

	// void wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell & cell)
	static int _bind_SetUnspecifiedValueAppearance(lua_State *L) {
		if (!_lg_typecheck_SetUnspecifiedValueAppearance(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell & cell) function, expected prototype:\nvoid wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell & cell)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGCell* cell_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxPropertyGrid::SetUnspecifiedValueAppearance function");
		}
		const wxPGCell & cell=*cell_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetUnspecifiedValueAppearance(const wxPGCell &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUnspecifiedValueAppearance(cell);

		return 0;
	}

	// void wxPropertyGrid::SetVerticalSpacing(int vspacing)
	static int _bind_SetVerticalSpacing(lua_State *L) {
		if (!_lg_typecheck_SetVerticalSpacing(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::SetVerticalSpacing(int vspacing) function, expected prototype:\nvoid wxPropertyGrid::SetVerticalSpacing(int vspacing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int vspacing=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::SetVerticalSpacing(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVerticalSpacing(vspacing);

		return 0;
	}

	// void wxPropertyGrid::DoShowPropertyError(wxPGProperty * property, const wxString & msg)
	static int _bind_DoShowPropertyError(lua_State *L) {
		if (!_lg_typecheck_DoShowPropertyError(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::DoShowPropertyError(wxPGProperty * property, const wxString & msg) function, expected prototype:\nvoid wxPropertyGrid::DoShowPropertyError(wxPGProperty * property, const wxString & msg)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxString msg(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::DoShowPropertyError(wxPGProperty *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DoShowPropertyError(property, msg);

		return 0;
	}

	// void wxPropertyGrid::DoHidePropertyError(wxPGProperty * property)
	static int _bind_DoHidePropertyError(lua_State *L) {
		if (!_lg_typecheck_DoHidePropertyError(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::DoHidePropertyError(wxPGProperty * property) function, expected prototype:\nvoid wxPropertyGrid::DoHidePropertyError(wxPGProperty * property)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::DoHidePropertyError(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DoHidePropertyError(property);

		return 0;
	}

	// wxStatusBar * wxPropertyGrid::GetStatusBar()
	static int _bind_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_GetStatusBar(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxPropertyGrid::GetStatusBar() function, expected prototype:\nwxStatusBar * wxPropertyGrid::GetStatusBar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStatusBar * wxPropertyGrid::GetStatusBar(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxStatusBar * lret = self->GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGrid::EditorsValueWasModified()
	static int _bind_EditorsValueWasModified(lua_State *L) {
		if (!_lg_typecheck_EditorsValueWasModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::EditorsValueWasModified() function, expected prototype:\nvoid wxPropertyGrid::EditorsValueWasModified()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::EditorsValueWasModified(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditorsValueWasModified();

		return 0;
	}

	// void wxPropertyGrid::EditorsValueWasNotModified()
	static int _bind_EditorsValueWasNotModified(lua_State *L) {
		if (!_lg_typecheck_EditorsValueWasNotModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::EditorsValueWasNotModified() function, expected prototype:\nvoid wxPropertyGrid::EditorsValueWasNotModified()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::EditorsValueWasNotModified(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditorsValueWasNotModified();

		return 0;
	}

	// bool wxPropertyGrid::IsEditorsValueModified() const
	static int _bind_IsEditorsValueModified(lua_State *L) {
		if (!_lg_typecheck_IsEditorsValueModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::IsEditorsValueModified() const function, expected prototype:\nbool wxPropertyGrid::IsEditorsValueModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::IsEditorsValueModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditorsValueModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::WasValueChangedInEvent() const
	static int _bind_WasValueChangedInEvent(lua_State *L) {
		if (!_lg_typecheck_WasValueChangedInEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::WasValueChangedInEvent() const function, expected prototype:\nbool wxPropertyGrid::WasValueChangedInEvent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::WasValueChangedInEvent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WasValueChangedInEvent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxPropertyGrid::AutoGetTranslation(bool enable)
	static int _bind_AutoGetTranslation(lua_State *L) {
		if (!_lg_typecheck_AutoGetTranslation(L)) {
			luaL_error(L, "luna typecheck failed in static void wxPropertyGrid::AutoGetTranslation(bool enable) function, expected prototype:\nstatic void wxPropertyGrid::AutoGetTranslation(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,1)==1);

		wxPropertyGrid::AutoGetTranslation(enable);

		return 0;
	}

	// wxClassInfo * wxPropertyGrid::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPropertyGrid::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPropertyGrid::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPropertyGrid::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPropertyGrid::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxPropertyGrid::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_AcceptsFocus() const function, expected prototype:\nbool wxPropertyGrid::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxPropertyGrid::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxPropertyGrid::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_HasFocus() const function, expected prototype:\nbool wxPropertyGrid::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxPropertyGrid::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetCanFocus(canFocus);

		return 0;
	}

	// void wxPropertyGrid::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetFocus() function, expected prototype:\nvoid wxPropertyGrid::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetFocus();

		return 0;
	}

	// void wxPropertyGrid::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetFocusFromKbd() function, expected prototype:\nvoid wxPropertyGrid::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetFocusFromKbd();

		return 0;
	}

	// void wxPropertyGrid::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxPropertyGrid::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::AddChild(child);

		return 0;
	}

	// void wxPropertyGrid::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxPropertyGrid::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::RemoveChild(child);

		return 0;
	}

	// bool wxPropertyGrid::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxPropertyGrid::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxPropertyGrid::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxPropertyGrid::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxPropertyGrid::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGrid::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGrid::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxPropertyGrid::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGrid::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGrid::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxPropertyGrid::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGrid::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPropertyGrid::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxPropertyGrid::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_ScrollLines(int lines) function, expected prototype:\nbool wxPropertyGrid::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_ScrollPages(int pages) function, expected prototype:\nbool wxPropertyGrid::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxPropertyGrid::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxPropertyGrid::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxPropertyGrid::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxPropertyGrid::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxPropertyGrid::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxPropertyGrid::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxPropertyGrid::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxPropertyGrid::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxPropertyGrid::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Fit() function, expected prototype:\nvoid wxPropertyGrid::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Fit();

		return 0;
	}

	// void wxPropertyGrid::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_FitInside() function, expected prototype:\nvoid wxPropertyGrid::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::FitInside();

		return 0;
	}

	// wxSize wxPropertyGrid::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetMaxSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetMinClientSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetMinSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGrid::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGrid::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxPropertyGrid::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGrid::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGrid::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPropertyGrid::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxPropertyGrid::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxPropertyGrid::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SendSizeEvent(flags);

		return 0;
	}

	// void wxPropertyGrid::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGrid::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetMaxClientSize(size);

		return 0;
	}

	// void wxPropertyGrid::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGrid::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetMaxSize(size);

		return 0;
	}

	// void wxPropertyGrid::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGrid::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetMinClientSize(size);

		return 0;
	}

	// void wxPropertyGrid::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGrid::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGrid::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetMinSize(size);

		return 0;
	}

	// void wxPropertyGrid::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxPropertyGrid::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxPropertyGrid::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxPropertyGrid::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxPropertyGrid::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxPropertyGrid::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxPropertyGrid::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxPropertyGrid::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxPropertyGrid::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxPropertyGrid::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxPropertyGrid::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxPropertyGrid::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxPropertyGrid::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxPropertyGrid::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_ClearBackground() function, expected prototype:\nvoid wxPropertyGrid::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxPropertyGrid::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxPropertyGrid::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxPropertyGrid::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxPropertyGrid::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxPropertyGrid::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGrid::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::base_GetCharHeight() const function, expected prototype:\nint wxPropertyGrid::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGrid::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGrid::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGrid::base_GetCharWidth() const function, expected prototype:\nint wxPropertyGrid::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGrid::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGrid::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxPropertyGrid::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxPropertyGrid::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxPropertyGrid::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxPropertyGrid::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxPropertyGrid::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxPropertyGrid::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxPropertyGrid::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxPropertyGrid::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Update() function, expected prototype:\nvoid wxPropertyGrid::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Update();

		return 0;
	}

	// bool wxPropertyGrid::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxPropertyGrid::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxPropertyGrid::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxPropertyGrid::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_ShouldInheritColours() const function, expected prototype:\nbool wxPropertyGrid::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxPropertyGrid::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxPropertyGrid::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_GetThemeEnabled() const function, expected prototype:\nbool wxPropertyGrid::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_CanSetTransparent() function, expected prototype:\nbool wxPropertyGrid::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxPropertyGrid::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPropertyGrid::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetNextHandler(handler);

		return 0;
	}

	// void wxPropertyGrid::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPropertyGrid::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetPreviousHandler(handler);

		return 0;
	}

	// long wxPropertyGrid::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxPropertyGrid::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxPropertyGrid::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxPropertyGrid::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxPropertyGrid::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPropertyGrid::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxPropertyGrid::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxPropertyGrid::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxPropertyGrid::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxPropertyGrid::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Lower() function, expected prototype:\nvoid wxPropertyGrid::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Lower();

		return 0;
	}

	// void wxPropertyGrid::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Raise() function, expected prototype:\nvoid wxPropertyGrid::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Raise();

		return 0;
	}

	// bool wxPropertyGrid::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxPropertyGrid::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_IsShown() const function, expected prototype:\nbool wxPropertyGrid::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_IsShownOnScreen() const function, expected prototype:\nbool wxPropertyGrid::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_Enable(bool enable = true) function, expected prototype:\nbool wxPropertyGrid::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_Show(bool show = true) function, expected prototype:\nbool wxPropertyGrid::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxPropertyGrid::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPropertyGrid::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGrid::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxPropertyGrid::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxPropertyGrid::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGrid::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPropertyGrid::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxPropertyGrid::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxPropertyGrid::base_GetValidator() function, expected prototype:\nwxValidator * wxPropertyGrid::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxPropertyGrid::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxPropertyGrid::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGrid::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxPropertyGrid::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxPropertyGrid::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetValidator(validator);

		return 0;
	}

	// bool wxPropertyGrid::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_TransferDataFromWindow() function, expected prototype:\nbool wxPropertyGrid::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_TransferDataToWindow() function, expected prototype:\nbool wxPropertyGrid::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_Validate() function, expected prototype:\nbool wxPropertyGrid::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxPropertyGrid::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxPropertyGrid::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxPropertyGrid::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxPropertyGrid::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxPropertyGrid::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxPropertyGrid::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGrid::base_GetName() const function, expected prototype:\nwxString wxPropertyGrid::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGrid::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPropertyGrid::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPropertyGrid::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxPropertyGrid::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetLayoutDirection(dir);

		return 0;
	}

	// void wxPropertyGrid::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetName(const wxString & name) function, expected prototype:\nvoid wxPropertyGrid::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetName(name);

		return 0;
	}

	// void wxPropertyGrid::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxPropertyGrid::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxPropertyGrid::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxPropertyGrid::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_Destroy() function, expected prototype:\nbool wxPropertyGrid::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxPropertyGrid::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxPropertyGrid::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxPropertyGrid::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxPropertyGrid::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxPropertyGrid::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGrid::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxPropertyGrid::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetDropTarget(target);

		return 0;
	}

	// void wxPropertyGrid::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxPropertyGrid::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxPropertyGrid::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_Layout() function, expected prototype:\nbool wxPropertyGrid::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_HasCapture() const function, expected prototype:\nbool wxPropertyGrid::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxPropertyGrid::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxPropertyGrid::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxPropertyGrid::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::WarpPointer(x, y);

		return 0;
	}

	// void wxPropertyGrid::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxPropertyGrid::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGrid::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxPropertyGrid::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxPropertyGrid::base_GetHandle() const function, expected prototype:\nHWND wxPropertyGrid::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxPropertyGrid::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxPropertyGrid::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxPropertyGrid::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_HasMultiplePages() const function, expected prototype:\nbool wxPropertyGrid::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_InheritAttributes() function, expected prototype:\nvoid wxPropertyGrid::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::InheritAttributes();

		return 0;
	}

	// void wxPropertyGrid::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_InitDialog() function, expected prototype:\nvoid wxPropertyGrid::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::InitDialog();

		return 0;
	}

	// bool wxPropertyGrid::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_IsDoubleBuffered() const function, expected prototype:\nbool wxPropertyGrid::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_IsRetained() const function, expected prototype:\nbool wxPropertyGrid::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_IsTopLevel() const function, expected prototype:\nbool wxPropertyGrid::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxPropertyGrid::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::MakeModal(modal);

		return 0;
	}

	// void wxPropertyGrid::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_OnInternalIdle() function, expected prototype:\nvoid wxPropertyGrid::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::OnInternalIdle();

		return 0;
	}

	// bool wxPropertyGrid::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxPropertyGrid::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGrid::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxPropertyGrid::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxPropertyGrid::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::UpdateWindowUI(flags);

		return 0;
	}

	// void wxPropertyGrid::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxPropertyGrid::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGrid::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Command(event);

		return 0;
	}

	// wxString wxPropertyGrid::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGrid::base_GetLabel() const function, expected prototype:\nwxString wxPropertyGrid::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGrid::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPropertyGrid::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPropertyGrid::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxPropertyGrid::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::SetLabel(label);

		return 0;
	}

	// void wxPropertyGrid::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_Clear() function, expected prototype:\nvoid wxPropertyGrid::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::Clear();

		return 0;
	}

	// bool wxPropertyGrid::base_CommitChangesFromEditor(unsigned int flags = 0)
	static int _bind_base_CommitChangesFromEditor(lua_State *L) {
		if (!_lg_typecheck_base_CommitChangesFromEditor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGrid::base_CommitChangesFromEditor(unsigned int flags = 0) function, expected prototype:\nbool wxPropertyGrid::base_CommitChangesFromEditor(unsigned int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGrid::base_CommitChangesFromEditor(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGrid::CommitChangesFromEditor(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGrid::base_RefreshProperty(wxPGProperty * p)
	static int _bind_base_RefreshProperty(lua_State *L) {
		if (!_lg_typecheck_base_RefreshProperty(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_RefreshProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGrid::base_RefreshProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* p=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_RefreshProperty(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::RefreshProperty(p);

		return 0;
	}

	// void wxPropertyGrid::base_DoShowPropertyError(wxPGProperty * property, const wxString & msg)
	static int _bind_base_DoShowPropertyError(lua_State *L) {
		if (!_lg_typecheck_base_DoShowPropertyError(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_DoShowPropertyError(wxPGProperty * property, const wxString & msg) function, expected prototype:\nvoid wxPropertyGrid::base_DoShowPropertyError(wxPGProperty * property, const wxString & msg)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));
		wxString msg(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_DoShowPropertyError(wxPGProperty *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::DoShowPropertyError(property, msg);

		return 0;
	}

	// void wxPropertyGrid::base_DoHidePropertyError(wxPGProperty * property)
	static int _bind_base_DoHidePropertyError(lua_State *L) {
		if (!_lg_typecheck_base_DoHidePropertyError(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGrid::base_DoHidePropertyError(wxPGProperty * property) function, expected prototype:\nvoid wxPropertyGrid::base_DoHidePropertyError(wxPGProperty * property)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGrid::base_DoHidePropertyError(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGrid::DoHidePropertyError(property);

		return 0;
	}

	// wxStatusBar * wxPropertyGrid::base_GetStatusBar()
	static int _bind_base_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_GetStatusBar(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxPropertyGrid::base_GetStatusBar() function, expected prototype:\nwxStatusBar * wxPropertyGrid::base_GetStatusBar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGrid* self=Luna< wxObject >::checkSubType< wxPropertyGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStatusBar * wxPropertyGrid::base_GetStatusBar(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxStatusBar * lret = self->wxPropertyGrid::GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxPropertyGridInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxPropertyGridInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxPropertyGridInterface(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxPropertyGridInterface function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxPropertyGridInterface* res = luna_caster<wxObject,wxPropertyGridInterface>::cast(self); // dynamic_cast<wxPropertyGridInterface*>(self);
		if(!res)
			return 0;
			
		Luna< wxPropertyGridInterface >::push(L,res,false);
		return 1;

	}

};

wxPropertyGrid* LunaTraits< wxPropertyGrid >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropertyGrid::_bind_ctor(L);
}

void LunaTraits< wxPropertyGrid >::_bind_dtor(wxPropertyGrid* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGrid >::className[] = "wxPropertyGrid";
const char LunaTraits< wxPropertyGrid >::fullName[] = "wxPropertyGrid";
const char LunaTraits< wxPropertyGrid >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGrid >::parents[] = {"wx.wxControl", "wx.wxPropertyGridInterface", 0};
const int LunaTraits< wxPropertyGrid >::hash = 94710697;
const int LunaTraits< wxPropertyGrid >::uniqueIDs[] = {56813631, 53506535, 61417741,0};

luna_RegType LunaTraits< wxPropertyGrid >::methods[] = {
	{"AddActionTrigger", &luna_wrapper_wxPropertyGrid::_bind_AddActionTrigger},
	{"BeginLabelEdit", &luna_wrapper_wxPropertyGrid::_bind_BeginLabelEdit},
	{"CenterSplitter", &luna_wrapper_wxPropertyGrid::_bind_CenterSplitter},
	{"Clear", &luna_wrapper_wxPropertyGrid::_bind_Clear},
	{"ClearActionTriggers", &luna_wrapper_wxPropertyGrid::_bind_ClearActionTriggers},
	{"CommitChangesFromEditor", &luna_wrapper_wxPropertyGrid::_bind_CommitChangesFromEditor},
	{"DedicateKey", &luna_wrapper_wxPropertyGrid::_bind_DedicateKey},
	{"EnableCategories", &luna_wrapper_wxPropertyGrid::_bind_EnableCategories},
	{"EndLabelEdit", &luna_wrapper_wxPropertyGrid::_bind_EndLabelEdit},
	{"FitColumns", &luna_wrapper_wxPropertyGrid::_bind_FitColumns},
	{"GetLabelEditor", &luna_wrapper_wxPropertyGrid::_bind_GetLabelEditor},
	{"GetPanel", &luna_wrapper_wxPropertyGrid::_bind_GetPanel},
	{"GetCaptionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetCaptionBackgroundColour},
	{"GetCaptionFont", &luna_wrapper_wxPropertyGrid::_bind_GetCaptionFont},
	{"GetCaptionForegroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetCaptionForegroundColour},
	{"GetCellBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetCellBackgroundColour},
	{"GetCellDisabledTextColour", &luna_wrapper_wxPropertyGrid::_bind_GetCellDisabledTextColour},
	{"GetCellTextColour", &luna_wrapper_wxPropertyGrid::_bind_GetCellTextColour},
	{"GetColumnCount", &luna_wrapper_wxPropertyGrid::_bind_GetColumnCount},
	{"GetEmptySpaceColour", &luna_wrapper_wxPropertyGrid::_bind_GetEmptySpaceColour},
	{"GetFontHeight", &luna_wrapper_wxPropertyGrid::_bind_GetFontHeight},
	{"GetGrid", &luna_wrapper_wxPropertyGrid::_bind_GetGrid},
	{"GetImageRect", &luna_wrapper_wxPropertyGrid::_bind_GetImageRect},
	{"GetImageSize", &luna_wrapper_wxPropertyGrid::_bind_GetImageSize},
	{"GetLastItem", &luna_wrapper_wxPropertyGrid::_bind_GetLastItem},
	{"GetLineColour", &luna_wrapper_wxPropertyGrid::_bind_GetLineColour},
	{"GetMarginColour", &luna_wrapper_wxPropertyGrid::_bind_GetMarginColour},
	{"GetRoot", &luna_wrapper_wxPropertyGrid::_bind_GetRoot},
	{"GetRowHeight", &luna_wrapper_wxPropertyGrid::_bind_GetRowHeight},
	{"GetSelectedProperty", &luna_wrapper_wxPropertyGrid::_bind_GetSelectedProperty},
	{"GetSelection", &luna_wrapper_wxPropertyGrid::_bind_GetSelection},
	{"GetSelectionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetSelectionBackgroundColour},
	{"GetSelectionForegroundColour", &luna_wrapper_wxPropertyGrid::_bind_GetSelectionForegroundColour},
	{"GetSplitterPosition", &luna_wrapper_wxPropertyGrid::_bind_GetSplitterPosition},
	{"GetEditorTextCtrl", &luna_wrapper_wxPropertyGrid::_bind_GetEditorTextCtrl},
	{"GetUnspecifiedValueAppearance", &luna_wrapper_wxPropertyGrid::_bind_GetUnspecifiedValueAppearance},
	{"GetUnspecifiedValueText", &luna_wrapper_wxPropertyGrid::_bind_GetUnspecifiedValueText},
	{"GetVerticalSpacing", &luna_wrapper_wxPropertyGrid::_bind_GetVerticalSpacing},
	{"HitTest", &luna_wrapper_wxPropertyGrid::_bind_HitTest},
	{"IsAnyModified", &luna_wrapper_wxPropertyGrid::_bind_IsAnyModified},
	{"IsEditorFocused", &luna_wrapper_wxPropertyGrid::_bind_IsEditorFocused},
	{"IsFrozen", &luna_wrapper_wxPropertyGrid::_bind_IsFrozen},
	{"MakeColumnEditable", &luna_wrapper_wxPropertyGrid::_bind_MakeColumnEditable},
	{"OnTLPChanging", &luna_wrapper_wxPropertyGrid::_bind_OnTLPChanging},
	{"RefreshEditor", &luna_wrapper_wxPropertyGrid::_bind_RefreshEditor},
	{"RefreshProperty", &luna_wrapper_wxPropertyGrid::_bind_RefreshProperty},
	{"ResetColours", &luna_wrapper_wxPropertyGrid::_bind_ResetColours},
	{"ResetColumnSizes", &luna_wrapper_wxPropertyGrid::_bind_ResetColumnSizes},
	{"SetCaptionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_SetCaptionBackgroundColour},
	{"SetCaptionTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetCaptionTextColour},
	{"SetCellBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_SetCellBackgroundColour},
	{"SetCellDisabledTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetCellDisabledTextColour},
	{"SetCellTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetCellTextColour},
	{"SetColumnCount", &luna_wrapper_wxPropertyGrid::_bind_SetColumnCount},
	{"SetEmptySpaceColour", &luna_wrapper_wxPropertyGrid::_bind_SetEmptySpaceColour},
	{"SetLineColour", &luna_wrapper_wxPropertyGrid::_bind_SetLineColour},
	{"SetMarginColour", &luna_wrapper_wxPropertyGrid::_bind_SetMarginColour},
	{"SetSelectionBackgroundColour", &luna_wrapper_wxPropertyGrid::_bind_SetSelectionBackgroundColour},
	{"SetSelectionTextColour", &luna_wrapper_wxPropertyGrid::_bind_SetSelectionTextColour},
	{"SetSplitterPosition", &luna_wrapper_wxPropertyGrid::_bind_SetSplitterPosition},
	{"SetSplitterLeft", &luna_wrapper_wxPropertyGrid::_bind_SetSplitterLeft},
	{"SetUnspecifiedValueAppearance", &luna_wrapper_wxPropertyGrid::_bind_SetUnspecifiedValueAppearance},
	{"SetVerticalSpacing", &luna_wrapper_wxPropertyGrid::_bind_SetVerticalSpacing},
	{"DoShowPropertyError", &luna_wrapper_wxPropertyGrid::_bind_DoShowPropertyError},
	{"DoHidePropertyError", &luna_wrapper_wxPropertyGrid::_bind_DoHidePropertyError},
	{"GetStatusBar", &luna_wrapper_wxPropertyGrid::_bind_GetStatusBar},
	{"EditorsValueWasModified", &luna_wrapper_wxPropertyGrid::_bind_EditorsValueWasModified},
	{"EditorsValueWasNotModified", &luna_wrapper_wxPropertyGrid::_bind_EditorsValueWasNotModified},
	{"IsEditorsValueModified", &luna_wrapper_wxPropertyGrid::_bind_IsEditorsValueModified},
	{"WasValueChangedInEvent", &luna_wrapper_wxPropertyGrid::_bind_WasValueChangedInEvent},
	{"AutoGetTranslation", &luna_wrapper_wxPropertyGrid::_bind_AutoGetTranslation},
	{"base_GetClassInfo", &luna_wrapper_wxPropertyGrid::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxPropertyGrid::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxPropertyGrid::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxPropertyGrid::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxPropertyGrid::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxPropertyGrid::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxPropertyGrid::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxPropertyGrid::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxPropertyGrid::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxPropertyGrid::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxPropertyGrid::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxPropertyGrid::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxPropertyGrid::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxPropertyGrid::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxPropertyGrid::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxPropertyGrid::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxPropertyGrid::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxPropertyGrid::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxPropertyGrid::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxPropertyGrid::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxPropertyGrid::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxPropertyGrid::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxPropertyGrid::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxPropertyGrid::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxPropertyGrid::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxPropertyGrid::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxPropertyGrid::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxPropertyGrid::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxPropertyGrid::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxPropertyGrid::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxPropertyGrid::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxPropertyGrid::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxPropertyGrid::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxPropertyGrid::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxPropertyGrid::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxPropertyGrid::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxPropertyGrid::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxPropertyGrid::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxPropertyGrid::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxPropertyGrid::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxPropertyGrid::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxPropertyGrid::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxPropertyGrid::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxPropertyGrid::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxPropertyGrid::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxPropertyGrid::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxPropertyGrid::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxPropertyGrid::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxPropertyGrid::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxPropertyGrid::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxPropertyGrid::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxPropertyGrid::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxPropertyGrid::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxPropertyGrid::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxPropertyGrid::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxPropertyGrid::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxPropertyGrid::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxPropertyGrid::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxPropertyGrid::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxPropertyGrid::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxPropertyGrid::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxPropertyGrid::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxPropertyGrid::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxPropertyGrid::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxPropertyGrid::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxPropertyGrid::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxPropertyGrid::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxPropertyGrid::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxPropertyGrid::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxPropertyGrid::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxPropertyGrid::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxPropertyGrid::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxPropertyGrid::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxPropertyGrid::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxPropertyGrid::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxPropertyGrid::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxPropertyGrid::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxPropertyGrid::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxPropertyGrid::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxPropertyGrid::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxPropertyGrid::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxPropertyGrid::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxPropertyGrid::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxPropertyGrid::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxPropertyGrid::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxPropertyGrid::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxPropertyGrid::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxPropertyGrid::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxPropertyGrid::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxPropertyGrid::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxPropertyGrid::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxPropertyGrid::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxPropertyGrid::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxPropertyGrid::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxPropertyGrid::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxPropertyGrid::_bind_base_SetLabel},
	{"base_Clear", &luna_wrapper_wxPropertyGrid::_bind_base_Clear},
	{"base_CommitChangesFromEditor", &luna_wrapper_wxPropertyGrid::_bind_base_CommitChangesFromEditor},
	{"base_RefreshProperty", &luna_wrapper_wxPropertyGrid::_bind_base_RefreshProperty},
	{"base_DoShowPropertyError", &luna_wrapper_wxPropertyGrid::_bind_base_DoShowPropertyError},
	{"base_DoHidePropertyError", &luna_wrapper_wxPropertyGrid::_bind_base_DoHidePropertyError},
	{"base_GetStatusBar", &luna_wrapper_wxPropertyGrid::_bind_base_GetStatusBar},
	{"fromVoid", &luna_wrapper_wxPropertyGrid::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPropertyGrid::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPropertyGrid::_bind_getTable},
	{"aswxPropertyGridInterface", &luna_wrapper_wxPropertyGrid::_bind_baseCast_wxPropertyGridInterface},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGrid >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGrid::_cast_from_wxObject},
	{"wxPropertyGridInterface", &luna_wrapper_wxPropertyGrid::_cast_from_wxPropertyGridInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGrid >::enumValues[] = {
	{0,0}
};


