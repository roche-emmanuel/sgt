#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSizer.h>

class luna_wrapper_wxSizer {
public:
	typedef Luna< wxSizer > luna_t;

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

		wxSizer* self= (wxSizer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSizer >::push(L,self,false);
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
		//wxSizer* ptr= dynamic_cast< wxSizer* >(Luna< wxObject >::check(L,1));
		wxSizer* ptr= luna_caster< wxObject, wxSizer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Add_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Add_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeFittingClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ComputeFittingWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FitInside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContainingWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItem_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemById(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hide_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hide_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,3)) ) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !(Luna< wxObject >::check(L,8)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertSpacer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShown_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,85412581) ) return false;
		if( (!(Luna< wxSizerFlags >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Prepend_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependSpacer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependStretchSpacer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RecalcSizes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxSizerItem >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDimension_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDimension_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemMinSize_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizeHints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVirtualSizeHints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSizer::wxSizer(lua_Table * data)
	static wxSizer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxSizer::wxSizer(lua_Table * data) function, expected prototype:\nwxSizer::wxSizer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxSizer(L,NULL);
	}


	// Function binds:
	// wxSizerItem * wxSizer::Add(wxWindow * window, const wxSizerFlags & flags)
	static int _bind_Add_overload_1(lua_State *L) {
		if (!_lg_typecheck_Add_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Add function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxWindow *, const wxSizerFlags &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(window, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_2(lua_State *L) {
		if (!_lg_typecheck_Add_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxWindow *, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(window, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxSizer * sizer, const wxSizerFlags & flags)
	static int _bind_Add_overload_3(lua_State *L) {
		if (!_lg_typecheck_Add_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Add function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxSizer *, const wxSizerFlags &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(sizer, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_4(lua_State *L) {
		if (!_lg_typecheck_Add_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxSizer *, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(sizer, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Add_overload_5(lua_State *L) {
		if (!_lg_typecheck_Add_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Add(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(int, int, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(width, height, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Add(wxSizerItem * item)
	static int _bind_Add_overload_6(lua_State *L) {
		if (!_lg_typecheck_Add_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Add(wxSizerItem * item) function, expected prototype:\nwxSizerItem * wxSizer::Add(wxSizerItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizerItem* item=(Luna< wxObject >::checkSubType< wxSizerItem >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Add(wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Add(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::Add
	static int _bind_Add(lua_State *L) {
		if (_lg_typecheck_Add_overload_1(L)) return _bind_Add_overload_1(L);
		if (_lg_typecheck_Add_overload_2(L)) return _bind_Add_overload_2(L);
		if (_lg_typecheck_Add_overload_3(L)) return _bind_Add_overload_3(L);
		if (_lg_typecheck_Add_overload_4(L)) return _bind_Add_overload_4(L);
		if (_lg_typecheck_Add_overload_5(L)) return _bind_Add_overload_5(L);
		if (_lg_typecheck_Add_overload_6(L)) return _bind_Add_overload_6(L);

		luaL_error(L, "error in function Add, cannot match any of the overloads for function Add:\n  Add(wxWindow *, const wxSizerFlags &)\n  Add(wxWindow *, int, int, int, wxObject *)\n  Add(wxSizer *, const wxSizerFlags &)\n  Add(wxSizer *, int, int, int, wxObject *)\n  Add(int, int, int, int, int, wxObject *)\n  Add(wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::AddSpacer(int size)
	static int _bind_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_AddSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxSizer::AddSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::AddSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::AddStretchSpacer(int prop = 1)
	static int _bind_AddStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_AddStretchSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::AddStretchSpacer(int prop = 1) function, expected prototype:\nwxSizerItem * wxSizer::AddStretchSpacer(int prop = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int prop=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::AddStretchSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->AddStretchSpacer(prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizer::CalcMin()
	static int _bind_CalcMin(lua_State *L) {
		if (!_lg_typecheck_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::CalcMin() function, expected prototype:\nwxSize wxSizer::CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizer::CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizer::Clear(bool delete_windows = false)
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::Clear(bool delete_windows = false) function, expected prototype:\nvoid wxSizer::Clear(bool delete_windows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::Clear(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear(delete_windows);

		return 0;
	}

	// wxSize wxSizer::ComputeFittingClientSize(wxWindow * window)
	static int _bind_ComputeFittingClientSize(lua_State *L) {
		if (!_lg_typecheck_ComputeFittingClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::ComputeFittingClientSize(wxWindow * window) function, expected prototype:\nwxSize wxSizer::ComputeFittingClientSize(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizer::ComputeFittingClientSize(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->ComputeFittingClientSize(window);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizer::ComputeFittingWindowSize(wxWindow * window)
	static int _bind_ComputeFittingWindowSize(lua_State *L) {
		if (!_lg_typecheck_ComputeFittingWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::ComputeFittingWindowSize(wxWindow * window) function, expected prototype:\nwxSize wxSizer::ComputeFittingWindowSize(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizer::ComputeFittingWindowSize(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->ComputeFittingWindowSize(window);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSizer::Detach(wxWindow * window)
	static int _bind_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_Detach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Detach(wxWindow * window) function, expected prototype:\nbool wxSizer::Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Detach(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Detach(wxSizer * sizer)
	static int _bind_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_Detach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Detach(wxSizer * sizer) function, expected prototype:\nbool wxSizer::Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Detach(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Detach(int index)
	static int _bind_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_Detach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Detach(int index) function, expected prototype:\nbool wxSizer::Detach(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Detach(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Detach
	static int _bind_Detach(lua_State *L) {
		if (_lg_typecheck_Detach_overload_1(L)) return _bind_Detach_overload_1(L);
		if (_lg_typecheck_Detach_overload_2(L)) return _bind_Detach_overload_2(L);
		if (_lg_typecheck_Detach_overload_3(L)) return _bind_Detach_overload_3(L);

		luaL_error(L, "error in function Detach, cannot match any of the overloads for function Detach:\n  Detach(wxWindow *)\n  Detach(wxSizer *)\n  Detach(int)\n");
		return 0;
	}

	// wxSize wxSizer::Fit(wxWindow * window)
	static int _bind_Fit(lua_State *L) {
		if (!_lg_typecheck_Fit(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::Fit(wxWindow * window) function, expected prototype:\nwxSize wxSizer::Fit(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizer::Fit(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->Fit(window);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizer::FitInside(wxWindow * window)
	static int _bind_FitInside(lua_State *L) {
		if (!_lg_typecheck_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::FitInside(wxWindow * window) function, expected prototype:\nvoid wxSizer::FitInside(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::FitInside(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FitInside(window);

		return 0;
	}

	// bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxSizer::InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSizerItemList & wxSizer::GetChildren()
	static int _bind_GetChildren_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItemList & wxSizer::GetChildren() function, expected prototype:\nwxSizerItemList & wxSizer::GetChildren()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItemList & wxSizer::GetChildren(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSizerItemList* lret = &self->GetChildren();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItemList >::push(L,lret,false);

		return 1;
	}

	// const wxSizerItemList & wxSizer::GetChildren() const
	static int _bind_GetChildren_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxSizerItemList & wxSizer::GetChildren() const function, expected prototype:\nconst wxSizerItemList & wxSizer::GetChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxSizerItemList & wxSizer::GetChildren() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSizerItemList* lret = &self->GetChildren();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItemList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::GetChildren
	static int _bind_GetChildren(lua_State *L) {
		if (_lg_typecheck_GetChildren_overload_1(L)) return _bind_GetChildren_overload_1(L);
		if (_lg_typecheck_GetChildren_overload_2(L)) return _bind_GetChildren_overload_2(L);

		luaL_error(L, "error in function GetChildren, cannot match any of the overloads for function GetChildren:\n  GetChildren()\n  GetChildren()\n");
		return 0;
	}

	// wxWindow * wxSizer::GetContainingWindow() const
	static int _bind_GetContainingWindow(lua_State *L) {
		if (!_lg_typecheck_GetContainingWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxSizer::GetContainingWindow() const function, expected prototype:\nwxWindow * wxSizer::GetContainingWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxSizer::GetContainingWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetContainingWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// size_t wxSizer::GetItemCount() const
	static int _bind_GetItemCount(lua_State *L) {
		if (!_lg_typecheck_GetItemCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxSizer::GetItemCount() const function, expected prototype:\nsize_t wxSizer::GetItemCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxSizer::GetItemCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSizerItem * wxSizer::GetItem(wxWindow * window, bool recursive = false)
	static int _bind_GetItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetItem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItem(wxWindow * window, bool recursive = false) function, expected prototype:\nwxSizerItem * wxSizer::GetItem(wxWindow * window, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItem(wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->GetItem(window, recursive);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::GetItem(wxSizer * sizer, bool recursive = false)
	static int _bind_GetItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetItem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItem(wxSizer * sizer, bool recursive = false) function, expected prototype:\nwxSizerItem * wxSizer::GetItem(wxSizer * sizer, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItem(wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->GetItem(sizer, recursive);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::GetItem(size_t index)
	static int _bind_GetItem_overload_3(lua_State *L) {
		if (!_lg_typecheck_GetItem_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItem(size_t index) function, expected prototype:\nwxSizerItem * wxSizer::GetItem(size_t index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItem(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->GetItem(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::GetItem
	static int _bind_GetItem(lua_State *L) {
		if (_lg_typecheck_GetItem_overload_1(L)) return _bind_GetItem_overload_1(L);
		if (_lg_typecheck_GetItem_overload_2(L)) return _bind_GetItem_overload_2(L);
		if (_lg_typecheck_GetItem_overload_3(L)) return _bind_GetItem_overload_3(L);

		luaL_error(L, "error in function GetItem, cannot match any of the overloads for function GetItem:\n  GetItem(wxWindow *, bool)\n  GetItem(wxSizer *, bool)\n  GetItem(size_t)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::GetItemById(int id, bool recursive = false)
	static int _bind_GetItemById(lua_State *L) {
		if (!_lg_typecheck_GetItemById(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::GetItemById(int id, bool recursive = false) function, expected prototype:\nwxSizerItem * wxSizer::GetItemById(int id, bool recursive = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::GetItemById(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->GetItemById(id, recursive);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSize wxSizer::GetMinSize()
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::GetMinSize() function, expected prototype:\nwxSize wxSizer::GetMinSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizer::GetMinSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxSizer::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxSizer::GetPosition() const function, expected prototype:\nwxPoint wxSizer::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxSizer::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSizer::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizer::GetSize() const function, expected prototype:\nwxSize wxSizer::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizer::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSizer::Hide(wxWindow * window, bool recursive = false)
	static int _bind_Hide_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hide_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Hide(wxWindow * window, bool recursive = false) function, expected prototype:\nbool wxSizer::Hide(wxWindow * window, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Hide(wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hide(window, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Hide(wxSizer * sizer, bool recursive = false)
	static int _bind_Hide_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hide_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Hide(wxSizer * sizer, bool recursive = false) function, expected prototype:\nbool wxSizer::Hide(wxSizer * sizer, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		bool recursive=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Hide(wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hide(sizer, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Hide(size_t index)
	static int _bind_Hide_overload_3(lua_State *L) {
		if (!_lg_typecheck_Hide_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Hide(size_t index) function, expected prototype:\nbool wxSizer::Hide(size_t index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Hide(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hide(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Hide
	static int _bind_Hide(lua_State *L) {
		if (_lg_typecheck_Hide_overload_1(L)) return _bind_Hide_overload_1(L);
		if (_lg_typecheck_Hide_overload_2(L)) return _bind_Hide_overload_2(L);
		if (_lg_typecheck_Hide_overload_3(L)) return _bind_Hide_overload_3(L);

		luaL_error(L, "error in function Hide, cannot match any of the overloads for function Hide:\n  Hide(wxWindow *, bool)\n  Hide(wxSizer *, bool)\n  Hide(size_t)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, const wxSizerFlags & flags)
	static int _bind_Insert_overload_1(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,4));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Insert function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxWindow *, const wxSizerFlags &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Insert(index, window, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Insert_overload_2(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxWindow *, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Insert(index, window, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, const wxSizerFlags & flags)
	static int _bind_Insert_overload_3(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,4));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Insert function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxSizer *, const wxSizerFlags &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Insert(index, sizer, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Insert_overload_4(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxSizer *, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Insert(index, sizer, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Insert_overload_5(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);
		int proportion=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int flag=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int border=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		wxObject* userData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, int, int, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Insert(index, width, height, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Insert(size_t index, wxSizerItem * item)
	static int _bind_Insert_overload_6(lua_State *L) {
		if (!_lg_typecheck_Insert_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Insert(size_t index, wxSizerItem * item) function, expected prototype:\nwxSizerItem * wxSizer::Insert(size_t index, wxSizerItem * item)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* item=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Insert(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Insert(index, item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::Insert
	static int _bind_Insert(lua_State *L) {
		if (_lg_typecheck_Insert_overload_1(L)) return _bind_Insert_overload_1(L);
		if (_lg_typecheck_Insert_overload_2(L)) return _bind_Insert_overload_2(L);
		if (_lg_typecheck_Insert_overload_3(L)) return _bind_Insert_overload_3(L);
		if (_lg_typecheck_Insert_overload_4(L)) return _bind_Insert_overload_4(L);
		if (_lg_typecheck_Insert_overload_5(L)) return _bind_Insert_overload_5(L);
		if (_lg_typecheck_Insert_overload_6(L)) return _bind_Insert_overload_6(L);

		luaL_error(L, "error in function Insert, cannot match any of the overloads for function Insert:\n  Insert(size_t, wxWindow *, const wxSizerFlags &)\n  Insert(size_t, wxWindow *, int, int, int, wxObject *)\n  Insert(size_t, wxSizer *, const wxSizerFlags &)\n  Insert(size_t, wxSizer *, int, int, int, wxObject *)\n  Insert(size_t, int, int, int, int, int, wxObject *)\n  Insert(size_t, wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::InsertSpacer(size_t index, int size)
	static int _bind_InsertSpacer(lua_State *L) {
		if (!_lg_typecheck_InsertSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::InsertSpacer(size_t index, int size) function, expected prototype:\nwxSizerItem * wxSizer::InsertSpacer(size_t index, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::InsertSpacer(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->InsertSpacer(index, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::InsertStretchSpacer(size_t index, int prop = 1)
	static int _bind_InsertStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_InsertStretchSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::InsertStretchSpacer(size_t index, int prop = 1) function, expected prototype:\nwxSizerItem * wxSizer::InsertStretchSpacer(size_t index, int prop = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		int prop=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::InsertStretchSpacer(size_t, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->InsertStretchSpacer(index, prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// bool wxSizer::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsEmpty() const function, expected prototype:\nbool wxSizer::IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::IsShown(wxWindow * window) const
	static int _bind_IsShown_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsShown_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsShown(wxWindow * window) const function, expected prototype:\nbool wxSizer::IsShown(wxWindow * window) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::IsShown(wxWindow *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::IsShown(wxSizer * sizer) const
	static int _bind_IsShown_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsShown_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsShown(wxSizer * sizer) const function, expected prototype:\nbool wxSizer::IsShown(wxSizer * sizer) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::IsShown(wxSizer *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::IsShown(size_t index) const
	static int _bind_IsShown_overload_3(lua_State *L) {
		if (!_lg_typecheck_IsShown_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::IsShown(size_t index) const function, expected prototype:\nbool wxSizer::IsShown(size_t index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::IsShown(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::IsShown
	static int _bind_IsShown(lua_State *L) {
		if (_lg_typecheck_IsShown_overload_1(L)) return _bind_IsShown_overload_1(L);
		if (_lg_typecheck_IsShown_overload_2(L)) return _bind_IsShown_overload_2(L);
		if (_lg_typecheck_IsShown_overload_3(L)) return _bind_IsShown_overload_3(L);

		luaL_error(L, "error in function IsShown, cannot match any of the overloads for function IsShown:\n  IsShown(wxWindow *)\n  IsShown(wxSizer *)\n  IsShown(size_t)\n");
		return 0;
	}

	// void wxSizer::Layout()
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::Layout() function, expected prototype:\nvoid wxSizer::Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Layout();

		return 0;
	}

	// wxSizerItem * wxSizer::Prepend(wxWindow * window, const wxSizerFlags & flags)
	static int _bind_Prepend_overload_1(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxWindow * window, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxWindow * window, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Prepend function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxWindow *, const wxSizerFlags &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Prepend(window, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Prepend_overload_2(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxWindow * window, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxWindow *, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Prepend(window, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxSizer * sizer, const wxSizerFlags & flags)
	static int _bind_Prepend_overload_3(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxSizer * sizer, const wxSizerFlags & flags) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxSizer * sizer, const wxSizerFlags & flags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 85412581\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxSizerFlags* flags_ptr=(Luna< wxSizerFlags >::check(L,3));
		if( !flags_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flags in wxSizer::Prepend function");
		}
		const wxSizerFlags & flags=*flags_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxSizer *, const wxSizerFlags &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Prepend(sizer, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Prepend_overload_4(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxSizer * sizer, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		int proportion=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxSizer *, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Prepend(sizer, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)
	static int _bind_Prepend_overload_5(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(int width, int height, int proportion = 0, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int proportion=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(int, int, int, int, int, wxObject *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Prepend(width, height, proportion, flag, border, userData);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::Prepend(wxSizerItem * item)
	static int _bind_Prepend_overload_6(lua_State *L) {
		if (!_lg_typecheck_Prepend_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::Prepend(wxSizerItem * item) function, expected prototype:\nwxSizerItem * wxSizer::Prepend(wxSizerItem * item)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizerItem* item=(Luna< wxObject >::checkSubType< wxSizerItem >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::Prepend(wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->Prepend(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxSizer::Prepend
	static int _bind_Prepend(lua_State *L) {
		if (_lg_typecheck_Prepend_overload_1(L)) return _bind_Prepend_overload_1(L);
		if (_lg_typecheck_Prepend_overload_2(L)) return _bind_Prepend_overload_2(L);
		if (_lg_typecheck_Prepend_overload_3(L)) return _bind_Prepend_overload_3(L);
		if (_lg_typecheck_Prepend_overload_4(L)) return _bind_Prepend_overload_4(L);
		if (_lg_typecheck_Prepend_overload_5(L)) return _bind_Prepend_overload_5(L);
		if (_lg_typecheck_Prepend_overload_6(L)) return _bind_Prepend_overload_6(L);

		luaL_error(L, "error in function Prepend, cannot match any of the overloads for function Prepend:\n  Prepend(wxWindow *, const wxSizerFlags &)\n  Prepend(wxWindow *, int, int, int, wxObject *)\n  Prepend(wxSizer *, const wxSizerFlags &)\n  Prepend(wxSizer *, int, int, int, wxObject *)\n  Prepend(int, int, int, int, int, wxObject *)\n  Prepend(wxSizerItem *)\n");
		return 0;
	}

	// wxSizerItem * wxSizer::PrependSpacer(int size)
	static int _bind_PrependSpacer(lua_State *L) {
		if (!_lg_typecheck_PrependSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::PrependSpacer(int size) function, expected prototype:\nwxSizerItem * wxSizer::PrependSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::PrependSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->PrependSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::PrependStretchSpacer(int prop = 1)
	static int _bind_PrependStretchSpacer(lua_State *L) {
		if (!_lg_typecheck_PrependStretchSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::PrependStretchSpacer(int prop = 1) function, expected prototype:\nwxSizerItem * wxSizer::PrependStretchSpacer(int prop = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int prop=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::PrependStretchSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->PrependStretchSpacer(prop);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxSizer::RecalcSizes()
	static int _bind_RecalcSizes(lua_State *L) {
		if (!_lg_typecheck_RecalcSizes(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::RecalcSizes() function, expected prototype:\nvoid wxSizer::RecalcSizes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::RecalcSizes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RecalcSizes();

		return 0;
	}

	// bool wxSizer::Remove(wxSizer * sizer)
	static int _bind_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Remove(wxSizer * sizer) function, expected prototype:\nbool wxSizer::Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Remove(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Remove(int index)
	static int _bind_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Remove(int index) function, expected prototype:\nbool wxSizer::Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Remove
	static int _bind_Remove(lua_State *L) {
		if (_lg_typecheck_Remove_overload_1(L)) return _bind_Remove_overload_1(L);
		if (_lg_typecheck_Remove_overload_2(L)) return _bind_Remove_overload_2(L);

		luaL_error(L, "error in function Remove, cannot match any of the overloads for function Remove:\n  Remove(wxSizer *)\n  Remove(int)\n");
		return 0;
	}

	// bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxSizer::Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Replace(wxWindow *, wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxSizer::Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Replace(wxSizer *, wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Replace(size_t index, wxSizerItem * newitem)
	static int _bind_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_Replace_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxSizer::Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Replace(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Replace
	static int _bind_Replace(lua_State *L) {
		if (_lg_typecheck_Replace_overload_1(L)) return _bind_Replace_overload_1(L);
		if (_lg_typecheck_Replace_overload_2(L)) return _bind_Replace_overload_2(L);
		if (_lg_typecheck_Replace_overload_3(L)) return _bind_Replace_overload_3(L);

		luaL_error(L, "error in function Replace, cannot match any of the overloads for function Replace:\n  Replace(wxWindow *, wxWindow *, bool)\n  Replace(wxSizer *, wxSizer *, bool)\n  Replace(size_t, wxSizerItem *)\n");
		return 0;
	}

	// void wxSizer::SetDimension(int x, int y, int width, int height)
	static int _bind_SetDimension_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetDimension_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::SetDimension(int x, int y, int width, int height) function, expected prototype:\nvoid wxSizer::SetDimension(int x, int y, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::SetDimension(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDimension(x, y, width, height);

		return 0;
	}

	// void wxSizer::SetDimension(const wxPoint & pos, const wxSize & size)
	static int _bind_SetDimension_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetDimension_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::SetDimension(const wxPoint & pos, const wxSize & size) function, expected prototype:\nvoid wxSizer::SetDimension(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSizer::SetDimension function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetDimension function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::SetDimension(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDimension(pos, size);

		return 0;
	}

	// Overload binder for wxSizer::SetDimension
	static int _bind_SetDimension(lua_State *L) {
		if (_lg_typecheck_SetDimension_overload_1(L)) return _bind_SetDimension_overload_1(L);
		if (_lg_typecheck_SetDimension_overload_2(L)) return _bind_SetDimension_overload_2(L);

		luaL_error(L, "error in function SetDimension, cannot match any of the overloads for function SetDimension:\n  SetDimension(int, int, int, int)\n  SetDimension(const wxPoint &, const wxSize &)\n");
		return 0;
	}

	// bool wxSizer::SetItemMinSize(wxWindow * window, int width, int height)
	static int _bind_SetItemMinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxWindow * window, int width, int height) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxWindow * window, int width, int height)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxWindow *, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemMinSize(window, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(wxWindow * window, const wxSize & size)
	static int _bind_SetItemMinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxWindow * window, const wxSize & size) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxWindow * window, const wxSize & size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetItemMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxWindow *, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemMinSize(window, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(wxSizer * sizer, int width, int height)
	static int _bind_SetItemMinSize_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxSizer * sizer, int width, int height) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxSizer * sizer, int width, int height)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxSizer *, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemMinSize(sizer, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(wxSizer * sizer, const wxSize & size)
	static int _bind_SetItemMinSize_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(wxSizer * sizer, const wxSize & size) function, expected prototype:\nbool wxSizer::SetItemMinSize(wxSizer * sizer, const wxSize & size)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetItemMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(wxSizer *, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemMinSize(sizer, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(size_t index, int width, int height)
	static int _bind_SetItemMinSize_overload_5(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(size_t index, int width, int height) function, expected prototype:\nbool wxSizer::SetItemMinSize(size_t index, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(size_t, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemMinSize(index, width, height);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::SetItemMinSize(size_t index, const wxSize & size)
	static int _bind_SetItemMinSize_overload_6(lua_State *L) {
		if (!_lg_typecheck_SetItemMinSize_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::SetItemMinSize(size_t index, const wxSize & size) function, expected prototype:\nbool wxSizer::SetItemMinSize(size_t index, const wxSize & size)\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetItemMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::SetItemMinSize(size_t, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemMinSize(index, size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::SetItemMinSize
	static int _bind_SetItemMinSize(lua_State *L) {
		if (_lg_typecheck_SetItemMinSize_overload_1(L)) return _bind_SetItemMinSize_overload_1(L);
		if (_lg_typecheck_SetItemMinSize_overload_2(L)) return _bind_SetItemMinSize_overload_2(L);
		if (_lg_typecheck_SetItemMinSize_overload_3(L)) return _bind_SetItemMinSize_overload_3(L);
		if (_lg_typecheck_SetItemMinSize_overload_4(L)) return _bind_SetItemMinSize_overload_4(L);
		if (_lg_typecheck_SetItemMinSize_overload_5(L)) return _bind_SetItemMinSize_overload_5(L);
		if (_lg_typecheck_SetItemMinSize_overload_6(L)) return _bind_SetItemMinSize_overload_6(L);

		luaL_error(L, "error in function SetItemMinSize, cannot match any of the overloads for function SetItemMinSize:\n  SetItemMinSize(wxWindow *, int, int)\n  SetItemMinSize(wxWindow *, const wxSize &)\n  SetItemMinSize(wxSizer *, int, int)\n  SetItemMinSize(wxSizer *, const wxSize &)\n  SetItemMinSize(size_t, int, int)\n  SetItemMinSize(size_t, const wxSize &)\n");
		return 0;
	}

	// void wxSizer::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSizer::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizer::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxSizer::SetMinSize(int width, int height)
	static int _bind_SetMinSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMinSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::SetMinSize(int width, int height) function, expected prototype:\nvoid wxSizer::SetMinSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::SetMinSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinSize(width, height);

		return 0;
	}

	// Overload binder for wxSizer::SetMinSize
	static int _bind_SetMinSize(lua_State *L) {
		if (_lg_typecheck_SetMinSize_overload_1(L)) return _bind_SetMinSize_overload_1(L);
		if (_lg_typecheck_SetMinSize_overload_2(L)) return _bind_SetMinSize_overload_2(L);

		luaL_error(L, "error in function SetMinSize, cannot match any of the overloads for function SetMinSize:\n  SetMinSize(const wxSize &)\n  SetMinSize(int, int)\n");
		return 0;
	}

	// void wxSizer::SetSizeHints(wxWindow * window)
	static int _bind_SetSizeHints(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::SetSizeHints(wxWindow * window) function, expected prototype:\nvoid wxSizer::SetSizeHints(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::SetSizeHints(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizeHints(window);

		return 0;
	}

	// void wxSizer::SetVirtualSizeHints(wxWindow * window)
	static int _bind_SetVirtualSizeHints(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSizeHints(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::SetVirtualSizeHints(wxWindow * window) function, expected prototype:\nvoid wxSizer::SetVirtualSizeHints(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::SetVirtualSizeHints(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVirtualSizeHints(window);

		return 0;
	}

	// bool wxSizer::Show(wxWindow * window, bool show = true, bool recursive = false)
	static int _bind_Show_overload_1(lua_State *L) {
		if (!_lg_typecheck_Show_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Show(wxWindow * window, bool show = true, bool recursive = false) function, expected prototype:\nbool wxSizer::Show(wxWindow * window, bool show = true, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Show(wxWindow *, bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Show(window, show, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Show(wxSizer * sizer, bool show = true, bool recursive = false)
	static int _bind_Show_overload_2(lua_State *L) {
		if (!_lg_typecheck_Show_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Show(wxSizer * sizer, bool show = true, bool recursive = false) function, expected prototype:\nbool wxSizer::Show(wxSizer * sizer, bool show = true, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Show(wxSizer *, bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Show(sizer, show, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::Show(size_t index, bool show = true)
	static int _bind_Show_overload_3(lua_State *L) {
		if (!_lg_typecheck_Show_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::Show(size_t index, bool show = true) function, expected prototype:\nbool wxSizer::Show(size_t index, bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t index=(size_t)lua_tointeger(L,2);
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::Show(size_t, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Show(index, show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::Show
	static int _bind_Show(lua_State *L) {
		if (_lg_typecheck_Show_overload_1(L)) return _bind_Show_overload_1(L);
		if (_lg_typecheck_Show_overload_2(L)) return _bind_Show_overload_2(L);
		if (_lg_typecheck_Show_overload_3(L)) return _bind_Show_overload_3(L);

		luaL_error(L, "error in function Show, cannot match any of the overloads for function Show:\n  Show(wxWindow *, bool, bool)\n  Show(wxSizer *, bool, bool)\n  Show(size_t, bool)\n");
		return 0;
	}

	// wxClassInfo * wxSizer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSizer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSizer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSizer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSizer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxSizerItem * wxSizer::base_AddSpacer(int size)
	static int _bind_base_AddSpacer(lua_State *L) {
		if (!_lg_typecheck_base_AddSpacer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizerItem * wxSizer::base_AddSpacer(int size) function, expected prototype:\nwxSizerItem * wxSizer::base_AddSpacer(int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int size=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizerItem * wxSizer::base_AddSpacer(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizerItem * lret = self->wxSizer::AddSpacer(size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizerItem >::push(L,lret,false);

		return 1;
	}

	// void wxSizer::base_Clear(bool delete_windows = false)
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::base_Clear(bool delete_windows = false) function, expected prototype:\nvoid wxSizer::base_Clear(bool delete_windows = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool delete_windows=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::base_Clear(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSizer::Clear(delete_windows);

		return 0;
	}

	// bool wxSizer::base_Detach(wxWindow * window)
	static int _bind_base_Detach_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Detach(wxWindow * window) function, expected prototype:\nbool wxSizer::base_Detach(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Detach(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Detach(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::base_Detach(wxSizer * sizer)
	static int _bind_base_Detach_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Detach(wxSizer * sizer) function, expected prototype:\nbool wxSizer::base_Detach(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Detach(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Detach(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::base_Detach(int index)
	static int _bind_base_Detach_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Detach_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Detach(int index) function, expected prototype:\nbool wxSizer::base_Detach(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Detach(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Detach(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::base_Detach
	static int _bind_base_Detach(lua_State *L) {
		if (_lg_typecheck_base_Detach_overload_1(L)) return _bind_base_Detach_overload_1(L);
		if (_lg_typecheck_base_Detach_overload_2(L)) return _bind_base_Detach_overload_2(L);
		if (_lg_typecheck_base_Detach_overload_3(L)) return _bind_base_Detach_overload_3(L);

		luaL_error(L, "error in function base_Detach, cannot match any of the overloads for function base_Detach:\n  base_Detach(wxWindow *)\n  base_Detach(wxSizer *)\n  base_Detach(int)\n");
		return 0;
	}

	// bool wxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxSizer::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSizer::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizer::base_Layout() function, expected prototype:\nvoid wxSizer::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizer::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSizer::Layout();

		return 0;
	}

	// bool wxSizer::base_Remove(wxSizer * sizer)
	static int _bind_base_Remove_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Remove(wxSizer * sizer) function, expected prototype:\nbool wxSizer::base_Remove(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Remove(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Remove(sizer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::base_Remove(int index)
	static int _bind_base_Remove_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Remove_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Remove(int index) function, expected prototype:\nbool wxSizer::base_Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Remove(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::base_Remove
	static int _bind_base_Remove(lua_State *L) {
		if (_lg_typecheck_base_Remove_overload_1(L)) return _bind_base_Remove_overload_1(L);
		if (_lg_typecheck_base_Remove_overload_2(L)) return _bind_base_Remove_overload_2(L);

		luaL_error(L, "error in function base_Remove, cannot match any of the overloads for function base_Remove:\n  base_Remove(wxSizer *)\n  base_Remove(int)\n");
		return 0;
	}

	// bool wxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)
	static int _bind_base_Replace_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false) function, expected prototype:\nbool wxSizer::base_Replace(wxWindow * oldwin, wxWindow * newwin, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* oldwin=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* newwin=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Replace(wxWindow *, wxWindow *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Replace(oldwin, newwin, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)
	static int _bind_base_Replace_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false) function, expected prototype:\nbool wxSizer::base_Replace(wxSizer * oldsz, wxSizer * newsz, bool recursive = false)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* oldsz=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		wxSizer* newsz=(Luna< wxObject >::checkSubType< wxSizer >(L,3));
		bool recursive=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Replace(wxSizer *, wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Replace(oldsz, newsz, recursive);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSizer::base_Replace(size_t index, wxSizerItem * newitem)
	static int _bind_base_Replace_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_Replace_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSizer::base_Replace(size_t index, wxSizerItem * newitem) function, expected prototype:\nbool wxSizer::base_Replace(size_t index, wxSizerItem * newitem)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);
		wxSizerItem* newitem=(Luna< wxObject >::checkSubType< wxSizerItem >(L,3));

		wxSizer* self=Luna< wxObject >::checkSubType< wxSizer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSizer::base_Replace(size_t, wxSizerItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSizer::Replace(index, newitem);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSizer::base_Replace
	static int _bind_base_Replace(lua_State *L) {
		if (_lg_typecheck_base_Replace_overload_1(L)) return _bind_base_Replace_overload_1(L);
		if (_lg_typecheck_base_Replace_overload_2(L)) return _bind_base_Replace_overload_2(L);
		if (_lg_typecheck_base_Replace_overload_3(L)) return _bind_base_Replace_overload_3(L);

		luaL_error(L, "error in function base_Replace, cannot match any of the overloads for function base_Replace:\n  base_Replace(wxWindow *, wxWindow *, bool)\n  base_Replace(wxSizer *, wxSizer *, bool)\n  base_Replace(size_t, wxSizerItem *)\n");
		return 0;
	}


	// Operator binds:

};

wxSizer* LunaTraits< wxSizer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSizer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxSize wxSizer::CalcMin()
	// void wxSizer::RecalcSizes()
}

void LunaTraits< wxSizer >::_bind_dtor(wxSizer* obj) {
	delete obj;
}

const char LunaTraits< wxSizer >::className[] = "wxSizer";
const char LunaTraits< wxSizer >::fullName[] = "wxSizer";
const char LunaTraits< wxSizer >::moduleName[] = "wx";
const char* LunaTraits< wxSizer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSizer >::hash = 28331353;
const int LunaTraits< wxSizer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizer >::methods[] = {
	{"Add", &luna_wrapper_wxSizer::_bind_Add},
	{"AddSpacer", &luna_wrapper_wxSizer::_bind_AddSpacer},
	{"AddStretchSpacer", &luna_wrapper_wxSizer::_bind_AddStretchSpacer},
	{"CalcMin", &luna_wrapper_wxSizer::_bind_CalcMin},
	{"Clear", &luna_wrapper_wxSizer::_bind_Clear},
	{"ComputeFittingClientSize", &luna_wrapper_wxSizer::_bind_ComputeFittingClientSize},
	{"ComputeFittingWindowSize", &luna_wrapper_wxSizer::_bind_ComputeFittingWindowSize},
	{"Detach", &luna_wrapper_wxSizer::_bind_Detach},
	{"Fit", &luna_wrapper_wxSizer::_bind_Fit},
	{"FitInside", &luna_wrapper_wxSizer::_bind_FitInside},
	{"InformFirstDirection", &luna_wrapper_wxSizer::_bind_InformFirstDirection},
	{"GetChildren", &luna_wrapper_wxSizer::_bind_GetChildren},
	{"GetContainingWindow", &luna_wrapper_wxSizer::_bind_GetContainingWindow},
	{"GetItemCount", &luna_wrapper_wxSizer::_bind_GetItemCount},
	{"GetItem", &luna_wrapper_wxSizer::_bind_GetItem},
	{"GetItemById", &luna_wrapper_wxSizer::_bind_GetItemById},
	{"GetMinSize", &luna_wrapper_wxSizer::_bind_GetMinSize},
	{"GetPosition", &luna_wrapper_wxSizer::_bind_GetPosition},
	{"GetSize", &luna_wrapper_wxSizer::_bind_GetSize},
	{"Hide", &luna_wrapper_wxSizer::_bind_Hide},
	{"Insert", &luna_wrapper_wxSizer::_bind_Insert},
	{"InsertSpacer", &luna_wrapper_wxSizer::_bind_InsertSpacer},
	{"InsertStretchSpacer", &luna_wrapper_wxSizer::_bind_InsertStretchSpacer},
	{"IsEmpty", &luna_wrapper_wxSizer::_bind_IsEmpty},
	{"IsShown", &luna_wrapper_wxSizer::_bind_IsShown},
	{"Layout", &luna_wrapper_wxSizer::_bind_Layout},
	{"Prepend", &luna_wrapper_wxSizer::_bind_Prepend},
	{"PrependSpacer", &luna_wrapper_wxSizer::_bind_PrependSpacer},
	{"PrependStretchSpacer", &luna_wrapper_wxSizer::_bind_PrependStretchSpacer},
	{"RecalcSizes", &luna_wrapper_wxSizer::_bind_RecalcSizes},
	{"Remove", &luna_wrapper_wxSizer::_bind_Remove},
	{"Replace", &luna_wrapper_wxSizer::_bind_Replace},
	{"SetDimension", &luna_wrapper_wxSizer::_bind_SetDimension},
	{"SetItemMinSize", &luna_wrapper_wxSizer::_bind_SetItemMinSize},
	{"SetMinSize", &luna_wrapper_wxSizer::_bind_SetMinSize},
	{"SetSizeHints", &luna_wrapper_wxSizer::_bind_SetSizeHints},
	{"SetVirtualSizeHints", &luna_wrapper_wxSizer::_bind_SetVirtualSizeHints},
	{"Show", &luna_wrapper_wxSizer::_bind_Show},
	{"base_GetClassInfo", &luna_wrapper_wxSizer::_bind_base_GetClassInfo},
	{"base_AddSpacer", &luna_wrapper_wxSizer::_bind_base_AddSpacer},
	{"base_Clear", &luna_wrapper_wxSizer::_bind_base_Clear},
	{"base_Detach", &luna_wrapper_wxSizer::_bind_base_Detach},
	{"base_InformFirstDirection", &luna_wrapper_wxSizer::_bind_base_InformFirstDirection},
	{"base_Layout", &luna_wrapper_wxSizer::_bind_base_Layout},
	{"base_Remove", &luna_wrapper_wxSizer::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxSizer::_bind_base_Replace},
	{"fromVoid", &luna_wrapper_wxSizer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSizer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSizer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizer >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizer >::enumValues[] = {
	{0,0}
};


