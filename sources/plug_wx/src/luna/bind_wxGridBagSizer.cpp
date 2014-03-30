#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridBagSizer.h>

class luna_wrapper_wxGridBagSizer {
public:
	typedef Luna< wxGridBagSizer > luna_t;

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

		wxGridBagSizer* self= (wxGridBagSizer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridBagSizer >::push(L,self,false);
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
		//wxGridBagSizer* ptr= dynamic_cast< wxGridBagSizer* >(Luna< wxObject >::check(L,1));
		wxGridBagSizer* ptr= luna_caster< wxObject, wxGridBagSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridBagSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>3 && (!(Luna< wxGBSpan >::check(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>3 && (!(Luna< wxGBSpan >::check(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,97553085) ) return false;
		if( luatop>4 && (!(Luna< wxGBSpan >::check(L,5))) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !(Luna< wxObject >::check(L,8)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CheckForIntersection_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckForIntersection_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemAtPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemAtPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItemWithData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCellSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEmptyCellSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpan_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEmptyCellSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemSpan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemSpan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemSpan_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridBagSizer::wxGridBagSizer(int vgap = 0, int hgap = 0)
	static wxGridBagSizer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridBagSizer::wxGridBagSizer(int vgap = 0, int hgap = 0) function, expected prototype:\nwxGridBagSizer::wxGridBagSizer(int vgap = 0, int hgap = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int vgap=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int hgap=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxGridBagSizer(vgap, hgap);
	}

	// wxGridBagSizer::wxGridBagSizer(lua_Table * data, int vgap = 0, int hgap = 0)
	static wxGridBagSizer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridBagSizer::wxGridBagSizer(lua_Table * data, int vgap = 0, int hgap = 0) function, expected prototype:\nwxGridBagSizer::wxGridBagSizer(lua_Table * data, int vgap = 0, int hgap = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int vgap=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int hgap=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxGridBagSizer(L,NULL, vgap, hgap);
	}

	// Overload binder for wxGridBagSizer::wxGridBagSizer
	static wxGridBagSizer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGridBagSizer, cannot match any of the overloads for function wxGridBagSizer:\n  wxGridBagSizer(int, int)\n  wxGridBagSizer(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// wxSizerItem * wxGridBagSizer::Add(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::Add function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::Add function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(window, pos, span, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::Add(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::Add function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::Add function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(sizer, pos, span, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::Add(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 3 ID = 3425779\narg 4 ID = 97553085\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::Add function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>4 ? (Luna< wxGBSpan >::check(L,5)) : NULL;
		if( luatop>4 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::Add function");
		}
		const wxGBSpan & span=luatop>4 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int border=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		wxObject* userData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(width, height, pos, span, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::Add(wxGBSizerItem * item)
	static int _bind_Add_overload_4(lua_State *L) {
		if (!_lg_typecheck_Add_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::Add(wxGBSizerItem * item) function, expected prototype:\nwxSizerItem * wxGridBagSizer::Add(wxGBSizerItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGBSizerItem* item=(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::Add(wxGBSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxGridBagSizer::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);
		if (_lg_typecheck_Add_overload_4(L)) return _bind_Add_overload_4(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  Add(wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  Add(int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  Add(wxGBSizerItem *)\n");
		return 0;
	}

	// wxSize wxGridBagSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::CalcMin() function, expected prototype:\nwxSize wxGridBagSizer::CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxGridBagSizer::CheckForIntersection(wxGBSizerItem * item, wxGBSizerItem * excludeItem = NULL)
	static int _bind_CheckForIntersection_overload_1(lua_State *L) {
		if (!_lg_typecheck_CheckForIntersection_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::CheckForIntersection(wxGBSizerItem * item, wxGBSizerItem * excludeItem = NULL) function, expected prototype:\nbool wxGridBagSizer::CheckForIntersection(wxGBSizerItem * item, wxGBSizerItem * excludeItem = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxGBSizerItem* item=(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,2));
		wxGBSizerItem* excludeItem=luatop>2 ? (Luna< wxObject >::checkSubType< wxGBSizerItem >(L,3)) : (wxGBSizerItem*)NULL;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::CheckForIntersection(wxGBSizerItem *, wxGBSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CheckForIntersection(item, excludeItem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::CheckForIntersection(const wxGBPosition & pos, const wxGBSpan & span, wxGBSizerItem * excludeItem = NULL)
	static int _bind_CheckForIntersection_overload_2(lua_State *L) {
		if (!_lg_typecheck_CheckForIntersection_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::CheckForIntersection(const wxGBPosition & pos, const wxGBSpan & span, wxGBSizerItem * excludeItem = NULL) function, expected prototype:\nbool wxGridBagSizer::CheckForIntersection(const wxGBPosition & pos, const wxGBSpan & span, wxGBSizerItem * excludeItem = NULL)\nClass arguments details:\narg 1 ID = 3425779\narg 2 ID = 97553085\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::CheckForIntersection function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::CheckForIntersection function");
		}
		const wxGBSpan & span=*span_ptr;
		wxGBSizerItem* excludeItem=luatop>3 ? (Luna< wxObject >::checkSubType< wxGBSizerItem >(L,4)) : (wxGBSizerItem*)NULL;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::CheckForIntersection(const wxGBPosition &, const wxGBSpan &, wxGBSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CheckForIntersection(pos, span, excludeItem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::CheckForIntersection
	static int _bind_CheckForIntersection(lua_State *L) {
		if (_lg_typecheck_CheckForIntersection_overload_1(L)) return _bind_CheckForIntersection_overload_1(L);
		if (_lg_typecheck_CheckForIntersection_overload_2(L)) return _bind_CheckForIntersection_overload_2(L);

		luaL_error(L, "error in function CheckForIntersection, cannot match any of the overloads for function CheckForIntersection:\n  CheckForIntersection(wxGBSizerItem *, wxGBSizerItem *)\n  CheckForIntersection(const wxGBPosition &, const wxGBSpan &, wxGBSizerItem *)\n");
		return 0;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItem(wxWindow * window)
	static int _bind_FindItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItem(wxWindow * window) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItem(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItem(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSizerItem * lret = self->FindItem(window);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItem(wxSizer * sizer)
	static int _bind_FindItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItem(wxSizer * sizer) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItem(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItem(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSizerItem * lret = self->FindItem(sizer);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxGridBagSizer::FindItem
	static int _bind_FindItem(lua_State *L) {
		if (_lg_typecheck_FindItem_overload_1(L)) return _bind_FindItem_overload_1(L);
		if (_lg_typecheck_FindItem_overload_2(L)) return _bind_FindItem_overload_2(L);

		luaL_error(L, "error in function FindItem, cannot match any of the overloads for function FindItem:\n  FindItem(wxWindow *)\n  FindItem(wxSizer *)\n");
		return 0;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint & pt)
	static int _bind_FindItemAtPoint(lua_State *L) {
		if (!_lg_typecheck_FindItemAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint & pt) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxGridBagSizer::FindItemAtPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItemAtPoint(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSizerItem * lret = self->FindItemAtPoint(pt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition & pos)
	static int _bind_FindItemAtPosition(lua_State *L) {
		if (!_lg_typecheck_FindItemAtPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition & pos) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 3425779\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::FindItemAtPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItemAtPosition(const wxGBPosition &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSizerItem * lret = self->FindItemAtPosition(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject * userData)
	static int _bind_FindItemWithData(lua_State *L) {
		if (!_lg_typecheck_FindItemWithData(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject * userData) function, expected prototype:\nwxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject * userData)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxObject* userData=(Luna< wxObject >::check(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSizerItem * wxGridBagSizer::FindItemWithData(const wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSizerItem * lret = self->FindItemWithData(userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxGridBagSizer::GetCellSize(int row, int col) const
	static int _bind_GetCellSize(lua_State *L) {
		if (!_lg_typecheck_GetCellSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::GetCellSize(int row, int col) const function, expected prototype:\nwxSize wxGridBagSizer::GetCellSize(int row, int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::GetCellSize(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetCellSize(row, col);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGridBagSizer::GetEmptyCellSize() const
	static int _bind_GetEmptyCellSize(lua_State *L) {
		if (!_lg_typecheck_GetEmptyCellSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::GetEmptyCellSize() const function, expected prototype:\nwxSize wxGridBagSizer::GetEmptyCellSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::GetEmptyCellSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetEmptyCellSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxGBPosition wxGridBagSizer::GetItemPosition(wxWindow * window)
	static int _bind_GetItemPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGridBagSizer::GetItemPosition(wxWindow * window) function, expected prototype:\nwxGBPosition wxGridBagSizer::GetItemPosition(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBPosition wxGridBagSizer::GetItemPosition(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBPosition stack_lret = self->GetItemPosition(window);
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// wxGBPosition wxGridBagSizer::GetItemPosition(wxSizer * sizer)
	static int _bind_GetItemPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGridBagSizer::GetItemPosition(wxSizer * sizer) function, expected prototype:\nwxGBPosition wxGridBagSizer::GetItemPosition(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBPosition wxGridBagSizer::GetItemPosition(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBPosition stack_lret = self->GetItemPosition(sizer);
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// wxGBPosition wxGridBagSizer::GetItemPosition(size_t index)
	static int _bind_GetItemPosition_overload_3(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGridBagSizer::GetItemPosition(size_t index) function, expected prototype:\nwxGBPosition wxGridBagSizer::GetItemPosition(size_t index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBPosition wxGridBagSizer::GetItemPosition(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBPosition stack_lret = self->GetItemPosition(index);
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGridBagSizer::GetItemPosition
	static int _bind_GetItemPosition(lua_State *L) {
		if (_lg_typecheck_GetItemPosition_overload_1(L)) return _bind_GetItemPosition_overload_1(L);
		if (_lg_typecheck_GetItemPosition_overload_2(L)) return _bind_GetItemPosition_overload_2(L);
		if (_lg_typecheck_GetItemPosition_overload_3(L)) return _bind_GetItemPosition_overload_3(L);

		luaL_error(L, "error in function GetItemPosition, cannot match any of the overloads for function GetItemPosition:\n  GetItemPosition(wxWindow *)\n  GetItemPosition(wxSizer *)\n  GetItemPosition(size_t)\n");
		return 0;
	}

	// wxGBSpan wxGridBagSizer::GetItemSpan(wxWindow * window)
	static int _bind_GetItemSpan_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetItemSpan_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGridBagSizer::GetItemSpan(wxWindow * window) function, expected prototype:\nwxGBSpan wxGridBagSizer::GetItemSpan(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSpan wxGridBagSizer::GetItemSpan(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSpan stack_lret = self->GetItemSpan(window);
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// wxGBSpan wxGridBagSizer::GetItemSpan(wxSizer * sizer)
	static int _bind_GetItemSpan_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetItemSpan_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGridBagSizer::GetItemSpan(wxSizer * sizer) function, expected prototype:\nwxGBSpan wxGridBagSizer::GetItemSpan(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSpan wxGridBagSizer::GetItemSpan(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSpan stack_lret = self->GetItemSpan(sizer);
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// wxGBSpan wxGridBagSizer::GetItemSpan(size_t index)
	static int _bind_GetItemSpan_overload_3(lua_State *L) {
		if (!_lg_typecheck_GetItemSpan_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGridBagSizer::GetItemSpan(size_t index) function, expected prototype:\nwxGBSpan wxGridBagSizer::GetItemSpan(size_t index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSpan wxGridBagSizer::GetItemSpan(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSpan stack_lret = self->GetItemSpan(index);
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxGridBagSizer::GetItemSpan
	static int _bind_GetItemSpan(lua_State *L) {
		if (_lg_typecheck_GetItemSpan_overload_1(L)) return _bind_GetItemSpan_overload_1(L);
		if (_lg_typecheck_GetItemSpan_overload_2(L)) return _bind_GetItemSpan_overload_2(L);
		if (_lg_typecheck_GetItemSpan_overload_3(L)) return _bind_GetItemSpan_overload_3(L);

		luaL_error(L, "error in function GetItemSpan, cannot match any of the overloads for function GetItemSpan:\n  GetItemSpan(wxWindow *)\n  GetItemSpan(wxSizer *)\n  GetItemSpan(size_t)\n");
		return 0;
	}

	// void wxGridBagSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::RecalcSizes() function, expected prototype:\nvoid wxGridBagSizer::RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecalcSizes();

		return 0;
	}

	// void wxGridBagSizer::SetEmptyCellSize(const wxSize & sz)
	static int _bind_SetEmptyCellSize(lua_State *L) {
		if (!_lg_typecheck_SetEmptyCellSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::SetEmptyCellSize(const wxSize & sz) function, expected prototype:\nvoid wxGridBagSizer::SetEmptyCellSize(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxGridBagSizer::SetEmptyCellSize function");
		}
		const wxSize & sz=*sz_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::SetEmptyCellSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEmptyCellSize(sz);

		return 0;
	}

	// bool wxGridBagSizer::SetItemPosition(wxWindow * window, const wxGBPosition & pos)
	static int _bind_SetItemPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemPosition(wxWindow * window, const wxGBPosition & pos) function, expected prototype:\nbool wxGridBagSizer::SetItemPosition(wxWindow * window, const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::SetItemPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemPosition(wxWindow *, const wxGBPosition &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemPosition(window, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemPosition(wxSizer * sizer, const wxGBPosition & pos)
	static int _bind_SetItemPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemPosition(wxSizer * sizer, const wxGBPosition & pos) function, expected prototype:\nbool wxGridBagSizer::SetItemPosition(wxSizer * sizer, const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::SetItemPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemPosition(wxSizer *, const wxGBPosition &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemPosition(sizer, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemPosition(size_t index, const wxGBPosition & pos)
	static int _bind_SetItemPosition_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemPosition(size_t index, const wxGBPosition & pos) function, expected prototype:\nbool wxGridBagSizer::SetItemPosition(size_t index, const wxGBPosition & pos)\nClass arguments details:\narg 2 ID = 3425779\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGridBagSizer::SetItemPosition function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemPosition(size_t, const wxGBPosition &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemPosition(index, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::SetItemPosition
	static int _bind_SetItemPosition(lua_State *L) {
		if (_lg_typecheck_SetItemPosition_overload_1(L)) return _bind_SetItemPosition_overload_1(L);
		if (_lg_typecheck_SetItemPosition_overload_2(L)) return _bind_SetItemPosition_overload_2(L);
		if (_lg_typecheck_SetItemPosition_overload_3(L)) return _bind_SetItemPosition_overload_3(L);

		luaL_error(L, "error in function SetItemPosition, cannot match any of the overloads for function SetItemPosition:\n  SetItemPosition(wxWindow *, const wxGBPosition &)\n  SetItemPosition(wxSizer *, const wxGBPosition &)\n  SetItemPosition(size_t, const wxGBPosition &)\n");
		return 0;
	}

	// bool wxGridBagSizer::SetItemSpan(wxWindow * window, const wxGBSpan & span)
	static int _bind_SetItemSpan_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemSpan_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemSpan(wxWindow * window, const wxGBSpan & span) function, expected prototype:\nbool wxGridBagSizer::SetItemSpan(wxWindow * window, const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 97553085\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::SetItemSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemSpan(wxWindow *, const wxGBSpan &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemSpan(window, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemSpan(wxSizer * sizer, const wxGBSpan & span)
	static int _bind_SetItemSpan_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemSpan_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemSpan(wxSizer * sizer, const wxGBSpan & span) function, expected prototype:\nbool wxGridBagSizer::SetItemSpan(wxSizer * sizer, const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 97553085\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::SetItemSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemSpan(wxSizer *, const wxGBSpan &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemSpan(sizer, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::SetItemSpan(size_t index, const wxGBSpan & span)
	static int _bind_SetItemSpan_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetItemSpan_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::SetItemSpan(size_t index, const wxGBSpan & span) function, expected prototype:\nbool wxGridBagSizer::SetItemSpan(size_t index, const wxGBSpan & span)\nClass arguments details:\narg 2 ID = 97553085\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGridBagSizer::SetItemSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::SetItemSpan(size_t, const wxGBSpan &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemSpan(index, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::SetItemSpan
	static int _bind_SetItemSpan(lua_State *L) {
		if (_lg_typecheck_SetItemSpan_overload_1(L)) return _bind_SetItemSpan_overload_1(L);
		if (_lg_typecheck_SetItemSpan_overload_2(L)) return _bind_SetItemSpan_overload_2(L);
		if (_lg_typecheck_SetItemSpan_overload_3(L)) return _bind_SetItemSpan_overload_3(L);

		luaL_error(L, "error in function SetItemSpan, cannot match any of the overloads for function SetItemSpan:\n  SetItemSpan(wxWindow *, const wxGBSpan &)\n  SetItemSpan(wxSizer *, const wxGBSpan &)\n  SetItemSpan(size_t, const wxGBSpan &)\n");
		return 0;
	}

	// wxClassInfo * wxGridBagSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridBagSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridBagSizer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridBagSizer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGridBagSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxGridBagSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxGridBagSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxGridBagSizer::base_AddSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxGridBagSizer::base_AddSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->wxGridBagSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxGridBagSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxGridBagSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::base_Clear(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridBagSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxGridBagSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxGridBagSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Detach(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxGridBagSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Detach(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Detach(int index) function, expected prototype:\nbool wxGridBagSizer::base_Detach(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Detach(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// bool wxGridBagSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxGridBagSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGridBagSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::base_Layout() function, expected prototype:\nvoid wxGridBagSizer::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridBagSizer::Layout();

		return 0;
	}

	// bool wxGridBagSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxGridBagSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Remove(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Remove(int index) function, expected prototype:\nbool wxGridBagSizer::base_Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxGridBagSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxGridBagSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Replace(wxWindow *, wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxGridBagSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Replace(wxSizer *, wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridBagSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridBagSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxGridBagSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridBagSizer::base_Replace(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridBagSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGridBagSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSize wxGridBagSizer::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGridBagSizer::base_CalcMin() function, expected prototype:\nwxSize wxGridBagSizer::base_CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGridBagSizer::base_CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGridBagSizer::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGridBagSizer::base_RecalcSizes()
	static int _bind_base_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_base_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridBagSizer::base_RecalcSizes() function, expected prototype:\nvoid wxGridBagSizer::base_RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridBagSizer* self=Luna< wxObject >::checkSubType< wxGridBagSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridBagSizer::base_RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridBagSizer::RecalcSizes();

		return 0;
	}


	// Operator binds:

};

wxGridBagSizer* LunaTraits< wxGridBagSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridBagSizer::_bind_ctor(L);
}

void LunaTraits< wxGridBagSizer >::_bind_dtor(wxGridBagSizer* obj) {
	delete obj;
}

const char LunaTraits< wxGridBagSizer >::className[] = "wxGridBagSizer";
const char LunaTraits< wxGridBagSizer >::fullName[] = "wxGridBagSizer";
const char LunaTraits< wxGridBagSizer >::moduleName[] = "wx";
const char* LunaTraits< wxGridBagSizer >::parents[] = {"wx.wxFlexGridSizer", 0};
const int LunaTraits< wxGridBagSizer >::hash = 98096967;
const int LunaTraits< wxGridBagSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridBagSizer >::methods[] = {
	{"Add", &luna_wrapper_wxGridBagSizer::_bind_Add},
	{"CalcMin", &luna_wrapper_wxGridBagSizer::_bind_CalcMin},
	{"CheckForIntersection", &luna_wrapper_wxGridBagSizer::_bind_CheckForIntersection},
	{"FindItem", &luna_wrapper_wxGridBagSizer::_bind_FindItem},
	{"FindItemAtPoint", &luna_wrapper_wxGridBagSizer::_bind_FindItemAtPoint},
	{"FindItemAtPosition", &luna_wrapper_wxGridBagSizer::_bind_FindItemAtPosition},
	{"FindItemWithData", &luna_wrapper_wxGridBagSizer::_bind_FindItemWithData},
	{"GetCellSize", &luna_wrapper_wxGridBagSizer::_bind_GetCellSize},
	{"GetEmptyCellSize", &luna_wrapper_wxGridBagSizer::_bind_GetEmptyCellSize},
	{"GetItemPosition", &luna_wrapper_wxGridBagSizer::_bind_GetItemPosition},
	{"GetItemSpan", &luna_wrapper_wxGridBagSizer::_bind_GetItemSpan},
	{"RecalcSizes", &luna_wrapper_wxGridBagSizer::_bind_RecalcSizes},
	{"SetEmptyCellSize", &luna_wrapper_wxGridBagSizer::_bind_SetEmptyCellSize},
	{"SetItemPosition", &luna_wrapper_wxGridBagSizer::_bind_SetItemPosition},
	{"SetItemSpan", &luna_wrapper_wxGridBagSizer::_bind_SetItemSpan},
	{"base_GetClassInfo", &luna_wrapper_wxGridBagSizer::_bind_base_GetClassInfo},
	{"base_AddSpacer", &luna_wrapper_wxGridBagSizer::_bind_base_AddSpacer},
	{"base_Clear", &luna_wrapper_wxGridBagSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxGridBagSizer::_bind_base_Detach},
	{"base_InformFirstDirection", &luna_wrapper_wxGridBagSizer::_bind_base_InformFirstDirection},
	{"base_Layout", &luna_wrapper_wxGridBagSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxGridBagSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxGridBagSizer::_bind_base_Replace},
	{"base_CalcMin", &luna_wrapper_wxGridBagSizer::_bind_base_CalcMin},
	{"base_RecalcSizes", &luna_wrapper_wxGridBagSizer::_bind_base_RecalcSizes},
	{"fromVoid", &luna_wrapper_wxGridBagSizer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridBagSizer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridBagSizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridBagSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridBagSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridBagSizer >::enumValues[] = {
	{0,0}
};


