#include <plug_common.h>

#include <luna/wrappers/wrapper_wxToolBar.h>

class luna_wrapper_wxToolBar {
public:
	typedef Luna< wxToolBar > luna_t;

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

		wxToolBar* self= (wxToolBar*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxToolBar >::push(L,self,false);
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
		//wxToolBar* ptr= dynamic_cast< wxToolBar* >(Luna< wxObject >::check(L,1));
		wxToolBar* ptr= luna_caster< wxObject, wxToolBar >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxToolBar >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_AddCheckTool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddRadioTool(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddStretchableSpace(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49669417)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxToolBarToolBase >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddTool_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,5))) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !Luna<void>::has_uniqueid(L,9,56813631)) ) return false;
		if( luatop>8 && (lua_isnil(L,9)==0 && !(Luna< wxObject >::check(L,9)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearTools(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteToolByPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindToolForPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolByPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertStretchableSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertTool_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,5))) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertTool_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,49669417)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxToolBarToolBase >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnLeftClick(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMouseEnter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnRightClick(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDropdownMenu(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolClientData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolDisabledBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolNormalBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_AddControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49669417)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClearTools(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeleteTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteToolByPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnableTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindToolForPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetToolClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetToolPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetToolState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnLeftClick(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnMouseEnter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnRightClick(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Realize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RemoveTool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMargins(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolBitmapSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolClientData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolDisabledBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolLongHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolNormalBitmap(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolPacking(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolSeparation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolShortHelp(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ToggleTool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxToolBar::wxToolBar()
	static wxToolBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar::wxToolBar() function, expected prototype:\nwxToolBar::wxToolBar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxToolBar();
	}

	// wxToolBar::wxToolBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr)
	static wxToolBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar::wxToolBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar::wxToolBar(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxToolBar::wxToolBar function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::wxToolBar function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)::wxTB_HORIZONTAL;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxToolBar(parent, id, pos, size, style, name);
	}

	// wxToolBar::wxToolBar(lua_Table * data)
	static wxToolBar* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar::wxToolBar(lua_Table * data) function, expected prototype:\nwxToolBar::wxToolBar(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxToolBar(L,NULL);
	}

	// wxToolBar::wxToolBar(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr)
	static wxToolBar* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar::wxToolBar(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar::wxToolBar(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxToolBar::wxToolBar function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::wxToolBar function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)::wxTB_HORIZONTAL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxToolBar(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxToolBar::wxToolBar
	static wxToolBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxToolBar, cannot match any of the overloads for function wxToolBar:\n  wxToolBar()\n  wxToolBar(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxToolBar(lua_Table *)\n  wxToolBar(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxToolBarToolBase * wxToolBar::AddCheckTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)
	static int _bind_AddCheckTool(lua_State *L) {
		if (!_lg_typecheck_AddCheckTool(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddCheckTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddCheckTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap1_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap1 in wxToolBar::AddCheckTool function");
		}
		const wxBitmap & bitmap1=*bitmap1_ptr;
		const wxBitmap* bmpDisabled_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxToolBar::AddCheckTool function");
		}
		const wxBitmap & bmpDisabled=luatop>4 ? *bmpDisabled_ptr : (const wxBitmap&)wxNullBitmap;
		wxString shortHelp(lua_tostring(L,6),lua_objlen(L,6));
		wxString longHelp(lua_tostring(L,7),lua_objlen(L,7));
		wxObject* clientData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddCheckTool(int, const wxString &, const wxBitmap &, const wxBitmap &, const wxString &, const wxString &, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddCheckTool(toolId, label, bitmap1, bmpDisabled, shortHelp, longHelp, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_AddControl(lua_State *L) {
		if (!_lg_typecheck_AddControl(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxControl* control=(Luna< wxObject >::checkSubType< wxControl >(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddControl(wxControl *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddControl(control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddRadioTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)
	static int _bind_AddRadioTool(lua_State *L) {
		if (!_lg_typecheck_AddRadioTool(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddRadioTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddRadioTool(int toolId, const wxString & label, const wxBitmap & bitmap1, const wxBitmap & bmpDisabled = wxNullBitmap, const wxString & shortHelp = wxEmptyString, const wxString & longHelp = wxEmptyString, wxObject * clientData = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap1_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap1 in wxToolBar::AddRadioTool function");
		}
		const wxBitmap & bitmap1=*bitmap1_ptr;
		const wxBitmap* bmpDisabled_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxToolBar::AddRadioTool function");
		}
		const wxBitmap & bmpDisabled=luatop>4 ? *bmpDisabled_ptr : (const wxBitmap&)wxNullBitmap;
		wxString shortHelp(lua_tostring(L,6),lua_objlen(L,6));
		wxString longHelp(lua_tostring(L,7),lua_objlen(L,7));
		wxObject* clientData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddRadioTool(int, const wxString &, const wxBitmap &, const wxBitmap &, const wxString &, const wxString &, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddRadioTool(toolId, label, bitmap1, bmpDisabled, shortHelp, longHelp, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddSeparator()
	static int _bind_AddSeparator(lua_State *L) {
		if (!_lg_typecheck_AddSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddSeparator() function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddSeparator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddSeparator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddSeparator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddStretchableSpace()
	static int _bind_AddStretchableSpace(lua_State *L) {
		if (!_lg_typecheck_AddStretchableSpace(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddStretchableSpace() function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddStretchableSpace()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddStretchableSpace(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddStretchableSpace();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool)
	static int _bind_AddTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool)\nClass arguments details:\narg 1 ID = 49669417\n\n%s",luna_dumpStack(L).c_str());
		}

		wxToolBarToolBase* tool=(Luna< wxToolBarToolBase >::check(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddTool(tool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxString & shortHelp = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)
	static int _bind_AddTool_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxString & shortHelp = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxString & shortHelp = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxString shortHelp(lua_tostring(L,5),lua_objlen(L,5));
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : (wxItemKind)::wxITEM_NORMAL;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddTool(int, const wxString &, const wxBitmap &, const wxString &, wxItemKind). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddTool(toolId, label, bitmap, shortHelp, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bmpDisabled = wxNullBitmap, wxItemKind kind = ::wxITEM_NORMAL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString, wxObject * clientData = NULL)
	static int _bind_AddTool_overload_3(lua_State *L) {
		if (!_lg_typecheck_AddTool_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bmpDisabled = wxNullBitmap, wxItemKind kind = ::wxITEM_NORMAL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString, wxObject * clientData = NULL) function, expected prototype:\nwxToolBarToolBase * wxToolBar::AddTool(int toolId, const wxString & label, const wxBitmap & bitmap, const wxBitmap & bmpDisabled = wxNullBitmap, wxItemKind kind = ::wxITEM_NORMAL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString, wxObject * clientData = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 6 ID = 88196105\narg 7 ID = 88196105\narg 8 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int toolId=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::AddTool function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		const wxBitmap* bmpDisabled_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxToolBar::AddTool function");
		}
		const wxBitmap & bmpDisabled=luatop>4 ? *bmpDisabled_ptr : (const wxBitmap&)wxNullBitmap;
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : (wxItemKind)::wxITEM_NORMAL;
		wxString shortHelpString(lua_tostring(L,7),lua_objlen(L,7));
		wxString longHelpString(lua_tostring(L,8),lua_objlen(L,8));
		wxObject* clientData=luatop>8 ? (Luna< wxObject >::check(L,9)) : (wxObject*)NULL;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::AddTool(int, const wxString &, const wxBitmap &, const wxBitmap &, wxItemKind, const wxString &, const wxString &, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->AddTool(toolId, label, bitmap, bmpDisabled, kind, shortHelpString, longHelpString, clientData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxToolBar::AddTool
	static int _bind_AddTool(lua_State *L) {
		if (_lg_typecheck_AddTool_overload_1(L)) return _bind_AddTool_overload_1(L);
		if (_lg_typecheck_AddTool_overload_2(L)) return _bind_AddTool_overload_2(L);
		if (_lg_typecheck_AddTool_overload_3(L)) return _bind_AddTool_overload_3(L);

		luaL_error(L, "error in function AddTool, cannot match any of the overloads for function AddTool:\n  AddTool(wxToolBarToolBase *)\n  AddTool(int, const wxString &, const wxBitmap &, const wxString &, wxItemKind)\n  AddTool(int, const wxString &, const wxBitmap &, const wxBitmap &, wxItemKind, const wxString &, const wxString &, wxObject *)\n");
		return 0;
	}

	// void wxToolBar::ClearTools()
	static int _bind_ClearTools(lua_State *L) {
		if (!_lg_typecheck_ClearTools(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::ClearTools() function, expected prototype:\nvoid wxToolBar::ClearTools()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::ClearTools(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearTools();

		return 0;
	}

	// bool wxToolBar::DeleteTool(int toolId)
	static int _bind_DeleteTool(lua_State *L) {
		if (!_lg_typecheck_DeleteTool(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::DeleteTool(int toolId) function, expected prototype:\nbool wxToolBar::DeleteTool(int toolId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::DeleteTool(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteTool(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::DeleteToolByPos(size_t pos)
	static int _bind_DeleteToolByPos(lua_State *L) {
		if (!_lg_typecheck_DeleteToolByPos(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::DeleteToolByPos(size_t pos) function, expected prototype:\nbool wxToolBar::DeleteToolByPos(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::DeleteToolByPos(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteToolByPos(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::EnableTool(int toolId, bool enable)
	static int _bind_EnableTool(lua_State *L) {
		if (!_lg_typecheck_EnableTool(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::EnableTool(int toolId, bool enable) function, expected prototype:\nvoid wxToolBar::EnableTool(int toolId, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::EnableTool(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableTool(toolId, enable);

		return 0;
	}

	// wxToolBarToolBase * wxToolBar::FindById(int id) const
	static int _bind_FindById(lua_State *L) {
		if (!_lg_typecheck_FindById(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::FindById(int id) const function, expected prototype:\nwxToolBarToolBase * wxToolBar::FindById(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::FindById(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->FindById(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxControl * wxToolBar::FindControl(int id)
	static int _bind_FindControl(lua_State *L) {
		if (!_lg_typecheck_FindControl(L)) {
			luaL_error(L, "luna typecheck failed in wxControl * wxToolBar::FindControl(int id) function, expected prototype:\nwxControl * wxToolBar::FindControl(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxControl * wxToolBar::FindControl(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxControl * lret = self->FindControl(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const
	static int _bind_FindToolForPosition(lua_State *L) {
		if (!_lg_typecheck_FindToolForPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const function, expected prototype:\nwxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::FindToolForPosition(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->FindToolForPosition(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxSize wxToolBar::GetMargins() const
	static int _bind_GetMargins(lua_State *L) {
		if (!_lg_typecheck_GetMargins(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::GetMargins() const function, expected prototype:\nwxSize wxToolBar::GetMargins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::GetMargins() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMargins();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::GetToolBitmapSize() const
	static int _bind_GetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_GetToolBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::GetToolBitmapSize() const function, expected prototype:\nwxSize wxToolBar::GetToolBitmapSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::GetToolBitmapSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetToolBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// const wxToolBarToolBase * wxToolBar::GetToolByPos(int pos) const
	static int _bind_GetToolByPos(lua_State *L) {
		if (!_lg_typecheck_GetToolByPos(L)) {
			luaL_error(L, "luna typecheck failed in const wxToolBarToolBase * wxToolBar::GetToolByPos(int pos) const function, expected prototype:\nconst wxToolBarToolBase * wxToolBar::GetToolByPos(int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxToolBarToolBase * wxToolBar::GetToolByPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxToolBarToolBase * lret = self->GetToolByPos(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxObject * wxToolBar::GetToolClientData(int toolId) const
	static int _bind_GetToolClientData(lua_State *L) {
		if (!_lg_typecheck_GetToolClientData(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxToolBar::GetToolClientData(int toolId) const function, expected prototype:\nwxObject * wxToolBar::GetToolClientData(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxToolBar::GetToolClientData(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->GetToolClientData(toolId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::GetToolEnabled(int toolId) const
	static int _bind_GetToolEnabled(lua_State *L) {
		if (!_lg_typecheck_GetToolEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::GetToolEnabled(int toolId) const function, expected prototype:\nbool wxToolBar::GetToolEnabled(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::GetToolEnabled(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetToolEnabled(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxToolBar::GetToolLongHelp(int toolId) const
	static int _bind_GetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_GetToolLongHelp(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::GetToolLongHelp(int toolId) const function, expected prototype:\nwxString wxToolBar::GetToolLongHelp(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::GetToolLongHelp(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetToolLongHelp(toolId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxToolBar::GetToolPacking() const
	static int _bind_GetToolPacking(lua_State *L) {
		if (!_lg_typecheck_GetToolPacking(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::GetToolPacking() const function, expected prototype:\nint wxToolBar::GetToolPacking() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::GetToolPacking() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolPacking();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::GetToolPos(int toolId) const
	static int _bind_GetToolPos(lua_State *L) {
		if (!_lg_typecheck_GetToolPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::GetToolPos(int toolId) const function, expected prototype:\nint wxToolBar::GetToolPos(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::GetToolPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolPos(toolId);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::GetToolSeparation() const
	static int _bind_GetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_GetToolSeparation(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::GetToolSeparation() const function, expected prototype:\nint wxToolBar::GetToolSeparation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::GetToolSeparation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetToolSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxToolBar::GetToolShortHelp(int toolId) const
	static int _bind_GetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_GetToolShortHelp(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::GetToolShortHelp(int toolId) const function, expected prototype:\nwxString wxToolBar::GetToolShortHelp(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::GetToolShortHelp(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetToolShortHelp(toolId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxSize wxToolBar::GetToolSize() const
	static int _bind_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_GetToolSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::GetToolSize() const function, expected prototype:\nwxSize wxToolBar::GetToolSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::GetToolSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetToolSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxToolBar::GetToolState(int toolId) const
	static int _bind_GetToolState(lua_State *L) {
		if (!_lg_typecheck_GetToolState(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::GetToolState(int toolId) const function, expected prototype:\nbool wxToolBar::GetToolState(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::GetToolState(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetToolState(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxToolBar::GetToolsCount() const
	static int _bind_GetToolsCount(lua_State *L) {
		if (!_lg_typecheck_GetToolsCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxToolBar::GetToolsCount() const function, expected prototype:\nsize_t wxToolBar::GetToolsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxToolBar::GetToolsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetToolsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_InsertControl(lua_State *L) {
		if (!_lg_typecheck_InsertControl(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		wxControl* control=(Luna< wxObject >::checkSubType< wxControl >(L,3));
		wxString label(lua_tostring(L,4),lua_objlen(L,4));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertControl(size_t, wxControl *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->InsertControl(pos, control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos)
	static int _bind_InsertSeparator(lua_State *L) {
		if (!_lg_typecheck_InsertSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertSeparator(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->InsertSeparator(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t pos)
	static int _bind_InsertStretchableSpace(lua_State *L) {
		if (!_lg_typecheck_InsertStretchableSpace(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t pos) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertStretchableSpace(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->InsertStretchableSpace(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, int toolId, const wxBitmap & bitmap1, const wxBitmap & bitmap2 = wxNullBitmap, bool isToggle = false, wxObject * clientData = NULL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString)
	static int _bind_InsertTool_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertTool_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, int toolId, const wxBitmap & bitmap1, const wxBitmap & bitmap2 = wxNullBitmap, bool isToggle = false, wxObject * clientData = NULL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertTool(size_t pos, int toolId, const wxBitmap & bitmap1, const wxBitmap & bitmap2 = wxNullBitmap, bool isToggle = false, wxObject * clientData = NULL, const wxString & shortHelpString = wxEmptyString, const wxString & longHelpString = wxEmptyString)\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 6 ID = 56813631\narg 7 ID = 88196105\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		int toolId=(int)lua_tointeger(L,3);
		const wxBitmap* bitmap1_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,4));
		if( !bitmap1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap1 in wxToolBar::InsertTool function");
		}
		const wxBitmap & bitmap1=*bitmap1_ptr;
		const wxBitmap* bitmap2_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bitmap2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap2 in wxToolBar::InsertTool function");
		}
		const wxBitmap & bitmap2=luatop>4 ? *bitmap2_ptr : (const wxBitmap&)wxNullBitmap;
		bool isToggle=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;
		wxObject* clientData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;
		wxString shortHelpString(lua_tostring(L,8),lua_objlen(L,8));
		wxString longHelpString(lua_tostring(L,9),lua_objlen(L,9));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertTool(size_t, int, const wxBitmap &, const wxBitmap &, bool, wxObject *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->InsertTool(pos, toolId, bitmap1, bitmap2, isToggle, clientData, shortHelpString, longHelpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, wxToolBarToolBase * tool)
	static int _bind_InsertTool_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertTool_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::InsertTool(size_t pos, wxToolBarToolBase * tool) function, expected prototype:\nwxToolBarToolBase * wxToolBar::InsertTool(size_t pos, wxToolBarToolBase * tool)\nClass arguments details:\narg 2 ID = 49669417\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxToolBarToolBase* tool=(Luna< wxToolBarToolBase >::check(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::InsertTool(size_t, wxToolBarToolBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->InsertTool(pos, tool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxToolBar::InsertTool
	static int _bind_InsertTool(lua_State *L) {
		if (_lg_typecheck_InsertTool_overload_1(L)) return _bind_InsertTool_overload_1(L);
		if (_lg_typecheck_InsertTool_overload_2(L)) return _bind_InsertTool_overload_2(L);

		luaL_error(L, "error in function InsertTool, cannot match any of the overloads for function InsertTool:\n  InsertTool(size_t, int, const wxBitmap &, const wxBitmap &, bool, wxObject *, const wxString &, const wxString &)\n  InsertTool(size_t, wxToolBarToolBase *)\n");
		return 0;
	}

	// bool wxToolBar::OnLeftClick(int toolId, bool toggleDown)
	static int _bind_OnLeftClick(lua_State *L) {
		if (!_lg_typecheck_OnLeftClick(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::OnLeftClick(int toolId, bool toggleDown) function, expected prototype:\nbool wxToolBar::OnLeftClick(int toolId, bool toggleDown)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		bool toggleDown=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::OnLeftClick(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnLeftClick(toolId, toggleDown);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::OnMouseEnter(int toolId)
	static int _bind_OnMouseEnter(lua_State *L) {
		if (!_lg_typecheck_OnMouseEnter(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::OnMouseEnter(int toolId) function, expected prototype:\nvoid wxToolBar::OnMouseEnter(int toolId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::OnMouseEnter(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnMouseEnter(toolId);

		return 0;
	}

	// void wxToolBar::OnRightClick(int toolId, long x, long y)
	static int _bind_OnRightClick(lua_State *L) {
		if (!_lg_typecheck_OnRightClick(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::OnRightClick(int toolId, long x, long y) function, expected prototype:\nvoid wxToolBar::OnRightClick(int toolId, long x, long y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		long x=(long)lua_tonumber(L,3);
		long y=(long)lua_tonumber(L,4);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::OnRightClick(int, long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnRightClick(toolId, x, y);

		return 0;
	}

	// bool wxToolBar::Realize()
	static int _bind_Realize(lua_State *L) {
		if (!_lg_typecheck_Realize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::Realize() function, expected prototype:\nbool wxToolBar::Realize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::Realize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::RemoveTool(int id)
	static int _bind_RemoveTool(lua_State *L) {
		if (!_lg_typecheck_RemoveTool(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::RemoveTool(int id) function, expected prototype:\nwxToolBarToolBase * wxToolBar::RemoveTool(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::RemoveTool(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->RemoveTool(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::SetDropdownMenu(int id, wxMenu * menu)
	static int _bind_SetDropdownMenu(lua_State *L) {
		if (!_lg_typecheck_SetDropdownMenu(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::SetDropdownMenu(int id, wxMenu * menu) function, expected prototype:\nbool wxToolBar::SetDropdownMenu(int id, wxMenu * menu)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::SetDropdownMenu(int, wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDropdownMenu(id, menu);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::SetMargins(int x, int y)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetMargins(int x, int y) function, expected prototype:\nvoid wxToolBar::SetMargins(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetMargins(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMargins(x, y);

		return 0;
	}

	// void wxToolBar::SetMargins(const wxSize & size)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetMargins(const wxSize & size) function, expected prototype:\nvoid wxToolBar::SetMargins(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::SetMargins function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetMargins(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMargins(size);

		return 0;
	}

	// Overload binder for wxToolBar::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(int, int)\n  SetMargins(const wxSize &)\n");
		return 0;
	}

	// void wxToolBar::SetToolBitmapSize(const wxSize & size)
	static int _bind_SetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_SetToolBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::SetToolBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::SetToolBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolBitmapSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolBitmapSize(size);

		return 0;
	}

	// void wxToolBar::SetToolClientData(int id, wxObject * clientData)
	static int _bind_SetToolClientData(lua_State *L) {
		if (!_lg_typecheck_SetToolClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolClientData(int id, wxObject * clientData) function, expected prototype:\nvoid wxToolBar::SetToolClientData(int id, wxObject * clientData)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxObject* clientData=(Luna< wxObject >::check(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolClientData(int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolClientData(id, clientData);

		return 0;
	}

	// void wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap)
	static int _bind_SetToolDisabledBitmap(lua_State *L) {
		if (!_lg_typecheck_SetToolDisabledBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::SetToolDisabledBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolDisabledBitmap(int, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolDisabledBitmap(id, bitmap);

		return 0;
	}

	// void wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString)
	static int _bind_SetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_SetToolLongHelp(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString) function, expected prototype:\nvoid wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolLongHelp(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolLongHelp(toolId, helpString);

		return 0;
	}

	// void wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap)
	static int _bind_SetToolNormalBitmap(lua_State *L) {
		if (!_lg_typecheck_SetToolNormalBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::SetToolNormalBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolNormalBitmap(int, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolNormalBitmap(id, bitmap);

		return 0;
	}

	// void wxToolBar::SetToolPacking(int packing)
	static int _bind_SetToolPacking(lua_State *L) {
		if (!_lg_typecheck_SetToolPacking(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolPacking(int packing) function, expected prototype:\nvoid wxToolBar::SetToolPacking(int packing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int packing=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolPacking(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolPacking(packing);

		return 0;
	}

	// void wxToolBar::SetToolSeparation(int separation)
	static int _bind_SetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_SetToolSeparation(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolSeparation(int separation) function, expected prototype:\nvoid wxToolBar::SetToolSeparation(int separation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int separation=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolSeparation(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolSeparation(separation);

		return 0;
	}

	// void wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString)
	static int _bind_SetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_SetToolShortHelp(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString) function, expected prototype:\nvoid wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::SetToolShortHelp(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolShortHelp(toolId, helpString);

		return 0;
	}

	// void wxToolBar::ToggleTool(int toolId, bool toggle)
	static int _bind_ToggleTool(lua_State *L) {
		if (!_lg_typecheck_ToggleTool(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::ToggleTool(int toolId, bool toggle) function, expected prototype:\nvoid wxToolBar::ToggleTool(int toolId, bool toggle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		bool toggle=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::ToggleTool(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleTool(toolId, toggle);

		return 0;
	}

	// wxClassInfo * wxToolBar::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxToolBar::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxToolBar::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxToolBar::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxToolBar::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_AcceptsFocus() const function, expected prototype:\nbool wxToolBar::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxToolBar::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxToolBar::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_HasFocus() const function, expected prototype:\nbool wxToolBar::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxToolBar::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetCanFocus(canFocus);

		return 0;
	}

	// void wxToolBar::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetFocus() function, expected prototype:\nvoid wxToolBar::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetFocus();

		return 0;
	}

	// void wxToolBar::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetFocusFromKbd() function, expected prototype:\nvoid wxToolBar::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetFocusFromKbd();

		return 0;
	}

	// void wxToolBar::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxToolBar::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::AddChild(child);

		return 0;
	}

	// void wxToolBar::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxToolBar::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::RemoveChild(child);

		return 0;
	}

	// bool wxToolBar::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxToolBar::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxToolBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxToolBar::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxToolBar::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxToolBar::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxToolBar::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxToolBar::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxToolBar::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_ScrollLines(int lines) function, expected prototype:\nbool wxToolBar::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_ScrollPages(int pages) function, expected prototype:\nbool wxToolBar::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxToolBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxToolBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxToolBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxToolBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxToolBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxToolBar::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxToolBar::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxToolBar::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxToolBar::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_Fit() function, expected prototype:\nvoid wxToolBar::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::Fit();

		return 0;
	}

	// void wxToolBar::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_FitInside() function, expected prototype:\nvoid wxToolBar::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::FitInside();

		return 0;
	}

	// wxSize wxToolBar::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxToolBar::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxToolBar::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetMaxSize() const function, expected prototype:\nwxSize wxToolBar::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetMinClientSize() const function, expected prototype:\nwxSize wxToolBar::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetMinSize() const function, expected prototype:\nwxSize wxToolBar::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxToolBar::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxToolBar::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxToolBar::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxToolBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxToolBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxToolBar::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SendSizeEvent(flags);

		return 0;
	}

	// void wxToolBar::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetMaxClientSize(size);

		return 0;
	}

	// void wxToolBar::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetMaxSize(size);

		return 0;
	}

	// void wxToolBar::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetMinClientSize(size);

		return 0;
	}

	// void wxToolBar::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetMinSize(size);

		return 0;
	}

	// void wxToolBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxToolBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxToolBar::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxToolBar::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxToolBar::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxToolBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxToolBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxToolBar::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxToolBar::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxToolBar::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxToolBar::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxToolBar::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxToolBar::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxToolBar::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_ClearBackground() function, expected prototype:\nvoid wxToolBar::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxToolBar::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxToolBar::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxToolBar::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxToolBar::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxToolBar::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetCharHeight() const function, expected prototype:\nint wxToolBar::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetCharWidth() const function, expected prototype:\nint wxToolBar::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxToolBar::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxToolBar::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxToolBar::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxToolBar::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxToolBar::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxToolBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxToolBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxToolBar::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_Update() function, expected prototype:\nvoid wxToolBar::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::Update();

		return 0;
	}

	// bool wxToolBar::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxToolBar::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxToolBar::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxToolBar::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_ShouldInheritColours() const function, expected prototype:\nbool wxToolBar::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxToolBar::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxToolBar::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_GetThemeEnabled() const function, expected prototype:\nbool wxToolBar::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_CanSetTransparent() function, expected prototype:\nbool wxToolBar::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxToolBar::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxToolBar::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetNextHandler(handler);

		return 0;
	}

	// void wxToolBar::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxToolBar::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetPreviousHandler(handler);

		return 0;
	}

	// long wxToolBar::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxToolBar::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxToolBar::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxToolBar::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxToolBar::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxToolBar::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxToolBar::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxToolBar::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxToolBar::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxToolBar::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_Lower() function, expected prototype:\nvoid wxToolBar::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::Lower();

		return 0;
	}

	// void wxToolBar::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_Raise() function, expected prototype:\nvoid wxToolBar::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::Raise();

		return 0;
	}

	// bool wxToolBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxToolBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_IsShown() const function, expected prototype:\nbool wxToolBar::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_IsShownOnScreen() const function, expected prototype:\nbool wxToolBar::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Enable(bool enable = true) function, expected prototype:\nbool wxToolBar::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Show(bool show = true) function, expected prototype:\nbool wxToolBar::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxToolBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxToolBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxToolBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxToolBar::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxToolBar::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxToolBar::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxToolBar::base_GetValidator() function, expected prototype:\nwxValidator * wxToolBar::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxToolBar::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxToolBar::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxToolBar::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxToolBar::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxToolBar::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetValidator(validator);

		return 0;
	}

	// bool wxToolBar::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_TransferDataFromWindow() function, expected prototype:\nbool wxToolBar::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_TransferDataToWindow() function, expected prototype:\nbool wxToolBar::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Validate() function, expected prototype:\nbool wxToolBar::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxToolBar::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxToolBar::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxToolBar::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxToolBar::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxToolBar::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxToolBar::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::base_GetName() const function, expected prototype:\nwxString wxToolBar::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxToolBar::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxToolBar::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxToolBar::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetLayoutDirection(dir);

		return 0;
	}

	// void wxToolBar::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetName(const wxString & name) function, expected prototype:\nvoid wxToolBar::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetName(name);

		return 0;
	}

	// void wxToolBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxToolBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxToolBar::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxToolBar::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Destroy() function, expected prototype:\nbool wxToolBar::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxToolBar::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxToolBar::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxToolBar::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxToolBar::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxToolBar::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxToolBar::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxToolBar::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetDropTarget(target);

		return 0;
	}

	// void wxToolBar::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxToolBar::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxToolBar::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Layout() function, expected prototype:\nbool wxToolBar::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_HasCapture() const function, expected prototype:\nbool wxToolBar::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxToolBar::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxToolBar::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxToolBar::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::WarpPointer(x, y);

		return 0;
	}

	// void wxToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxToolBar::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxToolBar::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxToolBar::base_GetHandle() const function, expected prototype:\nHWND wxToolBar::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxToolBar::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxToolBar::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxToolBar::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_HasMultiplePages() const function, expected prototype:\nbool wxToolBar::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_InheritAttributes() function, expected prototype:\nvoid wxToolBar::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::InheritAttributes();

		return 0;
	}

	// void wxToolBar::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_InitDialog() function, expected prototype:\nvoid wxToolBar::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::InitDialog();

		return 0;
	}

	// bool wxToolBar::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_IsRetained() const function, expected prototype:\nbool wxToolBar::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_IsTopLevel() const function, expected prototype:\nbool wxToolBar::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxToolBar::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::MakeModal(modal);

		return 0;
	}

	// void wxToolBar::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_OnInternalIdle() function, expected prototype:\nvoid wxToolBar::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::OnInternalIdle();

		return 0;
	}

	// bool wxToolBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxToolBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxToolBar::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxToolBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::UpdateWindowUI(flags);

		return 0;
	}

	// void wxToolBar::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxToolBar::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxToolBar::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::Command(event);

		return 0;
	}

	// wxString wxToolBar::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::base_GetLabel() const function, expected prototype:\nwxString wxToolBar::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxToolBar::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxToolBar::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxToolBar::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetLabel(label);

		return 0;
	}

	// wxToolBarToolBase * wxToolBar::base_AddControl(wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_base_AddControl(lua_State *L) {
		if (!_lg_typecheck_base_AddControl(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_AddControl(wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_AddControl(wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxControl* control=(Luna< wxObject >::checkSubType< wxControl >(L,2));
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_AddControl(wxControl *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::AddControl(control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::base_AddSeparator()
	static int _bind_base_AddSeparator(lua_State *L) {
		if (!_lg_typecheck_base_AddSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_AddSeparator() function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_AddSeparator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_AddSeparator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::AddSeparator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::base_AddTool(wxToolBarToolBase * tool)
	static int _bind_base_AddTool(lua_State *L) {
		if (!_lg_typecheck_base_AddTool(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_AddTool(wxToolBarToolBase * tool) function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_AddTool(wxToolBarToolBase * tool)\nClass arguments details:\narg 1 ID = 49669417\n\n%s",luna_dumpStack(L).c_str());
		}

		wxToolBarToolBase* tool=(Luna< wxToolBarToolBase >::check(L,2));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_AddTool(wxToolBarToolBase *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::AddTool(tool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// void wxToolBar::base_ClearTools()
	static int _bind_base_ClearTools(lua_State *L) {
		if (!_lg_typecheck_base_ClearTools(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_ClearTools() function, expected prototype:\nvoid wxToolBar::base_ClearTools()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_ClearTools(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::ClearTools();

		return 0;
	}

	// bool wxToolBar::base_DeleteTool(int toolId)
	static int _bind_base_DeleteTool(lua_State *L) {
		if (!_lg_typecheck_base_DeleteTool(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_DeleteTool(int toolId) function, expected prototype:\nbool wxToolBar::base_DeleteTool(int toolId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_DeleteTool(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::DeleteTool(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxToolBar::base_DeleteToolByPos(size_t pos)
	static int _bind_base_DeleteToolByPos(lua_State *L) {
		if (!_lg_typecheck_base_DeleteToolByPos(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_DeleteToolByPos(size_t pos) function, expected prototype:\nbool wxToolBar::base_DeleteToolByPos(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_DeleteToolByPos(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::DeleteToolByPos(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_EnableTool(int toolId, bool enable)
	static int _bind_base_EnableTool(lua_State *L) {
		if (!_lg_typecheck_base_EnableTool(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_EnableTool(int toolId, bool enable) function, expected prototype:\nvoid wxToolBar::base_EnableTool(int toolId, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_EnableTool(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::EnableTool(toolId, enable);

		return 0;
	}

	// wxControl * wxToolBar::base_FindControl(int id)
	static int _bind_base_FindControl(lua_State *L) {
		if (!_lg_typecheck_base_FindControl(L)) {
			luaL_error(L, "luna typecheck failed in wxControl * wxToolBar::base_FindControl(int id) function, expected prototype:\nwxControl * wxToolBar::base_FindControl(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxControl * wxToolBar::base_FindControl(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxControl * lret = self->wxToolBar::FindControl(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxControl >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::base_FindToolForPosition(int x, int y) const
	static int _bind_base_FindToolForPosition(lua_State *L) {
		if (!_lg_typecheck_base_FindToolForPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_FindToolForPosition(int x, int y) const function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_FindToolForPosition(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_FindToolForPosition(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::FindToolForPosition(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxSize wxToolBar::base_GetToolBitmapSize() const
	static int _bind_base_GetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_base_GetToolBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetToolBitmapSize() const function, expected prototype:\nwxSize wxToolBar::base_GetToolBitmapSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetToolBitmapSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetToolBitmapSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxObject * wxToolBar::base_GetToolClientData(int toolId) const
	static int _bind_base_GetToolClientData(lua_State *L) {
		if (!_lg_typecheck_base_GetToolClientData(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxToolBar::base_GetToolClientData(int toolId) const function, expected prototype:\nwxObject * wxToolBar::base_GetToolClientData(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxToolBar::base_GetToolClientData(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->wxToolBar::GetToolClientData(toolId);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::base_GetToolEnabled(int toolId) const
	static int _bind_base_GetToolEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetToolEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_GetToolEnabled(int toolId) const function, expected prototype:\nbool wxToolBar::base_GetToolEnabled(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_GetToolEnabled(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::GetToolEnabled(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxToolBar::base_GetToolLongHelp(int toolId) const
	static int _bind_base_GetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_base_GetToolLongHelp(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::base_GetToolLongHelp(int toolId) const function, expected prototype:\nwxString wxToolBar::base_GetToolLongHelp(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::base_GetToolLongHelp(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxToolBar::GetToolLongHelp(toolId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxToolBar::base_GetToolPacking() const
	static int _bind_base_GetToolPacking(lua_State *L) {
		if (!_lg_typecheck_base_GetToolPacking(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetToolPacking() const function, expected prototype:\nint wxToolBar::base_GetToolPacking() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetToolPacking() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetToolPacking();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::base_GetToolPos(int toolId) const
	static int _bind_base_GetToolPos(lua_State *L) {
		if (!_lg_typecheck_base_GetToolPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetToolPos(int toolId) const function, expected prototype:\nint wxToolBar::base_GetToolPos(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetToolPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetToolPos(toolId);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxToolBar::base_GetToolSeparation() const
	static int _bind_base_GetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_base_GetToolSeparation(L)) {
			luaL_error(L, "luna typecheck failed in int wxToolBar::base_GetToolSeparation() const function, expected prototype:\nint wxToolBar::base_GetToolSeparation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxToolBar::base_GetToolSeparation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxToolBar::GetToolSeparation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxToolBar::base_GetToolShortHelp(int toolId) const
	static int _bind_base_GetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_base_GetToolShortHelp(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxToolBar::base_GetToolShortHelp(int toolId) const function, expected prototype:\nwxString wxToolBar::base_GetToolShortHelp(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxToolBar::base_GetToolShortHelp(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxToolBar::GetToolShortHelp(toolId);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxSize wxToolBar::base_GetToolSize() const
	static int _bind_base_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_base_GetToolSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxToolBar::base_GetToolSize() const function, expected prototype:\nwxSize wxToolBar::base_GetToolSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxToolBar::base_GetToolSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxToolBar::GetToolSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxToolBar::base_GetToolState(int toolId) const
	static int _bind_base_GetToolState(lua_State *L) {
		if (!_lg_typecheck_base_GetToolState(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_GetToolState(int toolId) const function, expected prototype:\nbool wxToolBar::base_GetToolState(int toolId) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_GetToolState(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::GetToolState(toolId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::base_InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)
	static int _bind_base_InsertControl(lua_State *L) {
		if (!_lg_typecheck_base_InsertControl(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString) function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		wxControl* control=(Luna< wxObject >::checkSubType< wxControl >(L,3));
		wxString label(lua_tostring(L,4),lua_objlen(L,4));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_InsertControl(size_t, wxControl *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::InsertControl(pos, control, label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::base_InsertSeparator(size_t pos)
	static int _bind_base_InsertSeparator(lua_State *L) {
		if (!_lg_typecheck_base_InsertSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_InsertSeparator(size_t pos) function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_InsertSeparator(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_InsertSeparator(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::InsertSeparator(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// bool wxToolBar::base_OnLeftClick(int toolId, bool toggleDown)
	static int _bind_base_OnLeftClick(lua_State *L) {
		if (!_lg_typecheck_base_OnLeftClick(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_OnLeftClick(int toolId, bool toggleDown) function, expected prototype:\nbool wxToolBar::base_OnLeftClick(int toolId, bool toggleDown)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		bool toggleDown=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_OnLeftClick(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::OnLeftClick(toolId, toggleDown);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxToolBar::base_OnMouseEnter(int toolId)
	static int _bind_base_OnMouseEnter(lua_State *L) {
		if (!_lg_typecheck_base_OnMouseEnter(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_OnMouseEnter(int toolId) function, expected prototype:\nvoid wxToolBar::base_OnMouseEnter(int toolId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_OnMouseEnter(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::OnMouseEnter(toolId);

		return 0;
	}

	// void wxToolBar::base_OnRightClick(int toolId, long x, long y)
	static int _bind_base_OnRightClick(lua_State *L) {
		if (!_lg_typecheck_base_OnRightClick(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_OnRightClick(int toolId, long x, long y) function, expected prototype:\nvoid wxToolBar::base_OnRightClick(int toolId, long x, long y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		long x=(long)lua_tonumber(L,3);
		long y=(long)lua_tonumber(L,4);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_OnRightClick(int, long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::OnRightClick(toolId, x, y);

		return 0;
	}

	// bool wxToolBar::base_Realize()
	static int _bind_base_Realize(lua_State *L) {
		if (!_lg_typecheck_base_Realize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxToolBar::base_Realize() function, expected prototype:\nbool wxToolBar::base_Realize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxToolBar::base_Realize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxToolBar::Realize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxToolBarToolBase * wxToolBar::base_RemoveTool(int id)
	static int _bind_base_RemoveTool(lua_State *L) {
		if (!_lg_typecheck_base_RemoveTool(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBarToolBase * wxToolBar::base_RemoveTool(int id) function, expected prototype:\nwxToolBarToolBase * wxToolBar::base_RemoveTool(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBarToolBase * wxToolBar::base_RemoveTool(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBarToolBase * lret = self->wxToolBar::RemoveTool(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBarToolBase >::push(L,lret,false);

		return 1;
	}

	// void wxToolBar::base_SetMargins(int x, int y)
	static int _bind_base_SetMargins(lua_State *L) {
		if (!_lg_typecheck_base_SetMargins(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetMargins(int x, int y) function, expected prototype:\nvoid wxToolBar::base_SetMargins(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetMargins(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetMargins(x, y);

		return 0;
	}

	// void wxToolBar::base_SetToolBitmapSize(const wxSize & size)
	static int _bind_base_SetToolBitmapSize(lua_State *L) {
		if (!_lg_typecheck_base_SetToolBitmapSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolBitmapSize(const wxSize & size) function, expected prototype:\nvoid wxToolBar::base_SetToolBitmapSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxToolBar::base_SetToolBitmapSize function");
		}
		const wxSize & size=*size_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolBitmapSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolBitmapSize(size);

		return 0;
	}

	// void wxToolBar::base_SetToolClientData(int id, wxObject * clientData)
	static int _bind_base_SetToolClientData(lua_State *L) {
		if (!_lg_typecheck_base_SetToolClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolClientData(int id, wxObject * clientData) function, expected prototype:\nvoid wxToolBar::base_SetToolClientData(int id, wxObject * clientData)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxObject* clientData=(Luna< wxObject >::check(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolClientData(int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolClientData(id, clientData);

		return 0;
	}

	// void wxToolBar::base_SetToolDisabledBitmap(int id, const wxBitmap & bitmap)
	static int _bind_base_SetToolDisabledBitmap(lua_State *L) {
		if (!_lg_typecheck_base_SetToolDisabledBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolDisabledBitmap(int id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxToolBar::base_SetToolDisabledBitmap(int id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::base_SetToolDisabledBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolDisabledBitmap(int, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolDisabledBitmap(id, bitmap);

		return 0;
	}

	// void wxToolBar::base_SetToolLongHelp(int toolId, const wxString & helpString)
	static int _bind_base_SetToolLongHelp(lua_State *L) {
		if (!_lg_typecheck_base_SetToolLongHelp(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolLongHelp(int toolId, const wxString & helpString) function, expected prototype:\nvoid wxToolBar::base_SetToolLongHelp(int toolId, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolLongHelp(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolLongHelp(toolId, helpString);

		return 0;
	}

	// void wxToolBar::base_SetToolNormalBitmap(int id, const wxBitmap & bitmap)
	static int _bind_base_SetToolNormalBitmap(lua_State *L) {
		if (!_lg_typecheck_base_SetToolNormalBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolNormalBitmap(int id, const wxBitmap & bitmap) function, expected prototype:\nvoid wxToolBar::base_SetToolNormalBitmap(int id, const wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,3));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxToolBar::base_SetToolNormalBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolNormalBitmap(int, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolNormalBitmap(id, bitmap);

		return 0;
	}

	// void wxToolBar::base_SetToolPacking(int packing)
	static int _bind_base_SetToolPacking(lua_State *L) {
		if (!_lg_typecheck_base_SetToolPacking(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolPacking(int packing) function, expected prototype:\nvoid wxToolBar::base_SetToolPacking(int packing)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int packing=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolPacking(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolPacking(packing);

		return 0;
	}

	// void wxToolBar::base_SetToolSeparation(int separation)
	static int _bind_base_SetToolSeparation(lua_State *L) {
		if (!_lg_typecheck_base_SetToolSeparation(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolSeparation(int separation) function, expected prototype:\nvoid wxToolBar::base_SetToolSeparation(int separation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int separation=(int)lua_tointeger(L,2);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolSeparation(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolSeparation(separation);

		return 0;
	}

	// void wxToolBar::base_SetToolShortHelp(int toolId, const wxString & helpString)
	static int _bind_base_SetToolShortHelp(lua_State *L) {
		if (!_lg_typecheck_base_SetToolShortHelp(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_SetToolShortHelp(int toolId, const wxString & helpString) function, expected prototype:\nvoid wxToolBar::base_SetToolShortHelp(int toolId, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_SetToolShortHelp(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::SetToolShortHelp(toolId, helpString);

		return 0;
	}

	// void wxToolBar::base_ToggleTool(int toolId, bool toggle)
	static int _bind_base_ToggleTool(lua_State *L) {
		if (!_lg_typecheck_base_ToggleTool(L)) {
			luaL_error(L, "luna typecheck failed in void wxToolBar::base_ToggleTool(int toolId, bool toggle) function, expected prototype:\nvoid wxToolBar::base_ToggleTool(int toolId, bool toggle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int toolId=(int)lua_tointeger(L,2);
		bool toggle=(bool)(lua_toboolean(L,3)==1);

		wxToolBar* self=Luna< wxObject >::checkSubType< wxToolBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxToolBar::base_ToggleTool(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxToolBar::ToggleTool(toolId, toggle);

		return 0;
	}


	// Operator binds:

};

wxToolBar* LunaTraits< wxToolBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxToolBar::_bind_ctor(L);
}

void LunaTraits< wxToolBar >::_bind_dtor(wxToolBar* obj) {
	delete obj;
}

const char LunaTraits< wxToolBar >::className[] = "wxToolBar";
const char LunaTraits< wxToolBar >::fullName[] = "wxToolBar";
const char LunaTraits< wxToolBar >::moduleName[] = "wx";
const char* LunaTraits< wxToolBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxToolBar >::hash = 75713360;
const int LunaTraits< wxToolBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxToolBar >::methods[] = {
	{"AddCheckTool", &luna_wrapper_wxToolBar::_bind_AddCheckTool},
	{"AddControl", &luna_wrapper_wxToolBar::_bind_AddControl},
	{"AddRadioTool", &luna_wrapper_wxToolBar::_bind_AddRadioTool},
	{"AddSeparator", &luna_wrapper_wxToolBar::_bind_AddSeparator},
	{"AddStretchableSpace", &luna_wrapper_wxToolBar::_bind_AddStretchableSpace},
	{"AddTool", &luna_wrapper_wxToolBar::_bind_AddTool},
	{"ClearTools", &luna_wrapper_wxToolBar::_bind_ClearTools},
	{"DeleteTool", &luna_wrapper_wxToolBar::_bind_DeleteTool},
	{"DeleteToolByPos", &luna_wrapper_wxToolBar::_bind_DeleteToolByPos},
	{"EnableTool", &luna_wrapper_wxToolBar::_bind_EnableTool},
	{"FindById", &luna_wrapper_wxToolBar::_bind_FindById},
	{"FindControl", &luna_wrapper_wxToolBar::_bind_FindControl},
	{"FindToolForPosition", &luna_wrapper_wxToolBar::_bind_FindToolForPosition},
	{"GetMargins", &luna_wrapper_wxToolBar::_bind_GetMargins},
	{"GetToolBitmapSize", &luna_wrapper_wxToolBar::_bind_GetToolBitmapSize},
	{"GetToolByPos", &luna_wrapper_wxToolBar::_bind_GetToolByPos},
	{"GetToolClientData", &luna_wrapper_wxToolBar::_bind_GetToolClientData},
	{"GetToolEnabled", &luna_wrapper_wxToolBar::_bind_GetToolEnabled},
	{"GetToolLongHelp", &luna_wrapper_wxToolBar::_bind_GetToolLongHelp},
	{"GetToolPacking", &luna_wrapper_wxToolBar::_bind_GetToolPacking},
	{"GetToolPos", &luna_wrapper_wxToolBar::_bind_GetToolPos},
	{"GetToolSeparation", &luna_wrapper_wxToolBar::_bind_GetToolSeparation},
	{"GetToolShortHelp", &luna_wrapper_wxToolBar::_bind_GetToolShortHelp},
	{"GetToolSize", &luna_wrapper_wxToolBar::_bind_GetToolSize},
	{"GetToolState", &luna_wrapper_wxToolBar::_bind_GetToolState},
	{"GetToolsCount", &luna_wrapper_wxToolBar::_bind_GetToolsCount},
	{"InsertControl", &luna_wrapper_wxToolBar::_bind_InsertControl},
	{"InsertSeparator", &luna_wrapper_wxToolBar::_bind_InsertSeparator},
	{"InsertStretchableSpace", &luna_wrapper_wxToolBar::_bind_InsertStretchableSpace},
	{"InsertTool", &luna_wrapper_wxToolBar::_bind_InsertTool},
	{"OnLeftClick", &luna_wrapper_wxToolBar::_bind_OnLeftClick},
	{"OnMouseEnter", &luna_wrapper_wxToolBar::_bind_OnMouseEnter},
	{"OnRightClick", &luna_wrapper_wxToolBar::_bind_OnRightClick},
	{"Realize", &luna_wrapper_wxToolBar::_bind_Realize},
	{"RemoveTool", &luna_wrapper_wxToolBar::_bind_RemoveTool},
	{"SetDropdownMenu", &luna_wrapper_wxToolBar::_bind_SetDropdownMenu},
	{"SetMargins", &luna_wrapper_wxToolBar::_bind_SetMargins},
	{"SetToolBitmapSize", &luna_wrapper_wxToolBar::_bind_SetToolBitmapSize},
	{"SetToolClientData", &luna_wrapper_wxToolBar::_bind_SetToolClientData},
	{"SetToolDisabledBitmap", &luna_wrapper_wxToolBar::_bind_SetToolDisabledBitmap},
	{"SetToolLongHelp", &luna_wrapper_wxToolBar::_bind_SetToolLongHelp},
	{"SetToolNormalBitmap", &luna_wrapper_wxToolBar::_bind_SetToolNormalBitmap},
	{"SetToolPacking", &luna_wrapper_wxToolBar::_bind_SetToolPacking},
	{"SetToolSeparation", &luna_wrapper_wxToolBar::_bind_SetToolSeparation},
	{"SetToolShortHelp", &luna_wrapper_wxToolBar::_bind_SetToolShortHelp},
	{"ToggleTool", &luna_wrapper_wxToolBar::_bind_ToggleTool},
	{"base_GetClassInfo", &luna_wrapper_wxToolBar::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxToolBar::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxToolBar::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxToolBar::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxToolBar::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxToolBar::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxToolBar::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxToolBar::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxToolBar::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxToolBar::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxToolBar::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxToolBar::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxToolBar::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxToolBar::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxToolBar::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxToolBar::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxToolBar::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxToolBar::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxToolBar::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxToolBar::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxToolBar::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxToolBar::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxToolBar::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxToolBar::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxToolBar::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxToolBar::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxToolBar::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxToolBar::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxToolBar::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxToolBar::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxToolBar::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxToolBar::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxToolBar::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxToolBar::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxToolBar::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxToolBar::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxToolBar::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxToolBar::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxToolBar::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxToolBar::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxToolBar::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxToolBar::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxToolBar::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxToolBar::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxToolBar::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxToolBar::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxToolBar::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxToolBar::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxToolBar::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxToolBar::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxToolBar::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxToolBar::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxToolBar::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxToolBar::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxToolBar::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxToolBar::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxToolBar::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxToolBar::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxToolBar::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxToolBar::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxToolBar::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxToolBar::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxToolBar::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxToolBar::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxToolBar::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxToolBar::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxToolBar::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxToolBar::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxToolBar::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxToolBar::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxToolBar::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxToolBar::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxToolBar::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxToolBar::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxToolBar::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxToolBar::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxToolBar::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxToolBar::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxToolBar::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxToolBar::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxToolBar::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxToolBar::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxToolBar::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxToolBar::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxToolBar::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxToolBar::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxToolBar::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxToolBar::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxToolBar::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxToolBar::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxToolBar::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxToolBar::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxToolBar::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxToolBar::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxToolBar::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxToolBar::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxToolBar::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxToolBar::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxToolBar::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxToolBar::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxToolBar::_bind_base_SetLabel},
	{"base_AddControl", &luna_wrapper_wxToolBar::_bind_base_AddControl},
	{"base_AddSeparator", &luna_wrapper_wxToolBar::_bind_base_AddSeparator},
	{"base_AddTool", &luna_wrapper_wxToolBar::_bind_base_AddTool},
	{"base_ClearTools", &luna_wrapper_wxToolBar::_bind_base_ClearTools},
	{"base_DeleteTool", &luna_wrapper_wxToolBar::_bind_base_DeleteTool},
	{"base_DeleteToolByPos", &luna_wrapper_wxToolBar::_bind_base_DeleteToolByPos},
	{"base_EnableTool", &luna_wrapper_wxToolBar::_bind_base_EnableTool},
	{"base_FindControl", &luna_wrapper_wxToolBar::_bind_base_FindControl},
	{"base_FindToolForPosition", &luna_wrapper_wxToolBar::_bind_base_FindToolForPosition},
	{"base_GetToolBitmapSize", &luna_wrapper_wxToolBar::_bind_base_GetToolBitmapSize},
	{"base_GetToolClientData", &luna_wrapper_wxToolBar::_bind_base_GetToolClientData},
	{"base_GetToolEnabled", &luna_wrapper_wxToolBar::_bind_base_GetToolEnabled},
	{"base_GetToolLongHelp", &luna_wrapper_wxToolBar::_bind_base_GetToolLongHelp},
	{"base_GetToolPacking", &luna_wrapper_wxToolBar::_bind_base_GetToolPacking},
	{"base_GetToolPos", &luna_wrapper_wxToolBar::_bind_base_GetToolPos},
	{"base_GetToolSeparation", &luna_wrapper_wxToolBar::_bind_base_GetToolSeparation},
	{"base_GetToolShortHelp", &luna_wrapper_wxToolBar::_bind_base_GetToolShortHelp},
	{"base_GetToolSize", &luna_wrapper_wxToolBar::_bind_base_GetToolSize},
	{"base_GetToolState", &luna_wrapper_wxToolBar::_bind_base_GetToolState},
	{"base_InsertControl", &luna_wrapper_wxToolBar::_bind_base_InsertControl},
	{"base_InsertSeparator", &luna_wrapper_wxToolBar::_bind_base_InsertSeparator},
	{"base_OnLeftClick", &luna_wrapper_wxToolBar::_bind_base_OnLeftClick},
	{"base_OnMouseEnter", &luna_wrapper_wxToolBar::_bind_base_OnMouseEnter},
	{"base_OnRightClick", &luna_wrapper_wxToolBar::_bind_base_OnRightClick},
	{"base_Realize", &luna_wrapper_wxToolBar::_bind_base_Realize},
	{"base_RemoveTool", &luna_wrapper_wxToolBar::_bind_base_RemoveTool},
	{"base_SetMargins", &luna_wrapper_wxToolBar::_bind_base_SetMargins},
	{"base_SetToolBitmapSize", &luna_wrapper_wxToolBar::_bind_base_SetToolBitmapSize},
	{"base_SetToolClientData", &luna_wrapper_wxToolBar::_bind_base_SetToolClientData},
	{"base_SetToolDisabledBitmap", &luna_wrapper_wxToolBar::_bind_base_SetToolDisabledBitmap},
	{"base_SetToolLongHelp", &luna_wrapper_wxToolBar::_bind_base_SetToolLongHelp},
	{"base_SetToolNormalBitmap", &luna_wrapper_wxToolBar::_bind_base_SetToolNormalBitmap},
	{"base_SetToolPacking", &luna_wrapper_wxToolBar::_bind_base_SetToolPacking},
	{"base_SetToolSeparation", &luna_wrapper_wxToolBar::_bind_base_SetToolSeparation},
	{"base_SetToolShortHelp", &luna_wrapper_wxToolBar::_bind_base_SetToolShortHelp},
	{"base_ToggleTool", &luna_wrapper_wxToolBar::_bind_base_ToggleTool},
	{"fromVoid", &luna_wrapper_wxToolBar::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxToolBar::_bind_asVoid},
	{"getTable", &luna_wrapper_wxToolBar::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxToolBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxToolBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxToolBar >::enumValues[] = {
	{0,0}
};


