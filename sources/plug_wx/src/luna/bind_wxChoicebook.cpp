#include <plug_common.h>

#include <luna/wrappers/wrapper_wxChoicebook.h>

class luna_wrapper_wxChoicebook {
public:
	typedef Luna< wxChoicebook > luna_t;

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

		wxChoicebook* self= (wxChoicebook*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxChoicebook >::push(L,self,false);
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
		//wxChoicebook* ptr= dynamic_cast< wxChoicebook* >(Luna< wxObject >::check(L,1));
		wxChoicebook* ptr= luna_caster< wxObject, wxChoicebook >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChoicebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxChoicebook* ptr= dynamic_cast< wxChoicebook* >(Luna< wxWithImages >::check(L,1));
		wxChoicebook* ptr= luna_caster< wxWithImages, wxChoicebook >::cast(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxChoicebook >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetChoiceCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
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

	inline static bool _lg_typecheck_base_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HitTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteAllPages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeletePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPageImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ChangeSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxChoicebook::wxChoicebook()
	static wxChoicebook* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxChoicebook::wxChoicebook() function, expected prototype:\nwxChoicebook::wxChoicebook()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxChoicebook();
	}

	// wxChoicebook::wxChoicebook(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString)
	static wxChoicebook* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxChoicebook::wxChoicebook(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString) function, expected prototype:\nwxChoicebook::wxChoicebook(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxChoicebook::wxChoicebook function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::wxChoicebook function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxChoicebook(parent, id, pos, size, style, name);
	}

	// wxChoicebook::wxChoicebook(lua_Table * data)
	static wxChoicebook* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxChoicebook::wxChoicebook(lua_Table * data) function, expected prototype:\nwxChoicebook::wxChoicebook(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxChoicebook(L,NULL);
	}

	// wxChoicebook::wxChoicebook(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString)
	static wxChoicebook* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxChoicebook::wxChoicebook(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString) function, expected prototype:\nwxChoicebook::wxChoicebook(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxChoicebook::wxChoicebook function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::wxChoicebook function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxChoicebook(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxChoicebook::wxChoicebook
	static wxChoicebook* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxChoicebook, cannot match any of the overloads for function wxChoicebook:\n  wxChoicebook()\n  wxChoicebook(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxChoicebook(lua_Table *)\n  wxChoicebook(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxChoice * wxChoicebook::GetChoiceCtrl() const
	static int _bind_GetChoiceCtrl(lua_State *L) {
		if (!_lg_typecheck_GetChoiceCtrl(L)) {
			luaL_error(L, "luna typecheck failed in wxChoice * wxChoicebook::GetChoiceCtrl() const function, expected prototype:\nwxChoice * wxChoicebook::GetChoiceCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxChoice * wxChoicebook::GetChoiceCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxChoice * lret = self->GetChoiceCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxChoice >::push(L,lret,false);

		return 1;
	}

	// int wxChoicebook::GetPageImage(size_t nPage) const
	static int _bind_GetPageImage(lua_State *L) {
		if (!_lg_typecheck_GetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::GetPageImage(size_t nPage) const function, expected prototype:\nint wxChoicebook::GetPageImage(size_t nPage) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::GetPageImage(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPageImage(nPage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxChoicebook::SetPageImage(size_t page, int image)
	static int _bind_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_SetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::SetPageImage(size_t page, int image) function, expected prototype:\nbool wxChoicebook::SetPageImage(size_t page, int image)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int image=(int)lua_tointeger(L,3);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::SetPageImage(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPageImage(page, image);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxChoicebook::GetPageText(size_t nPage) const
	static int _bind_GetPageText(lua_State *L) {
		if (!_lg_typecheck_GetPageText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxChoicebook::GetPageText(size_t nPage) const function, expected prototype:\nwxString wxChoicebook::GetPageText(size_t nPage) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxChoicebook::GetPageText(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPageText(nPage);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxChoicebook::SetPageText(size_t page, const wxString & text)
	static int _bind_SetPageText(lua_State *L) {
		if (!_lg_typecheck_SetPageText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxChoicebook::SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::SetPageText(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxChoicebook::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::GetSelection() const function, expected prototype:\nint wxChoicebook::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::SetSelection(size_t page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::SetSelection(size_t page) function, expected prototype:\nint wxChoicebook::SetSelection(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::SetSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->SetSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::ChangeSelection(size_t page)
	static int _bind_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_ChangeSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::ChangeSelection(size_t page) function, expected prototype:\nint wxChoicebook::ChangeSelection(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::ChangeSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ChangeSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxChoicebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_InsertPage(lua_State *L) {
		if (!_lg_typecheck_InsertPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxChoicebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : (int)wxBookCtrlBase::NO_IMAGE;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::InsertPage(size_t, wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxChoicebook::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxChoicebook::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxChoicebook::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxChoicebook::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxChoicebook::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxChoicebook::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_AcceptsFocus() const function, expected prototype:\nbool wxChoicebook::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxChoicebook::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxChoicebook::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_HasFocus() const function, expected prototype:\nbool wxChoicebook::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxChoicebook::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetCanFocus(canFocus);

		return 0;
	}

	// void wxChoicebook::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetFocus() function, expected prototype:\nvoid wxChoicebook::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetFocus();

		return 0;
	}

	// void wxChoicebook::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetFocusFromKbd() function, expected prototype:\nvoid wxChoicebook::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetFocusFromKbd();

		return 0;
	}

	// void wxChoicebook::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxChoicebook::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::AddChild(child);

		return 0;
	}

	// void wxChoicebook::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxChoicebook::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::RemoveChild(child);

		return 0;
	}

	// bool wxChoicebook::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxChoicebook::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxChoicebook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxChoicebook::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxChoicebook::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxChoicebook::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxChoicebook::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxChoicebook::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxChoicebook::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_ScrollLines(int lines) function, expected prototype:\nbool wxChoicebook::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_ScrollPages(int pages) function, expected prototype:\nbool wxChoicebook::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxChoicebook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxChoicebook::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxChoicebook::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxChoicebook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxChoicebook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxChoicebook::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxChoicebook::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxChoicebook::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxChoicebook::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_Fit() function, expected prototype:\nvoid wxChoicebook::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::Fit();

		return 0;
	}

	// void wxChoicebook::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_FitInside() function, expected prototype:\nvoid wxChoicebook::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::FitInside();

		return 0;
	}

	// wxSize wxChoicebook::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetMaxSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetMinClientSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetMinSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxChoicebook::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxChoicebook::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxChoicebook::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxChoicebook::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxChoicebook::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxChoicebook::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxChoicebook::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxChoicebook::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SendSizeEvent(flags);

		return 0;
	}

	// void wxChoicebook::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxChoicebook::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetMaxClientSize(size);

		return 0;
	}

	// void wxChoicebook::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxChoicebook::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetMaxSize(size);

		return 0;
	}

	// void wxChoicebook::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxChoicebook::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetMinClientSize(size);

		return 0;
	}

	// void wxChoicebook::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxChoicebook::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetMinSize(size);

		return 0;
	}

	// void wxChoicebook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxChoicebook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxChoicebook::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxChoicebook::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxChoicebook::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxChoicebook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxChoicebook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxChoicebook::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxChoicebook::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxChoicebook::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxChoicebook::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxChoicebook::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxChoicebook::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxChoicebook::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_ClearBackground() function, expected prototype:\nvoid wxChoicebook::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxChoicebook::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxChoicebook::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxChoicebook::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxChoicebook::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxChoicebook::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetCharHeight() const function, expected prototype:\nint wxChoicebook::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetCharWidth() const function, expected prototype:\nint wxChoicebook::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxChoicebook::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxChoicebook::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxChoicebook::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxChoicebook::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxChoicebook::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxChoicebook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxChoicebook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxChoicebook::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_Update() function, expected prototype:\nvoid wxChoicebook::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::Update();

		return 0;
	}

	// bool wxChoicebook::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxChoicebook::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxChoicebook::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxChoicebook::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_ShouldInheritColours() const function, expected prototype:\nbool wxChoicebook::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxChoicebook::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxChoicebook::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_GetThemeEnabled() const function, expected prototype:\nbool wxChoicebook::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_CanSetTransparent() function, expected prototype:\nbool wxChoicebook::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxChoicebook::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxChoicebook::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetNextHandler(handler);

		return 0;
	}

	// void wxChoicebook::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxChoicebook::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetPreviousHandler(handler);

		return 0;
	}

	// long wxChoicebook::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxChoicebook::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxChoicebook::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxChoicebook::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxChoicebook::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxChoicebook::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxChoicebook::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxChoicebook::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxChoicebook::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxChoicebook::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_Lower() function, expected prototype:\nvoid wxChoicebook::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::Lower();

		return 0;
	}

	// void wxChoicebook::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_Raise() function, expected prototype:\nvoid wxChoicebook::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::Raise();

		return 0;
	}

	// bool wxChoicebook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxChoicebook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_IsShown() const function, expected prototype:\nbool wxChoicebook::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_IsShownOnScreen() const function, expected prototype:\nbool wxChoicebook::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_Enable(bool enable = true) function, expected prototype:\nbool wxChoicebook::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_Show(bool show = true) function, expected prototype:\nbool wxChoicebook::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxChoicebook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxChoicebook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxChoicebook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxChoicebook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxChoicebook::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxChoicebook::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxChoicebook::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxChoicebook::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxChoicebook::base_GetValidator() function, expected prototype:\nwxValidator * wxChoicebook::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxChoicebook::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxChoicebook::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxChoicebook::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxChoicebook::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxChoicebook::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetValidator(validator);

		return 0;
	}

	// bool wxChoicebook::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_TransferDataFromWindow() function, expected prototype:\nbool wxChoicebook::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_TransferDataToWindow() function, expected prototype:\nbool wxChoicebook::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_Validate() function, expected prototype:\nbool wxChoicebook::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxChoicebook::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxChoicebook::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxChoicebook::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxChoicebook::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxChoicebook::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxChoicebook::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxChoicebook::base_GetName() const function, expected prototype:\nwxString wxChoicebook::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxChoicebook::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxChoicebook::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxChoicebook::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxChoicebook::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetLayoutDirection(dir);

		return 0;
	}

	// void wxChoicebook::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetName(const wxString & name) function, expected prototype:\nvoid wxChoicebook::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetName(name);

		return 0;
	}

	// void wxChoicebook::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxChoicebook::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxChoicebook::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxChoicebook::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_Destroy() function, expected prototype:\nbool wxChoicebook::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxChoicebook::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxChoicebook::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxChoicebook::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxChoicebook::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxChoicebook::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxChoicebook::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxChoicebook::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetDropTarget(target);

		return 0;
	}

	// void wxChoicebook::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxChoicebook::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxChoicebook::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_Layout() function, expected prototype:\nbool wxChoicebook::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_HasCapture() const function, expected prototype:\nbool wxChoicebook::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxChoicebook::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxChoicebook::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxChoicebook::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::WarpPointer(x, y);

		return 0;
	}

	// void wxChoicebook::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxChoicebook::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxChoicebook::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxChoicebook::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxChoicebook::base_GetHandle() const function, expected prototype:\nHWND wxChoicebook::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxChoicebook::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxChoicebook::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxChoicebook::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_HasMultiplePages() const function, expected prototype:\nbool wxChoicebook::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_InheritAttributes() function, expected prototype:\nvoid wxChoicebook::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::InheritAttributes();

		return 0;
	}

	// void wxChoicebook::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_InitDialog() function, expected prototype:\nvoid wxChoicebook::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::InitDialog();

		return 0;
	}

	// bool wxChoicebook::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_IsDoubleBuffered() const function, expected prototype:\nbool wxChoicebook::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_IsRetained() const function, expected prototype:\nbool wxChoicebook::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_IsTopLevel() const function, expected prototype:\nbool wxChoicebook::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxChoicebook::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::MakeModal(modal);

		return 0;
	}

	// void wxChoicebook::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_OnInternalIdle() function, expected prototype:\nvoid wxChoicebook::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::OnInternalIdle();

		return 0;
	}

	// bool wxChoicebook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxChoicebook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxChoicebook::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxChoicebook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxChoicebook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::UpdateWindowUI(flags);

		return 0;
	}

	// void wxChoicebook::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxChoicebook::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxChoicebook::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::Command(event);

		return 0;
	}

	// wxString wxChoicebook::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxChoicebook::base_GetLabel() const function, expected prototype:\nwxString wxChoicebook::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxChoicebook::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxChoicebook::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxChoicebook::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxChoicebook::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetLabel(label);

		return 0;
	}

	// void wxChoicebook::base_SetImageList(wxImageList * imageList)
	static int _bind_base_SetImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxChoicebook::base_SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetImageList(imageList);

		return 0;
	}

	// void wxChoicebook::base_SetPageSize(const wxSize & size)
	static int _bind_base_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxChoicebook::base_SetPageSize(const wxSize & size) function, expected prototype:\nvoid wxChoicebook::base_SetPageSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxChoicebook::base_SetPageSize function");
		}
		const wxSize & size=*size_ptr;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxChoicebook::base_SetPageSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxChoicebook::SetPageSize(size);

		return 0;
	}

	// int wxChoicebook::base_HitTest(const wxPoint & pt, long * flags = NULL) const
	static int _bind_base_HitTest(lua_State *L) {
		if (!_lg_typecheck_base_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_HitTest(const wxPoint & pt, long * flags = NULL) const function, expected prototype:\nint wxChoicebook::base_HitTest(const wxPoint & pt, long * flags = NULL) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxChoicebook::base_HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long* flags=luatop>2 ? (long*)Luna< void >::check(L,3) : (long*)NULL;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_HitTest(const wxPoint &, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::HitTest(pt, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxChoicebook::base_AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_base_AddPage(lua_State *L) {
		if (!_lg_typecheck_base_AddPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxChoicebook::base_AddPage(wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool select=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxBookCtrlBase::NO_IMAGE;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_AddPage(wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::AddPage(page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_DeleteAllPages()
	static int _bind_base_DeleteAllPages(lua_State *L) {
		if (!_lg_typecheck_base_DeleteAllPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_DeleteAllPages() function, expected prototype:\nbool wxChoicebook::base_DeleteAllPages()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_DeleteAllPages(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::DeleteAllPages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_DeletePage(size_t page)
	static int _bind_base_DeletePage(lua_State *L) {
		if (!_lg_typecheck_base_DeletePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_DeletePage(size_t page) function, expected prototype:\nbool wxChoicebook::base_DeletePage(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_DeletePage(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::DeletePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxChoicebook::base_RemovePage(size_t page)
	static int _bind_base_RemovePage(lua_State *L) {
		if (!_lg_typecheck_base_RemovePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_RemovePage(size_t page) function, expected prototype:\nbool wxChoicebook::base_RemovePage(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_RemovePage(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxChoicebook::base_GetPageCount() const
	static int _bind_base_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_base_GetPageCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxChoicebook::base_GetPageCount() const function, expected prototype:\nsize_t wxChoicebook::base_GetPageCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxChoicebook::base_GetPageCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxChoicebook::GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_GetPageImage(size_t nPage) const
	static int _bind_base_GetPageImage(lua_State *L) {
		if (!_lg_typecheck_base_GetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetPageImage(size_t nPage) const function, expected prototype:\nint wxChoicebook::base_GetPageImage(size_t nPage) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetPageImage(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetPageImage(nPage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxChoicebook::base_SetPageImage(size_t page, int image)
	static int _bind_base_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_base_SetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_SetPageImage(size_t page, int image) function, expected prototype:\nbool wxChoicebook::base_SetPageImage(size_t page, int image)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int image=(int)lua_tointeger(L,3);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_SetPageImage(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::SetPageImage(page, image);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxChoicebook::base_GetPageText(size_t nPage) const
	static int _bind_base_GetPageText(lua_State *L) {
		if (!_lg_typecheck_base_GetPageText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxChoicebook::base_GetPageText(size_t nPage) const function, expected prototype:\nwxString wxChoicebook::base_GetPageText(size_t nPage) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxChoicebook::base_GetPageText(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxChoicebook::GetPageText(nPage);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxChoicebook::base_SetPageText(size_t page, const wxString & text)
	static int _bind_base_SetPageText(lua_State *L) {
		if (!_lg_typecheck_base_SetPageText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxChoicebook::base_SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_SetPageText(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxChoicebook::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_GetSelection() const function, expected prototype:\nint wxChoicebook::base_GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_SetSelection(size_t page)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_SetSelection(size_t page) function, expected prototype:\nint wxChoicebook::base_SetSelection(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_SetSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::SetSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxChoicebook::base_ChangeSelection(size_t page)
	static int _bind_base_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_base_ChangeSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxChoicebook::base_ChangeSelection(size_t page) function, expected prototype:\nint wxChoicebook::base_ChangeSelection(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxChoicebook::base_ChangeSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxChoicebook::ChangeSelection(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxChoicebook::base_InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_base_InsertPage(lua_State *L) {
		if (!_lg_typecheck_base_InsertPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxChoicebook::base_InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxChoicebook::base_InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : (int)wxBookCtrlBase::NO_IMAGE;

		wxChoicebook* self=Luna< wxObject >::checkSubType< wxChoicebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxChoicebook::base_InsertPage(size_t, wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxChoicebook::InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxChoicebook* LunaTraits< wxChoicebook >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxChoicebook::_bind_ctor(L);
}

void LunaTraits< wxChoicebook >::_bind_dtor(wxChoicebook* obj) {
	delete obj;
}

const char LunaTraits< wxChoicebook >::className[] = "wxChoicebook";
const char LunaTraits< wxChoicebook >::fullName[] = "wxChoicebook";
const char LunaTraits< wxChoicebook >::moduleName[] = "wx";
const char* LunaTraits< wxChoicebook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxChoicebook >::hash = 84436028;
const int LunaTraits< wxChoicebook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxChoicebook >::methods[] = {
	{"GetChoiceCtrl", &luna_wrapper_wxChoicebook::_bind_GetChoiceCtrl},
	{"GetPageImage", &luna_wrapper_wxChoicebook::_bind_GetPageImage},
	{"SetPageImage", &luna_wrapper_wxChoicebook::_bind_SetPageImage},
	{"GetPageText", &luna_wrapper_wxChoicebook::_bind_GetPageText},
	{"SetPageText", &luna_wrapper_wxChoicebook::_bind_SetPageText},
	{"GetSelection", &luna_wrapper_wxChoicebook::_bind_GetSelection},
	{"SetSelection", &luna_wrapper_wxChoicebook::_bind_SetSelection},
	{"ChangeSelection", &luna_wrapper_wxChoicebook::_bind_ChangeSelection},
	{"InsertPage", &luna_wrapper_wxChoicebook::_bind_InsertPage},
	{"base_GetClassInfo", &luna_wrapper_wxChoicebook::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxChoicebook::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxChoicebook::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxChoicebook::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxChoicebook::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxChoicebook::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxChoicebook::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxChoicebook::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxChoicebook::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxChoicebook::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxChoicebook::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxChoicebook::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxChoicebook::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxChoicebook::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxChoicebook::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxChoicebook::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxChoicebook::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxChoicebook::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxChoicebook::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxChoicebook::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxChoicebook::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxChoicebook::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxChoicebook::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxChoicebook::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxChoicebook::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxChoicebook::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxChoicebook::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxChoicebook::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxChoicebook::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxChoicebook::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxChoicebook::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxChoicebook::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxChoicebook::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxChoicebook::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxChoicebook::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxChoicebook::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxChoicebook::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxChoicebook::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxChoicebook::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxChoicebook::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxChoicebook::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxChoicebook::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxChoicebook::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxChoicebook::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxChoicebook::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxChoicebook::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxChoicebook::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxChoicebook::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxChoicebook::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxChoicebook::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxChoicebook::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxChoicebook::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxChoicebook::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxChoicebook::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxChoicebook::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxChoicebook::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxChoicebook::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxChoicebook::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxChoicebook::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxChoicebook::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxChoicebook::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxChoicebook::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxChoicebook::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxChoicebook::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxChoicebook::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxChoicebook::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxChoicebook::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxChoicebook::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxChoicebook::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxChoicebook::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxChoicebook::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxChoicebook::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxChoicebook::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxChoicebook::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxChoicebook::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxChoicebook::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxChoicebook::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxChoicebook::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxChoicebook::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxChoicebook::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxChoicebook::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxChoicebook::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxChoicebook::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxChoicebook::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxChoicebook::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxChoicebook::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxChoicebook::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxChoicebook::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxChoicebook::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxChoicebook::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxChoicebook::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxChoicebook::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxChoicebook::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxChoicebook::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxChoicebook::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxChoicebook::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxChoicebook::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxChoicebook::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxChoicebook::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxChoicebook::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxChoicebook::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxChoicebook::_bind_base_SetLabel},
	{"base_SetImageList", &luna_wrapper_wxChoicebook::_bind_base_SetImageList},
	{"base_SetPageSize", &luna_wrapper_wxChoicebook::_bind_base_SetPageSize},
	{"base_HitTest", &luna_wrapper_wxChoicebook::_bind_base_HitTest},
	{"base_AddPage", &luna_wrapper_wxChoicebook::_bind_base_AddPage},
	{"base_DeleteAllPages", &luna_wrapper_wxChoicebook::_bind_base_DeleteAllPages},
	{"base_DeletePage", &luna_wrapper_wxChoicebook::_bind_base_DeletePage},
	{"base_RemovePage", &luna_wrapper_wxChoicebook::_bind_base_RemovePage},
	{"base_GetPageCount", &luna_wrapper_wxChoicebook::_bind_base_GetPageCount},
	{"base_GetPageImage", &luna_wrapper_wxChoicebook::_bind_base_GetPageImage},
	{"base_SetPageImage", &luna_wrapper_wxChoicebook::_bind_base_SetPageImage},
	{"base_GetPageText", &luna_wrapper_wxChoicebook::_bind_base_GetPageText},
	{"base_SetPageText", &luna_wrapper_wxChoicebook::_bind_base_SetPageText},
	{"base_GetSelection", &luna_wrapper_wxChoicebook::_bind_base_GetSelection},
	{"base_SetSelection", &luna_wrapper_wxChoicebook::_bind_base_SetSelection},
	{"base_ChangeSelection", &luna_wrapper_wxChoicebook::_bind_base_ChangeSelection},
	{"base_InsertPage", &luna_wrapper_wxChoicebook::_bind_base_InsertPage},
	{"fromVoid", &luna_wrapper_wxChoicebook::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxChoicebook::_bind_asVoid},
	{"getTable", &luna_wrapper_wxChoicebook::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxChoicebook >::converters[] = {
	{"wxObject", &luna_wrapper_wxChoicebook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxChoicebook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxChoicebook >::enumValues[] = {
	{0,0}
};


