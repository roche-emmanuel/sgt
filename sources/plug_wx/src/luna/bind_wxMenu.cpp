#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMenu.h>

class luna_wrapper_wxMenu {
public:
	typedef Luna< wxMenu > luna_t;

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

		wxMenu* self= (wxMenu*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMenu >::push(L,self,false);
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
		//wxMenu* ptr= dynamic_cast< wxMenu* >(Luna< wxObject >::check(L,1));
		wxMenu* ptr= luna_caster< wxObject, wxMenu >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMenu >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Append_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,4)) ) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Append_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendCheckItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendRadioItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AppendSubMenu(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Break(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Check(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Delete_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Delete_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindChildItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemByPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenuItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuItems_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuItems_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertCheckItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertRadioItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertSeparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependCheckItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependRadioItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependSeparator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHelpString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateUI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInvokingWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInvokingWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAttached(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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

	inline static bool _lg_typecheck_base_Break(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FindItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHelpString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetHelpString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMenu::wxMenu()
	static wxMenu* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu::wxMenu() function, expected prototype:\nwxMenu::wxMenu()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxMenu();
	}

	// wxMenu::wxMenu(long style)
	static wxMenu* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu::wxMenu(long style) function, expected prototype:\nwxMenu::wxMenu(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,1);

		return new wxMenu(style);
	}

	// wxMenu::wxMenu(const wxString & title, long style = 0)
	static wxMenu* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu::wxMenu(const wxString & title, long style = 0) function, expected prototype:\nwxMenu::wxMenu(const wxString & title, long style = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,1),lua_objlen(L,1));
		long style=luatop>1 ? (long)lua_tonumber(L,2) : (long)0;

		return new wxMenu(title, style);
	}

	// wxMenu::wxMenu(lua_Table * data)
	static wxMenu* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu::wxMenu(lua_Table * data) function, expected prototype:\nwxMenu::wxMenu(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMenu(L,NULL);
	}

	// wxMenu::wxMenu(lua_Table * data, long style)
	static wxMenu* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu::wxMenu(lua_Table * data, long style) function, expected prototype:\nwxMenu::wxMenu(lua_Table * data, long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		return new wrapper_wxMenu(L,NULL, style);
	}

	// wxMenu::wxMenu(lua_Table * data, const wxString & title, long style = 0)
	static wxMenu* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu::wxMenu(lua_Table * data, const wxString & title, long style = 0) function, expected prototype:\nwxMenu::wxMenu(lua_Table * data, const wxString & title, long style = 0)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		return new wrapper_wxMenu(L,NULL, title, style);
	}

	// Overload binder for wxMenu::wxMenu
	static wxMenu* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxMenu, cannot match any of the overloads for function wxMenu:\n  wxMenu()\n  wxMenu(long)\n  wxMenu(const wxString &, long)\n  wxMenu(lua_Table *)\n  wxMenu(lua_Table *, long)\n  wxMenu(lua_Table *, const wxString &, long)\n");
		return NULL;
	}


	// Function binds:
	// wxMenuItem * wxMenu::Append(int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)
	static int _bind_Append_overload_1(lua_State *L) {
		if (!_lg_typecheck_Append_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Append(int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL) function, expected prototype:\nwxMenuItem * wxMenu::Append(int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxString helpString(lua_tostring(L,4),lua_objlen(L,4));
		wxItemKind kind=luatop>4 ? (wxItemKind)lua_tointeger(L,5) : (wxItemKind)::wxITEM_NORMAL;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Append(int, const wxString &, const wxString &, wxItemKind). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Append(id, item, helpString, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::Append(int id, const wxString & item, wxMenu * subMenu, const wxString & helpString = wxEmptyString)
	static int _bind_Append_overload_2(lua_State *L) {
		if (!_lg_typecheck_Append_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Append(int id, const wxString & item, wxMenu * subMenu, const wxString & helpString = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::Append(int id, const wxString & item, wxMenu * subMenu, const wxString & helpString = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxMenu* subMenu=(Luna< wxObject >::checkSubType< wxMenu >(L,4));
		wxString helpString(lua_tostring(L,5),lua_objlen(L,5));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Append(int, const wxString &, wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Append(id, item, subMenu, helpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::Append(wxMenuItem * menuItem)
	static int _bind_Append_overload_3(lua_State *L) {
		if (!_lg_typecheck_Append_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Append(wxMenuItem * menuItem) function, expected prototype:\nwxMenuItem * wxMenu::Append(wxMenuItem * menuItem)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuItem* menuItem=(Luna< wxObject >::checkSubType< wxMenuItem >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Append(wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Append(menuItem);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxMenu::Append
	static int _bind_Append(lua_State *L) {
		if (_lg_typecheck_Append_overload_1(L)) return _bind_Append_overload_1(L);
		if (_lg_typecheck_Append_overload_2(L)) return _bind_Append_overload_2(L);
		if (_lg_typecheck_Append_overload_3(L)) return _bind_Append_overload_3(L);

		luaL_error(L, "error in function Append, cannot match any of the overloads for function Append:\n  Append(int, const wxString &, const wxString &, wxItemKind)\n  Append(int, const wxString &, wxMenu *, const wxString &)\n  Append(wxMenuItem *)\n");
		return 0;
	}

	// wxMenuItem * wxMenu::AppendCheckItem(int id, const wxString & item, const wxString & help = wxEmptyString)
	static int _bind_AppendCheckItem(lua_State *L) {
		if (!_lg_typecheck_AppendCheckItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::AppendCheckItem(int id, const wxString & item, const wxString & help = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::AppendCheckItem(int id, const wxString & item, const wxString & help = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxString help(lua_tostring(L,4),lua_objlen(L,4));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::AppendCheckItem(int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->AppendCheckItem(id, item, help);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::AppendRadioItem(int id, const wxString & item, const wxString & help = wxEmptyString)
	static int _bind_AppendRadioItem(lua_State *L) {
		if (!_lg_typecheck_AppendRadioItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::AppendRadioItem(int id, const wxString & item, const wxString & help = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::AppendRadioItem(int id, const wxString & item, const wxString & help = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxString help(lua_tostring(L,4),lua_objlen(L,4));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::AppendRadioItem(int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->AppendRadioItem(id, item, help);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::AppendSeparator()
	static int _bind_AppendSeparator(lua_State *L) {
		if (!_lg_typecheck_AppendSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::AppendSeparator() function, expected prototype:\nwxMenuItem * wxMenu::AppendSeparator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::AppendSeparator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->AppendSeparator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::AppendSubMenu(wxMenu * submenu, const wxString & text, const wxString & help = wxEmptyString)
	static int _bind_AppendSubMenu(lua_State *L) {
		if (!_lg_typecheck_AppendSubMenu(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::AppendSubMenu(wxMenu * submenu, const wxString & text, const wxString & help = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::AppendSubMenu(wxMenu * submenu, const wxString & text, const wxString & help = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxMenu* submenu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		wxString help(lua_tostring(L,4),lua_objlen(L,4));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::AppendSubMenu(wxMenu *, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->AppendSubMenu(submenu, text, help);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// void wxMenu::Break()
	static int _bind_Break(lua_State *L) {
		if (!_lg_typecheck_Break(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::Break() function, expected prototype:\nvoid wxMenu::Break()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::Break(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Break();

		return 0;
	}

	// void wxMenu::Check(int id, bool check)
	static int _bind_Check(lua_State *L) {
		if (!_lg_typecheck_Check(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::Check(int id, bool check) function, expected prototype:\nvoid wxMenu::Check(int id, bool check)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		bool check=(bool)(lua_toboolean(L,3)==1);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::Check(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Check(id, check);

		return 0;
	}

	// bool wxMenu::Delete(int id)
	static int _bind_Delete_overload_1(lua_State *L) {
		if (!_lg_typecheck_Delete_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::Delete(int id) function, expected prototype:\nbool wxMenu::Delete(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::Delete(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Delete(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenu::Delete(wxMenuItem * item)
	static int _bind_Delete_overload_2(lua_State *L) {
		if (!_lg_typecheck_Delete_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::Delete(wxMenuItem * item) function, expected prototype:\nbool wxMenu::Delete(wxMenuItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuItem* item=(Luna< wxObject >::checkSubType< wxMenuItem >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::Delete(wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Delete(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxMenu::Delete
	static int _bind_Delete(lua_State *L) {
		if (_lg_typecheck_Delete_overload_1(L)) return _bind_Delete_overload_1(L);
		if (_lg_typecheck_Delete_overload_2(L)) return _bind_Delete_overload_2(L);

		luaL_error(L, "error in function Delete, cannot match any of the overloads for function Delete:\n  Delete(int)\n  Delete(wxMenuItem *)\n");
		return 0;
	}

	// bool wxMenu::Destroy(int id)
	static int _bind_Destroy_overload_1(lua_State *L) {
		if (!_lg_typecheck_Destroy_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::Destroy(int id) function, expected prototype:\nbool wxMenu::Destroy(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::Destroy(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Destroy(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenu::Destroy(wxMenuItem * item)
	static int _bind_Destroy_overload_2(lua_State *L) {
		if (!_lg_typecheck_Destroy_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::Destroy(wxMenuItem * item) function, expected prototype:\nbool wxMenu::Destroy(wxMenuItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuItem* item=(Luna< wxObject >::checkSubType< wxMenuItem >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::Destroy(wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Destroy(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxMenu::Destroy
	static int _bind_Destroy(lua_State *L) {
		if (_lg_typecheck_Destroy_overload_1(L)) return _bind_Destroy_overload_1(L);
		if (_lg_typecheck_Destroy_overload_2(L)) return _bind_Destroy_overload_2(L);

		luaL_error(L, "error in function Destroy, cannot match any of the overloads for function Destroy:\n  Destroy(int)\n  Destroy(wxMenuItem *)\n");
		return 0;
	}

	// void wxMenu::Enable(int id, bool enable)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::Enable(int id, bool enable) function, expected prototype:\nvoid wxMenu::Enable(int id, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::Enable(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Enable(id, enable);

		return 0;
	}

	// wxMenuItem * wxMenu::FindChildItem(int id, size_t * pos = NULL) const
	static int _bind_FindChildItem(lua_State *L) {
		if (!_lg_typecheck_FindChildItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::FindChildItem(int id, size_t * pos = NULL) const function, expected prototype:\nwxMenuItem * wxMenu::FindChildItem(int id, size_t * pos = NULL) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		size_t* pos=luatop>2 ? (size_t*)Luna< void >::check(L,3) : (size_t*)NULL;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::FindChildItem(int, size_t *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->FindChildItem(id, pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// int wxMenu::FindItem(const wxString & itemString) const
	static int _bind_FindItem(lua_State *L) {
		if (!_lg_typecheck_FindItem(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenu::FindItem(const wxString & itemString) const function, expected prototype:\nint wxMenu::FindItem(const wxString & itemString) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString itemString(lua_tostring(L,2),lua_objlen(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenu::FindItem(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FindItem(itemString);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMenuItem * wxMenu::FindItemByPosition(size_t position) const
	static int _bind_FindItemByPosition(lua_State *L) {
		if (!_lg_typecheck_FindItemByPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::FindItemByPosition(size_t position) const function, expected prototype:\nwxMenuItem * wxMenu::FindItemByPosition(size_t position) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t position=(size_t)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::FindItemByPosition(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->FindItemByPosition(position);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxString wxMenu::GetHelpString(int id) const
	static int _bind_GetHelpString(lua_State *L) {
		if (!_lg_typecheck_GetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenu::GetHelpString(int id) const function, expected prototype:\nwxString wxMenu::GetHelpString(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenu::GetHelpString(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHelpString(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenu::GetLabel(int id) const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenu::GetLabel(int id) const function, expected prototype:\nwxString wxMenu::GetLabel(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenu::GetLabel(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLabel(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenu::GetLabelText(int id) const
	static int _bind_GetLabelText(lua_State *L) {
		if (!_lg_typecheck_GetLabelText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenu::GetLabelText(int id) const function, expected prototype:\nwxString wxMenu::GetLabelText(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenu::GetLabelText(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLabelText(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxMenu::GetMenuItemCount() const
	static int _bind_GetMenuItemCount(lua_State *L) {
		if (!_lg_typecheck_GetMenuItemCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxMenu::GetMenuItemCount() const function, expected prototype:\nsize_t wxMenu::GetMenuItemCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxMenu::GetMenuItemCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetMenuItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMenuItemList & wxMenu::GetMenuItems() const
	static int _bind_GetMenuItems_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetMenuItems_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItemList & wxMenu::GetMenuItems() const function, expected prototype:\nwxMenuItemList & wxMenu::GetMenuItems() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItemList & wxMenu::GetMenuItems() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxMenuItemList* lret = &self->GetMenuItems();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItemList >::push(L,lret,false);

		return 1;
	}

	// const wxMenuItemList & wxMenu::GetMenuItems() const
	static int _bind_GetMenuItems_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetMenuItems_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxMenuItemList & wxMenu::GetMenuItems() const function, expected prototype:\nconst wxMenuItemList & wxMenu::GetMenuItems() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxMenuItemList & wxMenu::GetMenuItems() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxMenuItemList* lret = &self->GetMenuItems();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItemList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxMenu::GetMenuItems
	static int _bind_GetMenuItems(lua_State *L) {
		if (_lg_typecheck_GetMenuItems_overload_1(L)) return _bind_GetMenuItems_overload_1(L);
		if (_lg_typecheck_GetMenuItems_overload_2(L)) return _bind_GetMenuItems_overload_2(L);

		luaL_error(L, "error in function GetMenuItems, cannot match any of the overloads for function GetMenuItems:\n  GetMenuItems()\n  GetMenuItems()\n");
		return 0;
	}

	// const wxString & wxMenu::GetTitle() const
	static int _bind_GetTitle(lua_State *L) {
		if (!_lg_typecheck_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxMenu::GetTitle() const function, expected prototype:\nconst wxString & wxMenu::GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxMenu::GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxMenuItem * wxMenu::Insert(size_t pos, wxMenuItem * menuItem)
	static int _bind_Insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Insert(size_t pos, wxMenuItem * menuItem) function, expected prototype:\nwxMenuItem * wxMenu::Insert(size_t pos, wxMenuItem * menuItem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenuItem* menuItem=(Luna< wxObject >::checkSubType< wxMenuItem >(L,3));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Insert(size_t, wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Insert(pos, menuItem);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::Insert(size_t pos, int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)
	static int _bind_Insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Insert(size_t pos, int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL) function, expected prototype:\nwxMenuItem * wxMenu::Insert(size_t pos, int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)\nClass arguments details:\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString item(lua_tostring(L,4),lua_objlen(L,4));
		wxString helpString(lua_tostring(L,5),lua_objlen(L,5));
		wxItemKind kind=luatop>5 ? (wxItemKind)lua_tointeger(L,6) : (wxItemKind)::wxITEM_NORMAL;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Insert(size_t, int, const wxString &, const wxString &, wxItemKind). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Insert(pos, id, item, helpString, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxMenu::Insert
	static int _bind_Insert(lua_State *L) {
		if (_lg_typecheck_Insert_overload_1(L)) return _bind_Insert_overload_1(L);
		if (_lg_typecheck_Insert_overload_2(L)) return _bind_Insert_overload_2(L);

		luaL_error(L, "error in function Insert, cannot match any of the overloads for function Insert:\n  Insert(size_t, wxMenuItem *)\n  Insert(size_t, int, const wxString &, const wxString &, wxItemKind)\n");
		return 0;
	}

	// wxMenuItem * wxMenu::InsertCheckItem(size_t pos, int id, const wxString & item, const wxString & helpString = wxEmptyString)
	static int _bind_InsertCheckItem(lua_State *L) {
		if (!_lg_typecheck_InsertCheckItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::InsertCheckItem(size_t pos, int id, const wxString & item, const wxString & helpString = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::InsertCheckItem(size_t pos, int id, const wxString & item, const wxString & helpString = wxEmptyString)\nClass arguments details:\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString item(lua_tostring(L,4),lua_objlen(L,4));
		wxString helpString(lua_tostring(L,5),lua_objlen(L,5));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::InsertCheckItem(size_t, int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->InsertCheckItem(pos, id, item, helpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::InsertRadioItem(size_t pos, int id, const wxString & item, const wxString & helpString = wxEmptyString)
	static int _bind_InsertRadioItem(lua_State *L) {
		if (!_lg_typecheck_InsertRadioItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::InsertRadioItem(size_t pos, int id, const wxString & item, const wxString & helpString = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::InsertRadioItem(size_t pos, int id, const wxString & item, const wxString & helpString = wxEmptyString)\nClass arguments details:\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=(size_t)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString item(lua_tostring(L,4),lua_objlen(L,4));
		wxString helpString(lua_tostring(L,5),lua_objlen(L,5));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::InsertRadioItem(size_t, int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->InsertRadioItem(pos, id, item, helpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::InsertSeparator(size_t pos)
	static int _bind_InsertSeparator(lua_State *L) {
		if (!_lg_typecheck_InsertSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::InsertSeparator(size_t pos) function, expected prototype:\nwxMenuItem * wxMenu::InsertSeparator(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::InsertSeparator(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->InsertSeparator(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// bool wxMenu::IsChecked(int id) const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::IsChecked(int id) const function, expected prototype:\nbool wxMenu::IsChecked(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::IsChecked(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsChecked(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenu::IsEnabled(int id) const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::IsEnabled(int id) const function, expected prototype:\nbool wxMenu::IsEnabled(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::IsEnabled(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEnabled(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxMenuItem * wxMenu::Prepend(wxMenuItem * item)
	static int _bind_Prepend_overload_1(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Prepend(wxMenuItem * item) function, expected prototype:\nwxMenuItem * wxMenu::Prepend(wxMenuItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuItem* item=(Luna< wxObject >::checkSubType< wxMenuItem >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Prepend(wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Prepend(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::Prepend(int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)
	static int _bind_Prepend_overload_2(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Prepend(int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL) function, expected prototype:\nwxMenuItem * wxMenu::Prepend(int id, const wxString & item = wxEmptyString, const wxString & helpString = wxEmptyString, wxItemKind kind = ::wxITEM_NORMAL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxString helpString(lua_tostring(L,4),lua_objlen(L,4));
		wxItemKind kind=luatop>4 ? (wxItemKind)lua_tointeger(L,5) : (wxItemKind)::wxITEM_NORMAL;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Prepend(int, const wxString &, const wxString &, wxItemKind). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Prepend(id, item, helpString, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxMenu::Prepend
	static int _bind_Prepend(lua_State *L) {
		if (_lg_typecheck_Prepend_overload_1(L)) return _bind_Prepend_overload_1(L);
		if (_lg_typecheck_Prepend_overload_2(L)) return _bind_Prepend_overload_2(L);

		luaL_error(L, "error in function Prepend, cannot match any of the overloads for function Prepend:\n  Prepend(wxMenuItem *)\n  Prepend(int, const wxString &, const wxString &, wxItemKind)\n");
		return 0;
	}

	// wxMenuItem * wxMenu::PrependCheckItem(int id, const wxString & item, const wxString & helpString = wxEmptyString)
	static int _bind_PrependCheckItem(lua_State *L) {
		if (!_lg_typecheck_PrependCheckItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::PrependCheckItem(int id, const wxString & item, const wxString & helpString = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::PrependCheckItem(int id, const wxString & item, const wxString & helpString = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxString helpString(lua_tostring(L,4),lua_objlen(L,4));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::PrependCheckItem(int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->PrependCheckItem(id, item, helpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::PrependRadioItem(int id, const wxString & item, const wxString & helpString = wxEmptyString)
	static int _bind_PrependRadioItem(lua_State *L) {
		if (!_lg_typecheck_PrependRadioItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::PrependRadioItem(int id, const wxString & item, const wxString & helpString = wxEmptyString) function, expected prototype:\nwxMenuItem * wxMenu::PrependRadioItem(int id, const wxString & item, const wxString & helpString = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		wxString item(lua_tostring(L,3),lua_objlen(L,3));
		wxString helpString(lua_tostring(L,4),lua_objlen(L,4));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::PrependRadioItem(int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->PrependRadioItem(id, item, helpString);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::PrependSeparator()
	static int _bind_PrependSeparator(lua_State *L) {
		if (!_lg_typecheck_PrependSeparator(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::PrependSeparator() function, expected prototype:\nwxMenuItem * wxMenu::PrependSeparator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::PrependSeparator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->PrependSeparator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::Remove(int id)
	static int _bind_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Remove(int id) function, expected prototype:\nwxMenuItem * wxMenu::Remove(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Remove(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// wxMenuItem * wxMenu::Remove(wxMenuItem * item)
	static int _bind_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxMenu::Remove(wxMenuItem * item) function, expected prototype:\nwxMenuItem * wxMenu::Remove(wxMenuItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuItem* item=(Luna< wxObject >::checkSubType< wxMenuItem >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxMenu::Remove(wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->Remove(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxMenu::Remove
	static int _bind_Remove(lua_State *L) {
		if (_lg_typecheck_Remove_overload_1(L)) return _bind_Remove_overload_1(L);
		if (_lg_typecheck_Remove_overload_2(L)) return _bind_Remove_overload_2(L);

		luaL_error(L, "error in function Remove, cannot match any of the overloads for function Remove:\n  Remove(int)\n  Remove(wxMenuItem *)\n");
		return 0;
	}

	// void wxMenu::SetHelpString(int id, const wxString & helpString)
	static int _bind_SetHelpString(lua_State *L) {
		if (!_lg_typecheck_SetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::SetHelpString(int id, const wxString & helpString) function, expected prototype:\nvoid wxMenu::SetHelpString(int id, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::SetHelpString(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHelpString(id, helpString);

		return 0;
	}

	// void wxMenu::SetLabel(int id, const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::SetLabel(int id, const wxString & label) function, expected prototype:\nvoid wxMenu::SetLabel(int id, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::SetLabel(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabel(id, label);

		return 0;
	}

	// void wxMenu::SetTitle(const wxString & title)
	static int _bind_SetTitle(lua_State *L) {
		if (!_lg_typecheck_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::SetTitle(const wxString & title) function, expected prototype:\nvoid wxMenu::SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTitle(title);

		return 0;
	}

	// void wxMenu::UpdateUI(wxEvtHandler * source = NULL)
	static int _bind_UpdateUI(lua_State *L) {
		if (!_lg_typecheck_UpdateUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::UpdateUI(wxEvtHandler * source = NULL) function, expected prototype:\nvoid wxMenu::UpdateUI(wxEvtHandler * source = NULL)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* source=luatop>1 ? (Luna< wxObject >::checkSubType< wxEvtHandler >(L,2)) : (wxEvtHandler*)NULL;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::UpdateUI(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateUI(source);

		return 0;
	}

	// void wxMenu::SetInvokingWindow(wxWindow * win)
	static int _bind_SetInvokingWindow(lua_State *L) {
		if (!_lg_typecheck_SetInvokingWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::SetInvokingWindow(wxWindow * win) function, expected prototype:\nvoid wxMenu::SetInvokingWindow(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::SetInvokingWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInvokingWindow(win);

		return 0;
	}

	// wxWindow * wxMenu::GetInvokingWindow() const
	static int _bind_GetInvokingWindow(lua_State *L) {
		if (!_lg_typecheck_GetInvokingWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxMenu::GetInvokingWindow() const function, expected prototype:\nwxWindow * wxMenu::GetInvokingWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxMenu::GetInvokingWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetInvokingWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxMenu::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxMenu::GetWindow() const function, expected prototype:\nwxWindow * wxMenu::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxMenu::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// long wxMenu::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in long wxMenu::GetStyle() const function, expected prototype:\nlong wxMenu::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxMenu::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxMenu::SetParent(wxMenu * parent)
	static int _bind_SetParent(lua_State *L) {
		if (!_lg_typecheck_SetParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::SetParent(wxMenu * parent) function, expected prototype:\nvoid wxMenu::SetParent(wxMenu * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* parent=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::SetParent(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParent(parent);

		return 0;
	}

	// wxMenu * wxMenu::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenu::GetParent() const function, expected prototype:\nwxMenu * wxMenu::GetParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenu::GetParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// void wxMenu::Attach(wxMenuBar * menubar)
	static int _bind_Attach(lua_State *L) {
		if (!_lg_typecheck_Attach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::Attach(wxMenuBar * menubar) function, expected prototype:\nvoid wxMenu::Attach(wxMenuBar * menubar)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuBar* menubar=(Luna< wxObject >::checkSubType< wxMenuBar >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::Attach(wxMenuBar *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Attach(menubar);

		return 0;
	}

	// void wxMenu::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::Detach() function, expected prototype:\nvoid wxMenu::Detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::Detach(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Detach();

		return 0;
	}

	// bool wxMenu::IsAttached() const
	static int _bind_IsAttached(lua_State *L) {
		if (!_lg_typecheck_IsAttached(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::IsAttached() const function, expected prototype:\nbool wxMenu::IsAttached() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::IsAttached() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAttached();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxMenu::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMenu::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMenu::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMenu::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMenu::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxMenu::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxMenu::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::QueueEvent(event);

		return 0;
	}

	// void wxMenu::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxMenu::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMenu::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::AddPendingEvent(event);

		return 0;
	}

	// bool wxMenu::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenu::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxMenu::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMenu::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenu::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenu::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenu::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMenu::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::SetNextHandler(handler);

		return 0;
	}

	// void wxMenu::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMenu::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::SetPreviousHandler(handler);

		return 0;
	}

	// void wxMenu::base_Break()
	static int _bind_base_Break(lua_State *L) {
		if (!_lg_typecheck_base_Break(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_Break() function, expected prototype:\nvoid wxMenu::base_Break()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_Break(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::Break();

		return 0;
	}

	// int wxMenu::base_FindItem(const wxString & itemString) const
	static int _bind_base_FindItem(lua_State *L) {
		if (!_lg_typecheck_base_FindItem(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenu::base_FindItem(const wxString & itemString) const function, expected prototype:\nint wxMenu::base_FindItem(const wxString & itemString) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString itemString(lua_tostring(L,2),lua_objlen(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenu::base_FindItem(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenu::FindItem(itemString);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenu::base_GetHelpString(int id) const
	static int _bind_base_GetHelpString(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenu::base_GetHelpString(int id) const function, expected prototype:\nwxString wxMenu::base_GetHelpString(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenu::base_GetHelpString(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMenu::GetHelpString(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxMenu::base_SetHelpString(int id, const wxString & helpString)
	static int _bind_base_SetHelpString(lua_State *L) {
		if (!_lg_typecheck_base_SetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_SetHelpString(int id, const wxString & helpString) function, expected prototype:\nvoid wxMenu::base_SetHelpString(int id, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_SetHelpString(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::SetHelpString(id, helpString);

		return 0;
	}

	// void wxMenu::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxMenu::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::SetTitle(title);

		return 0;
	}

	// void wxMenu::base_Attach(wxMenuBar * menubar)
	static int _bind_base_Attach(lua_State *L) {
		if (!_lg_typecheck_base_Attach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_Attach(wxMenuBar * menubar) function, expected prototype:\nvoid wxMenu::base_Attach(wxMenuBar * menubar)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuBar* menubar=(Luna< wxObject >::checkSubType< wxMenuBar >(L,2));

		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_Attach(wxMenuBar *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::Attach(menubar);

		return 0;
	}

	// void wxMenu::base_Detach()
	static int _bind_base_Detach(lua_State *L) {
		if (!_lg_typecheck_base_Detach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenu::base_Detach() function, expected prototype:\nvoid wxMenu::base_Detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenu* self=Luna< wxObject >::checkSubType< wxMenu >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenu::base_Detach(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenu::Detach();

		return 0;
	}


	// Operator binds:

};

wxMenu* LunaTraits< wxMenu >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMenu::_bind_ctor(L);
}

void LunaTraits< wxMenu >::_bind_dtor(wxMenu* obj) {
	delete obj;
}

const char LunaTraits< wxMenu >::className[] = "wxMenu";
const char LunaTraits< wxMenu >::fullName[] = "wxMenu";
const char LunaTraits< wxMenu >::moduleName[] = "wx";
const char* LunaTraits< wxMenu >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxMenu >::hash = 20085805;
const int LunaTraits< wxMenu >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMenu >::methods[] = {
	{"Append", &luna_wrapper_wxMenu::_bind_Append},
	{"AppendCheckItem", &luna_wrapper_wxMenu::_bind_AppendCheckItem},
	{"AppendRadioItem", &luna_wrapper_wxMenu::_bind_AppendRadioItem},
	{"AppendSeparator", &luna_wrapper_wxMenu::_bind_AppendSeparator},
	{"AppendSubMenu", &luna_wrapper_wxMenu::_bind_AppendSubMenu},
	{"Break", &luna_wrapper_wxMenu::_bind_Break},
	{"Check", &luna_wrapper_wxMenu::_bind_Check},
	{"Delete", &luna_wrapper_wxMenu::_bind_Delete},
	{"Destroy", &luna_wrapper_wxMenu::_bind_Destroy},
	{"Enable", &luna_wrapper_wxMenu::_bind_Enable},
	{"FindChildItem", &luna_wrapper_wxMenu::_bind_FindChildItem},
	{"FindItem", &luna_wrapper_wxMenu::_bind_FindItem},
	{"FindItemByPosition", &luna_wrapper_wxMenu::_bind_FindItemByPosition},
	{"GetHelpString", &luna_wrapper_wxMenu::_bind_GetHelpString},
	{"GetLabel", &luna_wrapper_wxMenu::_bind_GetLabel},
	{"GetLabelText", &luna_wrapper_wxMenu::_bind_GetLabelText},
	{"GetMenuItemCount", &luna_wrapper_wxMenu::_bind_GetMenuItemCount},
	{"GetMenuItems", &luna_wrapper_wxMenu::_bind_GetMenuItems},
	{"GetTitle", &luna_wrapper_wxMenu::_bind_GetTitle},
	{"Insert", &luna_wrapper_wxMenu::_bind_Insert},
	{"InsertCheckItem", &luna_wrapper_wxMenu::_bind_InsertCheckItem},
	{"InsertRadioItem", &luna_wrapper_wxMenu::_bind_InsertRadioItem},
	{"InsertSeparator", &luna_wrapper_wxMenu::_bind_InsertSeparator},
	{"IsChecked", &luna_wrapper_wxMenu::_bind_IsChecked},
	{"IsEnabled", &luna_wrapper_wxMenu::_bind_IsEnabled},
	{"Prepend", &luna_wrapper_wxMenu::_bind_Prepend},
	{"PrependCheckItem", &luna_wrapper_wxMenu::_bind_PrependCheckItem},
	{"PrependRadioItem", &luna_wrapper_wxMenu::_bind_PrependRadioItem},
	{"PrependSeparator", &luna_wrapper_wxMenu::_bind_PrependSeparator},
	{"Remove", &luna_wrapper_wxMenu::_bind_Remove},
	{"SetHelpString", &luna_wrapper_wxMenu::_bind_SetHelpString},
	{"SetLabel", &luna_wrapper_wxMenu::_bind_SetLabel},
	{"SetTitle", &luna_wrapper_wxMenu::_bind_SetTitle},
	{"UpdateUI", &luna_wrapper_wxMenu::_bind_UpdateUI},
	{"SetInvokingWindow", &luna_wrapper_wxMenu::_bind_SetInvokingWindow},
	{"GetInvokingWindow", &luna_wrapper_wxMenu::_bind_GetInvokingWindow},
	{"GetWindow", &luna_wrapper_wxMenu::_bind_GetWindow},
	{"GetStyle", &luna_wrapper_wxMenu::_bind_GetStyle},
	{"SetParent", &luna_wrapper_wxMenu::_bind_SetParent},
	{"GetParent", &luna_wrapper_wxMenu::_bind_GetParent},
	{"Attach", &luna_wrapper_wxMenu::_bind_Attach},
	{"Detach", &luna_wrapper_wxMenu::_bind_Detach},
	{"IsAttached", &luna_wrapper_wxMenu::_bind_IsAttached},
	{"base_GetClassInfo", &luna_wrapper_wxMenu::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxMenu::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxMenu::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxMenu::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxMenu::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxMenu::_bind_base_SetPreviousHandler},
	{"base_Break", &luna_wrapper_wxMenu::_bind_base_Break},
	{"base_FindItem", &luna_wrapper_wxMenu::_bind_base_FindItem},
	{"base_GetHelpString", &luna_wrapper_wxMenu::_bind_base_GetHelpString},
	{"base_SetHelpString", &luna_wrapper_wxMenu::_bind_base_SetHelpString},
	{"base_SetTitle", &luna_wrapper_wxMenu::_bind_base_SetTitle},
	{"base_Attach", &luna_wrapper_wxMenu::_bind_base_Attach},
	{"base_Detach", &luna_wrapper_wxMenu::_bind_base_Detach},
	{"fromVoid", &luna_wrapper_wxMenu::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMenu::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMenu::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMenu >::converters[] = {
	{"wxObject", &luna_wrapper_wxMenu::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenu >::enumValues[] = {
	{0,0}
};


