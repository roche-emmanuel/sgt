#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGrid.h>

class luna_wrapper_wxGrid {
public:
	typedef Luna< wxGrid > luna_t;

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

		wxGrid* self= (wxGrid*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGrid >::push(L,self,false);
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
		//wxGrid* ptr= dynamic_cast< wxGrid* >(Luna< wxObject >::check(L,1));
		wxGrid* ptr= luna_caster< wxObject, wxGrid >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGrid >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CreateGrid(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableGridLines(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColGridLinePen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultGridLinePen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridLineColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowGridLinePen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GridLinesEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGridLineColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColLabelAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColLabelTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabelFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabelTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowLabelAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideColLabels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HideRowLabels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColLabelAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColLabelTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowLabelAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetUseNativeColLabels(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseNativeColHeader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellAlignment(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultCellAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultCellFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCellAlignment_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellAlignment_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellFont(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellTextColour_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellTextColour_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellTextColour_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultCellAlignment(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultCellBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultCellFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultCellTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanEnableCellControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableCellEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableCellEditControl(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableEditing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellEditor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellRenderer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultEditorForCell_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultEditorForCell_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultEditorForType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultRendererForCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultRendererForType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideCellEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCellEditControlEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsCurrentCellReadOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsReadOnly(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RegisterDataType(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,96062845)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,53399133)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveEditControlValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCellEditor(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,53399133)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellRenderer(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,96062845)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellValue_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellValue_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellValue_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColFormatBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColFormatCustom(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColFormatFloat(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColFormatNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,53399133)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96062845)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetReadOnly(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowCellEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoSizeColLabelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoSizeColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoSizeColumns(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoSizeRow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoSizeRowLabelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoSizeRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColLabelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColMinimalAcceptableWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsColShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultColLabelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultColSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultRowLabelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultRowSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowMinimalAcceptableHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowLabelSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsRowShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColLabelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColMinimalAcceptableWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColMinimalWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultColSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultRowSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowLabelSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowMinimalAcceptableHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowMinimalHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HideRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColSizes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73467241) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowSizes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73467241) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCellSize(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanDragCell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanDragColMove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanDragColSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanDragGridSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanDragRowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableColResize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableRowResize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableDragColMove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableDragColSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableDragGridSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableDragRowSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableDragCell(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDragColMove(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDragColSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDragGridSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDragRowSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColAt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ResetColPos(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridCursorCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridCursorRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GoToCell_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GoToCell_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorDownBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorLeftBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorRightBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorUp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveCursorUpBlock(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MovePageDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MovePageUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGridCursor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetGridCursor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedCells(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedCols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionBlockBottomRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionBlockTopLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionForeground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInSelection_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsInSelection_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectBlock_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectBlock_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,3))) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectCol(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectRow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionBackground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionForeground(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollLineX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScrollLineY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsVisible_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsVisible_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeCellVisible_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MakeCellVisible_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetScrollLineX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetScrollLineY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BlockToDeviceRect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,6476046) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CellToRect_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CellToRect_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XToCol(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XToEdgeOfCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XYToCell_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_XYToCell_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_YToEdgeOfRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_YToRow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreHorzGridLinesClipped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AreVertGridLinesClipped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_BeginBatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearGrid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClipHorzGridLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClipVertGridLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndBatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ForceRefresh(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBatchCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberCols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrCreateCellAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSortingColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSortingBy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSortOrderAscending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSortingColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnsetSortingColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridRowLabelWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridColLabelWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridCornerLabelWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridColHeader(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
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

	inline static bool _lg_typecheck_base_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColGridLinePen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultGridLinePen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRowGridLinePen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultEditorForCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultEditorForType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultRendererForCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultRendererForType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGrid::wxGrid()
	static wxGrid* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid::wxGrid() function, expected prototype:\nwxGrid::wxGrid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGrid();
	}

	// wxGrid::wxGrid(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr)
	static wxGrid* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid::wxGrid(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr) function, expected prototype:\nwxGrid::wxGrid(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGrid::wxGrid function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::wxGrid function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)wxWANTS_CHARS;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxGrid(parent, id, pos, size, style, name);
	}

	// wxGrid::wxGrid(lua_Table * data)
	static wxGrid* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid::wxGrid(lua_Table * data) function, expected prototype:\nwxGrid::wxGrid(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGrid(L,NULL);
	}

	// wxGrid::wxGrid(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr)
	static wxGrid* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid::wxGrid(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr) function, expected prototype:\nwxGrid::wxGrid(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGrid::wxGrid function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::wxGrid function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxWANTS_CHARS;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxGrid(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxGrid::wxGrid
	static wxGrid* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGrid, cannot match any of the overloads for function wxGrid:\n  wxGrid()\n  wxGrid(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxGrid(lua_Table *)\n  wxGrid(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGrid::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr) function, expected prototype:\nbool wxGrid::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGrid::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxWANTS_CHARS;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::CreateGrid(int numRows, int numCols, wxGrid::wxGridSelectionModes selmode = wxGrid::wxGridSelectCells)
	static int _bind_CreateGrid(lua_State *L) {
		if (!_lg_typecheck_CreateGrid(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CreateGrid(int numRows, int numCols, wxGrid::wxGridSelectionModes selmode = wxGrid::wxGridSelectCells) function, expected prototype:\nbool wxGrid::CreateGrid(int numRows, int numCols, wxGrid::wxGridSelectionModes selmode = wxGrid::wxGridSelectCells)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numRows=(int)lua_tointeger(L,2);
		int numCols=(int)lua_tointeger(L,3);
		wxGrid::wxGridSelectionModes selmode=luatop>3 ? (wxGrid::wxGridSelectionModes)lua_tointeger(L,4) : (wxGrid::wxGridSelectionModes)wxGrid::wxGridSelectCells;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CreateGrid(int, int, wxGrid::wxGridSelectionModes). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CreateGrid(numRows, numCols, selmode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::SetTable(wxGridTableBase * table, bool takeOwnership = false, wxGrid::wxGridSelectionModes selmode = wxGrid::wxGridSelectCells)
	static int _bind_SetTable(lua_State *L) {
		if (!_lg_typecheck_SetTable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::SetTable(wxGridTableBase * table, bool takeOwnership = false, wxGrid::wxGridSelectionModes selmode = wxGrid::wxGridSelectCells) function, expected prototype:\nbool wxGrid::SetTable(wxGridTableBase * table, bool takeOwnership = false, wxGrid::wxGridSelectionModes selmode = wxGrid::wxGridSelectCells)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxGridTableBase* table=(Luna< wxObject >::checkSubType< wxGridTableBase >(L,2));
		bool takeOwnership=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		wxGrid::wxGridSelectionModes selmode=luatop>3 ? (wxGrid::wxGridSelectionModes)lua_tointeger(L,4) : (wxGrid::wxGridSelectionModes)wxGrid::wxGridSelectCells;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::SetTable(wxGridTableBase *, bool, wxGrid::wxGridSelectionModes). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetTable(table, takeOwnership, selmode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::EnableGridLines(bool enable = true)
	static int _bind_EnableGridLines(lua_State *L) {
		if (!_lg_typecheck_EnableGridLines(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableGridLines(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableGridLines(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableGridLines(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableGridLines(enable);

		return 0;
	}

	// wxPen wxGrid::GetColGridLinePen(int col)
	static int _bind_GetColGridLinePen(lua_State *L) {
		if (!_lg_typecheck_GetColGridLinePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen wxGrid::GetColGridLinePen(int col) function, expected prototype:\nwxPen wxGrid::GetColGridLinePen(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen wxGrid::GetColGridLinePen(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen stack_lret = self->GetColGridLinePen(col);
		wxPen* lret = new wxPen(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,true);

		return 1;
	}

	// wxPen wxGrid::GetDefaultGridLinePen()
	static int _bind_GetDefaultGridLinePen(lua_State *L) {
		if (!_lg_typecheck_GetDefaultGridLinePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen wxGrid::GetDefaultGridLinePen() function, expected prototype:\nwxPen wxGrid::GetDefaultGridLinePen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen wxGrid::GetDefaultGridLinePen(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen stack_lret = self->GetDefaultGridLinePen();
		wxPen* lret = new wxPen(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,true);

		return 1;
	}

	// wxColour wxGrid::GetGridLineColour() const
	static int _bind_GetGridLineColour(lua_State *L) {
		if (!_lg_typecheck_GetGridLineColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetGridLineColour() const function, expected prototype:\nwxColour wxGrid::GetGridLineColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetGridLineColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetGridLineColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxPen wxGrid::GetRowGridLinePen(int row)
	static int _bind_GetRowGridLinePen(lua_State *L) {
		if (!_lg_typecheck_GetRowGridLinePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen wxGrid::GetRowGridLinePen(int row) function, expected prototype:\nwxPen wxGrid::GetRowGridLinePen(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen wxGrid::GetRowGridLinePen(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen stack_lret = self->GetRowGridLinePen(row);
		wxPen* lret = new wxPen(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,true);

		return 1;
	}

	// bool wxGrid::GridLinesEnabled() const
	static int _bind_GridLinesEnabled(lua_State *L) {
		if (!_lg_typecheck_GridLinesEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::GridLinesEnabled() const function, expected prototype:\nbool wxGrid::GridLinesEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::GridLinesEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GridLinesEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::SetGridLineColour(const wxColour & colour)
	static int _bind_SetGridLineColour(lua_State *L) {
		if (!_lg_typecheck_SetGridLineColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetGridLineColour(const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetGridLineColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetGridLineColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetGridLineColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGridLineColour(colour);

		return 0;
	}

	// void wxGrid::GetColLabelAlignment(int * horiz, int * vert) const
	static int _bind_GetColLabelAlignment(lua_State *L) {
		if (!_lg_typecheck_GetColLabelAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::GetColLabelAlignment(int * horiz, int * vert) const function, expected prototype:\nvoid wxGrid::GetColLabelAlignment(int * horiz, int * vert) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* horiz=(int*)Luna< void >::check(L,2);
		int* vert=(int*)Luna< void >::check(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::GetColLabelAlignment(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetColLabelAlignment(horiz, vert);

		return 0;
	}

	// int wxGrid::GetColLabelTextOrientation() const
	static int _bind_GetColLabelTextOrientation(lua_State *L) {
		if (!_lg_typecheck_GetColLabelTextOrientation(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetColLabelTextOrientation() const function, expected prototype:\nint wxGrid::GetColLabelTextOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetColLabelTextOrientation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColLabelTextOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxGrid::GetColLabelValue(int col) const
	static int _bind_GetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_GetColLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::GetColLabelValue(int col) const function, expected prototype:\nwxString wxGrid::GetColLabelValue(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::GetColLabelValue(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetColLabelValue(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxGrid::GetLabelBackgroundColour() const
	static int _bind_GetLabelBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetLabelBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetLabelBackgroundColour() const function, expected prototype:\nwxColour wxGrid::GetLabelBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetLabelBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetLabelBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFont wxGrid::GetLabelFont() const
	static int _bind_GetLabelFont(lua_State *L) {
		if (!_lg_typecheck_GetLabelFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxGrid::GetLabelFont() const function, expected prototype:\nwxFont wxGrid::GetLabelFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxGrid::GetLabelFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetLabelFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxColour wxGrid::GetLabelTextColour() const
	static int _bind_GetLabelTextColour(lua_State *L) {
		if (!_lg_typecheck_GetLabelTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetLabelTextColour() const function, expected prototype:\nwxColour wxGrid::GetLabelTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetLabelTextColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetLabelTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::GetRowLabelAlignment(int * horiz, int * vert) const
	static int _bind_GetRowLabelAlignment(lua_State *L) {
		if (!_lg_typecheck_GetRowLabelAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::GetRowLabelAlignment(int * horiz, int * vert) const function, expected prototype:\nvoid wxGrid::GetRowLabelAlignment(int * horiz, int * vert) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* horiz=(int*)Luna< void >::check(L,2);
		int* vert=(int*)Luna< void >::check(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::GetRowLabelAlignment(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetRowLabelAlignment(horiz, vert);

		return 0;
	}

	// wxString wxGrid::GetRowLabelValue(int row) const
	static int _bind_GetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_GetRowLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::GetRowLabelValue(int row) const function, expected prototype:\nwxString wxGrid::GetRowLabelValue(int row) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::GetRowLabelValue(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetRowLabelValue(row);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGrid::HideColLabels()
	static int _bind_HideColLabels(lua_State *L) {
		if (!_lg_typecheck_HideColLabels(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::HideColLabels() function, expected prototype:\nvoid wxGrid::HideColLabels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::HideColLabels(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HideColLabels();

		return 0;
	}

	// void wxGrid::HideRowLabels()
	static int _bind_HideRowLabels(lua_State *L) {
		if (!_lg_typecheck_HideRowLabels(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::HideRowLabels() function, expected prototype:\nvoid wxGrid::HideRowLabels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::HideRowLabels(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HideRowLabels();

		return 0;
	}

	// void wxGrid::SetColLabelAlignment(int horiz, int vert)
	static int _bind_SetColLabelAlignment(lua_State *L) {
		if (!_lg_typecheck_SetColLabelAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColLabelAlignment(int horiz, int vert) function, expected prototype:\nvoid wxGrid::SetColLabelAlignment(int horiz, int vert)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int horiz=(int)lua_tointeger(L,2);
		int vert=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColLabelAlignment(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColLabelAlignment(horiz, vert);

		return 0;
	}

	// void wxGrid::SetColLabelTextOrientation(int textOrientation)
	static int _bind_SetColLabelTextOrientation(lua_State *L) {
		if (!_lg_typecheck_SetColLabelTextOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColLabelTextOrientation(int textOrientation) function, expected prototype:\nvoid wxGrid::SetColLabelTextOrientation(int textOrientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int textOrientation=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColLabelTextOrientation(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColLabelTextOrientation(textOrientation);

		return 0;
	}

	// void wxGrid::SetColLabelValue(int col, const wxString & value)
	static int _bind_SetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_SetColLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColLabelValue(int col, const wxString & value) function, expected prototype:\nvoid wxGrid::SetColLabelValue(int col, const wxString & value)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColLabelValue(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColLabelValue(col, value);

		return 0;
	}

	// void wxGrid::SetLabelBackgroundColour(const wxColour & colour)
	static int _bind_SetLabelBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetLabelBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetLabelBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetLabelBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetLabelBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetLabelBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabelBackgroundColour(colour);

		return 0;
	}

	// void wxGrid::SetLabelFont(const wxFont & font)
	static int _bind_SetLabelFont(lua_State *L) {
		if (!_lg_typecheck_SetLabelFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetLabelFont(const wxFont & font) function, expected prototype:\nvoid wxGrid::SetLabelFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGrid::SetLabelFont function");
		}
		const wxFont & font=*font_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetLabelFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabelFont(font);

		return 0;
	}

	// void wxGrid::SetLabelTextColour(const wxColour & colour)
	static int _bind_SetLabelTextColour(lua_State *L) {
		if (!_lg_typecheck_SetLabelTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetLabelTextColour(const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetLabelTextColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetLabelTextColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetLabelTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabelTextColour(colour);

		return 0;
	}

	// void wxGrid::SetRowLabelAlignment(int horiz, int vert)
	static int _bind_SetRowLabelAlignment(lua_State *L) {
		if (!_lg_typecheck_SetRowLabelAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowLabelAlignment(int horiz, int vert) function, expected prototype:\nvoid wxGrid::SetRowLabelAlignment(int horiz, int vert)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int horiz=(int)lua_tointeger(L,2);
		int vert=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowLabelAlignment(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowLabelAlignment(horiz, vert);

		return 0;
	}

	// void wxGrid::SetRowLabelValue(int row, const wxString & value)
	static int _bind_SetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_SetRowLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowLabelValue(int row, const wxString & value) function, expected prototype:\nvoid wxGrid::SetRowLabelValue(int row, const wxString & value)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowLabelValue(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowLabelValue(row, value);

		return 0;
	}

	// void wxGrid::SetUseNativeColLabels(bool native = true)
	static int _bind_SetUseNativeColLabels(lua_State *L) {
		if (!_lg_typecheck_SetUseNativeColLabels(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetUseNativeColLabels(bool native = true) function, expected prototype:\nvoid wxGrid::SetUseNativeColLabels(bool native = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool native=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetUseNativeColLabels(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetUseNativeColLabels(native);

		return 0;
	}

	// void wxGrid::UseNativeColHeader(bool native = true)
	static int _bind_UseNativeColHeader(lua_State *L) {
		if (!_lg_typecheck_UseNativeColHeader(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::UseNativeColHeader(bool native = true) function, expected prototype:\nvoid wxGrid::UseNativeColHeader(bool native = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool native=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::UseNativeColHeader(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UseNativeColHeader(native);

		return 0;
	}

	// void wxGrid::GetCellAlignment(int row, int col, int * horiz, int * vert) const
	static int _bind_GetCellAlignment(lua_State *L) {
		if (!_lg_typecheck_GetCellAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::GetCellAlignment(int row, int col, int * horiz, int * vert) const function, expected prototype:\nvoid wxGrid::GetCellAlignment(int row, int col, int * horiz, int * vert) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		int* horiz=(int*)Luna< void >::check(L,4);
		int* vert=(int*)Luna< void >::check(L,5);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::GetCellAlignment(int, int, int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetCellAlignment(row, col, horiz, vert);

		return 0;
	}

	// wxColour wxGrid::GetCellBackgroundColour(int row, int col) const
	static int _bind_GetCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetCellBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetCellBackgroundColour(int row, int col) const function, expected prototype:\nwxColour wxGrid::GetCellBackgroundColour(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetCellBackgroundColour(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCellBackgroundColour(row, col);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFont wxGrid::GetCellFont(int row, int col) const
	static int _bind_GetCellFont(lua_State *L) {
		if (!_lg_typecheck_GetCellFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxGrid::GetCellFont(int row, int col) const function, expected prototype:\nwxFont wxGrid::GetCellFont(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxGrid::GetCellFont(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetCellFont(row, col);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxColour wxGrid::GetCellTextColour(int row, int col) const
	static int _bind_GetCellTextColour(lua_State *L) {
		if (!_lg_typecheck_GetCellTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetCellTextColour(int row, int col) const function, expected prototype:\nwxColour wxGrid::GetCellTextColour(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetCellTextColour(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCellTextColour(row, col);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::GetDefaultCellAlignment(int * horiz, int * vert) const
	static int _bind_GetDefaultCellAlignment(lua_State *L) {
		if (!_lg_typecheck_GetDefaultCellAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::GetDefaultCellAlignment(int * horiz, int * vert) const function, expected prototype:\nvoid wxGrid::GetDefaultCellAlignment(int * horiz, int * vert) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* horiz=(int*)Luna< void >::check(L,2);
		int* vert=(int*)Luna< void >::check(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::GetDefaultCellAlignment(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetDefaultCellAlignment(horiz, vert);

		return 0;
	}

	// wxColour wxGrid::GetDefaultCellBackgroundColour() const
	static int _bind_GetDefaultCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetDefaultCellBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetDefaultCellBackgroundColour() const function, expected prototype:\nwxColour wxGrid::GetDefaultCellBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetDefaultCellBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetDefaultCellBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxFont wxGrid::GetDefaultCellFont() const
	static int _bind_GetDefaultCellFont(lua_State *L) {
		if (!_lg_typecheck_GetDefaultCellFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxGrid::GetDefaultCellFont() const function, expected prototype:\nwxFont wxGrid::GetDefaultCellFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxGrid::GetDefaultCellFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetDefaultCellFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxColour wxGrid::GetDefaultCellTextColour() const
	static int _bind_GetDefaultCellTextColour(lua_State *L) {
		if (!_lg_typecheck_GetDefaultCellTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetDefaultCellTextColour() const function, expected prototype:\nwxColour wxGrid::GetDefaultCellTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetDefaultCellTextColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetDefaultCellTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::SetCellAlignment(int row, int col, int horiz, int vert)
	static int _bind_SetCellAlignment_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetCellAlignment_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellAlignment(int row, int col, int horiz, int vert) function, expected prototype:\nvoid wxGrid::SetCellAlignment(int row, int col, int horiz, int vert)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		int horiz=(int)lua_tointeger(L,4);
		int vert=(int)lua_tointeger(L,5);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellAlignment(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellAlignment(row, col, horiz, vert);

		return 0;
	}

	// void wxGrid::SetCellAlignment(int align, int row, int col)
	static int _bind_SetCellAlignment_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetCellAlignment_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellAlignment(int align, int row, int col) function, expected prototype:\nvoid wxGrid::SetCellAlignment(int align, int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int align=(int)lua_tointeger(L,2);
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellAlignment(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellAlignment(align, row, col);

		return 0;
	}

	// Overload binder for wxGrid::SetCellAlignment
	static int _bind_SetCellAlignment(lua_State *L) {
		if (_lg_typecheck_SetCellAlignment_overload_1(L)) return _bind_SetCellAlignment_overload_1(L);
		if (_lg_typecheck_SetCellAlignment_overload_2(L)) return _bind_SetCellAlignment_overload_2(L);

		luaL_error(L, "error in function SetCellAlignment, cannot match any of the overloads for function SetCellAlignment:\n  SetCellAlignment(int, int, int, int)\n  SetCellAlignment(int, int, int)\n");
		return 0;
	}

	// void wxGrid::SetCellBackgroundColour(int row, int col, const wxColour & colour)
	static int _bind_SetCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetCellBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellBackgroundColour(int row, int col, const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetCellBackgroundColour(int row, int col, const wxColour & colour)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetCellBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellBackgroundColour(int, int, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellBackgroundColour(row, col, colour);

		return 0;
	}

	// void wxGrid::SetCellFont(int row, int col, const wxFont & font)
	static int _bind_SetCellFont(lua_State *L) {
		if (!_lg_typecheck_SetCellFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellFont(int row, int col, const wxFont & font) function, expected prototype:\nvoid wxGrid::SetCellFont(int row, int col, const wxFont & font)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,4));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGrid::SetCellFont function");
		}
		const wxFont & font=*font_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellFont(int, int, const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellFont(row, col, font);

		return 0;
	}

	// void wxGrid::SetCellTextColour(int row, int col, const wxColour & colour)
	static int _bind_SetCellTextColour_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetCellTextColour_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellTextColour(int row, int col, const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetCellTextColour(int row, int col, const wxColour & colour)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetCellTextColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellTextColour(int, int, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellTextColour(row, col, colour);

		return 0;
	}

	// void wxGrid::SetCellTextColour(const wxColour & val, int row, int col)
	static int _bind_SetCellTextColour_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetCellTextColour_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellTextColour(const wxColour & val, int row, int col) function, expected prototype:\nvoid wxGrid::SetCellTextColour(const wxColour & val, int row, int col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* val_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in wxGrid::SetCellTextColour function");
		}
		const wxColour & val=*val_ptr;
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellTextColour(const wxColour &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellTextColour(val, row, col);

		return 0;
	}

	// void wxGrid::SetCellTextColour(const wxColour & colour)
	static int _bind_SetCellTextColour_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetCellTextColour_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellTextColour(const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetCellTextColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetCellTextColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellTextColour(colour);

		return 0;
	}

	// Overload binder for wxGrid::SetCellTextColour
	static int _bind_SetCellTextColour(lua_State *L) {
		if (_lg_typecheck_SetCellTextColour_overload_1(L)) return _bind_SetCellTextColour_overload_1(L);
		if (_lg_typecheck_SetCellTextColour_overload_2(L)) return _bind_SetCellTextColour_overload_2(L);
		if (_lg_typecheck_SetCellTextColour_overload_3(L)) return _bind_SetCellTextColour_overload_3(L);

		luaL_error(L, "error in function SetCellTextColour, cannot match any of the overloads for function SetCellTextColour:\n  SetCellTextColour(int, int, const wxColour &)\n  SetCellTextColour(const wxColour &, int, int)\n  SetCellTextColour(const wxColour &)\n");
		return 0;
	}

	// void wxGrid::SetDefaultCellAlignment(int horiz, int vert)
	static int _bind_SetDefaultCellAlignment(lua_State *L) {
		if (!_lg_typecheck_SetDefaultCellAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultCellAlignment(int horiz, int vert) function, expected prototype:\nvoid wxGrid::SetDefaultCellAlignment(int horiz, int vert)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int horiz=(int)lua_tointeger(L,2);
		int vert=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultCellAlignment(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultCellAlignment(horiz, vert);

		return 0;
	}

	// void wxGrid::SetDefaultCellBackgroundColour(const wxColour & colour)
	static int _bind_SetDefaultCellBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetDefaultCellBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultCellBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetDefaultCellBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetDefaultCellBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultCellBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultCellBackgroundColour(colour);

		return 0;
	}

	// void wxGrid::SetDefaultCellFont(const wxFont & font)
	static int _bind_SetDefaultCellFont(lua_State *L) {
		if (!_lg_typecheck_SetDefaultCellFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultCellFont(const wxFont & font) function, expected prototype:\nvoid wxGrid::SetDefaultCellFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGrid::SetDefaultCellFont function");
		}
		const wxFont & font=*font_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultCellFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultCellFont(font);

		return 0;
	}

	// void wxGrid::SetDefaultCellTextColour(const wxColour & colour)
	static int _bind_SetDefaultCellTextColour(lua_State *L) {
		if (!_lg_typecheck_SetDefaultCellTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultCellTextColour(const wxColour & colour) function, expected prototype:\nvoid wxGrid::SetDefaultCellTextColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxGrid::SetDefaultCellTextColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultCellTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultCellTextColour(colour);

		return 0;
	}

	// bool wxGrid::CanEnableCellControl() const
	static int _bind_CanEnableCellControl(lua_State *L) {
		if (!_lg_typecheck_CanEnableCellControl(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CanEnableCellControl() const function, expected prototype:\nbool wxGrid::CanEnableCellControl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CanEnableCellControl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanEnableCellControl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::DisableCellEditControl()
	static int _bind_DisableCellEditControl(lua_State *L) {
		if (!_lg_typecheck_DisableCellEditControl(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableCellEditControl() function, expected prototype:\nvoid wxGrid::DisableCellEditControl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableCellEditControl(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableCellEditControl();

		return 0;
	}

	// void wxGrid::EnableCellEditControl(bool enable = true)
	static int _bind_EnableCellEditControl(lua_State *L) {
		if (!_lg_typecheck_EnableCellEditControl(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableCellEditControl(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableCellEditControl(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableCellEditControl(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableCellEditControl(enable);

		return 0;
	}

	// void wxGrid::EnableEditing(bool edit)
	static int _bind_EnableEditing(lua_State *L) {
		if (!_lg_typecheck_EnableEditing(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableEditing(bool edit) function, expected prototype:\nvoid wxGrid::EnableEditing(bool edit)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool edit=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableEditing(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableEditing(edit);

		return 0;
	}

	// wxGridCellEditor * wxGrid::GetCellEditor(int row, int col) const
	static int _bind_GetCellEditor(lua_State *L) {
		if (!_lg_typecheck_GetCellEditor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::GetCellEditor(int row, int col) const function, expected prototype:\nwxGridCellEditor * wxGrid::GetCellEditor(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::GetCellEditor(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->GetCellEditor(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// wxGridCellRenderer * wxGrid::GetCellRenderer(int row, int col) const
	static int _bind_GetCellRenderer(lua_State *L) {
		if (!_lg_typecheck_GetCellRenderer(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGrid::GetCellRenderer(int row, int col) const function, expected prototype:\nwxGridCellRenderer * wxGrid::GetCellRenderer(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGrid::GetCellRenderer(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->GetCellRenderer(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// wxString wxGrid::GetCellValue(int row, int col) const
	static int _bind_GetCellValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetCellValue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::GetCellValue(int row, int col) const function, expected prototype:\nwxString wxGrid::GetCellValue(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::GetCellValue(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetCellValue(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGrid::GetCellValue(const wxGridCellCoords & coords) const
	static int _bind_GetCellValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetCellValue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::GetCellValue(const wxGridCellCoords & coords) const function, expected prototype:\nwxString wxGrid::GetCellValue(const wxGridCellCoords & coords) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::GetCellValue function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::GetCellValue(const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetCellValue(coords);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxGrid::GetCellValue
	static int _bind_GetCellValue(lua_State *L) {
		if (_lg_typecheck_GetCellValue_overload_1(L)) return _bind_GetCellValue_overload_1(L);
		if (_lg_typecheck_GetCellValue_overload_2(L)) return _bind_GetCellValue_overload_2(L);

		luaL_error(L, "error in function GetCellValue, cannot match any of the overloads for function GetCellValue:\n  GetCellValue(int, int)\n  GetCellValue(const wxGridCellCoords &)\n");
		return 0;
	}

	// wxGridCellEditor * wxGrid::GetDefaultEditor() const
	static int _bind_GetDefaultEditor(lua_State *L) {
		if (!_lg_typecheck_GetDefaultEditor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::GetDefaultEditor() const function, expected prototype:\nwxGridCellEditor * wxGrid::GetDefaultEditor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::GetDefaultEditor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->GetDefaultEditor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// wxGridCellEditor * wxGrid::GetDefaultEditorForCell(int row, int col) const
	static int _bind_GetDefaultEditorForCell_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetDefaultEditorForCell_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::GetDefaultEditorForCell(int row, int col) const function, expected prototype:\nwxGridCellEditor * wxGrid::GetDefaultEditorForCell(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::GetDefaultEditorForCell(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->GetDefaultEditorForCell(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// wxGridCellEditor * wxGrid::GetDefaultEditorForCell(const wxGridCellCoords & c) const
	static int _bind_GetDefaultEditorForCell_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetDefaultEditorForCell_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::GetDefaultEditorForCell(const wxGridCellCoords & c) const function, expected prototype:\nwxGridCellEditor * wxGrid::GetDefaultEditorForCell(const wxGridCellCoords & c) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* c_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxGrid::GetDefaultEditorForCell function");
		}
		const wxGridCellCoords & c=*c_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::GetDefaultEditorForCell(const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->GetDefaultEditorForCell(c);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxGrid::GetDefaultEditorForCell
	static int _bind_GetDefaultEditorForCell(lua_State *L) {
		if (_lg_typecheck_GetDefaultEditorForCell_overload_1(L)) return _bind_GetDefaultEditorForCell_overload_1(L);
		if (_lg_typecheck_GetDefaultEditorForCell_overload_2(L)) return _bind_GetDefaultEditorForCell_overload_2(L);

		luaL_error(L, "error in function GetDefaultEditorForCell, cannot match any of the overloads for function GetDefaultEditorForCell:\n  GetDefaultEditorForCell(int, int)\n  GetDefaultEditorForCell(const wxGridCellCoords &)\n");
		return 0;
	}

	// wxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString & typeName) const
	static int _bind_GetDefaultEditorForType(lua_State *L) {
		if (!_lg_typecheck_GetDefaultEditorForType(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString & typeName) const function, expected prototype:\nwxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString & typeName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString typeName(lua_tostring(L,2),lua_objlen(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->GetDefaultEditorForType(typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// wxGridCellRenderer * wxGrid::GetDefaultRenderer() const
	static int _bind_GetDefaultRenderer(lua_State *L) {
		if (!_lg_typecheck_GetDefaultRenderer(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGrid::GetDefaultRenderer() const function, expected prototype:\nwxGridCellRenderer * wxGrid::GetDefaultRenderer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGrid::GetDefaultRenderer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->GetDefaultRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int row, int col) const
	static int _bind_GetDefaultRendererForCell(lua_State *L) {
		if (!_lg_typecheck_GetDefaultRendererForCell(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int row, int col) const function, expected prototype:\nwxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->GetDefaultRendererForCell(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString & typeName) const
	static int _bind_GetDefaultRendererForType(lua_State *L) {
		if (!_lg_typecheck_GetDefaultRendererForType(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString & typeName) const function, expected prototype:\nwxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString & typeName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString typeName(lua_tostring(L,2),lua_objlen(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->GetDefaultRendererForType(typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// void wxGrid::HideCellEditControl()
	static int _bind_HideCellEditControl(lua_State *L) {
		if (!_lg_typecheck_HideCellEditControl(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::HideCellEditControl() function, expected prototype:\nvoid wxGrid::HideCellEditControl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::HideCellEditControl(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HideCellEditControl();

		return 0;
	}

	// bool wxGrid::IsCellEditControlEnabled() const
	static int _bind_IsCellEditControlEnabled(lua_State *L) {
		if (!_lg_typecheck_IsCellEditControlEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsCellEditControlEnabled() const function, expected prototype:\nbool wxGrid::IsCellEditControlEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsCellEditControlEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsCellEditControlEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::IsCurrentCellReadOnly() const
	static int _bind_IsCurrentCellReadOnly(lua_State *L) {
		if (!_lg_typecheck_IsCurrentCellReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsCurrentCellReadOnly() const function, expected prototype:\nbool wxGrid::IsCurrentCellReadOnly() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsCurrentCellReadOnly() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsCurrentCellReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::IsEditable() const
	static int _bind_IsEditable(lua_State *L) {
		if (!_lg_typecheck_IsEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsEditable() const function, expected prototype:\nbool wxGrid::IsEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::IsReadOnly(int row, int col) const
	static int _bind_IsReadOnly(lua_State *L) {
		if (!_lg_typecheck_IsReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsReadOnly(int row, int col) const function, expected prototype:\nbool wxGrid::IsReadOnly(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsReadOnly(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReadOnly(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::RegisterDataType(const wxString & typeName, wxGridCellRenderer * renderer, wxGridCellEditor * editor)
	static int _bind_RegisterDataType(lua_State *L) {
		if (!_lg_typecheck_RegisterDataType(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::RegisterDataType(const wxString & typeName, wxGridCellRenderer * renderer, wxGridCellEditor * editor) function, expected prototype:\nvoid wxGrid::RegisterDataType(const wxString & typeName, wxGridCellRenderer * renderer, wxGridCellEditor * editor)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 96062845\narg 3 ID = 53399133\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString typeName(lua_tostring(L,2),lua_objlen(L,2));
		wxGridCellRenderer* renderer=(Luna< wxGridCellRenderer >::check(L,3));
		wxGridCellEditor* editor=(Luna< wxGridCellEditor >::check(L,4));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::RegisterDataType(const wxString &, wxGridCellRenderer *, wxGridCellEditor *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RegisterDataType(typeName, renderer, editor);

		return 0;
	}

	// void wxGrid::SaveEditControlValue()
	static int _bind_SaveEditControlValue(lua_State *L) {
		if (!_lg_typecheck_SaveEditControlValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SaveEditControlValue() function, expected prototype:\nvoid wxGrid::SaveEditControlValue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SaveEditControlValue(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SaveEditControlValue();

		return 0;
	}

	// void wxGrid::SetCellEditor(int row, int col, wxGridCellEditor * editor)
	static int _bind_SetCellEditor(lua_State *L) {
		if (!_lg_typecheck_SetCellEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellEditor(int row, int col, wxGridCellEditor * editor) function, expected prototype:\nvoid wxGrid::SetCellEditor(int row, int col, wxGridCellEditor * editor)\nClass arguments details:\narg 3 ID = 53399133\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellEditor* editor=(Luna< wxGridCellEditor >::check(L,4));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellEditor(int, int, wxGridCellEditor *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellEditor(row, col, editor);

		return 0;
	}

	// void wxGrid::SetCellRenderer(int row, int col, wxGridCellRenderer * renderer)
	static int _bind_SetCellRenderer(lua_State *L) {
		if (!_lg_typecheck_SetCellRenderer(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellRenderer(int row, int col, wxGridCellRenderer * renderer) function, expected prototype:\nvoid wxGrid::SetCellRenderer(int row, int col, wxGridCellRenderer * renderer)\nClass arguments details:\narg 3 ID = 96062845\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellRenderer* renderer=(Luna< wxGridCellRenderer >::check(L,4));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellRenderer(int, int, wxGridCellRenderer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellRenderer(row, col, renderer);

		return 0;
	}

	// void wxGrid::SetCellValue(int row, int col, const wxString & s)
	static int _bind_SetCellValue_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetCellValue_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellValue(int row, int col, const wxString & s) function, expected prototype:\nvoid wxGrid::SetCellValue(int row, int col, const wxString & s)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString s(lua_tostring(L,4),lua_objlen(L,4));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellValue(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellValue(row, col, s);

		return 0;
	}

	// void wxGrid::SetCellValue(const wxGridCellCoords & coords, const wxString & s)
	static int _bind_SetCellValue_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetCellValue_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellValue(const wxGridCellCoords & coords, const wxString & s) function, expected prototype:\nvoid wxGrid::SetCellValue(const wxGridCellCoords & coords, const wxString & s)\nClass arguments details:\narg 1 ID = 6476046\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::SetCellValue function");
		}
		const wxGridCellCoords & coords=*coords_ptr;
		wxString s(lua_tostring(L,3),lua_objlen(L,3));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellValue(const wxGridCellCoords &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellValue(coords, s);

		return 0;
	}

	// void wxGrid::SetCellValue(const wxString & val, int row, int col)
	static int _bind_SetCellValue_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetCellValue_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellValue(const wxString & val, int row, int col) function, expected prototype:\nvoid wxGrid::SetCellValue(const wxString & val, int row, int col)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString val(lua_tostring(L,2),lua_objlen(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellValue(const wxString &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellValue(val, row, col);

		return 0;
	}

	// Overload binder for wxGrid::SetCellValue
	static int _bind_SetCellValue(lua_State *L) {
		if (_lg_typecheck_SetCellValue_overload_1(L)) return _bind_SetCellValue_overload_1(L);
		if (_lg_typecheck_SetCellValue_overload_2(L)) return _bind_SetCellValue_overload_2(L);
		if (_lg_typecheck_SetCellValue_overload_3(L)) return _bind_SetCellValue_overload_3(L);

		luaL_error(L, "error in function SetCellValue, cannot match any of the overloads for function SetCellValue:\n  SetCellValue(int, int, const wxString &)\n  SetCellValue(const wxGridCellCoords &, const wxString &)\n  SetCellValue(const wxString &, int, int)\n");
		return 0;
	}

	// void wxGrid::SetColFormatBool(int col)
	static int _bind_SetColFormatBool(lua_State *L) {
		if (!_lg_typecheck_SetColFormatBool(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColFormatBool(int col) function, expected prototype:\nvoid wxGrid::SetColFormatBool(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColFormatBool(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColFormatBool(col);

		return 0;
	}

	// void wxGrid::SetColFormatCustom(int col, const wxString & typeName)
	static int _bind_SetColFormatCustom(lua_State *L) {
		if (!_lg_typecheck_SetColFormatCustom(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColFormatCustom(int col, const wxString & typeName) function, expected prototype:\nvoid wxGrid::SetColFormatCustom(int col, const wxString & typeName)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxString typeName(lua_tostring(L,3),lua_objlen(L,3));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColFormatCustom(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColFormatCustom(col, typeName);

		return 0;
	}

	// void wxGrid::SetColFormatFloat(int col, int width = -1, int precision = -1)
	static int _bind_SetColFormatFloat(lua_State *L) {
		if (!_lg_typecheck_SetColFormatFloat(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColFormatFloat(int col, int width = -1, int precision = -1) function, expected prototype:\nvoid wxGrid::SetColFormatFloat(int col, int width = -1, int precision = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int col=(int)lua_tointeger(L,2);
		int width=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;
		int precision=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColFormatFloat(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColFormatFloat(col, width, precision);

		return 0;
	}

	// void wxGrid::SetColFormatNumber(int col)
	static int _bind_SetColFormatNumber(lua_State *L) {
		if (!_lg_typecheck_SetColFormatNumber(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColFormatNumber(int col) function, expected prototype:\nvoid wxGrid::SetColFormatNumber(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColFormatNumber(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColFormatNumber(col);

		return 0;
	}

	// void wxGrid::SetDefaultEditor(wxGridCellEditor * editor)
	static int _bind_SetDefaultEditor(lua_State *L) {
		if (!_lg_typecheck_SetDefaultEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultEditor(wxGridCellEditor * editor) function, expected prototype:\nvoid wxGrid::SetDefaultEditor(wxGridCellEditor * editor)\nClass arguments details:\narg 1 ID = 53399133\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellEditor* editor=(Luna< wxGridCellEditor >::check(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultEditor(wxGridCellEditor *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultEditor(editor);

		return 0;
	}

	// void wxGrid::SetDefaultRenderer(wxGridCellRenderer * renderer)
	static int _bind_SetDefaultRenderer(lua_State *L) {
		if (!_lg_typecheck_SetDefaultRenderer(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultRenderer(wxGridCellRenderer * renderer) function, expected prototype:\nvoid wxGrid::SetDefaultRenderer(wxGridCellRenderer * renderer)\nClass arguments details:\narg 1 ID = 96062845\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellRenderer* renderer=(Luna< wxGridCellRenderer >::check(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultRenderer(wxGridCellRenderer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultRenderer(renderer);

		return 0;
	}

	// void wxGrid::SetReadOnly(int row, int col, bool isReadOnly = true)
	static int _bind_SetReadOnly(lua_State *L) {
		if (!_lg_typecheck_SetReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetReadOnly(int row, int col, bool isReadOnly = true) function, expected prototype:\nvoid wxGrid::SetReadOnly(int row, int col, bool isReadOnly = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		bool isReadOnly=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetReadOnly(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetReadOnly(row, col, isReadOnly);

		return 0;
	}

	// void wxGrid::ShowCellEditControl()
	static int _bind_ShowCellEditControl(lua_State *L) {
		if (!_lg_typecheck_ShowCellEditControl(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ShowCellEditControl() function, expected prototype:\nvoid wxGrid::ShowCellEditControl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ShowCellEditControl(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowCellEditControl();

		return 0;
	}

	// void wxGrid::AutoSize()
	static int _bind_AutoSize(lua_State *L) {
		if (!_lg_typecheck_AutoSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSize() function, expected prototype:\nvoid wxGrid::AutoSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSize();

		return 0;
	}

	// void wxGrid::AutoSizeColLabelSize(int col)
	static int _bind_AutoSizeColLabelSize(lua_State *L) {
		if (!_lg_typecheck_AutoSizeColLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSizeColLabelSize(int col) function, expected prototype:\nvoid wxGrid::AutoSizeColLabelSize(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSizeColLabelSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSizeColLabelSize(col);

		return 0;
	}

	// void wxGrid::AutoSizeColumn(int col, bool setAsMin = true)
	static int _bind_AutoSizeColumn(lua_State *L) {
		if (!_lg_typecheck_AutoSizeColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSizeColumn(int col, bool setAsMin = true) function, expected prototype:\nvoid wxGrid::AutoSizeColumn(int col, bool setAsMin = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int col=(int)lua_tointeger(L,2);
		bool setAsMin=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSizeColumn(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSizeColumn(col, setAsMin);

		return 0;
	}

	// void wxGrid::AutoSizeColumns(bool setAsMin = true)
	static int _bind_AutoSizeColumns(lua_State *L) {
		if (!_lg_typecheck_AutoSizeColumns(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSizeColumns(bool setAsMin = true) function, expected prototype:\nvoid wxGrid::AutoSizeColumns(bool setAsMin = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool setAsMin=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSizeColumns(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSizeColumns(setAsMin);

		return 0;
	}

	// void wxGrid::AutoSizeRow(int row, bool setAsMin = true)
	static int _bind_AutoSizeRow(lua_State *L) {
		if (!_lg_typecheck_AutoSizeRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSizeRow(int row, bool setAsMin = true) function, expected prototype:\nvoid wxGrid::AutoSizeRow(int row, bool setAsMin = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int row=(int)lua_tointeger(L,2);
		bool setAsMin=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSizeRow(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSizeRow(row, setAsMin);

		return 0;
	}

	// void wxGrid::AutoSizeRowLabelSize(int col)
	static int _bind_AutoSizeRowLabelSize(lua_State *L) {
		if (!_lg_typecheck_AutoSizeRowLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSizeRowLabelSize(int col) function, expected prototype:\nvoid wxGrid::AutoSizeRowLabelSize(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSizeRowLabelSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSizeRowLabelSize(col);

		return 0;
	}

	// void wxGrid::AutoSizeRows(bool setAsMin = true)
	static int _bind_AutoSizeRows(lua_State *L) {
		if (!_lg_typecheck_AutoSizeRows(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::AutoSizeRows(bool setAsMin = true) function, expected prototype:\nvoid wxGrid::AutoSizeRows(bool setAsMin = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool setAsMin=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::AutoSizeRows(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoSizeRows(setAsMin);

		return 0;
	}

	// int wxGrid::GetColLabelSize() const
	static int _bind_GetColLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetColLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetColLabelSize() const function, expected prototype:\nint wxGrid::GetColLabelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetColLabelSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColLabelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetColMinimalAcceptableWidth() const
	static int _bind_GetColMinimalAcceptableWidth(lua_State *L) {
		if (!_lg_typecheck_GetColMinimalAcceptableWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetColMinimalAcceptableWidth() const function, expected prototype:\nint wxGrid::GetColMinimalAcceptableWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetColMinimalAcceptableWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColMinimalAcceptableWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetColSize(int col) const
	static int _bind_GetColSize(lua_State *L) {
		if (!_lg_typecheck_GetColSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetColSize(int col) const function, expected prototype:\nint wxGrid::GetColSize(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetColSize(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColSize(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::IsColShown(int col) const
	static int _bind_IsColShown(lua_State *L) {
		if (!_lg_typecheck_IsColShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsColShown(int col) const function, expected prototype:\nbool wxGrid::IsColShown(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsColShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsColShown(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxGrid::GetDefaultColLabelSize() const
	static int _bind_GetDefaultColLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultColLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetDefaultColLabelSize() const function, expected prototype:\nint wxGrid::GetDefaultColLabelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetDefaultColLabelSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDefaultColLabelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetDefaultColSize() const
	static int _bind_GetDefaultColSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultColSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetDefaultColSize() const function, expected prototype:\nint wxGrid::GetDefaultColSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetDefaultColSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDefaultColSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetDefaultRowLabelSize() const
	static int _bind_GetDefaultRowLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultRowLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetDefaultRowLabelSize() const function, expected prototype:\nint wxGrid::GetDefaultRowLabelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetDefaultRowLabelSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDefaultRowLabelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetDefaultRowSize() const
	static int _bind_GetDefaultRowSize(lua_State *L) {
		if (!_lg_typecheck_GetDefaultRowSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetDefaultRowSize() const function, expected prototype:\nint wxGrid::GetDefaultRowSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetDefaultRowSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDefaultRowSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetRowMinimalAcceptableHeight() const
	static int _bind_GetRowMinimalAcceptableHeight(lua_State *L) {
		if (!_lg_typecheck_GetRowMinimalAcceptableHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetRowMinimalAcceptableHeight() const function, expected prototype:\nint wxGrid::GetRowMinimalAcceptableHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetRowMinimalAcceptableHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowMinimalAcceptableHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetRowLabelSize() const
	static int _bind_GetRowLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetRowLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetRowLabelSize() const function, expected prototype:\nint wxGrid::GetRowLabelSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetRowLabelSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowLabelSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetRowSize(int row) const
	static int _bind_GetRowSize(lua_State *L) {
		if (!_lg_typecheck_GetRowSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetRowSize(int row) const function, expected prototype:\nint wxGrid::GetRowSize(int row) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetRowSize(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowSize(row);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::IsRowShown(int row) const
	static int _bind_IsRowShown(lua_State *L) {
		if (!_lg_typecheck_IsRowShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsRowShown(int row) const function, expected prototype:\nbool wxGrid::IsRowShown(int row) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsRowShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRowShown(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::SetColLabelSize(int height)
	static int _bind_SetColLabelSize(lua_State *L) {
		if (!_lg_typecheck_SetColLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColLabelSize(int height) function, expected prototype:\nvoid wxGrid::SetColLabelSize(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColLabelSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColLabelSize(height);

		return 0;
	}

	// void wxGrid::SetColMinimalAcceptableWidth(int width)
	static int _bind_SetColMinimalAcceptableWidth(lua_State *L) {
		if (!_lg_typecheck_SetColMinimalAcceptableWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColMinimalAcceptableWidth(int width) function, expected prototype:\nvoid wxGrid::SetColMinimalAcceptableWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColMinimalAcceptableWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColMinimalAcceptableWidth(width);

		return 0;
	}

	// void wxGrid::SetColMinimalWidth(int col, int width)
	static int _bind_SetColMinimalWidth(lua_State *L) {
		if (!_lg_typecheck_SetColMinimalWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColMinimalWidth(int col, int width) function, expected prototype:\nvoid wxGrid::SetColMinimalWidth(int col, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColMinimalWidth(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColMinimalWidth(col, width);

		return 0;
	}

	// void wxGrid::SetColSize(int col, int width)
	static int _bind_SetColSize(lua_State *L) {
		if (!_lg_typecheck_SetColSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColSize(int col, int width) function, expected prototype:\nvoid wxGrid::SetColSize(int col, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColSize(col, width);

		return 0;
	}

	// void wxGrid::HideCol(int col)
	static int _bind_HideCol(lua_State *L) {
		if (!_lg_typecheck_HideCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::HideCol(int col) function, expected prototype:\nvoid wxGrid::HideCol(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::HideCol(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HideCol(col);

		return 0;
	}

	// void wxGrid::ShowCol(int col)
	static int _bind_ShowCol(lua_State *L) {
		if (!_lg_typecheck_ShowCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ShowCol(int col) function, expected prototype:\nvoid wxGrid::ShowCol(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ShowCol(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowCol(col);

		return 0;
	}

	// void wxGrid::SetDefaultColSize(int width, bool resizeExistingCols = false)
	static int _bind_SetDefaultColSize(lua_State *L) {
		if (!_lg_typecheck_SetDefaultColSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultColSize(int width, bool resizeExistingCols = false) function, expected prototype:\nvoid wxGrid::SetDefaultColSize(int width, bool resizeExistingCols = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		bool resizeExistingCols=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultColSize(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultColSize(width, resizeExistingCols);

		return 0;
	}

	// void wxGrid::SetDefaultRowSize(int height, bool resizeExistingRows = false)
	static int _bind_SetDefaultRowSize(lua_State *L) {
		if (!_lg_typecheck_SetDefaultRowSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetDefaultRowSize(int height, bool resizeExistingRows = false) function, expected prototype:\nvoid wxGrid::SetDefaultRowSize(int height, bool resizeExistingRows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int height=(int)lua_tointeger(L,2);
		bool resizeExistingRows=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetDefaultRowSize(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultRowSize(height, resizeExistingRows);

		return 0;
	}

	// void wxGrid::SetRowLabelSize(int width)
	static int _bind_SetRowLabelSize(lua_State *L) {
		if (!_lg_typecheck_SetRowLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowLabelSize(int width) function, expected prototype:\nvoid wxGrid::SetRowLabelSize(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowLabelSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowLabelSize(width);

		return 0;
	}

	// void wxGrid::SetRowMinimalAcceptableHeight(int height)
	static int _bind_SetRowMinimalAcceptableHeight(lua_State *L) {
		if (!_lg_typecheck_SetRowMinimalAcceptableHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowMinimalAcceptableHeight(int height) function, expected prototype:\nvoid wxGrid::SetRowMinimalAcceptableHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowMinimalAcceptableHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowMinimalAcceptableHeight(height);

		return 0;
	}

	// void wxGrid::SetRowMinimalHeight(int row, int height)
	static int _bind_SetRowMinimalHeight(lua_State *L) {
		if (!_lg_typecheck_SetRowMinimalHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowMinimalHeight(int row, int height) function, expected prototype:\nvoid wxGrid::SetRowMinimalHeight(int row, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowMinimalHeight(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowMinimalHeight(row, height);

		return 0;
	}

	// void wxGrid::SetRowSize(int row, int height)
	static int _bind_SetRowSize(lua_State *L) {
		if (!_lg_typecheck_SetRowSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowSize(int row, int height) function, expected prototype:\nvoid wxGrid::SetRowSize(int row, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowSize(row, height);

		return 0;
	}

	// void wxGrid::HideRow(int col)
	static int _bind_HideRow(lua_State *L) {
		if (!_lg_typecheck_HideRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::HideRow(int col) function, expected prototype:\nvoid wxGrid::HideRow(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::HideRow(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HideRow(col);

		return 0;
	}

	// void wxGrid::ShowRow(int col)
	static int _bind_ShowRow(lua_State *L) {
		if (!_lg_typecheck_ShowRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ShowRow(int col) function, expected prototype:\nvoid wxGrid::ShowRow(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ShowRow(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowRow(col);

		return 0;
	}

	// wxGridSizesInfo wxGrid::GetColSizes() const
	static int _bind_GetColSizes(lua_State *L) {
		if (!_lg_typecheck_GetColSizes(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizesInfo wxGrid::GetColSizes() const function, expected prototype:\nwxGridSizesInfo wxGrid::GetColSizes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridSizesInfo wxGrid::GetColSizes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridSizesInfo stack_lret = self->GetColSizes();
		wxGridSizesInfo* lret = new wxGridSizesInfo(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridSizesInfo >::push(L,lret,true);

		return 1;
	}

	// wxGridSizesInfo wxGrid::GetRowSizes() const
	static int _bind_GetRowSizes(lua_State *L) {
		if (!_lg_typecheck_GetRowSizes(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizesInfo wxGrid::GetRowSizes() const function, expected prototype:\nwxGridSizesInfo wxGrid::GetRowSizes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridSizesInfo wxGrid::GetRowSizes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridSizesInfo stack_lret = self->GetRowSizes();
		wxGridSizesInfo* lret = new wxGridSizesInfo(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridSizesInfo >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::SetColSizes(const wxGridSizesInfo & sizeInfo)
	static int _bind_SetColSizes(lua_State *L) {
		if (!_lg_typecheck_SetColSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColSizes(const wxGridSizesInfo & sizeInfo) function, expected prototype:\nvoid wxGrid::SetColSizes(const wxGridSizesInfo & sizeInfo)\nClass arguments details:\narg 1 ID = 73467241\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridSizesInfo* sizeInfo_ptr=(Luna< wxGridSizesInfo >::check(L,2));
		if( !sizeInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizeInfo in wxGrid::SetColSizes function");
		}
		const wxGridSizesInfo & sizeInfo=*sizeInfo_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColSizes(const wxGridSizesInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColSizes(sizeInfo);

		return 0;
	}

	// void wxGrid::SetRowSizes(const wxGridSizesInfo & sizeInfo)
	static int _bind_SetRowSizes(lua_State *L) {
		if (!_lg_typecheck_SetRowSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowSizes(const wxGridSizesInfo & sizeInfo) function, expected prototype:\nvoid wxGrid::SetRowSizes(const wxGridSizesInfo & sizeInfo)\nClass arguments details:\narg 1 ID = 73467241\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridSizesInfo* sizeInfo_ptr=(Luna< wxGridSizesInfo >::check(L,2));
		if( !sizeInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sizeInfo in wxGrid::SetRowSizes function");
		}
		const wxGridSizesInfo & sizeInfo=*sizeInfo_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowSizes(const wxGridSizesInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowSizes(sizeInfo);

		return 0;
	}

	// void wxGrid::SetCellSize(int row, int col, int num_rows, int num_cols)
	static int _bind_SetCellSize(lua_State *L) {
		if (!_lg_typecheck_SetCellSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetCellSize(int row, int col, int num_rows, int num_cols) function, expected prototype:\nvoid wxGrid::SetCellSize(int row, int col, int num_rows, int num_cols)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		int num_rows=(int)lua_tointeger(L,4);
		int num_cols=(int)lua_tointeger(L,5);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetCellSize(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCellSize(row, col, num_rows, num_cols);

		return 0;
	}

	// wxGrid::CellSpan wxGrid::GetCellSize(int row, int col, int * num_rows, int * num_cols) const
	static int _bind_GetCellSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetCellSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid::CellSpan wxGrid::GetCellSize(int row, int col, int * num_rows, int * num_cols) const function, expected prototype:\nwxGrid::CellSpan wxGrid::GetCellSize(int row, int col, int * num_rows, int * num_cols) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		int* num_rows=(int*)Luna< void >::check(L,4);
		int* num_cols=(int*)Luna< void >::check(L,5);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGrid::CellSpan wxGrid::GetCellSize(int, int, int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGrid::CellSpan lret = self->GetCellSize(row, col, num_rows, num_cols);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxGrid::GetCellSize(const wxGridCellCoords & coords)
	static int _bind_GetCellSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetCellSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::GetCellSize(const wxGridCellCoords & coords) function, expected prototype:\nwxSize wxGrid::GetCellSize(const wxGridCellCoords & coords)\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::GetCellSize function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::GetCellSize(const wxGridCellCoords &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetCellSize(coords);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGrid::GetCellSize
	static int _bind_GetCellSize(lua_State *L) {
		if (_lg_typecheck_GetCellSize_overload_1(L)) return _bind_GetCellSize_overload_1(L);
		if (_lg_typecheck_GetCellSize_overload_2(L)) return _bind_GetCellSize_overload_2(L);

		luaL_error(L, "error in function GetCellSize, cannot match any of the overloads for function GetCellSize:\n  GetCellSize(int, int, int *, int *)\n  GetCellSize(const wxGridCellCoords &)\n");
		return 0;
	}

	// bool wxGrid::CanDragCell() const
	static int _bind_CanDragCell(lua_State *L) {
		if (!_lg_typecheck_CanDragCell(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CanDragCell() const function, expected prototype:\nbool wxGrid::CanDragCell() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CanDragCell() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanDragCell();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::CanDragColMove() const
	static int _bind_CanDragColMove(lua_State *L) {
		if (!_lg_typecheck_CanDragColMove(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CanDragColMove() const function, expected prototype:\nbool wxGrid::CanDragColMove() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CanDragColMove() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanDragColMove();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::CanDragColSize(int col) const
	static int _bind_CanDragColSize(lua_State *L) {
		if (!_lg_typecheck_CanDragColSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CanDragColSize(int col) const function, expected prototype:\nbool wxGrid::CanDragColSize(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CanDragColSize(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanDragColSize(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::CanDragGridSize() const
	static int _bind_CanDragGridSize(lua_State *L) {
		if (!_lg_typecheck_CanDragGridSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CanDragGridSize() const function, expected prototype:\nbool wxGrid::CanDragGridSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CanDragGridSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanDragGridSize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::CanDragRowSize(int row) const
	static int _bind_CanDragRowSize(lua_State *L) {
		if (!_lg_typecheck_CanDragRowSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::CanDragRowSize(int row) const function, expected prototype:\nbool wxGrid::CanDragRowSize(int row) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::CanDragRowSize(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanDragRowSize(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::DisableColResize(int col)
	static int _bind_DisableColResize(lua_State *L) {
		if (!_lg_typecheck_DisableColResize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableColResize(int col) function, expected prototype:\nvoid wxGrid::DisableColResize(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableColResize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableColResize(col);

		return 0;
	}

	// void wxGrid::DisableRowResize(int row)
	static int _bind_DisableRowResize(lua_State *L) {
		if (!_lg_typecheck_DisableRowResize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableRowResize(int row) function, expected prototype:\nvoid wxGrid::DisableRowResize(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableRowResize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableRowResize(row);

		return 0;
	}

	// void wxGrid::DisableDragColMove()
	static int _bind_DisableDragColMove(lua_State *L) {
		if (!_lg_typecheck_DisableDragColMove(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableDragColMove() function, expected prototype:\nvoid wxGrid::DisableDragColMove()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableDragColMove(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableDragColMove();

		return 0;
	}

	// void wxGrid::DisableDragColSize()
	static int _bind_DisableDragColSize(lua_State *L) {
		if (!_lg_typecheck_DisableDragColSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableDragColSize() function, expected prototype:\nvoid wxGrid::DisableDragColSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableDragColSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableDragColSize();

		return 0;
	}

	// void wxGrid::DisableDragGridSize()
	static int _bind_DisableDragGridSize(lua_State *L) {
		if (!_lg_typecheck_DisableDragGridSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableDragGridSize() function, expected prototype:\nvoid wxGrid::DisableDragGridSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableDragGridSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableDragGridSize();

		return 0;
	}

	// void wxGrid::DisableDragRowSize()
	static int _bind_DisableDragRowSize(lua_State *L) {
		if (!_lg_typecheck_DisableDragRowSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::DisableDragRowSize() function, expected prototype:\nvoid wxGrid::DisableDragRowSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::DisableDragRowSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableDragRowSize();

		return 0;
	}

	// void wxGrid::EnableDragCell(bool enable = true)
	static int _bind_EnableDragCell(lua_State *L) {
		if (!_lg_typecheck_EnableDragCell(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableDragCell(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableDragCell(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableDragCell(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableDragCell(enable);

		return 0;
	}

	// void wxGrid::EnableDragColMove(bool enable = true)
	static int _bind_EnableDragColMove(lua_State *L) {
		if (!_lg_typecheck_EnableDragColMove(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableDragColMove(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableDragColMove(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableDragColMove(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableDragColMove(enable);

		return 0;
	}

	// void wxGrid::EnableDragColSize(bool enable = true)
	static int _bind_EnableDragColSize(lua_State *L) {
		if (!_lg_typecheck_EnableDragColSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableDragColSize(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableDragColSize(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableDragColSize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableDragColSize(enable);

		return 0;
	}

	// void wxGrid::EnableDragGridSize(bool enable = true)
	static int _bind_EnableDragGridSize(lua_State *L) {
		if (!_lg_typecheck_EnableDragGridSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableDragGridSize(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableDragGridSize(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableDragGridSize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableDragGridSize(enable);

		return 0;
	}

	// void wxGrid::EnableDragRowSize(bool enable = true)
	static int _bind_EnableDragRowSize(lua_State *L) {
		if (!_lg_typecheck_EnableDragRowSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EnableDragRowSize(bool enable = true) function, expected prototype:\nvoid wxGrid::EnableDragRowSize(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EnableDragRowSize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableDragRowSize(enable);

		return 0;
	}

	// int wxGrid::GetColAt(int colPos) const
	static int _bind_GetColAt(lua_State *L) {
		if (!_lg_typecheck_GetColAt(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetColAt(int colPos) const function, expected prototype:\nint wxGrid::GetColAt(int colPos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int colPos=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetColAt(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColAt(colPos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetColPos(int colID) const
	static int _bind_GetColPos(lua_State *L) {
		if (!_lg_typecheck_GetColPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetColPos(int colID) const function, expected prototype:\nint wxGrid::GetColPos(int colID) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int colID=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetColPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColPos(colID);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGrid::SetColPos(int colID, int newPos)
	static int _bind_SetColPos(lua_State *L) {
		if (!_lg_typecheck_SetColPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColPos(int colID, int newPos) function, expected prototype:\nvoid wxGrid::SetColPos(int colID, int newPos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int colID=(int)lua_tointeger(L,2);
		int newPos=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColPos(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColPos(colID, newPos);

		return 0;
	}

	// void wxGrid::SetColumnsOrder(const wxArrayInt & order)
	static int _bind_SetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_SetColumnsOrder(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColumnsOrder(const wxArrayInt & order) function, expected prototype:\nvoid wxGrid::SetColumnsOrder(const wxArrayInt & order)\nClass arguments details:\narg 1 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxGrid::SetColumnsOrder function");
		}
		const wxArrayInt & order=*order_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColumnsOrder(const wxArrayInt &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnsOrder(order);

		return 0;
	}

	// void wxGrid::ResetColPos()
	static int _bind_ResetColPos(lua_State *L) {
		if (!_lg_typecheck_ResetColPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ResetColPos() function, expected prototype:\nvoid wxGrid::ResetColPos()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ResetColPos(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ResetColPos();

		return 0;
	}

	// int wxGrid::GetGridCursorCol() const
	static int _bind_GetGridCursorCol(lua_State *L) {
		if (!_lg_typecheck_GetGridCursorCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetGridCursorCol() const function, expected prototype:\nint wxGrid::GetGridCursorCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetGridCursorCol() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetGridCursorCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetGridCursorRow() const
	static int _bind_GetGridCursorRow(lua_State *L) {
		if (!_lg_typecheck_GetGridCursorRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetGridCursorRow() const function, expected prototype:\nint wxGrid::GetGridCursorRow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetGridCursorRow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetGridCursorRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGrid::GoToCell(int row, int col)
	static int _bind_GoToCell_overload_1(lua_State *L) {
		if (!_lg_typecheck_GoToCell_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::GoToCell(int row, int col) function, expected prototype:\nvoid wxGrid::GoToCell(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::GoToCell(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GoToCell(row, col);

		return 0;
	}

	// void wxGrid::GoToCell(const wxGridCellCoords & coords)
	static int _bind_GoToCell_overload_2(lua_State *L) {
		if (!_lg_typecheck_GoToCell_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::GoToCell(const wxGridCellCoords & coords) function, expected prototype:\nvoid wxGrid::GoToCell(const wxGridCellCoords & coords)\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::GoToCell function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::GoToCell(const wxGridCellCoords &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GoToCell(coords);

		return 0;
	}

	// Overload binder for wxGrid::GoToCell
	static int _bind_GoToCell(lua_State *L) {
		if (_lg_typecheck_GoToCell_overload_1(L)) return _bind_GoToCell_overload_1(L);
		if (_lg_typecheck_GoToCell_overload_2(L)) return _bind_GoToCell_overload_2(L);

		luaL_error(L, "error in function GoToCell, cannot match any of the overloads for function GoToCell:\n  GoToCell(int, int)\n  GoToCell(const wxGridCellCoords &)\n");
		return 0;
	}

	// bool wxGrid::MoveCursorDown(bool expandSelection)
	static int _bind_MoveCursorDown(lua_State *L) {
		if (!_lg_typecheck_MoveCursorDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorDown(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorDown(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorDown(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorDown(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorDownBlock(bool expandSelection)
	static int _bind_MoveCursorDownBlock(lua_State *L) {
		if (!_lg_typecheck_MoveCursorDownBlock(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorDownBlock(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorDownBlock(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorDownBlock(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorDownBlock(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorLeft(bool expandSelection)
	static int _bind_MoveCursorLeft(lua_State *L) {
		if (!_lg_typecheck_MoveCursorLeft(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorLeft(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorLeft(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorLeft(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorLeft(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorLeftBlock(bool expandSelection)
	static int _bind_MoveCursorLeftBlock(lua_State *L) {
		if (!_lg_typecheck_MoveCursorLeftBlock(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorLeftBlock(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorLeftBlock(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorLeftBlock(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorLeftBlock(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorRight(bool expandSelection)
	static int _bind_MoveCursorRight(lua_State *L) {
		if (!_lg_typecheck_MoveCursorRight(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorRight(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorRight(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorRight(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorRight(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorRightBlock(bool expandSelection)
	static int _bind_MoveCursorRightBlock(lua_State *L) {
		if (!_lg_typecheck_MoveCursorRightBlock(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorRightBlock(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorRightBlock(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorRightBlock(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorRightBlock(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorUp(bool expandSelection)
	static int _bind_MoveCursorUp(lua_State *L) {
		if (!_lg_typecheck_MoveCursorUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorUp(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorUp(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorUp(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorUp(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MoveCursorUpBlock(bool expandSelection)
	static int _bind_MoveCursorUpBlock(lua_State *L) {
		if (!_lg_typecheck_MoveCursorUpBlock(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MoveCursorUpBlock(bool expandSelection) function, expected prototype:\nbool wxGrid::MoveCursorUpBlock(bool expandSelection)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool expandSelection=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MoveCursorUpBlock(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MoveCursorUpBlock(expandSelection);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MovePageDown()
	static int _bind_MovePageDown(lua_State *L) {
		if (!_lg_typecheck_MovePageDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MovePageDown() function, expected prototype:\nbool wxGrid::MovePageDown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MovePageDown(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MovePageDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::MovePageUp()
	static int _bind_MovePageUp(lua_State *L) {
		if (!_lg_typecheck_MovePageUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::MovePageUp() function, expected prototype:\nbool wxGrid::MovePageUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::MovePageUp(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MovePageUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::SetGridCursor(int row, int col)
	static int _bind_SetGridCursor_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetGridCursor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetGridCursor(int row, int col) function, expected prototype:\nvoid wxGrid::SetGridCursor(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetGridCursor(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGridCursor(row, col);

		return 0;
	}

	// void wxGrid::SetGridCursor(const wxGridCellCoords & coords)
	static int _bind_SetGridCursor_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetGridCursor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetGridCursor(const wxGridCellCoords & coords) function, expected prototype:\nvoid wxGrid::SetGridCursor(const wxGridCellCoords & coords)\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::SetGridCursor function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetGridCursor(const wxGridCellCoords &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGridCursor(coords);

		return 0;
	}

	// Overload binder for wxGrid::SetGridCursor
	static int _bind_SetGridCursor(lua_State *L) {
		if (_lg_typecheck_SetGridCursor_overload_1(L)) return _bind_SetGridCursor_overload_1(L);
		if (_lg_typecheck_SetGridCursor_overload_2(L)) return _bind_SetGridCursor_overload_2(L);

		luaL_error(L, "error in function SetGridCursor, cannot match any of the overloads for function SetGridCursor:\n  SetGridCursor(int, int)\n  SetGridCursor(const wxGridCellCoords &)\n");
		return 0;
	}

	// void wxGrid::ClearSelection()
	static int _bind_ClearSelection(lua_State *L) {
		if (!_lg_typecheck_ClearSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ClearSelection() function, expected prototype:\nvoid wxGrid::ClearSelection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ClearSelection(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearSelection();

		return 0;
	}

	// wxGridCellCoordsArray wxGrid::GetSelectedCells() const
	static int _bind_GetSelectedCells(lua_State *L) {
		if (!_lg_typecheck_GetSelectedCells(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoordsArray wxGrid::GetSelectedCells() const function, expected prototype:\nwxGridCellCoordsArray wxGrid::GetSelectedCells() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoordsArray wxGrid::GetSelectedCells() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoordsArray stack_lret = self->GetSelectedCells();
		wxGridCellCoordsArray* lret = new wxGridCellCoordsArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoordsArray >::push(L,lret,true);

		return 1;
	}

	// wxArrayInt wxGrid::GetSelectedCols() const
	static int _bind_GetSelectedCols(lua_State *L) {
		if (!_lg_typecheck_GetSelectedCols(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayInt wxGrid::GetSelectedCols() const function, expected prototype:\nwxArrayInt wxGrid::GetSelectedCols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayInt wxGrid::GetSelectedCols() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayInt stack_lret = self->GetSelectedCols();
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// wxArrayInt wxGrid::GetSelectedRows() const
	static int _bind_GetSelectedRows(lua_State *L) {
		if (!_lg_typecheck_GetSelectedRows(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayInt wxGrid::GetSelectedRows() const function, expected prototype:\nwxArrayInt wxGrid::GetSelectedRows() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayInt wxGrid::GetSelectedRows() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayInt stack_lret = self->GetSelectedRows();
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// wxColour wxGrid::GetSelectionBackground() const
	static int _bind_GetSelectionBackground(lua_State *L) {
		if (!_lg_typecheck_GetSelectionBackground(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetSelectionBackground() const function, expected prototype:\nwxColour wxGrid::GetSelectionBackground() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetSelectionBackground() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetSelectionBackground();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxGridCellCoordsArray wxGrid::GetSelectionBlockBottomRight() const
	static int _bind_GetSelectionBlockBottomRight(lua_State *L) {
		if (!_lg_typecheck_GetSelectionBlockBottomRight(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoordsArray wxGrid::GetSelectionBlockBottomRight() const function, expected prototype:\nwxGridCellCoordsArray wxGrid::GetSelectionBlockBottomRight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoordsArray wxGrid::GetSelectionBlockBottomRight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoordsArray stack_lret = self->GetSelectionBlockBottomRight();
		wxGridCellCoordsArray* lret = new wxGridCellCoordsArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoordsArray >::push(L,lret,true);

		return 1;
	}

	// wxGridCellCoordsArray wxGrid::GetSelectionBlockTopLeft() const
	static int _bind_GetSelectionBlockTopLeft(lua_State *L) {
		if (!_lg_typecheck_GetSelectionBlockTopLeft(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoordsArray wxGrid::GetSelectionBlockTopLeft() const function, expected prototype:\nwxGridCellCoordsArray wxGrid::GetSelectionBlockTopLeft() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoordsArray wxGrid::GetSelectionBlockTopLeft() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoordsArray stack_lret = self->GetSelectionBlockTopLeft();
		wxGridCellCoordsArray* lret = new wxGridCellCoordsArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoordsArray >::push(L,lret,true);

		return 1;
	}

	// wxColour wxGrid::GetSelectionForeground() const
	static int _bind_GetSelectionForeground(lua_State *L) {
		if (!_lg_typecheck_GetSelectionForeground(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxGrid::GetSelectionForeground() const function, expected prototype:\nwxColour wxGrid::GetSelectionForeground() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxGrid::GetSelectionForeground() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetSelectionForeground();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxGrid::wxGridSelectionModes wxGrid::GetSelectionMode() const
	static int _bind_GetSelectionMode(lua_State *L) {
		if (!_lg_typecheck_GetSelectionMode(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid::wxGridSelectionModes wxGrid::GetSelectionMode() const function, expected prototype:\nwxGrid::wxGridSelectionModes wxGrid::GetSelectionMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGrid::wxGridSelectionModes wxGrid::GetSelectionMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGrid::wxGridSelectionModes lret = self->GetSelectionMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::IsInSelection(int row, int col) const
	static int _bind_IsInSelection_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsInSelection_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsInSelection(int row, int col) const function, expected prototype:\nbool wxGrid::IsInSelection(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsInSelection(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInSelection(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::IsInSelection(const wxGridCellCoords & coords) const
	static int _bind_IsInSelection_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsInSelection_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsInSelection(const wxGridCellCoords & coords) const function, expected prototype:\nbool wxGrid::IsInSelection(const wxGridCellCoords & coords) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::IsInSelection function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsInSelection(const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInSelection(coords);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGrid::IsInSelection
	static int _bind_IsInSelection(lua_State *L) {
		if (_lg_typecheck_IsInSelection_overload_1(L)) return _bind_IsInSelection_overload_1(L);
		if (_lg_typecheck_IsInSelection_overload_2(L)) return _bind_IsInSelection_overload_2(L);

		luaL_error(L, "error in function IsInSelection, cannot match any of the overloads for function IsInSelection:\n  IsInSelection(int, int)\n  IsInSelection(const wxGridCellCoords &)\n");
		return 0;
	}

	// bool wxGrid::IsSelection() const
	static int _bind_IsSelection(lua_State *L) {
		if (!_lg_typecheck_IsSelection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsSelection() const function, expected prototype:\nbool wxGrid::IsSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SelectAll() function, expected prototype:\nvoid wxGrid::SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectAll();

		return 0;
	}

	// void wxGrid::SelectBlock(int topRow, int leftCol, int bottomRow, int rightCol, bool addToSelected = false)
	static int _bind_SelectBlock_overload_1(lua_State *L) {
		if (!_lg_typecheck_SelectBlock_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SelectBlock(int topRow, int leftCol, int bottomRow, int rightCol, bool addToSelected = false) function, expected prototype:\nvoid wxGrid::SelectBlock(int topRow, int leftCol, int bottomRow, int rightCol, bool addToSelected = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int topRow=(int)lua_tointeger(L,2);
		int leftCol=(int)lua_tointeger(L,3);
		int bottomRow=(int)lua_tointeger(L,4);
		int rightCol=(int)lua_tointeger(L,5);
		bool addToSelected=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SelectBlock(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectBlock(topRow, leftCol, bottomRow, rightCol, addToSelected);

		return 0;
	}

	// void wxGrid::SelectBlock(const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool addToSelected = false)
	static int _bind_SelectBlock_overload_2(lua_State *L) {
		if (!_lg_typecheck_SelectBlock_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SelectBlock(const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool addToSelected = false) function, expected prototype:\nvoid wxGrid::SelectBlock(const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool addToSelected = false)\nClass arguments details:\narg 1 ID = 6476046\narg 2 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxGridCellCoords* topLeft_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxGrid::SelectBlock function");
		}
		const wxGridCellCoords & topLeft=*topLeft_ptr;
		const wxGridCellCoords* bottomRight_ptr=(Luna< wxGridCellCoords >::check(L,3));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxGrid::SelectBlock function");
		}
		const wxGridCellCoords & bottomRight=*bottomRight_ptr;
		bool addToSelected=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SelectBlock(const wxGridCellCoords &, const wxGridCellCoords &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectBlock(topLeft, bottomRight, addToSelected);

		return 0;
	}

	// Overload binder for wxGrid::SelectBlock
	static int _bind_SelectBlock(lua_State *L) {
		if (_lg_typecheck_SelectBlock_overload_1(L)) return _bind_SelectBlock_overload_1(L);
		if (_lg_typecheck_SelectBlock_overload_2(L)) return _bind_SelectBlock_overload_2(L);

		luaL_error(L, "error in function SelectBlock, cannot match any of the overloads for function SelectBlock:\n  SelectBlock(int, int, int, int, bool)\n  SelectBlock(const wxGridCellCoords &, const wxGridCellCoords &, bool)\n");
		return 0;
	}

	// void wxGrid::SelectCol(int col, bool addToSelected = false)
	static int _bind_SelectCol(lua_State *L) {
		if (!_lg_typecheck_SelectCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SelectCol(int col, bool addToSelected = false) function, expected prototype:\nvoid wxGrid::SelectCol(int col, bool addToSelected = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int col=(int)lua_tointeger(L,2);
		bool addToSelected=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SelectCol(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectCol(col, addToSelected);

		return 0;
	}

	// void wxGrid::SelectRow(int row, bool addToSelected = false)
	static int _bind_SelectRow(lua_State *L) {
		if (!_lg_typecheck_SelectRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SelectRow(int row, bool addToSelected = false) function, expected prototype:\nvoid wxGrid::SelectRow(int row, bool addToSelected = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int row=(int)lua_tointeger(L,2);
		bool addToSelected=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SelectRow(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectRow(row, addToSelected);

		return 0;
	}

	// void wxGrid::SetSelectionBackground(const wxColour & c)
	static int _bind_SetSelectionBackground(lua_State *L) {
		if (!_lg_typecheck_SetSelectionBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetSelectionBackground(const wxColour & c) function, expected prototype:\nvoid wxGrid::SetSelectionBackground(const wxColour & c)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* c_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxGrid::SetSelectionBackground function");
		}
		const wxColour & c=*c_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetSelectionBackground(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectionBackground(c);

		return 0;
	}

	// void wxGrid::SetSelectionForeground(const wxColour & c)
	static int _bind_SetSelectionForeground(lua_State *L) {
		if (!_lg_typecheck_SetSelectionForeground(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetSelectionForeground(const wxColour & c) function, expected prototype:\nvoid wxGrid::SetSelectionForeground(const wxColour & c)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* c_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !c_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg c in wxGrid::SetSelectionForeground function");
		}
		const wxColour & c=*c_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetSelectionForeground(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectionForeground(c);

		return 0;
	}

	// void wxGrid::SetSelectionMode(wxGrid::wxGridSelectionModes selmode)
	static int _bind_SetSelectionMode(lua_State *L) {
		if (!_lg_typecheck_SetSelectionMode(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetSelectionMode(wxGrid::wxGridSelectionModes selmode) function, expected prototype:\nvoid wxGrid::SetSelectionMode(wxGrid::wxGridSelectionModes selmode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGrid::wxGridSelectionModes selmode=(wxGrid::wxGridSelectionModes)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetSelectionMode(wxGrid::wxGridSelectionModes). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelectionMode(selmode);

		return 0;
	}

	// int wxGrid::GetScrollLineX() const
	static int _bind_GetScrollLineX(lua_State *L) {
		if (!_lg_typecheck_GetScrollLineX(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetScrollLineX() const function, expected prototype:\nint wxGrid::GetScrollLineX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetScrollLineX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetScrollLineX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetScrollLineY() const
	static int _bind_GetScrollLineY(lua_State *L) {
		if (!_lg_typecheck_GetScrollLineY(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetScrollLineY() const function, expected prototype:\nint wxGrid::GetScrollLineY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetScrollLineY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetScrollLineY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::IsVisible(int row, int col, bool wholeCellVisible = true) const
	static int _bind_IsVisible_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsVisible_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsVisible(int row, int col, bool wholeCellVisible = true) const function, expected prototype:\nbool wxGrid::IsVisible(int row, int col, bool wholeCellVisible = true) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		bool wholeCellVisible=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsVisible(int, int, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsVisible(row, col, wholeCellVisible);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::IsVisible(const wxGridCellCoords & coords, bool wholeCellVisible = true) const
	static int _bind_IsVisible_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsVisible_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsVisible(const wxGridCellCoords & coords, bool wholeCellVisible = true) const function, expected prototype:\nbool wxGrid::IsVisible(const wxGridCellCoords & coords, bool wholeCellVisible = true) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::IsVisible function");
		}
		const wxGridCellCoords & coords=*coords_ptr;
		bool wholeCellVisible=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsVisible(const wxGridCellCoords &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsVisible(coords, wholeCellVisible);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGrid::IsVisible
	static int _bind_IsVisible(lua_State *L) {
		if (_lg_typecheck_IsVisible_overload_1(L)) return _bind_IsVisible_overload_1(L);
		if (_lg_typecheck_IsVisible_overload_2(L)) return _bind_IsVisible_overload_2(L);

		luaL_error(L, "error in function IsVisible, cannot match any of the overloads for function IsVisible:\n  IsVisible(int, int, bool)\n  IsVisible(const wxGridCellCoords &, bool)\n");
		return 0;
	}

	// void wxGrid::MakeCellVisible(int row, int col)
	static int _bind_MakeCellVisible_overload_1(lua_State *L) {
		if (!_lg_typecheck_MakeCellVisible_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::MakeCellVisible(int row, int col) function, expected prototype:\nvoid wxGrid::MakeCellVisible(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::MakeCellVisible(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MakeCellVisible(row, col);

		return 0;
	}

	// void wxGrid::MakeCellVisible(const wxGridCellCoords & coords)
	static int _bind_MakeCellVisible_overload_2(lua_State *L) {
		if (!_lg_typecheck_MakeCellVisible_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::MakeCellVisible(const wxGridCellCoords & coords) function, expected prototype:\nvoid wxGrid::MakeCellVisible(const wxGridCellCoords & coords)\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::MakeCellVisible function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::MakeCellVisible(const wxGridCellCoords &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MakeCellVisible(coords);

		return 0;
	}

	// Overload binder for wxGrid::MakeCellVisible
	static int _bind_MakeCellVisible(lua_State *L) {
		if (_lg_typecheck_MakeCellVisible_overload_1(L)) return _bind_MakeCellVisible_overload_1(L);
		if (_lg_typecheck_MakeCellVisible_overload_2(L)) return _bind_MakeCellVisible_overload_2(L);

		luaL_error(L, "error in function MakeCellVisible, cannot match any of the overloads for function MakeCellVisible:\n  MakeCellVisible(int, int)\n  MakeCellVisible(const wxGridCellCoords &)\n");
		return 0;
	}

	// void wxGrid::SetScrollLineX(int x)
	static int _bind_SetScrollLineX(lua_State *L) {
		if (!_lg_typecheck_SetScrollLineX(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetScrollLineX(int x) function, expected prototype:\nvoid wxGrid::SetScrollLineX(int x)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetScrollLineX(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetScrollLineX(x);

		return 0;
	}

	// void wxGrid::SetScrollLineY(int y)
	static int _bind_SetScrollLineY(lua_State *L) {
		if (!_lg_typecheck_SetScrollLineY(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetScrollLineY(int y) function, expected prototype:\nvoid wxGrid::SetScrollLineY(int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int y=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetScrollLineY(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetScrollLineY(y);

		return 0;
	}

	// wxRect wxGrid::BlockToDeviceRect(const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight) const
	static int _bind_BlockToDeviceRect(lua_State *L) {
		if (!_lg_typecheck_BlockToDeviceRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxGrid::BlockToDeviceRect(const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight) const function, expected prototype:\nwxRect wxGrid::BlockToDeviceRect(const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight) const\nClass arguments details:\narg 1 ID = 6476046\narg 2 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* topLeft_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxGrid::BlockToDeviceRect function");
		}
		const wxGridCellCoords & topLeft=*topLeft_ptr;
		const wxGridCellCoords* bottomRight_ptr=(Luna< wxGridCellCoords >::check(L,3));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxGrid::BlockToDeviceRect function");
		}
		const wxGridCellCoords & bottomRight=*bottomRight_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxGrid::BlockToDeviceRect(const wxGridCellCoords &, const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->BlockToDeviceRect(topLeft, bottomRight);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxRect wxGrid::CellToRect(int row, int col) const
	static int _bind_CellToRect_overload_1(lua_State *L) {
		if (!_lg_typecheck_CellToRect_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxGrid::CellToRect(int row, int col) const function, expected prototype:\nwxRect wxGrid::CellToRect(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxGrid::CellToRect(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->CellToRect(row, col);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxRect wxGrid::CellToRect(const wxGridCellCoords & coords) const
	static int _bind_CellToRect_overload_2(lua_State *L) {
		if (!_lg_typecheck_CellToRect_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxGrid::CellToRect(const wxGridCellCoords & coords) const function, expected prototype:\nwxRect wxGrid::CellToRect(const wxGridCellCoords & coords) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGrid::CellToRect function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxGrid::CellToRect(const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->CellToRect(coords);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGrid::CellToRect
	static int _bind_CellToRect(lua_State *L) {
		if (_lg_typecheck_CellToRect_overload_1(L)) return _bind_CellToRect_overload_1(L);
		if (_lg_typecheck_CellToRect_overload_2(L)) return _bind_CellToRect_overload_2(L);

		luaL_error(L, "error in function CellToRect, cannot match any of the overloads for function CellToRect:\n  CellToRect(int, int)\n  CellToRect(const wxGridCellCoords &)\n");
		return 0;
	}

	// int wxGrid::XToCol(int x, bool clipToMinMax = false) const
	static int _bind_XToCol(lua_State *L) {
		if (!_lg_typecheck_XToCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::XToCol(int x, bool clipToMinMax = false) const function, expected prototype:\nint wxGrid::XToCol(int x, bool clipToMinMax = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		bool clipToMinMax=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::XToCol(int, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->XToCol(x, clipToMinMax);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::XToEdgeOfCol(int x) const
	static int _bind_XToEdgeOfCol(lua_State *L) {
		if (!_lg_typecheck_XToEdgeOfCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::XToEdgeOfCol(int x) const function, expected prototype:\nint wxGrid::XToEdgeOfCol(int x) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::XToEdgeOfCol(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->XToEdgeOfCol(x);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxGridCellCoords wxGrid::XYToCell(int x, int y) const
	static int _bind_XYToCell_overload_1(lua_State *L) {
		if (!_lg_typecheck_XYToCell_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords wxGrid::XYToCell(int x, int y) const function, expected prototype:\nwxGridCellCoords wxGrid::XYToCell(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoords wxGrid::XYToCell(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoords stack_lret = self->XYToCell(x, y);
		wxGridCellCoords* lret = new wxGridCellCoords(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,true);

		return 1;
	}

	// wxGridCellCoords wxGrid::XYToCell(const wxPoint & pos) const
	static int _bind_XYToCell_overload_2(lua_State *L) {
		if (!_lg_typecheck_XYToCell_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords wxGrid::XYToCell(const wxPoint & pos) const function, expected prototype:\nwxGridCellCoords wxGrid::XYToCell(const wxPoint & pos) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGrid::XYToCell function");
		}
		const wxPoint & pos=*pos_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoords wxGrid::XYToCell(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoords stack_lret = self->XYToCell(pos);
		wxGridCellCoords* lret = new wxGridCellCoords(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGrid::XYToCell
	static int _bind_XYToCell(lua_State *L) {
		if (_lg_typecheck_XYToCell_overload_1(L)) return _bind_XYToCell_overload_1(L);
		if (_lg_typecheck_XYToCell_overload_2(L)) return _bind_XYToCell_overload_2(L);

		luaL_error(L, "error in function XYToCell, cannot match any of the overloads for function XYToCell:\n  XYToCell(int, int)\n  XYToCell(const wxPoint &)\n");
		return 0;
	}

	// int wxGrid::YToEdgeOfRow(int y) const
	static int _bind_YToEdgeOfRow(lua_State *L) {
		if (!_lg_typecheck_YToEdgeOfRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::YToEdgeOfRow(int y) const function, expected prototype:\nint wxGrid::YToEdgeOfRow(int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int y=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::YToEdgeOfRow(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->YToEdgeOfRow(y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::YToRow(int y, bool clipToMinMax = false) const
	static int _bind_YToRow(lua_State *L) {
		if (!_lg_typecheck_YToRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::YToRow(int y, bool clipToMinMax = false) const function, expected prototype:\nint wxGrid::YToRow(int y, bool clipToMinMax = false) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int y=(int)lua_tointeger(L,2);
		bool clipToMinMax=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::YToRow(int, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->YToRow(y, clipToMinMax);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::AppendCols(int numCols = 1, bool updateLabels = true)
	static int _bind_AppendCols(lua_State *L) {
		if (!_lg_typecheck_AppendCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::AppendCols(int numCols = 1, bool updateLabels = true) function, expected prototype:\nbool wxGrid::AppendCols(int numCols = 1, bool updateLabels = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numCols=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		bool updateLabels=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::AppendCols(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AppendCols(numCols, updateLabels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::AppendRows(int numRows = 1, bool updateLabels = true)
	static int _bind_AppendRows(lua_State *L) {
		if (!_lg_typecheck_AppendRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::AppendRows(int numRows = 1, bool updateLabels = true) function, expected prototype:\nbool wxGrid::AppendRows(int numRows = 1, bool updateLabels = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int numRows=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		bool updateLabels=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::AppendRows(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AppendRows(numRows, updateLabels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::AreHorzGridLinesClipped() const
	static int _bind_AreHorzGridLinesClipped(lua_State *L) {
		if (!_lg_typecheck_AreHorzGridLinesClipped(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::AreHorzGridLinesClipped() const function, expected prototype:\nbool wxGrid::AreHorzGridLinesClipped() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::AreHorzGridLinesClipped() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AreHorzGridLinesClipped();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::AreVertGridLinesClipped() const
	static int _bind_AreVertGridLinesClipped(lua_State *L) {
		if (!_lg_typecheck_AreVertGridLinesClipped(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::AreVertGridLinesClipped() const function, expected prototype:\nbool wxGrid::AreVertGridLinesClipped() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::AreVertGridLinesClipped() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AreVertGridLinesClipped();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::BeginBatch()
	static int _bind_BeginBatch(lua_State *L) {
		if (!_lg_typecheck_BeginBatch(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::BeginBatch() function, expected prototype:\nvoid wxGrid::BeginBatch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::BeginBatch(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BeginBatch();

		return 0;
	}

	// void wxGrid::ClearGrid()
	static int _bind_ClearGrid(lua_State *L) {
		if (!_lg_typecheck_ClearGrid(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ClearGrid() function, expected prototype:\nvoid wxGrid::ClearGrid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ClearGrid(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearGrid();

		return 0;
	}

	// void wxGrid::ClipHorzGridLines(bool clip)
	static int _bind_ClipHorzGridLines(lua_State *L) {
		if (!_lg_typecheck_ClipHorzGridLines(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ClipHorzGridLines(bool clip) function, expected prototype:\nvoid wxGrid::ClipHorzGridLines(bool clip)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool clip=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ClipHorzGridLines(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipHorzGridLines(clip);

		return 0;
	}

	// void wxGrid::ClipVertGridLines(bool clip)
	static int _bind_ClipVertGridLines(lua_State *L) {
		if (!_lg_typecheck_ClipVertGridLines(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ClipVertGridLines(bool clip) function, expected prototype:\nvoid wxGrid::ClipVertGridLines(bool clip)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool clip=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ClipVertGridLines(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipVertGridLines(clip);

		return 0;
	}

	// bool wxGrid::DeleteCols(int pos = 0, int numCols = 1, bool updateLabels = true)
	static int _bind_DeleteCols(lua_State *L) {
		if (!_lg_typecheck_DeleteCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::DeleteCols(int pos = 0, int numCols = 1, bool updateLabels = true) function, expected prototype:\nbool wxGrid::DeleteCols(int pos = 0, int numCols = 1, bool updateLabels = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pos=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int numCols=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		bool updateLabels=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::DeleteCols(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteCols(pos, numCols, updateLabels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::DeleteRows(int pos = 0, int numRows = 1, bool updateLabels = true)
	static int _bind_DeleteRows(lua_State *L) {
		if (!_lg_typecheck_DeleteRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::DeleteRows(int pos = 0, int numRows = 1, bool updateLabels = true) function, expected prototype:\nbool wxGrid::DeleteRows(int pos = 0, int numRows = 1, bool updateLabels = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pos=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int numRows=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		bool updateLabels=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::DeleteRows(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteRows(pos, numRows, updateLabels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::EndBatch()
	static int _bind_EndBatch(lua_State *L) {
		if (!_lg_typecheck_EndBatch(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::EndBatch() function, expected prototype:\nvoid wxGrid::EndBatch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::EndBatch(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndBatch();

		return 0;
	}

	// void wxGrid::Fit()
	static int _bind_Fit(lua_State *L) {
		if (!_lg_typecheck_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::Fit() function, expected prototype:\nvoid wxGrid::Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fit();

		return 0;
	}

	// void wxGrid::ForceRefresh()
	static int _bind_ForceRefresh(lua_State *L) {
		if (!_lg_typecheck_ForceRefresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::ForceRefresh() function, expected prototype:\nvoid wxGrid::ForceRefresh()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::ForceRefresh(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForceRefresh();

		return 0;
	}

	// int wxGrid::GetBatchCount()
	static int _bind_GetBatchCount(lua_State *L) {
		if (!_lg_typecheck_GetBatchCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetBatchCount() function, expected prototype:\nint wxGrid::GetBatchCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetBatchCount(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBatchCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetNumberCols() const
	static int _bind_GetNumberCols(lua_State *L) {
		if (!_lg_typecheck_GetNumberCols(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetNumberCols() const function, expected prototype:\nint wxGrid::GetNumberCols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetNumberCols() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberCols();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::GetNumberRows() const
	static int _bind_GetNumberRows(lua_State *L) {
		if (!_lg_typecheck_GetNumberRows(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetNumberRows() const function, expected prototype:\nint wxGrid::GetNumberRows() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetNumberRows() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberRows();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxGridCellAttr * wxGrid::GetOrCreateCellAttr(int row, int col) const
	static int _bind_GetOrCreateCellAttr(lua_State *L) {
		if (!_lg_typecheck_GetOrCreateCellAttr(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGrid::GetOrCreateCellAttr(int row, int col) const function, expected prototype:\nwxGridCellAttr * wxGrid::GetOrCreateCellAttr(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGrid::GetOrCreateCellAttr(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttr * lret = self->GetOrCreateCellAttr(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// wxGridTableBase * wxGrid::GetTable() const
	static int _bind_GetTable(lua_State *L) {
		if (!_lg_typecheck_GetTable(L)) {
			luaL_error(L, "luna typecheck failed in wxGridTableBase * wxGrid::GetTable() const function, expected prototype:\nwxGridTableBase * wxGrid::GetTable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridTableBase * wxGrid::GetTable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridTableBase * lret = self->GetTable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridTableBase >::push(L,lret,false);

		return 1;
	}

	// bool wxGrid::InsertCols(int pos = 0, int numCols = 1, bool updateLabels = true)
	static int _bind_InsertCols(lua_State *L) {
		if (!_lg_typecheck_InsertCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::InsertCols(int pos = 0, int numCols = 1, bool updateLabels = true) function, expected prototype:\nbool wxGrid::InsertCols(int pos = 0, int numCols = 1, bool updateLabels = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pos=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int numCols=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		bool updateLabels=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::InsertCols(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertCols(pos, numCols, updateLabels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::InsertRows(int pos = 0, int numRows = 1, bool updateLabels = true)
	static int _bind_InsertRows(lua_State *L) {
		if (!_lg_typecheck_InsertRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::InsertRows(int pos = 0, int numRows = 1, bool updateLabels = true) function, expected prototype:\nbool wxGrid::InsertRows(int pos = 0, int numRows = 1, bool updateLabels = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pos=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int numRows=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		bool updateLabels=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::InsertRows(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertRows(pos, numRows, updateLabels);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::RefreshAttr(int row, int col)
	static int _bind_RefreshAttr(lua_State *L) {
		if (!_lg_typecheck_RefreshAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::RefreshAttr(int row, int col) function, expected prototype:\nvoid wxGrid::RefreshAttr(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::RefreshAttr(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshAttr(row, col);

		return 0;
	}

	// void wxGrid::SetColAttr(int col, wxGridCellAttr * attr)
	static int _bind_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_SetColAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetColAttr(int col, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGrid::SetColAttr(int col, wxGridCellAttr * attr)\nClass arguments details:\narg 2 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetColAttr(int, wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColAttr(col, attr);

		return 0;
	}

	// void wxGrid::SetMargins(int extraWidth, int extraHeight)
	static int _bind_SetMargins(lua_State *L) {
		if (!_lg_typecheck_SetMargins(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetMargins(int extraWidth, int extraHeight) function, expected prototype:\nvoid wxGrid::SetMargins(int extraWidth, int extraHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int extraWidth=(int)lua_tointeger(L,2);
		int extraHeight=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetMargins(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMargins(extraWidth, extraHeight);

		return 0;
	}

	// void wxGrid::SetRowAttr(int row, wxGridCellAttr * attr)
	static int _bind_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_SetRowAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetRowAttr(int row, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGrid::SetRowAttr(int row, wxGridCellAttr * attr)\nClass arguments details:\narg 2 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetRowAttr(int, wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowAttr(row, attr);

		return 0;
	}

	// int wxGrid::GetSortingColumn() const
	static int _bind_GetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_GetSortingColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::GetSortingColumn() const function, expected prototype:\nint wxGrid::GetSortingColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::GetSortingColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSortingColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::IsSortingBy(int col) const
	static int _bind_IsSortingBy(lua_State *L) {
		if (!_lg_typecheck_IsSortingBy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsSortingBy(int col) const function, expected prototype:\nbool wxGrid::IsSortingBy(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsSortingBy(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortingBy(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::IsSortOrderAscending() const
	static int _bind_IsSortOrderAscending(lua_State *L) {
		if (!_lg_typecheck_IsSortOrderAscending(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::IsSortOrderAscending() const function, expected prototype:\nbool wxGrid::IsSortOrderAscending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::IsSortOrderAscending() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSortOrderAscending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::SetSortingColumn(int col, bool ascending = true)
	static int _bind_SetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_SetSortingColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::SetSortingColumn(int col, bool ascending = true) function, expected prototype:\nvoid wxGrid::SetSortingColumn(int col, bool ascending = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int col=(int)lua_tointeger(L,2);
		bool ascending=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::SetSortingColumn(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSortingColumn(col, ascending);

		return 0;
	}

	// void wxGrid::UnsetSortingColumn()
	static int _bind_UnsetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_UnsetSortingColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::UnsetSortingColumn() function, expected prototype:\nvoid wxGrid::UnsetSortingColumn()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::UnsetSortingColumn(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnsetSortingColumn();

		return 0;
	}

	// wxWindow * wxGrid::GetGridWindow() const
	static int _bind_GetGridWindow(lua_State *L) {
		if (!_lg_typecheck_GetGridWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxGrid::GetGridWindow() const function, expected prototype:\nwxWindow * wxGrid::GetGridWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxGrid::GetGridWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetGridWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxGrid::GetGridRowLabelWindow() const
	static int _bind_GetGridRowLabelWindow(lua_State *L) {
		if (!_lg_typecheck_GetGridRowLabelWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxGrid::GetGridRowLabelWindow() const function, expected prototype:\nwxWindow * wxGrid::GetGridRowLabelWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxGrid::GetGridRowLabelWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetGridRowLabelWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxGrid::GetGridColLabelWindow() const
	static int _bind_GetGridColLabelWindow(lua_State *L) {
		if (!_lg_typecheck_GetGridColLabelWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxGrid::GetGridColLabelWindow() const function, expected prototype:\nwxWindow * wxGrid::GetGridColLabelWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxGrid::GetGridColLabelWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetGridColLabelWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxGrid::GetGridCornerLabelWindow() const
	static int _bind_GetGridCornerLabelWindow(lua_State *L) {
		if (!_lg_typecheck_GetGridCornerLabelWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxGrid::GetGridCornerLabelWindow() const function, expected prototype:\nwxWindow * wxGrid::GetGridCornerLabelWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxGrid::GetGridCornerLabelWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetGridCornerLabelWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxHeaderCtrl * wxGrid::GetGridColHeader() const
	static int _bind_GetGridColHeader(lua_State *L) {
		if (!_lg_typecheck_GetGridColHeader(L)) {
			luaL_error(L, "luna typecheck failed in wxHeaderCtrl * wxGrid::GetGridColHeader() const function, expected prototype:\nwxHeaderCtrl * wxGrid::GetGridColHeader() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHeaderCtrl * wxGrid::GetGridColHeader() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHeaderCtrl * lret = self->GetGridColHeader();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHeaderCtrl >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxGrid::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGrid::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGrid::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGrid::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGrid::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxGrid::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxGrid::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxGrid::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_HasFocus() const function, expected prototype:\nbool wxGrid::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxGrid::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetCanFocus(canFocus);

		return 0;
	}

	// void wxGrid::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetFocusFromKbd() function, expected prototype:\nvoid wxGrid::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetFocusFromKbd();

		return 0;
	}

	// void wxGrid::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxGrid::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::AddChild(child);

		return 0;
	}

	// void wxGrid::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxGrid::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::RemoveChild(child);

		return 0;
	}

	// bool wxGrid::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxGrid::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxGrid::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxGrid::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxGrid::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGrid::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxGrid::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGrid::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxGrid::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGrid::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGrid::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxGrid::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_ScrollLines(int lines) function, expected prototype:\nbool wxGrid::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_ScrollPages(int pages) function, expected prototype:\nbool wxGrid::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxGrid::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxGrid::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxGrid::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxGrid::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxGrid::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxGrid::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxGrid::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxGrid::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_FitInside() function, expected prototype:\nvoid wxGrid::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::FitInside();

		return 0;
	}

	// wxSize wxGrid::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxGrid::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxGrid::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetMaxSize() const function, expected prototype:\nwxSize wxGrid::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetMinClientSize() const function, expected prototype:\nwxSize wxGrid::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetMinSize() const function, expected prototype:\nwxSize wxGrid::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxGrid::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGrid::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGrid::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxGrid::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGrid::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGrid::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxGrid::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxGrid::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxGrid::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SendSizeEvent(flags);

		return 0;
	}

	// void wxGrid::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxGrid::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetMaxClientSize(size);

		return 0;
	}

	// void wxGrid::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxGrid::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetMaxSize(size);

		return 0;
	}

	// void wxGrid::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxGrid::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetMinClientSize(size);

		return 0;
	}

	// void wxGrid::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxGrid::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGrid::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetMinSize(size);

		return 0;
	}

	// void wxGrid::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxGrid::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxGrid::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxGrid::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxGrid::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxGrid::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxGrid::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxGrid::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxGrid::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxGrid::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxGrid::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxGrid::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxGrid::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_ClearBackground() function, expected prototype:\nvoid wxGrid::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxGrid::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxGrid::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxGrid::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxGrid::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxGrid::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::base_GetCharHeight() const function, expected prototype:\nint wxGrid::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGrid::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::base_GetCharWidth() const function, expected prototype:\nint wxGrid::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGrid::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxGrid::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxGrid::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxGrid::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxGrid::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxGrid::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxGrid::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxGrid::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxGrid::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_Update() function, expected prototype:\nvoid wxGrid::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::Update();

		return 0;
	}

	// bool wxGrid::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxGrid::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxGrid::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGrid::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_ShouldInheritColours() const function, expected prototype:\nbool wxGrid::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxGrid::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxGrid::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_GetThemeEnabled() const function, expected prototype:\nbool wxGrid::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_CanSetTransparent() function, expected prototype:\nbool wxGrid::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxGrid::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxGrid::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetNextHandler(handler);

		return 0;
	}

	// void wxGrid::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxGrid::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetPreviousHandler(handler);

		return 0;
	}

	// long wxGrid::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxGrid::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxGrid::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxGrid::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxGrid::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGrid::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxGrid::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxGrid::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxGrid::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxGrid::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_Lower() function, expected prototype:\nvoid wxGrid::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::Lower();

		return 0;
	}

	// void wxGrid::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_Raise() function, expected prototype:\nvoid wxGrid::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::Raise();

		return 0;
	}

	// bool wxGrid::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxGrid::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_IsShown() const function, expected prototype:\nbool wxGrid::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_IsShownOnScreen() const function, expected prototype:\nbool wxGrid::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_Enable(bool enable = true) function, expected prototype:\nbool wxGrid::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_Show(bool show = true) function, expected prototype:\nbool wxGrid::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxGrid::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGrid::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxGrid::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxGrid::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGrid::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxGrid::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxGrid::base_GetValidator() function, expected prototype:\nwxValidator * wxGrid::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxGrid::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxGrid::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxGrid::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxGrid::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGrid::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetValidator(validator);

		return 0;
	}

	// bool wxGrid::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_TransferDataFromWindow() function, expected prototype:\nbool wxGrid::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_TransferDataToWindow() function, expected prototype:\nbool wxGrid::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_Validate() function, expected prototype:\nbool wxGrid::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGrid::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::base_GetLabel() const function, expected prototype:\nwxString wxGrid::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGrid::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxGrid::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxGrid::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxGrid::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxGrid::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxGrid::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxGrid::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGrid::base_GetName() const function, expected prototype:\nwxString wxGrid::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGrid::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGrid::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGrid::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxGrid::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetLabel(label);

		return 0;
	}

	// void wxGrid::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxGrid::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetLayoutDirection(dir);

		return 0;
	}

	// void wxGrid::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetName(const wxString & name) function, expected prototype:\nvoid wxGrid::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetName(name);

		return 0;
	}

	// void wxGrid::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxGrid::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxGrid::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxGrid::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_Destroy() function, expected prototype:\nbool wxGrid::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxGrid::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxGrid::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxGrid::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxGrid::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxGrid::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxGrid::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxGrid::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetDropTarget(target);

		return 0;
	}

	// void wxGrid::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxGrid::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxGrid::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_HasCapture() const function, expected prototype:\nbool wxGrid::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxGrid::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxGrid::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxGrid::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::WarpPointer(x, y);

		return 0;
	}

	// void wxGrid::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxGrid::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGrid::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxGrid::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxGrid::base_GetHandle() const function, expected prototype:\nHWND wxGrid::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxGrid::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxGrid::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxGrid::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_HasMultiplePages() const function, expected prototype:\nbool wxGrid::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_InheritAttributes() function, expected prototype:\nvoid wxGrid::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::InheritAttributes();

		return 0;
	}

	// bool wxGrid::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_IsRetained() const function, expected prototype:\nbool wxGrid::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_IsTopLevel() const function, expected prototype:\nbool wxGrid::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxGrid::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::MakeModal(modal);

		return 0;
	}

	// void wxGrid::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_OnInternalIdle() function, expected prototype:\nvoid wxGrid::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::OnInternalIdle();

		return 0;
	}

	// bool wxGrid::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxGrid::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGrid::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxGrid::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxGrid::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxGrid::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_AcceptsFocus() const function, expected prototype:\nbool wxGrid::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_InitDialog() function, expected prototype:\nvoid wxGrid::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::InitDialog();

		return 0;
	}

	// bool wxGrid::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::base_Layout() function, expected prototype:\nbool wxGrid::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGrid::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGrid::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_SetFocus() function, expected prototype:\nvoid wxGrid::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::SetFocus();

		return 0;
	}

	// wxPen wxGrid::base_GetColGridLinePen(int col)
	static int _bind_base_GetColGridLinePen(lua_State *L) {
		if (!_lg_typecheck_base_GetColGridLinePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen wxGrid::base_GetColGridLinePen(int col) function, expected prototype:\nwxPen wxGrid::base_GetColGridLinePen(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen wxGrid::base_GetColGridLinePen(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen stack_lret = self->wxGrid::GetColGridLinePen(col);
		wxPen* lret = new wxPen(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,true);

		return 1;
	}

	// wxPen wxGrid::base_GetDefaultGridLinePen()
	static int _bind_base_GetDefaultGridLinePen(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultGridLinePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen wxGrid::base_GetDefaultGridLinePen() function, expected prototype:\nwxPen wxGrid::base_GetDefaultGridLinePen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen wxGrid::base_GetDefaultGridLinePen(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen stack_lret = self->wxGrid::GetDefaultGridLinePen();
		wxPen* lret = new wxPen(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,true);

		return 1;
	}

	// wxPen wxGrid::base_GetRowGridLinePen(int row)
	static int _bind_base_GetRowGridLinePen(lua_State *L) {
		if (!_lg_typecheck_base_GetRowGridLinePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen wxGrid::base_GetRowGridLinePen(int row) function, expected prototype:\nwxPen wxGrid::base_GetRowGridLinePen(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen wxGrid::base_GetRowGridLinePen(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen stack_lret = self->wxGrid::GetRowGridLinePen(row);
		wxPen* lret = new wxPen(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,true);

		return 1;
	}

	// wxGridCellEditor * wxGrid::base_GetDefaultEditorForCell(int row, int col) const
	static int _bind_base_GetDefaultEditorForCell(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultEditorForCell(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::base_GetDefaultEditorForCell(int row, int col) const function, expected prototype:\nwxGridCellEditor * wxGrid::base_GetDefaultEditorForCell(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::base_GetDefaultEditorForCell(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->wxGrid::GetDefaultEditorForCell(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// wxGridCellEditor * wxGrid::base_GetDefaultEditorForType(const wxString & typeName) const
	static int _bind_base_GetDefaultEditorForType(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultEditorForType(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellEditor * wxGrid::base_GetDefaultEditorForType(const wxString & typeName) const function, expected prototype:\nwxGridCellEditor * wxGrid::base_GetDefaultEditorForType(const wxString & typeName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString typeName(lua_tostring(L,2),lua_objlen(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellEditor * wxGrid::base_GetDefaultEditorForType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellEditor * lret = self->wxGrid::GetDefaultEditorForType(typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellEditor >::push(L,lret,false);

		return 1;
	}

	// wxGridCellRenderer * wxGrid::base_GetDefaultRendererForCell(int row, int col) const
	static int _bind_base_GetDefaultRendererForCell(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultRendererForCell(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGrid::base_GetDefaultRendererForCell(int row, int col) const function, expected prototype:\nwxGridCellRenderer * wxGrid::base_GetDefaultRendererForCell(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGrid::base_GetDefaultRendererForCell(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->wxGrid::GetDefaultRendererForCell(row, col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// wxGridCellRenderer * wxGrid::base_GetDefaultRendererForType(const wxString & typeName) const
	static int _bind_base_GetDefaultRendererForType(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultRendererForType(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellRenderer * wxGrid::base_GetDefaultRendererForType(const wxString & typeName) const function, expected prototype:\nwxGridCellRenderer * wxGrid::base_GetDefaultRendererForType(const wxString & typeName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString typeName(lua_tostring(L,2),lua_objlen(L,2));

		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellRenderer * wxGrid::base_GetDefaultRendererForType(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellRenderer * lret = self->wxGrid::GetDefaultRendererForType(typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellRenderer >::push(L,lret,false);

		return 1;
	}

	// void wxGrid::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxGrid::base_Fit() function, expected prototype:\nvoid wxGrid::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGrid* self=Luna< wxObject >::checkSubType< wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGrid::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGrid::Fit();

		return 0;
	}


	// Operator binds:

};

wxGrid* LunaTraits< wxGrid >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGrid::_bind_ctor(L);
}

void LunaTraits< wxGrid >::_bind_dtor(wxGrid* obj) {
	delete obj;
}

const char LunaTraits< wxGrid >::className[] = "wxGrid";
const char LunaTraits< wxGrid >::fullName[] = "wxGrid";
const char LunaTraits< wxGrid >::moduleName[] = "wx";
const char* LunaTraits< wxGrid >::parents[] = {"wx.wxScrolledWindow", 0};
const int LunaTraits< wxGrid >::hash = 19919380;
const int LunaTraits< wxGrid >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGrid >::methods[] = {
	{"Create", &luna_wrapper_wxGrid::_bind_Create},
	{"CreateGrid", &luna_wrapper_wxGrid::_bind_CreateGrid},
	{"SetTable", &luna_wrapper_wxGrid::_bind_SetTable},
	{"EnableGridLines", &luna_wrapper_wxGrid::_bind_EnableGridLines},
	{"GetColGridLinePen", &luna_wrapper_wxGrid::_bind_GetColGridLinePen},
	{"GetDefaultGridLinePen", &luna_wrapper_wxGrid::_bind_GetDefaultGridLinePen},
	{"GetGridLineColour", &luna_wrapper_wxGrid::_bind_GetGridLineColour},
	{"GetRowGridLinePen", &luna_wrapper_wxGrid::_bind_GetRowGridLinePen},
	{"GridLinesEnabled", &luna_wrapper_wxGrid::_bind_GridLinesEnabled},
	{"SetGridLineColour", &luna_wrapper_wxGrid::_bind_SetGridLineColour},
	{"GetColLabelAlignment", &luna_wrapper_wxGrid::_bind_GetColLabelAlignment},
	{"GetColLabelTextOrientation", &luna_wrapper_wxGrid::_bind_GetColLabelTextOrientation},
	{"GetColLabelValue", &luna_wrapper_wxGrid::_bind_GetColLabelValue},
	{"GetLabelBackgroundColour", &luna_wrapper_wxGrid::_bind_GetLabelBackgroundColour},
	{"GetLabelFont", &luna_wrapper_wxGrid::_bind_GetLabelFont},
	{"GetLabelTextColour", &luna_wrapper_wxGrid::_bind_GetLabelTextColour},
	{"GetRowLabelAlignment", &luna_wrapper_wxGrid::_bind_GetRowLabelAlignment},
	{"GetRowLabelValue", &luna_wrapper_wxGrid::_bind_GetRowLabelValue},
	{"HideColLabels", &luna_wrapper_wxGrid::_bind_HideColLabels},
	{"HideRowLabels", &luna_wrapper_wxGrid::_bind_HideRowLabels},
	{"SetColLabelAlignment", &luna_wrapper_wxGrid::_bind_SetColLabelAlignment},
	{"SetColLabelTextOrientation", &luna_wrapper_wxGrid::_bind_SetColLabelTextOrientation},
	{"SetColLabelValue", &luna_wrapper_wxGrid::_bind_SetColLabelValue},
	{"SetLabelBackgroundColour", &luna_wrapper_wxGrid::_bind_SetLabelBackgroundColour},
	{"SetLabelFont", &luna_wrapper_wxGrid::_bind_SetLabelFont},
	{"SetLabelTextColour", &luna_wrapper_wxGrid::_bind_SetLabelTextColour},
	{"SetRowLabelAlignment", &luna_wrapper_wxGrid::_bind_SetRowLabelAlignment},
	{"SetRowLabelValue", &luna_wrapper_wxGrid::_bind_SetRowLabelValue},
	{"SetUseNativeColLabels", &luna_wrapper_wxGrid::_bind_SetUseNativeColLabels},
	{"UseNativeColHeader", &luna_wrapper_wxGrid::_bind_UseNativeColHeader},
	{"GetCellAlignment", &luna_wrapper_wxGrid::_bind_GetCellAlignment},
	{"GetCellBackgroundColour", &luna_wrapper_wxGrid::_bind_GetCellBackgroundColour},
	{"GetCellFont", &luna_wrapper_wxGrid::_bind_GetCellFont},
	{"GetCellTextColour", &luna_wrapper_wxGrid::_bind_GetCellTextColour},
	{"GetDefaultCellAlignment", &luna_wrapper_wxGrid::_bind_GetDefaultCellAlignment},
	{"GetDefaultCellBackgroundColour", &luna_wrapper_wxGrid::_bind_GetDefaultCellBackgroundColour},
	{"GetDefaultCellFont", &luna_wrapper_wxGrid::_bind_GetDefaultCellFont},
	{"GetDefaultCellTextColour", &luna_wrapper_wxGrid::_bind_GetDefaultCellTextColour},
	{"SetCellAlignment", &luna_wrapper_wxGrid::_bind_SetCellAlignment},
	{"SetCellBackgroundColour", &luna_wrapper_wxGrid::_bind_SetCellBackgroundColour},
	{"SetCellFont", &luna_wrapper_wxGrid::_bind_SetCellFont},
	{"SetCellTextColour", &luna_wrapper_wxGrid::_bind_SetCellTextColour},
	{"SetDefaultCellAlignment", &luna_wrapper_wxGrid::_bind_SetDefaultCellAlignment},
	{"SetDefaultCellBackgroundColour", &luna_wrapper_wxGrid::_bind_SetDefaultCellBackgroundColour},
	{"SetDefaultCellFont", &luna_wrapper_wxGrid::_bind_SetDefaultCellFont},
	{"SetDefaultCellTextColour", &luna_wrapper_wxGrid::_bind_SetDefaultCellTextColour},
	{"CanEnableCellControl", &luna_wrapper_wxGrid::_bind_CanEnableCellControl},
	{"DisableCellEditControl", &luna_wrapper_wxGrid::_bind_DisableCellEditControl},
	{"EnableCellEditControl", &luna_wrapper_wxGrid::_bind_EnableCellEditControl},
	{"EnableEditing", &luna_wrapper_wxGrid::_bind_EnableEditing},
	{"GetCellEditor", &luna_wrapper_wxGrid::_bind_GetCellEditor},
	{"GetCellRenderer", &luna_wrapper_wxGrid::_bind_GetCellRenderer},
	{"GetCellValue", &luna_wrapper_wxGrid::_bind_GetCellValue},
	{"GetDefaultEditor", &luna_wrapper_wxGrid::_bind_GetDefaultEditor},
	{"GetDefaultEditorForCell", &luna_wrapper_wxGrid::_bind_GetDefaultEditorForCell},
	{"GetDefaultEditorForType", &luna_wrapper_wxGrid::_bind_GetDefaultEditorForType},
	{"GetDefaultRenderer", &luna_wrapper_wxGrid::_bind_GetDefaultRenderer},
	{"GetDefaultRendererForCell", &luna_wrapper_wxGrid::_bind_GetDefaultRendererForCell},
	{"GetDefaultRendererForType", &luna_wrapper_wxGrid::_bind_GetDefaultRendererForType},
	{"HideCellEditControl", &luna_wrapper_wxGrid::_bind_HideCellEditControl},
	{"IsCellEditControlEnabled", &luna_wrapper_wxGrid::_bind_IsCellEditControlEnabled},
	{"IsCurrentCellReadOnly", &luna_wrapper_wxGrid::_bind_IsCurrentCellReadOnly},
	{"IsEditable", &luna_wrapper_wxGrid::_bind_IsEditable},
	{"IsReadOnly", &luna_wrapper_wxGrid::_bind_IsReadOnly},
	{"RegisterDataType", &luna_wrapper_wxGrid::_bind_RegisterDataType},
	{"SaveEditControlValue", &luna_wrapper_wxGrid::_bind_SaveEditControlValue},
	{"SetCellEditor", &luna_wrapper_wxGrid::_bind_SetCellEditor},
	{"SetCellRenderer", &luna_wrapper_wxGrid::_bind_SetCellRenderer},
	{"SetCellValue", &luna_wrapper_wxGrid::_bind_SetCellValue},
	{"SetColFormatBool", &luna_wrapper_wxGrid::_bind_SetColFormatBool},
	{"SetColFormatCustom", &luna_wrapper_wxGrid::_bind_SetColFormatCustom},
	{"SetColFormatFloat", &luna_wrapper_wxGrid::_bind_SetColFormatFloat},
	{"SetColFormatNumber", &luna_wrapper_wxGrid::_bind_SetColFormatNumber},
	{"SetDefaultEditor", &luna_wrapper_wxGrid::_bind_SetDefaultEditor},
	{"SetDefaultRenderer", &luna_wrapper_wxGrid::_bind_SetDefaultRenderer},
	{"SetReadOnly", &luna_wrapper_wxGrid::_bind_SetReadOnly},
	{"ShowCellEditControl", &luna_wrapper_wxGrid::_bind_ShowCellEditControl},
	{"AutoSize", &luna_wrapper_wxGrid::_bind_AutoSize},
	{"AutoSizeColLabelSize", &luna_wrapper_wxGrid::_bind_AutoSizeColLabelSize},
	{"AutoSizeColumn", &luna_wrapper_wxGrid::_bind_AutoSizeColumn},
	{"AutoSizeColumns", &luna_wrapper_wxGrid::_bind_AutoSizeColumns},
	{"AutoSizeRow", &luna_wrapper_wxGrid::_bind_AutoSizeRow},
	{"AutoSizeRowLabelSize", &luna_wrapper_wxGrid::_bind_AutoSizeRowLabelSize},
	{"AutoSizeRows", &luna_wrapper_wxGrid::_bind_AutoSizeRows},
	{"GetColLabelSize", &luna_wrapper_wxGrid::_bind_GetColLabelSize},
	{"GetColMinimalAcceptableWidth", &luna_wrapper_wxGrid::_bind_GetColMinimalAcceptableWidth},
	{"GetColSize", &luna_wrapper_wxGrid::_bind_GetColSize},
	{"IsColShown", &luna_wrapper_wxGrid::_bind_IsColShown},
	{"GetDefaultColLabelSize", &luna_wrapper_wxGrid::_bind_GetDefaultColLabelSize},
	{"GetDefaultColSize", &luna_wrapper_wxGrid::_bind_GetDefaultColSize},
	{"GetDefaultRowLabelSize", &luna_wrapper_wxGrid::_bind_GetDefaultRowLabelSize},
	{"GetDefaultRowSize", &luna_wrapper_wxGrid::_bind_GetDefaultRowSize},
	{"GetRowMinimalAcceptableHeight", &luna_wrapper_wxGrid::_bind_GetRowMinimalAcceptableHeight},
	{"GetRowLabelSize", &luna_wrapper_wxGrid::_bind_GetRowLabelSize},
	{"GetRowSize", &luna_wrapper_wxGrid::_bind_GetRowSize},
	{"IsRowShown", &luna_wrapper_wxGrid::_bind_IsRowShown},
	{"SetColLabelSize", &luna_wrapper_wxGrid::_bind_SetColLabelSize},
	{"SetColMinimalAcceptableWidth", &luna_wrapper_wxGrid::_bind_SetColMinimalAcceptableWidth},
	{"SetColMinimalWidth", &luna_wrapper_wxGrid::_bind_SetColMinimalWidth},
	{"SetColSize", &luna_wrapper_wxGrid::_bind_SetColSize},
	{"HideCol", &luna_wrapper_wxGrid::_bind_HideCol},
	{"ShowCol", &luna_wrapper_wxGrid::_bind_ShowCol},
	{"SetDefaultColSize", &luna_wrapper_wxGrid::_bind_SetDefaultColSize},
	{"SetDefaultRowSize", &luna_wrapper_wxGrid::_bind_SetDefaultRowSize},
	{"SetRowLabelSize", &luna_wrapper_wxGrid::_bind_SetRowLabelSize},
	{"SetRowMinimalAcceptableHeight", &luna_wrapper_wxGrid::_bind_SetRowMinimalAcceptableHeight},
	{"SetRowMinimalHeight", &luna_wrapper_wxGrid::_bind_SetRowMinimalHeight},
	{"SetRowSize", &luna_wrapper_wxGrid::_bind_SetRowSize},
	{"HideRow", &luna_wrapper_wxGrid::_bind_HideRow},
	{"ShowRow", &luna_wrapper_wxGrid::_bind_ShowRow},
	{"GetColSizes", &luna_wrapper_wxGrid::_bind_GetColSizes},
	{"GetRowSizes", &luna_wrapper_wxGrid::_bind_GetRowSizes},
	{"SetColSizes", &luna_wrapper_wxGrid::_bind_SetColSizes},
	{"SetRowSizes", &luna_wrapper_wxGrid::_bind_SetRowSizes},
	{"SetCellSize", &luna_wrapper_wxGrid::_bind_SetCellSize},
	{"GetCellSize", &luna_wrapper_wxGrid::_bind_GetCellSize},
	{"CanDragCell", &luna_wrapper_wxGrid::_bind_CanDragCell},
	{"CanDragColMove", &luna_wrapper_wxGrid::_bind_CanDragColMove},
	{"CanDragColSize", &luna_wrapper_wxGrid::_bind_CanDragColSize},
	{"CanDragGridSize", &luna_wrapper_wxGrid::_bind_CanDragGridSize},
	{"CanDragRowSize", &luna_wrapper_wxGrid::_bind_CanDragRowSize},
	{"DisableColResize", &luna_wrapper_wxGrid::_bind_DisableColResize},
	{"DisableRowResize", &luna_wrapper_wxGrid::_bind_DisableRowResize},
	{"DisableDragColMove", &luna_wrapper_wxGrid::_bind_DisableDragColMove},
	{"DisableDragColSize", &luna_wrapper_wxGrid::_bind_DisableDragColSize},
	{"DisableDragGridSize", &luna_wrapper_wxGrid::_bind_DisableDragGridSize},
	{"DisableDragRowSize", &luna_wrapper_wxGrid::_bind_DisableDragRowSize},
	{"EnableDragCell", &luna_wrapper_wxGrid::_bind_EnableDragCell},
	{"EnableDragColMove", &luna_wrapper_wxGrid::_bind_EnableDragColMove},
	{"EnableDragColSize", &luna_wrapper_wxGrid::_bind_EnableDragColSize},
	{"EnableDragGridSize", &luna_wrapper_wxGrid::_bind_EnableDragGridSize},
	{"EnableDragRowSize", &luna_wrapper_wxGrid::_bind_EnableDragRowSize},
	{"GetColAt", &luna_wrapper_wxGrid::_bind_GetColAt},
	{"GetColPos", &luna_wrapper_wxGrid::_bind_GetColPos},
	{"SetColPos", &luna_wrapper_wxGrid::_bind_SetColPos},
	{"SetColumnsOrder", &luna_wrapper_wxGrid::_bind_SetColumnsOrder},
	{"ResetColPos", &luna_wrapper_wxGrid::_bind_ResetColPos},
	{"GetGridCursorCol", &luna_wrapper_wxGrid::_bind_GetGridCursorCol},
	{"GetGridCursorRow", &luna_wrapper_wxGrid::_bind_GetGridCursorRow},
	{"GoToCell", &luna_wrapper_wxGrid::_bind_GoToCell},
	{"MoveCursorDown", &luna_wrapper_wxGrid::_bind_MoveCursorDown},
	{"MoveCursorDownBlock", &luna_wrapper_wxGrid::_bind_MoveCursorDownBlock},
	{"MoveCursorLeft", &luna_wrapper_wxGrid::_bind_MoveCursorLeft},
	{"MoveCursorLeftBlock", &luna_wrapper_wxGrid::_bind_MoveCursorLeftBlock},
	{"MoveCursorRight", &luna_wrapper_wxGrid::_bind_MoveCursorRight},
	{"MoveCursorRightBlock", &luna_wrapper_wxGrid::_bind_MoveCursorRightBlock},
	{"MoveCursorUp", &luna_wrapper_wxGrid::_bind_MoveCursorUp},
	{"MoveCursorUpBlock", &luna_wrapper_wxGrid::_bind_MoveCursorUpBlock},
	{"MovePageDown", &luna_wrapper_wxGrid::_bind_MovePageDown},
	{"MovePageUp", &luna_wrapper_wxGrid::_bind_MovePageUp},
	{"SetGridCursor", &luna_wrapper_wxGrid::_bind_SetGridCursor},
	{"ClearSelection", &luna_wrapper_wxGrid::_bind_ClearSelection},
	{"GetSelectedCells", &luna_wrapper_wxGrid::_bind_GetSelectedCells},
	{"GetSelectedCols", &luna_wrapper_wxGrid::_bind_GetSelectedCols},
	{"GetSelectedRows", &luna_wrapper_wxGrid::_bind_GetSelectedRows},
	{"GetSelectionBackground", &luna_wrapper_wxGrid::_bind_GetSelectionBackground},
	{"GetSelectionBlockBottomRight", &luna_wrapper_wxGrid::_bind_GetSelectionBlockBottomRight},
	{"GetSelectionBlockTopLeft", &luna_wrapper_wxGrid::_bind_GetSelectionBlockTopLeft},
	{"GetSelectionForeground", &luna_wrapper_wxGrid::_bind_GetSelectionForeground},
	{"GetSelectionMode", &luna_wrapper_wxGrid::_bind_GetSelectionMode},
	{"IsInSelection", &luna_wrapper_wxGrid::_bind_IsInSelection},
	{"IsSelection", &luna_wrapper_wxGrid::_bind_IsSelection},
	{"SelectAll", &luna_wrapper_wxGrid::_bind_SelectAll},
	{"SelectBlock", &luna_wrapper_wxGrid::_bind_SelectBlock},
	{"SelectCol", &luna_wrapper_wxGrid::_bind_SelectCol},
	{"SelectRow", &luna_wrapper_wxGrid::_bind_SelectRow},
	{"SetSelectionBackground", &luna_wrapper_wxGrid::_bind_SetSelectionBackground},
	{"SetSelectionForeground", &luna_wrapper_wxGrid::_bind_SetSelectionForeground},
	{"SetSelectionMode", &luna_wrapper_wxGrid::_bind_SetSelectionMode},
	{"GetScrollLineX", &luna_wrapper_wxGrid::_bind_GetScrollLineX},
	{"GetScrollLineY", &luna_wrapper_wxGrid::_bind_GetScrollLineY},
	{"IsVisible", &luna_wrapper_wxGrid::_bind_IsVisible},
	{"MakeCellVisible", &luna_wrapper_wxGrid::_bind_MakeCellVisible},
	{"SetScrollLineX", &luna_wrapper_wxGrid::_bind_SetScrollLineX},
	{"SetScrollLineY", &luna_wrapper_wxGrid::_bind_SetScrollLineY},
	{"BlockToDeviceRect", &luna_wrapper_wxGrid::_bind_BlockToDeviceRect},
	{"CellToRect", &luna_wrapper_wxGrid::_bind_CellToRect},
	{"XToCol", &luna_wrapper_wxGrid::_bind_XToCol},
	{"XToEdgeOfCol", &luna_wrapper_wxGrid::_bind_XToEdgeOfCol},
	{"XYToCell", &luna_wrapper_wxGrid::_bind_XYToCell},
	{"YToEdgeOfRow", &luna_wrapper_wxGrid::_bind_YToEdgeOfRow},
	{"YToRow", &luna_wrapper_wxGrid::_bind_YToRow},
	{"AppendCols", &luna_wrapper_wxGrid::_bind_AppendCols},
	{"AppendRows", &luna_wrapper_wxGrid::_bind_AppendRows},
	{"AreHorzGridLinesClipped", &luna_wrapper_wxGrid::_bind_AreHorzGridLinesClipped},
	{"AreVertGridLinesClipped", &luna_wrapper_wxGrid::_bind_AreVertGridLinesClipped},
	{"BeginBatch", &luna_wrapper_wxGrid::_bind_BeginBatch},
	{"ClearGrid", &luna_wrapper_wxGrid::_bind_ClearGrid},
	{"ClipHorzGridLines", &luna_wrapper_wxGrid::_bind_ClipHorzGridLines},
	{"ClipVertGridLines", &luna_wrapper_wxGrid::_bind_ClipVertGridLines},
	{"DeleteCols", &luna_wrapper_wxGrid::_bind_DeleteCols},
	{"DeleteRows", &luna_wrapper_wxGrid::_bind_DeleteRows},
	{"EndBatch", &luna_wrapper_wxGrid::_bind_EndBatch},
	{"Fit", &luna_wrapper_wxGrid::_bind_Fit},
	{"ForceRefresh", &luna_wrapper_wxGrid::_bind_ForceRefresh},
	{"GetBatchCount", &luna_wrapper_wxGrid::_bind_GetBatchCount},
	{"GetNumberCols", &luna_wrapper_wxGrid::_bind_GetNumberCols},
	{"GetNumberRows", &luna_wrapper_wxGrid::_bind_GetNumberRows},
	{"GetOrCreateCellAttr", &luna_wrapper_wxGrid::_bind_GetOrCreateCellAttr},
	{"GetTable", &luna_wrapper_wxGrid::_bind_GetTable},
	{"InsertCols", &luna_wrapper_wxGrid::_bind_InsertCols},
	{"InsertRows", &luna_wrapper_wxGrid::_bind_InsertRows},
	{"RefreshAttr", &luna_wrapper_wxGrid::_bind_RefreshAttr},
	{"SetColAttr", &luna_wrapper_wxGrid::_bind_SetColAttr},
	{"SetMargins", &luna_wrapper_wxGrid::_bind_SetMargins},
	{"SetRowAttr", &luna_wrapper_wxGrid::_bind_SetRowAttr},
	{"GetSortingColumn", &luna_wrapper_wxGrid::_bind_GetSortingColumn},
	{"IsSortingBy", &luna_wrapper_wxGrid::_bind_IsSortingBy},
	{"IsSortOrderAscending", &luna_wrapper_wxGrid::_bind_IsSortOrderAscending},
	{"SetSortingColumn", &luna_wrapper_wxGrid::_bind_SetSortingColumn},
	{"UnsetSortingColumn", &luna_wrapper_wxGrid::_bind_UnsetSortingColumn},
	{"GetGridWindow", &luna_wrapper_wxGrid::_bind_GetGridWindow},
	{"GetGridRowLabelWindow", &luna_wrapper_wxGrid::_bind_GetGridRowLabelWindow},
	{"GetGridColLabelWindow", &luna_wrapper_wxGrid::_bind_GetGridColLabelWindow},
	{"GetGridCornerLabelWindow", &luna_wrapper_wxGrid::_bind_GetGridCornerLabelWindow},
	{"GetGridColHeader", &luna_wrapper_wxGrid::_bind_GetGridColHeader},
	{"base_GetClassInfo", &luna_wrapper_wxGrid::_bind_base_GetClassInfo},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxGrid::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxGrid::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxGrid::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxGrid::_bind_base_SetCanFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxGrid::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxGrid::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxGrid::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxGrid::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxGrid::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxGrid::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxGrid::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxGrid::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxGrid::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxGrid::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxGrid::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxGrid::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxGrid::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxGrid::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxGrid::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxGrid::_bind_base_WindowToClientSize},
	{"base_FitInside", &luna_wrapper_wxGrid::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxGrid::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxGrid::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxGrid::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxGrid::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxGrid::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxGrid::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxGrid::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxGrid::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxGrid::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxGrid::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxGrid::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxGrid::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxGrid::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxGrid::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxGrid::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxGrid::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxGrid::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxGrid::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxGrid::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxGrid::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxGrid::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxGrid::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxGrid::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxGrid::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxGrid::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxGrid::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxGrid::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxGrid::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxGrid::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxGrid::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxGrid::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxGrid::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxGrid::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxGrid::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxGrid::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxGrid::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxGrid::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxGrid::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxGrid::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxGrid::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxGrid::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxGrid::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxGrid::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxGrid::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxGrid::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxGrid::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxGrid::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxGrid::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxGrid::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxGrid::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxGrid::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxGrid::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxGrid::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxGrid::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxGrid::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxGrid::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxGrid::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxGrid::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxGrid::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxGrid::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxGrid::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxGrid::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxGrid::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxGrid::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxGrid::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxGrid::_bind_base_InheritAttributes},
	{"base_IsRetained", &luna_wrapper_wxGrid::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxGrid::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxGrid::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxGrid::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxGrid::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxGrid::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxGrid::_bind_base_UpdateWindowUI},
	{"base_AcceptsFocus", &luna_wrapper_wxGrid::_bind_base_AcceptsFocus},
	{"base_InitDialog", &luna_wrapper_wxGrid::_bind_base_InitDialog},
	{"base_Layout", &luna_wrapper_wxGrid::_bind_base_Layout},
	{"base_SetFocus", &luna_wrapper_wxGrid::_bind_base_SetFocus},
	{"base_GetColGridLinePen", &luna_wrapper_wxGrid::_bind_base_GetColGridLinePen},
	{"base_GetDefaultGridLinePen", &luna_wrapper_wxGrid::_bind_base_GetDefaultGridLinePen},
	{"base_GetRowGridLinePen", &luna_wrapper_wxGrid::_bind_base_GetRowGridLinePen},
	{"base_GetDefaultEditorForCell", &luna_wrapper_wxGrid::_bind_base_GetDefaultEditorForCell},
	{"base_GetDefaultEditorForType", &luna_wrapper_wxGrid::_bind_base_GetDefaultEditorForType},
	{"base_GetDefaultRendererForCell", &luna_wrapper_wxGrid::_bind_base_GetDefaultRendererForCell},
	{"base_GetDefaultRendererForType", &luna_wrapper_wxGrid::_bind_base_GetDefaultRendererForType},
	{"base_Fit", &luna_wrapper_wxGrid::_bind_base_Fit},
	{"fromVoid", &luna_wrapper_wxGrid::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGrid::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGrid::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGrid >::converters[] = {
	{"wxObject", &luna_wrapper_wxGrid::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGrid >::enumValues[] = {
	{"wxGridSelectCells", wxGrid::wxGridSelectCells},
	{"wxGridSelectRows", wxGrid::wxGridSelectRows},
	{"wxGridSelectColumns", wxGrid::wxGridSelectColumns},
	{"wxGridSelectRowsOrColumns", wxGrid::wxGridSelectRowsOrColumns},
	{"CellSpan_Inside", wxGrid::CellSpan_Inside},
	{"CellSpan_None", wxGrid::CellSpan_None},
	{"CellSpan_Main", wxGrid::CellSpan_Main},
	{0,0}
};


