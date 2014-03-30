#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiNotebook.h>

class luna_wrapper_wxAuiNotebook {
public:
	typedef Luna< wxAuiNotebook > luna_t;

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

		wxAuiNotebook* self= (wxAuiNotebook*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiNotebook >::push(L,self,false);
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
		//wxAuiNotebook* ptr= dynamic_cast< wxAuiNotebook* >(Luna< wxObject >::check(L,1));
		wxAuiNotebook* ptr= luna_caster< wxObject, wxAuiNotebook >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebook >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxWithImages(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxAuiNotebook* ptr= dynamic_cast< wxAuiNotebook* >(Luna< wxWithImages >::check(L,1));
		wxAuiNotebook* ptr= luna_caster< wxWithImages, wxAuiNotebook >::cast(Luna< wxWithImages >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiNotebook >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetPageImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddPage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AdvanceSelection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ChangeSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_DeleteAllPages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeletePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeightForPageHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTabCtrlHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertPage_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,6))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertPage_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetArtProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24264105)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMeasuringFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNormalFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectedFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTabCtrlHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUniformBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Split(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowWindowMenu(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetPageImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPage(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ChangeSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageImage(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageText(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetTabCtrlHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetUniformBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Split(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiNotebook::wxAuiNotebook()
	static wxAuiNotebook* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiNotebook::wxAuiNotebook() function, expected prototype:\nwxAuiNotebook::wxAuiNotebook()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAuiNotebook();
	}

	// wxAuiNotebook::wxAuiNotebook(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE)
	static wxAuiNotebook* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiNotebook::wxAuiNotebook(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE) function, expected prototype:\nwxAuiNotebook::wxAuiNotebook(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAuiNotebook::wxAuiNotebook function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::wxAuiNotebook function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)::wxAUI_NB_DEFAULT_STYLE;

		return new wxAuiNotebook(parent, id, pos, size, style);
	}

	// wxAuiNotebook::wxAuiNotebook(lua_Table * data)
	static wxAuiNotebook* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiNotebook::wxAuiNotebook(lua_Table * data) function, expected prototype:\nwxAuiNotebook::wxAuiNotebook(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxAuiNotebook(L,NULL);
	}

	// wxAuiNotebook::wxAuiNotebook(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE)
	static wxAuiNotebook* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiNotebook::wxAuiNotebook(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE) function, expected prototype:\nwxAuiNotebook::wxAuiNotebook(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAuiNotebook::wxAuiNotebook function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::wxAuiNotebook function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)::wxAUI_NB_DEFAULT_STYLE;

		return new wrapper_wxAuiNotebook(L,NULL, parent, id, pos, size, style);
	}

	// Overload binder for wxAuiNotebook::wxAuiNotebook
	static wxAuiNotebook* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxAuiNotebook, cannot match any of the overloads for function wxAuiNotebook:\n  wxAuiNotebook()\n  wxAuiNotebook(wxWindow *, int, const wxPoint &, const wxSize &, long)\n  wxAuiNotebook(lua_Table *)\n  wxAuiNotebook(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long)\n");
		return NULL;
	}


	// Function binds:
	// int wxAuiNotebook::GetPageImage(size_t nPage) const
	static int _bind_GetPageImage(lua_State *L) {
		if (!_lg_typecheck_GetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetPageImage(size_t nPage) const function, expected prototype:\nint wxAuiNotebook::GetPageImage(size_t nPage) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetPageImage(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPageImage(nPage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)
	static int _bind_AddPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddPage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nbool wxAuiNotebook::AddPage(wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString caption(lua_tostring(L,3),lua_objlen(L,3));
		bool select=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;
		const wxBitmap* bitmap_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiNotebook::AddPage function");
		}
		const wxBitmap & bitmap=luatop>4 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::AddPage(wxWindow *, const wxString &, bool, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddPage(page, caption, select, bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId)
	static int _bind_AddPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddPage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId) function, expected prototype:\nbool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool select=(bool)(lua_toboolean(L,4)==1);
		int imageId=(int)lua_tointeger(L,5);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::AddPage(wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddPage(page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxAuiNotebook::AddPage
	static int _bind_AddPage(lua_State *L) {
		if (_lg_typecheck_AddPage_overload_1(L)) return _bind_AddPage_overload_1(L);
		if (_lg_typecheck_AddPage_overload_2(L)) return _bind_AddPage_overload_2(L);

		luaL_error(L, "error in function AddPage, cannot match any of the overloads for function AddPage:\n  AddPage(wxWindow *, const wxString &, bool, const wxBitmap &)\n  AddPage(wxWindow *, const wxString &, bool, int)\n");
		return 0;
	}

	// void wxAuiNotebook::AdvanceSelection(bool forward = true)
	static int _bind_AdvanceSelection(lua_State *L) {
		if (!_lg_typecheck_AdvanceSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::AdvanceSelection(bool forward = true) function, expected prototype:\nvoid wxAuiNotebook::AdvanceSelection(bool forward = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool forward=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::AdvanceSelection(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AdvanceSelection(forward);

		return 0;
	}

	// int wxAuiNotebook::ChangeSelection(size_t n)
	static int _bind_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_ChangeSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::ChangeSelection(size_t n) function, expected prototype:\nint wxAuiNotebook::ChangeSelection(size_t n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::ChangeSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ChangeSelection(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) function, expected prototype:\nbool wxAuiNotebook::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxAuiNotebook::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::Create(wxWindow *, int, const wxPoint &, const wxSize &, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::DeleteAllPages()
	static int _bind_DeleteAllPages(lua_State *L) {
		if (!_lg_typecheck_DeleteAllPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::DeleteAllPages() function, expected prototype:\nbool wxAuiNotebook::DeleteAllPages()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::DeleteAllPages(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteAllPages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::DeletePage(size_t page)
	static int _bind_DeletePage(lua_State *L) {
		if (!_lg_typecheck_DeletePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::DeletePage(size_t page) function, expected prototype:\nbool wxAuiNotebook::DeletePage(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::DeletePage(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeletePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxAuiTabArt * wxAuiNotebook::GetArtProvider() const
	static int _bind_GetArtProvider(lua_State *L) {
		if (!_lg_typecheck_GetArtProvider(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiTabArt * wxAuiNotebook::GetArtProvider() const function, expected prototype:\nwxAuiTabArt * wxAuiNotebook::GetArtProvider() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiTabArt * wxAuiNotebook::GetArtProvider() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAuiTabArt * lret = self->GetArtProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiTabArt >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxAuiNotebook::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxAuiNotebook::GetCurrentPage() const function, expected prototype:\nwxWindow * wxAuiNotebook::GetCurrentPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxAuiNotebook::GetCurrentPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// int wxAuiNotebook::GetHeightForPageHeight(int pageHeight)
	static int _bind_GetHeightForPageHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeightForPageHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetHeightForPageHeight(int pageHeight) function, expected prototype:\nint wxAuiNotebook::GetHeightForPageHeight(int pageHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pageHeight=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetHeightForPageHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeightForPageHeight(pageHeight);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxWindow * wxAuiNotebook::GetPage(size_t page_idx) const
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxAuiNotebook::GetPage(size_t page_idx) const function, expected prototype:\nwxWindow * wxAuiNotebook::GetPage(size_t page_idx) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page_idx=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxAuiNotebook::GetPage(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetPage(page_idx);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxBitmap wxAuiNotebook::GetPageBitmap(size_t page) const
	static int _bind_GetPageBitmap(lua_State *L) {
		if (!_lg_typecheck_GetPageBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAuiNotebook::GetPageBitmap(size_t page) const function, expected prototype:\nwxBitmap wxAuiNotebook::GetPageBitmap(size_t page) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAuiNotebook::GetPageBitmap(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetPageBitmap(page);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// size_t wxAuiNotebook::GetPageCount() const
	static int _bind_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_GetPageCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxAuiNotebook::GetPageCount() const function, expected prototype:\nsize_t wxAuiNotebook::GetPageCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxAuiNotebook::GetPageCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::GetPageIndex(wxWindow * page_wnd) const
	static int _bind_GetPageIndex(lua_State *L) {
		if (!_lg_typecheck_GetPageIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetPageIndex(wxWindow * page_wnd) const function, expected prototype:\nint wxAuiNotebook::GetPageIndex(wxWindow * page_wnd) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* page_wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetPageIndex(wxWindow *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPageIndex(page_wnd);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxAuiNotebook::GetPageText(size_t page) const
	static int _bind_GetPageText(lua_State *L) {
		if (!_lg_typecheck_GetPageText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAuiNotebook::GetPageText(size_t page) const function, expected prototype:\nwxString wxAuiNotebook::GetPageText(size_t page) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAuiNotebook::GetPageText(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPageText(page);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxAuiNotebook::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetSelection() const function, expected prototype:\nint wxAuiNotebook::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::GetTabCtrlHeight() const
	static int _bind_GetTabCtrlHeight(lua_State *L) {
		if (!_lg_typecheck_GetTabCtrlHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::GetTabCtrlHeight() const function, expected prototype:\nint wxAuiNotebook::GetTabCtrlHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::GetTabCtrlHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTabCtrlHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::InsertPage(size_t page_idx, wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)
	static int _bind_InsertPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertPage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::InsertPage(size_t page_idx, wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap) function, expected prototype:\nbool wxAuiNotebook::InsertPage(size_t page_idx, wxWindow * page, const wxString & caption, bool select = false, const wxBitmap & bitmap = wxNullBitmap)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t page_idx=(size_t)lua_tointeger(L,2);
		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString caption(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		const wxBitmap* bitmap_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,6)) : NULL;
		if( luatop>5 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiNotebook::InsertPage function");
		}
		const wxBitmap & bitmap=luatop>5 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::InsertPage(size_t, wxWindow *, const wxString &, bool, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertPage(page_idx, page, caption, select, bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_InsertPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertPage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : (int)wxBookCtrlBase::NO_IMAGE;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::InsertPage(size_t, wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxAuiNotebook::InsertPage
	static int _bind_InsertPage(lua_State *L) {
		if (_lg_typecheck_InsertPage_overload_1(L)) return _bind_InsertPage_overload_1(L);
		if (_lg_typecheck_InsertPage_overload_2(L)) return _bind_InsertPage_overload_2(L);

		luaL_error(L, "error in function InsertPage, cannot match any of the overloads for function InsertPage:\n  InsertPage(size_t, wxWindow *, const wxString &, bool, const wxBitmap &)\n  InsertPage(size_t, wxWindow *, const wxString &, bool, int)\n");
		return 0;
	}

	// bool wxAuiNotebook::RemovePage(size_t page)
	static int _bind_RemovePage(lua_State *L) {
		if (!_lg_typecheck_RemovePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::RemovePage(size_t page) function, expected prototype:\nbool wxAuiNotebook::RemovePage(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::RemovePage(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::SetArtProvider(wxAuiTabArt * art)
	static int _bind_SetArtProvider(lua_State *L) {
		if (!_lg_typecheck_SetArtProvider(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetArtProvider(wxAuiTabArt * art) function, expected prototype:\nvoid wxAuiNotebook::SetArtProvider(wxAuiTabArt * art)\nClass arguments details:\narg 1 ID = 24264105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiTabArt* art=(Luna< wxAuiTabArt >::check(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetArtProvider(wxAuiTabArt *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetArtProvider(art);

		return 0;
	}

	// bool wxAuiNotebook::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetFont(const wxFont & font) function, expected prototype:\nbool wxAuiNotebook::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::SetMeasuringFont(const wxFont & font)
	static int _bind_SetMeasuringFont(lua_State *L) {
		if (!_lg_typecheck_SetMeasuringFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetMeasuringFont(const wxFont & font) function, expected prototype:\nvoid wxAuiNotebook::SetMeasuringFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetMeasuringFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetMeasuringFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMeasuringFont(font);

		return 0;
	}

	// void wxAuiNotebook::SetNormalFont(const wxFont & font)
	static int _bind_SetNormalFont(lua_State *L) {
		if (!_lg_typecheck_SetNormalFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetNormalFont(const wxFont & font) function, expected prototype:\nvoid wxAuiNotebook::SetNormalFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetNormalFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetNormalFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNormalFont(font);

		return 0;
	}

	// bool wxAuiNotebook::SetPageBitmap(size_t page, const wxBitmap & bitmap)
	static int _bind_SetPageBitmap(lua_State *L) {
		if (!_lg_typecheck_SetPageBitmap(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetPageBitmap(size_t page, const wxBitmap & bitmap) function, expected prototype:\nbool wxAuiNotebook::SetPageBitmap(size_t page, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAuiNotebook::SetPageBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetPageBitmap(size_t, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPageBitmap(page, bitmap);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::SetPageImage(size_t n, int imageId)
	static int _bind_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_SetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetPageImage(size_t n, int imageId) function, expected prototype:\nbool wxAuiNotebook::SetPageImage(size_t n, int imageId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t n=(size_t)lua_tointeger(L,2);
		int imageId=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetPageImage(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPageImage(n, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::SetPageText(size_t page, const wxString & text)
	static int _bind_SetPageText(lua_State *L) {
		if (!_lg_typecheck_SetPageText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxAuiNotebook::SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::SetPageText(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::SetSelectedFont(const wxFont & font)
	static int _bind_SetSelectedFont(lua_State *L) {
		if (!_lg_typecheck_SetSelectedFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetSelectedFont(const wxFont & font) function, expected prototype:\nvoid wxAuiNotebook::SetSelectedFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::SetSelectedFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetSelectedFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectedFont(font);

		return 0;
	}

	// int wxAuiNotebook::SetSelection(size_t new_page)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::SetSelection(size_t new_page) function, expected prototype:\nint wxAuiNotebook::SetSelection(size_t new_page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t new_page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::SetSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->SetSelection(new_page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiNotebook::SetTabCtrlHeight(int height)
	static int _bind_SetTabCtrlHeight(lua_State *L) {
		if (!_lg_typecheck_SetTabCtrlHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetTabCtrlHeight(int height) function, expected prototype:\nvoid wxAuiNotebook::SetTabCtrlHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetTabCtrlHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTabCtrlHeight(height);

		return 0;
	}

	// void wxAuiNotebook::SetUniformBitmapSize(const wxSize & size)
	static int _bind_SetUniformBitmapSize(lua_State *L) {
		if (!_lg_typecheck_SetUniformBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::SetUniformBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::SetUniformBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::SetUniformBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::SetUniformBitmapSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUniformBitmapSize(size);

		return 0;
	}

	// void wxAuiNotebook::Split(size_t page, int direction)
	static int _bind_Split(lua_State *L) {
		if (!_lg_typecheck_Split(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::Split(size_t page, int direction) function, expected prototype:\nvoid wxAuiNotebook::Split(size_t page, int direction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int direction=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::Split(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Split(page, direction);

		return 0;
	}

	// bool wxAuiNotebook::ShowWindowMenu()
	static int _bind_ShowWindowMenu(lua_State *L) {
		if (!_lg_typecheck_ShowWindowMenu(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::ShowWindowMenu() function, expected prototype:\nbool wxAuiNotebook::ShowWindowMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::ShowWindowMenu(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShowWindowMenu();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxAuiNotebook::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAuiNotebook::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAuiNotebook::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAuiNotebook::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxAuiNotebook::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxAuiNotebook::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_AcceptsFocus() const function, expected prototype:\nbool wxAuiNotebook::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxAuiNotebook::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxAuiNotebook::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_HasFocus() const function, expected prototype:\nbool wxAuiNotebook::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxAuiNotebook::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetCanFocus(canFocus);

		return 0;
	}

	// void wxAuiNotebook::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetFocus() function, expected prototype:\nvoid wxAuiNotebook::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetFocus();

		return 0;
	}

	// void wxAuiNotebook::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetFocusFromKbd() function, expected prototype:\nvoid wxAuiNotebook::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetFocusFromKbd();

		return 0;
	}

	// void wxAuiNotebook::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxAuiNotebook::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::AddChild(child);

		return 0;
	}

	// void wxAuiNotebook::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxAuiNotebook::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::RemoveChild(child);

		return 0;
	}

	// bool wxAuiNotebook::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxAuiNotebook::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxAuiNotebook::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxAuiNotebook::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxAuiNotebook::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxAuiNotebook::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxAuiNotebook::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxAuiNotebook::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_ScrollLines(int lines) function, expected prototype:\nbool wxAuiNotebook::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_ScrollPages(int pages) function, expected prototype:\nbool wxAuiNotebook::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxAuiNotebook::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxAuiNotebook::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxAuiNotebook::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxAuiNotebook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxAuiNotebook::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxAuiNotebook::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxAuiNotebook::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxAuiNotebook::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxAuiNotebook::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Fit() function, expected prototype:\nvoid wxAuiNotebook::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Fit();

		return 0;
	}

	// void wxAuiNotebook::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_FitInside() function, expected prototype:\nvoid wxAuiNotebook::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::FitInside();

		return 0;
	}

	// wxSize wxAuiNotebook::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetMaxSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetMinClientSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetMinSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiNotebook::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiNotebook::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxAuiNotebook::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiNotebook::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiNotebook::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAuiNotebook::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxAuiNotebook::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxAuiNotebook::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SendSizeEvent(flags);

		return 0;
	}

	// void wxAuiNotebook::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetMaxClientSize(size);

		return 0;
	}

	// void wxAuiNotebook::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetMaxSize(size);

		return 0;
	}

	// void wxAuiNotebook::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetMinClientSize(size);

		return 0;
	}

	// void wxAuiNotebook::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetMinSize(size);

		return 0;
	}

	// void wxAuiNotebook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxAuiNotebook::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxAuiNotebook::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxAuiNotebook::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxAuiNotebook::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxAuiNotebook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxAuiNotebook::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxAuiNotebook::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxAuiNotebook::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxAuiNotebook::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxAuiNotebook::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxAuiNotebook::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxAuiNotebook::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxAuiNotebook::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_ClearBackground() function, expected prototype:\nvoid wxAuiNotebook::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxAuiNotebook::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxAuiNotebook::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxAuiNotebook::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxAuiNotebook::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxAuiNotebook::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetCharHeight() const function, expected prototype:\nint wxAuiNotebook::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetCharWidth() const function, expected prototype:\nint wxAuiNotebook::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxAuiNotebook::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxAuiNotebook::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxAuiNotebook::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxAuiNotebook::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxAuiNotebook::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxAuiNotebook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxAuiNotebook::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxAuiNotebook::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Update() function, expected prototype:\nvoid wxAuiNotebook::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Update();

		return 0;
	}

	// bool wxAuiNotebook::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxAuiNotebook::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_ShouldInheritColours() const function, expected prototype:\nbool wxAuiNotebook::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxAuiNotebook::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxAuiNotebook::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_GetThemeEnabled() const function, expected prototype:\nbool wxAuiNotebook::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_CanSetTransparent() function, expected prototype:\nbool wxAuiNotebook::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxAuiNotebook::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAuiNotebook::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetNextHandler(handler);

		return 0;
	}

	// void wxAuiNotebook::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAuiNotebook::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetPreviousHandler(handler);

		return 0;
	}

	// long wxAuiNotebook::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxAuiNotebook::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxAuiNotebook::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxAuiNotebook::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxAuiNotebook::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiNotebook::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxAuiNotebook::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxAuiNotebook::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxAuiNotebook::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxAuiNotebook::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Lower() function, expected prototype:\nvoid wxAuiNotebook::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Lower();

		return 0;
	}

	// void wxAuiNotebook::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Raise() function, expected prototype:\nvoid wxAuiNotebook::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Raise();

		return 0;
	}

	// bool wxAuiNotebook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxAuiNotebook::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_IsShown() const function, expected prototype:\nbool wxAuiNotebook::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_IsShownOnScreen() const function, expected prototype:\nbool wxAuiNotebook::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_Enable(bool enable = true) function, expected prototype:\nbool wxAuiNotebook::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_Show(bool show = true) function, expected prototype:\nbool wxAuiNotebook::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxAuiNotebook::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxAuiNotebook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAuiNotebook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxAuiNotebook::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxAuiNotebook::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAuiNotebook::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAuiNotebook::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxAuiNotebook::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxAuiNotebook::base_GetValidator() function, expected prototype:\nwxValidator * wxAuiNotebook::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxAuiNotebook::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxAuiNotebook::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxAuiNotebook::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxAuiNotebook::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxAuiNotebook::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetValidator(validator);

		return 0;
	}

	// bool wxAuiNotebook::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_TransferDataFromWindow() function, expected prototype:\nbool wxAuiNotebook::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_TransferDataToWindow() function, expected prototype:\nbool wxAuiNotebook::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_Validate() function, expected prototype:\nbool wxAuiNotebook::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxAuiNotebook::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxAuiNotebook::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxAuiNotebook::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxAuiNotebook::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxAuiNotebook::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxAuiNotebook::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAuiNotebook::base_GetName() const function, expected prototype:\nwxString wxAuiNotebook::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAuiNotebook::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAuiNotebook::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiNotebook::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxAuiNotebook::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetLayoutDirection(dir);

		return 0;
	}

	// void wxAuiNotebook::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetName(const wxString & name) function, expected prototype:\nvoid wxAuiNotebook::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetName(name);

		return 0;
	}

	// void wxAuiNotebook::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxAuiNotebook::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxAuiNotebook::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxAuiNotebook::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_Destroy() function, expected prototype:\nbool wxAuiNotebook::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxAuiNotebook::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxAuiNotebook::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxAuiNotebook::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxAuiNotebook::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxAuiNotebook::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxAuiNotebook::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxAuiNotebook::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetDropTarget(target);

		return 0;
	}

	// void wxAuiNotebook::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxAuiNotebook::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxAuiNotebook::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_Layout() function, expected prototype:\nbool wxAuiNotebook::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_HasCapture() const function, expected prototype:\nbool wxAuiNotebook::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxAuiNotebook::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxAuiNotebook::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxAuiNotebook::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::WarpPointer(x, y);

		return 0;
	}

	// void wxAuiNotebook::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxAuiNotebook::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAuiNotebook::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxAuiNotebook::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxAuiNotebook::base_GetHandle() const function, expected prototype:\nHWND wxAuiNotebook::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxAuiNotebook::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxAuiNotebook::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxAuiNotebook::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_HasMultiplePages() const function, expected prototype:\nbool wxAuiNotebook::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_InheritAttributes() function, expected prototype:\nvoid wxAuiNotebook::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::InheritAttributes();

		return 0;
	}

	// void wxAuiNotebook::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_InitDialog() function, expected prototype:\nvoid wxAuiNotebook::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::InitDialog();

		return 0;
	}

	// bool wxAuiNotebook::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_IsRetained() const function, expected prototype:\nbool wxAuiNotebook::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_IsTopLevel() const function, expected prototype:\nbool wxAuiNotebook::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxAuiNotebook::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::MakeModal(modal);

		return 0;
	}

	// void wxAuiNotebook::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_OnInternalIdle() function, expected prototype:\nvoid wxAuiNotebook::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::OnInternalIdle();

		return 0;
	}

	// bool wxAuiNotebook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxAuiNotebook::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxAuiNotebook::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAuiNotebook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxAuiNotebook::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::UpdateWindowUI(flags);

		return 0;
	}

	// void wxAuiNotebook::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxAuiNotebook::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAuiNotebook::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Command(event);

		return 0;
	}

	// wxString wxAuiNotebook::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAuiNotebook::base_GetLabel() const function, expected prototype:\nwxString wxAuiNotebook::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAuiNotebook::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAuiNotebook::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAuiNotebook::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxAuiNotebook::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetLabel(label);

		return 0;
	}

	// void wxAuiNotebook::base_SetImageList(wxImageList * imageList)
	static int _bind_base_SetImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxAuiNotebook::base_SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetImageList(imageList);

		return 0;
	}

	// void wxAuiNotebook::base_SetPageSize(const wxSize & size)
	static int _bind_base_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetPageSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::base_SetPageSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_SetPageSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetPageSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetPageSize(size);

		return 0;
	}

	// int wxAuiNotebook::base_HitTest(const wxPoint & pt, long * flags = NULL) const
	static int _bind_base_HitTest(lua_State *L) {
		if (!_lg_typecheck_base_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_HitTest(const wxPoint & pt, long * flags = NULL) const function, expected prototype:\nint wxAuiNotebook::base_HitTest(const wxPoint & pt, long * flags = NULL) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxAuiNotebook::base_HitTest function");
		}
		const wxPoint & pt=*pt_ptr;
		long* flags=luatop>2 ? (long*)Luna< void >::check(L,3) : (long*)NULL;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_HitTest(const wxPoint &, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::HitTest(pt, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAuiNotebook::base_GetPageImage(size_t nPage) const
	static int _bind_base_GetPageImage(lua_State *L) {
		if (!_lg_typecheck_base_GetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetPageImage(size_t nPage) const function, expected prototype:\nint wxAuiNotebook::base_GetPageImage(size_t nPage) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t nPage=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetPageImage(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetPageImage(nPage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::base_AddPage(wxWindow * page, const wxString & text, bool select, int imageId)
	static int _bind_base_AddPage(lua_State *L) {
		if (!_lg_typecheck_base_AddPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_AddPage(wxWindow * page, const wxString & text, bool select, int imageId) function, expected prototype:\nbool wxAuiNotebook::base_AddPage(wxWindow * page, const wxString & text, bool select, int imageId)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		bool select=(bool)(lua_toboolean(L,4)==1);
		int imageId=(int)lua_tointeger(L,5);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_AddPage(wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::AddPage(page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAuiNotebook::base_ChangeSelection(size_t n)
	static int _bind_base_ChangeSelection(lua_State *L) {
		if (!_lg_typecheck_base_ChangeSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_ChangeSelection(size_t n) function, expected prototype:\nint wxAuiNotebook::base_ChangeSelection(size_t n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t n=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_ChangeSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::ChangeSelection(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::base_DeleteAllPages()
	static int _bind_base_DeleteAllPages(lua_State *L) {
		if (!_lg_typecheck_base_DeleteAllPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_DeleteAllPages() function, expected prototype:\nbool wxAuiNotebook::base_DeleteAllPages()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_DeleteAllPages(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::DeleteAllPages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_DeletePage(size_t page)
	static int _bind_base_DeletePage(lua_State *L) {
		if (!_lg_typecheck_base_DeletePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_DeletePage(size_t page) function, expected prototype:\nbool wxAuiNotebook::base_DeletePage(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_DeletePage(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::DeletePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxAuiNotebook::base_GetPageCount() const
	static int _bind_base_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_base_GetPageCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxAuiNotebook::base_GetPageCount() const function, expected prototype:\nsize_t wxAuiNotebook::base_GetPageCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxAuiNotebook::base_GetPageCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxAuiNotebook::GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxAuiNotebook::base_GetPageText(size_t page) const
	static int _bind_base_GetPageText(lua_State *L) {
		if (!_lg_typecheck_base_GetPageText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAuiNotebook::base_GetPageText(size_t page) const function, expected prototype:\nwxString wxAuiNotebook::base_GetPageText(size_t page) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAuiNotebook::base_GetPageText(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAuiNotebook::GetPageText(page);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxAuiNotebook::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_GetSelection() const function, expected prototype:\nint wxAuiNotebook::base_GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::GetSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAuiNotebook::base_InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	static int _bind_base_InsertPage(lua_State *L) {
		if (!_lg_typecheck_base_InsertPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) function, expected prototype:\nbool wxAuiNotebook::base_InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* page=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		bool select=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		int imageId=luatop>5 ? (int)lua_tointeger(L,6) : (int)wxBookCtrlBase::NO_IMAGE;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_InsertPage(size_t, wxWindow *, const wxString &, bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::InsertPage(index, page, text, select, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_RemovePage(size_t page)
	static int _bind_base_RemovePage(lua_State *L) {
		if (!_lg_typecheck_base_RemovePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_RemovePage(size_t page) function, expected prototype:\nbool wxAuiNotebook::base_RemovePage(size_t page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_RemovePage(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxAuiNotebook::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiNotebook::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_SetPageImage(size_t n, int imageId)
	static int _bind_base_SetPageImage(lua_State *L) {
		if (!_lg_typecheck_base_SetPageImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_SetPageImage(size_t n, int imageId) function, expected prototype:\nbool wxAuiNotebook::base_SetPageImage(size_t n, int imageId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t n=(size_t)lua_tointeger(L,2);
		int imageId=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_SetPageImage(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::SetPageImage(n, imageId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAuiNotebook::base_SetPageText(size_t page, const wxString & text)
	static int _bind_base_SetPageText(lua_State *L) {
		if (!_lg_typecheck_base_SetPageText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAuiNotebook::base_SetPageText(size_t page, const wxString & text) function, expected prototype:\nbool wxAuiNotebook::base_SetPageText(size_t page, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAuiNotebook::base_SetPageText(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAuiNotebook::SetPageText(page, text);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxAuiNotebook::base_SetSelection(size_t new_page)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiNotebook::base_SetSelection(size_t new_page) function, expected prototype:\nint wxAuiNotebook::base_SetSelection(size_t new_page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t new_page=(size_t)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiNotebook::base_SetSelection(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiNotebook::SetSelection(new_page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiNotebook::base_SetTabCtrlHeight(int height)
	static int _bind_base_SetTabCtrlHeight(lua_State *L) {
		if (!_lg_typecheck_base_SetTabCtrlHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetTabCtrlHeight(int height) function, expected prototype:\nvoid wxAuiNotebook::base_SetTabCtrlHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetTabCtrlHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetTabCtrlHeight(height);

		return 0;
	}

	// void wxAuiNotebook::base_SetUniformBitmapSize(const wxSize & size)
	static int _bind_base_SetUniformBitmapSize(lua_State *L) {
		if (!_lg_typecheck_base_SetUniformBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_SetUniformBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxAuiNotebook::base_SetUniformBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAuiNotebook::base_SetUniformBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_SetUniformBitmapSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::SetUniformBitmapSize(size);

		return 0;
	}

	// void wxAuiNotebook::base_Split(size_t page, int direction)
	static int _bind_base_Split(lua_State *L) {
		if (!_lg_typecheck_base_Split(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiNotebook::base_Split(size_t page, int direction) function, expected prototype:\nvoid wxAuiNotebook::base_Split(size_t page, int direction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t page=(size_t)lua_tointeger(L,2);
		int direction=(int)lua_tointeger(L,3);

		wxAuiNotebook* self=Luna< wxObject >::checkSubType< wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiNotebook::base_Split(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiNotebook::Split(page, direction);

		return 0;
	}


	// Operator binds:

};

wxAuiNotebook* LunaTraits< wxAuiNotebook >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiNotebook::_bind_ctor(L);
}

void LunaTraits< wxAuiNotebook >::_bind_dtor(wxAuiNotebook* obj) {
	delete obj;
}

const char LunaTraits< wxAuiNotebook >::className[] = "wxAuiNotebook";
const char LunaTraits< wxAuiNotebook >::fullName[] = "wxAuiNotebook";
const char LunaTraits< wxAuiNotebook >::moduleName[] = "wx";
const char* LunaTraits< wxAuiNotebook >::parents[] = {"wx.wxBookCtrlBase", 0};
const int LunaTraits< wxAuiNotebook >::hash = 15278854;
const int LunaTraits< wxAuiNotebook >::uniqueIDs[] = {56813631, 53506535, 14187710,0};

luna_RegType LunaTraits< wxAuiNotebook >::methods[] = {
	{"GetPageImage", &luna_wrapper_wxAuiNotebook::_bind_GetPageImage},
	{"AddPage", &luna_wrapper_wxAuiNotebook::_bind_AddPage},
	{"AdvanceSelection", &luna_wrapper_wxAuiNotebook::_bind_AdvanceSelection},
	{"ChangeSelection", &luna_wrapper_wxAuiNotebook::_bind_ChangeSelection},
	{"Create", &luna_wrapper_wxAuiNotebook::_bind_Create},
	{"DeleteAllPages", &luna_wrapper_wxAuiNotebook::_bind_DeleteAllPages},
	{"DeletePage", &luna_wrapper_wxAuiNotebook::_bind_DeletePage},
	{"GetArtProvider", &luna_wrapper_wxAuiNotebook::_bind_GetArtProvider},
	{"GetCurrentPage", &luna_wrapper_wxAuiNotebook::_bind_GetCurrentPage},
	{"GetHeightForPageHeight", &luna_wrapper_wxAuiNotebook::_bind_GetHeightForPageHeight},
	{"GetPage", &luna_wrapper_wxAuiNotebook::_bind_GetPage},
	{"GetPageBitmap", &luna_wrapper_wxAuiNotebook::_bind_GetPageBitmap},
	{"GetPageCount", &luna_wrapper_wxAuiNotebook::_bind_GetPageCount},
	{"GetPageIndex", &luna_wrapper_wxAuiNotebook::_bind_GetPageIndex},
	{"GetPageText", &luna_wrapper_wxAuiNotebook::_bind_GetPageText},
	{"GetSelection", &luna_wrapper_wxAuiNotebook::_bind_GetSelection},
	{"GetTabCtrlHeight", &luna_wrapper_wxAuiNotebook::_bind_GetTabCtrlHeight},
	{"InsertPage", &luna_wrapper_wxAuiNotebook::_bind_InsertPage},
	{"RemovePage", &luna_wrapper_wxAuiNotebook::_bind_RemovePage},
	{"SetArtProvider", &luna_wrapper_wxAuiNotebook::_bind_SetArtProvider},
	{"SetFont", &luna_wrapper_wxAuiNotebook::_bind_SetFont},
	{"SetMeasuringFont", &luna_wrapper_wxAuiNotebook::_bind_SetMeasuringFont},
	{"SetNormalFont", &luna_wrapper_wxAuiNotebook::_bind_SetNormalFont},
	{"SetPageBitmap", &luna_wrapper_wxAuiNotebook::_bind_SetPageBitmap},
	{"SetPageImage", &luna_wrapper_wxAuiNotebook::_bind_SetPageImage},
	{"SetPageText", &luna_wrapper_wxAuiNotebook::_bind_SetPageText},
	{"SetSelectedFont", &luna_wrapper_wxAuiNotebook::_bind_SetSelectedFont},
	{"SetSelection", &luna_wrapper_wxAuiNotebook::_bind_SetSelection},
	{"SetTabCtrlHeight", &luna_wrapper_wxAuiNotebook::_bind_SetTabCtrlHeight},
	{"SetUniformBitmapSize", &luna_wrapper_wxAuiNotebook::_bind_SetUniformBitmapSize},
	{"Split", &luna_wrapper_wxAuiNotebook::_bind_Split},
	{"ShowWindowMenu", &luna_wrapper_wxAuiNotebook::_bind_ShowWindowMenu},
	{"base_GetClassInfo", &luna_wrapper_wxAuiNotebook::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxAuiNotebook::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxAuiNotebook::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxAuiNotebook::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxAuiNotebook::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxAuiNotebook::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxAuiNotebook::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxAuiNotebook::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxAuiNotebook::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxAuiNotebook::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxAuiNotebook::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxAuiNotebook::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxAuiNotebook::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxAuiNotebook::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxAuiNotebook::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxAuiNotebook::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxAuiNotebook::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxAuiNotebook::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxAuiNotebook::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxAuiNotebook::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxAuiNotebook::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxAuiNotebook::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxAuiNotebook::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxAuiNotebook::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxAuiNotebook::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxAuiNotebook::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxAuiNotebook::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxAuiNotebook::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxAuiNotebook::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxAuiNotebook::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxAuiNotebook::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxAuiNotebook::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxAuiNotebook::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxAuiNotebook::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxAuiNotebook::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxAuiNotebook::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxAuiNotebook::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxAuiNotebook::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxAuiNotebook::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxAuiNotebook::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxAuiNotebook::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxAuiNotebook::_bind_base_SetBackgroundStyle},
	{"base_ShouldInheritColours", &luna_wrapper_wxAuiNotebook::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxAuiNotebook::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxAuiNotebook::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxAuiNotebook::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxAuiNotebook::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxAuiNotebook::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxAuiNotebook::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxAuiNotebook::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxAuiNotebook::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxAuiNotebook::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxAuiNotebook::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxAuiNotebook::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxAuiNotebook::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxAuiNotebook::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxAuiNotebook::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxAuiNotebook::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxAuiNotebook::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxAuiNotebook::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxAuiNotebook::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxAuiNotebook::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxAuiNotebook::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxAuiNotebook::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxAuiNotebook::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxAuiNotebook::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxAuiNotebook::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxAuiNotebook::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxAuiNotebook::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxAuiNotebook::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxAuiNotebook::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxAuiNotebook::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxAuiNotebook::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxAuiNotebook::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxAuiNotebook::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxAuiNotebook::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxAuiNotebook::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxAuiNotebook::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxAuiNotebook::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxAuiNotebook::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxAuiNotebook::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxAuiNotebook::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxAuiNotebook::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxAuiNotebook::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxAuiNotebook::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxAuiNotebook::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxAuiNotebook::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxAuiNotebook::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxAuiNotebook::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxAuiNotebook::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxAuiNotebook::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxAuiNotebook::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxAuiNotebook::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxAuiNotebook::_bind_base_SetLabel},
	{"base_SetImageList", &luna_wrapper_wxAuiNotebook::_bind_base_SetImageList},
	{"base_SetPageSize", &luna_wrapper_wxAuiNotebook::_bind_base_SetPageSize},
	{"base_HitTest", &luna_wrapper_wxAuiNotebook::_bind_base_HitTest},
	{"base_GetPageImage", &luna_wrapper_wxAuiNotebook::_bind_base_GetPageImage},
	{"base_AddPage", &luna_wrapper_wxAuiNotebook::_bind_base_AddPage},
	{"base_ChangeSelection", &luna_wrapper_wxAuiNotebook::_bind_base_ChangeSelection},
	{"base_DeleteAllPages", &luna_wrapper_wxAuiNotebook::_bind_base_DeleteAllPages},
	{"base_DeletePage", &luna_wrapper_wxAuiNotebook::_bind_base_DeletePage},
	{"base_GetPageCount", &luna_wrapper_wxAuiNotebook::_bind_base_GetPageCount},
	{"base_GetPageText", &luna_wrapper_wxAuiNotebook::_bind_base_GetPageText},
	{"base_GetSelection", &luna_wrapper_wxAuiNotebook::_bind_base_GetSelection},
	{"base_InsertPage", &luna_wrapper_wxAuiNotebook::_bind_base_InsertPage},
	{"base_RemovePage", &luna_wrapper_wxAuiNotebook::_bind_base_RemovePage},
	{"base_SetFont", &luna_wrapper_wxAuiNotebook::_bind_base_SetFont},
	{"base_SetPageImage", &luna_wrapper_wxAuiNotebook::_bind_base_SetPageImage},
	{"base_SetPageText", &luna_wrapper_wxAuiNotebook::_bind_base_SetPageText},
	{"base_SetSelection", &luna_wrapper_wxAuiNotebook::_bind_base_SetSelection},
	{"base_SetTabCtrlHeight", &luna_wrapper_wxAuiNotebook::_bind_base_SetTabCtrlHeight},
	{"base_SetUniformBitmapSize", &luna_wrapper_wxAuiNotebook::_bind_base_SetUniformBitmapSize},
	{"base_Split", &luna_wrapper_wxAuiNotebook::_bind_base_Split},
	{"fromVoid", &luna_wrapper_wxAuiNotebook::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiNotebook::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAuiNotebook::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiNotebook >::converters[] = {
	{"wxObject", &luna_wrapper_wxAuiNotebook::_cast_from_wxObject},
	{"wxWithImages", &luna_wrapper_wxAuiNotebook::_cast_from_wxWithImages},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiNotebook >::enumValues[] = {
	{0,0}
};


