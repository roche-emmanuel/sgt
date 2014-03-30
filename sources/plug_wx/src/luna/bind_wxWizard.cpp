#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWizard.h>

class luna_wrapper_wxWizard {
public:
	typedef Luna< wxWizard > luna_t;

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

		wxWizard* self= (wxWizard*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWizard >::push(L,self,false);
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
		//wxWizard* ptr= dynamic_cast< wxWizard* >(Luna< wxObject >::check(L,1));
		wxWizard* ptr= luna_caster< wxObject, wxWizard >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizard >::push(L,ptr,false);
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
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
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
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!(Luna< wxPoint >::check(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitToPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapPlacement(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinimumBitmapWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageAreaSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasNextPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasPrevPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RunWizard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapPlacement(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinimumBitmapWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
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

	inline static bool _lg_typecheck_base_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
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

	inline static bool _lg_typecheck_base_GetLabel(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EnableCloseButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsAlwaysMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsFullScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Maximize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RequestUserAttention(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxSize(lua_State *L) {
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
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldPreventAppExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OSXSetModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OSXIsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ShowFullScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanDoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EndModal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetContentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FitToPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPageAreaSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasNextPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HasPrevPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RunWizard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWizard::wxWizard()
	static wxWizard* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard() function, expected prototype:\nwxWizard::wxWizard()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxWizard();
	}

	// wxWizard::wxWizard(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)
	static wxWizard* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE) function, expected prototype:\nwxWizard::wxWizard(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,4)) : NULL;
		if( luatop>3 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::wxWizard function");
		}
		const wxBitmap & bitmap=luatop>3 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWizard::wxWizard function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxDEFAULT_DIALOG_STYLE;

		return new wxWizard(parent, id, title, bitmap, pos, style);
	}

	// wxWizard::wxWizard(lua_Table * data)
	static wxWizard* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard(lua_Table * data) function, expected prototype:\nwxWizard::wxWizard(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxWizard(L,NULL);
	}

	// wxWizard::wxWizard(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)
	static wxWizard* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxWizard::wxWizard(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE) function, expected prototype:\nwxWizard::wxWizard(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 56813631\narg 6 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* bitmap_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::wxWizard function");
		}
		const wxBitmap & bitmap=luatop>4 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWizard::wxWizard function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)wxDEFAULT_DIALOG_STYLE;

		return new wrapper_wxWizard(L,NULL, parent, id, title, bitmap, pos, style);
	}

	// Overload binder for wxWizard::wxWizard
	static wxWizard* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxWizard, cannot match any of the overloads for function wxWizard:\n  wxWizard()\n  wxWizard(wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, long)\n  wxWizard(lua_Table *)\n  wxWizard(lua_Table *, wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWizard::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = 536877056)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = 536877056) function, expected prototype:\nbool wxWizard::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = 536877056)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxBitmap* bitmap_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::Create function");
		}
		const wxBitmap & bitmap=luatop>4 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWizard::Create function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)536877056;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::Create(wxWindow *, int, const wxString &, const wxBitmap &, const wxPoint &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, title, bitmap, pos, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::FitToPage(const wxWizardPage * firstPage)
	static int _bind_FitToPage(lua_State *L) {
		if (!_lg_typecheck_FitToPage(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::FitToPage(const wxWizardPage * firstPage) function, expected prototype:\nvoid wxWizard::FitToPage(const wxWizardPage * firstPage)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWizardPage* firstPage=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::FitToPage(const wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FitToPage(firstPage);

		return 0;
	}

	// const wxBitmap & wxWizard::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxWizard::GetBitmap() const function, expected prototype:\nconst wxBitmap & wxWizard::GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBitmap & wxWizard::GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->GetBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxWizard::GetBitmapBackgroundColour() const
	static int _bind_GetBitmapBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBitmapBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxWizard::GetBitmapBackgroundColour() const function, expected prototype:\nconst wxColour & wxWizard::GetBitmapBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxWizard::GetBitmapBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBitmapBackgroundColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// int wxWizard::GetBitmapPlacement() const
	static int _bind_GetBitmapPlacement(lua_State *L) {
		if (!_lg_typecheck_GetBitmapPlacement(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::GetBitmapPlacement() const function, expected prototype:\nint wxWizard::GetBitmapPlacement() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::GetBitmapPlacement() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBitmapPlacement();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWizardPage * wxWizard::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizard::GetCurrentPage() const function, expected prototype:\nwxWizardPage * wxWizard::GetCurrentPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizard::GetCurrentPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWizardPage * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}

	// int wxWizard::GetMinimumBitmapWidth() const
	static int _bind_GetMinimumBitmapWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinimumBitmapWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::GetMinimumBitmapWidth() const function, expected prototype:\nint wxWizard::GetMinimumBitmapWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::GetMinimumBitmapWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMinimumBitmapWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSizer * wxWizard::GetPageAreaSizer() const
	static int _bind_GetPageAreaSizer(lua_State *L) {
		if (!_lg_typecheck_GetPageAreaSizer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizer * wxWizard::GetPageAreaSizer() const function, expected prototype:\nwxSizer * wxWizard::GetPageAreaSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizer * wxWizard::GetPageAreaSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizer * lret = self->GetPageAreaSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSize wxWizard::GetPageSize() const
	static int _bind_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_GetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::GetPageSize() const function, expected prototype:\nwxSize wxWizard::GetPageSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::GetPageSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetPageSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWizard::HasNextPage(wxWizardPage * page)
	static int _bind_HasNextPage(lua_State *L) {
		if (!_lg_typecheck_HasNextPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::HasNextPage(wxWizardPage * page) function, expected prototype:\nbool wxWizard::HasNextPage(wxWizardPage * page)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWizardPage* page=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::HasNextPage(wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasNextPage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::HasPrevPage(wxWizardPage * page)
	static int _bind_HasPrevPage(lua_State *L) {
		if (!_lg_typecheck_HasPrevPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::HasPrevPage(wxWizardPage * page) function, expected prototype:\nbool wxWizard::HasPrevPage(wxWizardPage * page)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWizardPage* page=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::HasPrevPage(wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPrevPage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::RunWizard(wxWizardPage * firstPage)
	static int _bind_RunWizard(lua_State *L) {
		if (!_lg_typecheck_RunWizard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::RunWizard(wxWizardPage * firstPage) function, expected prototype:\nbool wxWizard::RunWizard(wxWizardPage * firstPage)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWizardPage* firstPage=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::RunWizard(wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RunWizard(firstPage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxWizard::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxWizard::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::SetBitmap(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// void wxWizard::SetBitmapBackgroundColour(const wxColour & colour)
	static int _bind_SetBitmapBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBitmapBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBitmapBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxWizard::SetBitmapBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWizard::SetBitmapBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::SetBitmapBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapBackgroundColour(colour);

		return 0;
	}

	// void wxWizard::SetBitmapPlacement(int placement)
	static int _bind_SetBitmapPlacement(lua_State *L) {
		if (!_lg_typecheck_SetBitmapPlacement(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBitmapPlacement(int placement) function, expected prototype:\nvoid wxWizard::SetBitmapPlacement(int placement)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int placement=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::SetBitmapPlacement(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapPlacement(placement);

		return 0;
	}

	// void wxWizard::SetBorder(int border)
	static int _bind_SetBorder(lua_State *L) {
		if (!_lg_typecheck_SetBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::SetBorder(int border) function, expected prototype:\nvoid wxWizard::SetBorder(int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int border=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::SetBorder(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBorder(border);

		return 0;
	}

	// void wxWizard::SetMinimumBitmapWidth(int width)
	static int _bind_SetMinimumBitmapWidth(lua_State *L) {
		if (!_lg_typecheck_SetMinimumBitmapWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::SetMinimumBitmapWidth(int width) function, expected prototype:\nvoid wxWizard::SetMinimumBitmapWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::SetMinimumBitmapWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinimumBitmapWidth(width);

		return 0;
	}

	// void wxWizard::SetPageSize(const wxSize & sizePage)
	static int _bind_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_SetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::SetPageSize(const wxSize & sizePage) function, expected prototype:\nvoid wxWizard::SetPageSize(const wxSize & sizePage)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sizePage_ptr=(Luna< wxSize >::check(L,2));
		if( !sizePage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizePage in wxWizard::SetPageSize function");
		}
		const wxSize & sizePage=*sizePage_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::SetPageSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPageSize(sizePage);

		return 0;
	}

	// wxClassInfo * wxWizard::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWizard::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWizard::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWizard::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxWizard::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxWizard::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_AcceptsFocus() const function, expected prototype:\nbool wxWizard::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxWizard::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxWizard::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_HasFocus() const function, expected prototype:\nbool wxWizard::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxWizard::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetCanFocus(canFocus);

		return 0;
	}

	// void wxWizard::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetFocus() function, expected prototype:\nvoid wxWizard::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetFocus();

		return 0;
	}

	// void wxWizard::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetFocusFromKbd() function, expected prototype:\nvoid wxWizard::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetFocusFromKbd();

		return 0;
	}

	// void wxWizard::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxWizard::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::AddChild(child);

		return 0;
	}

	// void wxWizard::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxWizard::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::RemoveChild(child);

		return 0;
	}

	// bool wxWizard::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxWizard::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxWizard::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxWizard::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxWizard::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWizard::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWizard::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxWizard::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWizard::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWizard::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxWizard::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWizard::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxWizard::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxWizard::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_ScrollLines(int lines) function, expected prototype:\nbool wxWizard::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_ScrollPages(int pages) function, expected prototype:\nbool wxWizard::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWizard::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxWizard::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxWizard::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxWizard::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxWizard::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxWizard::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxWizard::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWizard::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxWizard::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWizard::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWizard::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Fit() function, expected prototype:\nvoid wxWizard::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Fit();

		return 0;
	}

	// void wxWizard::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_FitInside() function, expected prototype:\nvoid wxWizard::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::FitInside();

		return 0;
	}

	// wxSize wxWizard::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxWizard::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxWizard::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetMaxSize() const function, expected prototype:\nwxSize wxWizard::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetMinClientSize() const function, expected prototype:\nwxSize wxWizard::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetMinSize() const function, expected prototype:\nwxSize wxWizard::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxWizard::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWizard::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxWizard::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWizard::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWizard::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxWizard::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SendSizeEvent(flags);

		return 0;
	}

	// void wxWizard::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxWizard::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWizard::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetMaxClientSize(size);

		return 0;
	}

	// void wxWizard::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxWizard::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWizard::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetMinClientSize(size);

		return 0;
	}

	// wxPoint wxWizard::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWizard::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxWizard::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWizard::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxWizard::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxWizard::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_ClearBackground() function, expected prototype:\nvoid wxWizard::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxWizard::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxWizard::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxWizard::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxWizard::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxWizard::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWizard::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::base_GetCharHeight() const function, expected prototype:\nint wxWizard::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWizard::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWizard::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::base_GetCharWidth() const function, expected prototype:\nint wxWizard::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWizard::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxWizard::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxWizard::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxWizard::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxWizard::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxWizard::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxWizard::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWizard::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxWizard::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Update() function, expected prototype:\nvoid wxWizard::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Update();

		return 0;
	}

	// bool wxWizard::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxWizard::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxWizard::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxWizard::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_ShouldInheritColours() const function, expected prototype:\nbool wxWizard::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxWizard::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxWizard::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_GetThemeEnabled() const function, expected prototype:\nbool wxWizard::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWizard::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetNextHandler(handler);

		return 0;
	}

	// void wxWizard::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWizard::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetPreviousHandler(handler);

		return 0;
	}

	// long wxWizard::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxWizard::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxWizard::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxWizard::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxWizard::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWizard::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxWizard::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxWizard::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxWizard::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxWizard::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Lower() function, expected prototype:\nvoid wxWizard::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Lower();

		return 0;
	}

	// void wxWizard::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Raise() function, expected prototype:\nvoid wxWizard::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Raise();

		return 0;
	}

	// bool wxWizard::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWizard::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsShown() const function, expected prototype:\nbool wxWizard::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsShownOnScreen() const function, expected prototype:\nbool wxWizard::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_Enable(bool enable = true) function, expected prototype:\nbool wxWizard::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWizard::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWizard::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWizard::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxWizard::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxWizard::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWizard::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWizard::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxWizard::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxWizard::base_GetValidator() function, expected prototype:\nwxValidator * wxWizard::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxWizard::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxWizard::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxWizard::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxWizard::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxWizard::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetValidator(validator);

		return 0;
	}

	// bool wxWizard::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_TransferDataFromWindow() function, expected prototype:\nbool wxWizard::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_TransferDataToWindow() function, expected prototype:\nbool wxWizard::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_Validate() function, expected prototype:\nbool wxWizard::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWizard::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWizard::base_GetLabel() const function, expected prototype:\nwxString wxWizard::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWizard::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWizard::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxWizard::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxWizard::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxWizard::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxWizard::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxWizard::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxWizard::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWizard::base_GetName() const function, expected prototype:\nwxString wxWizard::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWizard::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWizard::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxWizard::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxWizard::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetLabel(label);

		return 0;
	}

	// void wxWizard::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxWizard::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetLayoutDirection(dir);

		return 0;
	}

	// void wxWizard::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetName(const wxString & name) function, expected prototype:\nvoid wxWizard::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetName(name);

		return 0;
	}

	// void wxWizard::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxWizard::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxWizard::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxWizard::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_Destroy() function, expected prototype:\nbool wxWizard::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxWizard::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxWizard::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxWizard::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxWizard::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxWizard::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxWizard::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxWizard::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetDropTarget(target);

		return 0;
	}

	// void wxWizard::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxWizard::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxWizard::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_HasCapture() const function, expected prototype:\nbool wxWizard::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxWizard::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxWizard::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxWizard::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::WarpPointer(x, y);

		return 0;
	}

	// void wxWizard::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxWizard::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWizard::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxWizard::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxWizard::base_GetHandle() const function, expected prototype:\nHWND wxWizard::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxWizard::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxWizard::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxWizard::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_HasMultiplePages() const function, expected prototype:\nbool wxWizard::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_InheritAttributes() function, expected prototype:\nvoid wxWizard::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::InheritAttributes();

		return 0;
	}

	// void wxWizard::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_InitDialog() function, expected prototype:\nvoid wxWizard::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::InitDialog();

		return 0;
	}

	// bool wxWizard::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsRetained() const function, expected prototype:\nbool wxWizard::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsTopLevel() const function, expected prototype:\nbool wxWizard::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxWizard::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::MakeModal(modal);

		return 0;
	}

	// void wxWizard::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_OnInternalIdle() function, expected prototype:\nvoid wxWizard::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::OnInternalIdle();

		return 0;
	}

	// bool wxWizard::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxWizard::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxWizard::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxWizard::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxWizard::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_CanSetTransparent() function, expected prototype:\nbool wxWizard::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxWizard::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_EnableCloseButton(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWizard::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWizard::base_GetTitle() const function, expected prototype:\nwxString wxWizard::base_GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWizard::base_GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWizard::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxWizard::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsActive() function, expected prototype:\nbool wxWizard::base_IsActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsActive(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxWizard::base_IsAlwaysMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsAlwaysMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsFullScreen() const function, expected prototype:\nbool wxWizard::base_IsFullScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsFullScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsMaximized() const function, expected prototype:\nbool wxWizard::base_IsMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_Layout() function, expected prototype:\nbool wxWizard::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxWizard::base_Maximize(bool maximize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Maximize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Maximize(maximize);

		return 0;
	}

	// void wxWizard::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxWizard::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxUSER_ATTENTION_INFO;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_RequestUserAttention(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::RequestUserAttention(flags);

		return 0;
	}

	// void wxWizard::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxWizard::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWizard::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetMaxSize(size);

		return 0;
	}

	// void wxWizard::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxWizard::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWizard::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetMinSize(size);

		return 0;
	}

	// void wxWizard::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxWizard::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxWizard::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxWizard::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxWizard::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxWizard::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxWizard::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxWizard::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxWizard::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxWizard::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetTitle(title);

		return 0;
	}

	// bool wxWizard::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxWizard::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxWizard::base_ShouldPreventAppExit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_ShouldPreventAppExit() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxWizard::base_OSXSetModified(bool modified)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_OSXSetModified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::OSXSetModified(modified);

		return 0;
	}

	// bool wxWizard::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_OSXIsModified() const function, expected prototype:\nbool wxWizard::base_OSXIsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_OSXIsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxWizard::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)::wxFULLSCREEN_ALL;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_ShowFullScreen(bool, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_CanDoLayoutAdaptation()
	static int _bind_base_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_CanDoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_CanDoLayoutAdaptation() function, expected prototype:\nbool wxWizard::base_CanDoLayoutAdaptation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_CanDoLayoutAdaptation(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::CanDoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_DoLayoutAdaptation()
	static int _bind_base_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_DoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_DoLayoutAdaptation() function, expected prototype:\nbool wxWizard::base_DoLayoutAdaptation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_DoLayoutAdaptation(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::DoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_EndModal(int retCode)
	static int _bind_base_EndModal(lua_State *L) {
		if (!_lg_typecheck_base_EndModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_EndModal(int retCode) function, expected prototype:\nvoid wxWizard::base_EndModal(int retCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int retCode=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_EndModal(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::EndModal(retCode);

		return 0;
	}

	// wxWindow * wxWizard::base_GetContentWindow() const
	static int _bind_base_GetContentWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetContentWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWizard::base_GetContentWindow() const function, expected prototype:\nwxWindow * wxWizard::base_GetContentWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWizard::base_GetContentWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxWizard::GetContentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxWizard::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxWizard::base_Iconize(bool iconize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_Iconize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::Iconize(iconize);

		return 0;
	}

	// bool wxWizard::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsIconized() const function, expected prototype:\nbool wxWizard::base_IsIconized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsIconized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_IsModal() const
	static int _bind_base_IsModal(lua_State *L) {
		if (!_lg_typecheck_base_IsModal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_IsModal() const function, expected prototype:\nbool wxWizard::base_IsModal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_IsModal() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::IsModal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxWizard::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxWizard::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetIcons(const wxIconBundle &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetIcons(icons);

		return 0;
	}

	// bool wxWizard::base_Show(bool show = 1)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_Show(bool show = 1) function, expected prototype:\nbool wxWizard::base_Show(bool show = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)1;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxWizard::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxWizard::base_ShowModal() function, expected prototype:\nint wxWizard::base_ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWizard::base_ShowModal(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWizard::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWizard::base_FitToPage(const wxWizardPage * firstPage)
	static int _bind_base_FitToPage(lua_State *L) {
		if (!_lg_typecheck_base_FitToPage(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_FitToPage(const wxWizardPage * firstPage) function, expected prototype:\nvoid wxWizard::base_FitToPage(const wxWizardPage * firstPage)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWizardPage* firstPage=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_FitToPage(const wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::FitToPage(firstPage);

		return 0;
	}

	// wxWizardPage * wxWizard::base_GetCurrentPage() const
	static int _bind_base_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_base_GetCurrentPage(L)) {
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizard::base_GetCurrentPage() const function, expected prototype:\nwxWizardPage * wxWizard::base_GetCurrentPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizard::base_GetCurrentPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWizardPage * lret = self->wxWizard::GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}

	// wxSizer * wxWizard::base_GetPageAreaSizer() const
	static int _bind_base_GetPageAreaSizer(lua_State *L) {
		if (!_lg_typecheck_base_GetPageAreaSizer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizer * wxWizard::base_GetPageAreaSizer() const function, expected prototype:\nwxSizer * wxWizard::base_GetPageAreaSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizer * wxWizard::base_GetPageAreaSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizer * lret = self->wxWizard::GetPageAreaSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSize wxWizard::base_GetPageSize() const
	static int _bind_base_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_GetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWizard::base_GetPageSize() const function, expected prototype:\nwxSize wxWizard::base_GetPageSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWizard::base_GetPageSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWizard::GetPageSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWizard::base_HasNextPage(wxWizardPage * page)
	static int _bind_base_HasNextPage(lua_State *L) {
		if (!_lg_typecheck_base_HasNextPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_HasNextPage(wxWizardPage * page) function, expected prototype:\nbool wxWizard::base_HasNextPage(wxWizardPage * page)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWizardPage* page=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_HasNextPage(wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::HasNextPage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_HasPrevPage(wxWizardPage * page)
	static int _bind_base_HasPrevPage(lua_State *L) {
		if (!_lg_typecheck_base_HasPrevPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_HasPrevPage(wxWizardPage * page) function, expected prototype:\nbool wxWizard::base_HasPrevPage(wxWizardPage * page)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWizardPage* page=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_HasPrevPage(wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::HasPrevPage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWizard::base_RunWizard(wxWizardPage * firstPage)
	static int _bind_base_RunWizard(lua_State *L) {
		if (!_lg_typecheck_base_RunWizard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizard::base_RunWizard(wxWizardPage * firstPage) function, expected prototype:\nbool wxWizard::base_RunWizard(wxWizardPage * firstPage)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWizardPage* firstPage=(Luna< wxObject >::checkSubType< wxWizardPage >(L,2));

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizard::base_RunWizard(wxWizardPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWizard::RunWizard(firstPage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWizard::base_SetBorder(int border)
	static int _bind_base_SetBorder(lua_State *L) {
		if (!_lg_typecheck_base_SetBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetBorder(int border) function, expected prototype:\nvoid wxWizard::base_SetBorder(int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int border=(int)lua_tointeger(L,2);

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetBorder(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetBorder(border);

		return 0;
	}

	// void wxWizard::base_SetPageSize(const wxSize & sizePage)
	static int _bind_base_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWizard::base_SetPageSize(const wxSize & sizePage) function, expected prototype:\nvoid wxWizard::base_SetPageSize(const wxSize & sizePage)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sizePage_ptr=(Luna< wxSize >::check(L,2));
		if( !sizePage_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizePage in wxWizard::base_SetPageSize function");
		}
		const wxSize & sizePage=*sizePage_ptr;

		wxWizard* self=Luna< wxObject >::checkSubType< wxWizard >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWizard::base_SetPageSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWizard::SetPageSize(sizePage);

		return 0;
	}


	// Operator binds:

};

wxWizard* LunaTraits< wxWizard >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWizard::_bind_ctor(L);
}

void LunaTraits< wxWizard >::_bind_dtor(wxWizard* obj) {
	delete obj;
}

const char LunaTraits< wxWizard >::className[] = "wxWizard";
const char LunaTraits< wxWizard >::fullName[] = "wxWizard";
const char LunaTraits< wxWizard >::moduleName[] = "wx";
const char* LunaTraits< wxWizard >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxWizard >::hash = 92784731;
const int LunaTraits< wxWizard >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxWizard >::methods[] = {
	{"Create", &luna_wrapper_wxWizard::_bind_Create},
	{"FitToPage", &luna_wrapper_wxWizard::_bind_FitToPage},
	{"GetBitmap", &luna_wrapper_wxWizard::_bind_GetBitmap},
	{"GetBitmapBackgroundColour", &luna_wrapper_wxWizard::_bind_GetBitmapBackgroundColour},
	{"GetBitmapPlacement", &luna_wrapper_wxWizard::_bind_GetBitmapPlacement},
	{"GetCurrentPage", &luna_wrapper_wxWizard::_bind_GetCurrentPage},
	{"GetMinimumBitmapWidth", &luna_wrapper_wxWizard::_bind_GetMinimumBitmapWidth},
	{"GetPageAreaSizer", &luna_wrapper_wxWizard::_bind_GetPageAreaSizer},
	{"GetPageSize", &luna_wrapper_wxWizard::_bind_GetPageSize},
	{"HasNextPage", &luna_wrapper_wxWizard::_bind_HasNextPage},
	{"HasPrevPage", &luna_wrapper_wxWizard::_bind_HasPrevPage},
	{"RunWizard", &luna_wrapper_wxWizard::_bind_RunWizard},
	{"SetBitmap", &luna_wrapper_wxWizard::_bind_SetBitmap},
	{"SetBitmapBackgroundColour", &luna_wrapper_wxWizard::_bind_SetBitmapBackgroundColour},
	{"SetBitmapPlacement", &luna_wrapper_wxWizard::_bind_SetBitmapPlacement},
	{"SetBorder", &luna_wrapper_wxWizard::_bind_SetBorder},
	{"SetMinimumBitmapWidth", &luna_wrapper_wxWizard::_bind_SetMinimumBitmapWidth},
	{"SetPageSize", &luna_wrapper_wxWizard::_bind_SetPageSize},
	{"base_GetClassInfo", &luna_wrapper_wxWizard::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxWizard::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxWizard::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxWizard::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxWizard::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxWizard::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxWizard::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxWizard::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxWizard::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxWizard::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxWizard::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxWizard::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxWizard::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxWizard::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxWizard::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxWizard::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxWizard::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxWizard::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxWizard::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxWizard::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxWizard::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxWizard::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxWizard::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxWizard::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxWizard::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxWizard::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxWizard::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxWizard::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxWizard::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxWizard::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxWizard::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxWizard::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxWizard::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxWizard::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxWizard::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxWizard::_bind_base_SetMinClientSize},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxWizard::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxWizard::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxWizard::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxWizard::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxWizard::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxWizard::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxWizard::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxWizard::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxWizard::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxWizard::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxWizard::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxWizard::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxWizard::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxWizard::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxWizard::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxWizard::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxWizard::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxWizard::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxWizard::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxWizard::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxWizard::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxWizard::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxWizard::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxWizard::_bind_base_Enable},
	{"base_ShowWithEffect", &luna_wrapper_wxWizard::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxWizard::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxWizard::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxWizard::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxWizard::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxWizard::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxWizard::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxWizard::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxWizard::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxWizard::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxWizard::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxWizard::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxWizard::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxWizard::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxWizard::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxWizard::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxWizard::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxWizard::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxWizard::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxWizard::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxWizard::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxWizard::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxWizard::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxWizard::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxWizard::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxWizard::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxWizard::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxWizard::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxWizard::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxWizard::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxWizard::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxWizard::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxWizard::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxWizard::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxWizard::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxWizard::_bind_base_GetTitle},
	{"base_IsActive", &luna_wrapper_wxWizard::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxWizard::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxWizard::_bind_base_IsFullScreen},
	{"base_IsMaximized", &luna_wrapper_wxWizard::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxWizard::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxWizard::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxWizard::_bind_base_RequestUserAttention},
	{"base_SetMaxSize", &luna_wrapper_wxWizard::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxWizard::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxWizard::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxWizard::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxWizard::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxWizard::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxWizard::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxWizard::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxWizard::_bind_base_ShowFullScreen},
	{"base_CanDoLayoutAdaptation", &luna_wrapper_wxWizard::_bind_base_CanDoLayoutAdaptation},
	{"base_DoLayoutAdaptation", &luna_wrapper_wxWizard::_bind_base_DoLayoutAdaptation},
	{"base_EndModal", &luna_wrapper_wxWizard::_bind_base_EndModal},
	{"base_GetContentWindow", &luna_wrapper_wxWizard::_bind_base_GetContentWindow},
	{"base_Iconize", &luna_wrapper_wxWizard::_bind_base_Iconize},
	{"base_IsIconized", &luna_wrapper_wxWizard::_bind_base_IsIconized},
	{"base_IsModal", &luna_wrapper_wxWizard::_bind_base_IsModal},
	{"base_SetIcons", &luna_wrapper_wxWizard::_bind_base_SetIcons},
	{"base_Show", &luna_wrapper_wxWizard::_bind_base_Show},
	{"base_ShowModal", &luna_wrapper_wxWizard::_bind_base_ShowModal},
	{"base_FitToPage", &luna_wrapper_wxWizard::_bind_base_FitToPage},
	{"base_GetCurrentPage", &luna_wrapper_wxWizard::_bind_base_GetCurrentPage},
	{"base_GetPageAreaSizer", &luna_wrapper_wxWizard::_bind_base_GetPageAreaSizer},
	{"base_GetPageSize", &luna_wrapper_wxWizard::_bind_base_GetPageSize},
	{"base_HasNextPage", &luna_wrapper_wxWizard::_bind_base_HasNextPage},
	{"base_HasPrevPage", &luna_wrapper_wxWizard::_bind_base_HasPrevPage},
	{"base_RunWizard", &luna_wrapper_wxWizard::_bind_base_RunWizard},
	{"base_SetBorder", &luna_wrapper_wxWizard::_bind_base_SetBorder},
	{"base_SetPageSize", &luna_wrapper_wxWizard::_bind_base_SetPageSize},
	{"fromVoid", &luna_wrapper_wxWizard::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWizard::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWizard::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizard >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizard::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizard >::enumValues[] = {
	{0,0}
};


