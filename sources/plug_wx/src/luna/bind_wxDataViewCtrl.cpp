#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewCtrl.h>

class luna_wrapper_wxDataViewCtrl {
public:
	typedef Luna< wxDataViewCtrl > luna_t;

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

		wxDataViewCtrl* self= (wxDataViewCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewCtrl >::push(L,self,false);
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
		//wxDataViewCtrl* ptr= dynamic_cast< wxDataViewCtrl* >(Luna< wxObject >::check(L,1));
		wxDataViewCtrl* ptr= luna_caster< wxObject, wxDataViewCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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


	// Function checkers:
	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendBitmapColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendBitmapColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendDateColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendDateColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendIconTextColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendIconTextColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendProgressColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendProgressColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendTextColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendTextColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendToggleColumn_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendToggleColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssociateModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDragSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandAncestors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExpanderColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedItemsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSortingColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetExpanderColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCurrentItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartEditor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PrependColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AssociateModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClearColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnableDragSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnableDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,9988153) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnsureVisible(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ExpandAncestors(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColumnPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelectedItemsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSortingColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HitTest(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartEditor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Unselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetRowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewCtrl::wxDataViewCtrl()
	static wxDataViewCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl::wxDataViewCtrl() function, expected prototype:\nwxDataViewCtrl::wxDataViewCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDataViewCtrl();
	}

	// wxDataViewCtrl::wxDataViewCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)
	static wxDataViewCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl::wxDataViewCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr) function, expected prototype:\nwxDataViewCtrl::wxDataViewCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;
		const wxValidator* validator_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxValidator >(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxDataViewCtrl(parent, id, pos, size, style, validator, name);
	}

	// wxDataViewCtrl::wxDataViewCtrl(lua_Table * data)
	static wxDataViewCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl::wxDataViewCtrl(lua_Table * data) function, expected prototype:\nwxDataViewCtrl::wxDataViewCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataViewCtrl(L,NULL);
	}

	// wxDataViewCtrl::wxDataViewCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)
	static wxDataViewCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl::wxDataViewCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr) function, expected prototype:\nwxDataViewCtrl::wxDataViewCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewCtrl::wxDataViewCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxDataViewCtrl(L,NULL, parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxDataViewCtrl::wxDataViewCtrl
	static wxDataViewCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDataViewCtrl, cannot match any of the overloads for function wxDataViewCtrl:\n  wxDataViewCtrl()\n  wxDataViewCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxDataViewCtrl(lua_Table *)\n  wxDataViewCtrl(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::AppendColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AppendColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col)
	static int _bind_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_PrependColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::PrependColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PrependColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col)
	static int _bind_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_InsertColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col)\nClass arguments details:\narg 2 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::InsertColumn(unsigned int, wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertColumn(pos, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendBitmapColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendBitmapColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendBitmapColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendBitmapColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendBitmapColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendBitmapColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendBitmapColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendBitmapColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendBitmapColumn
	static int _bind_AppendBitmapColumn(lua_State *L) {
		if (_lg_typecheck_AppendBitmapColumn_overload_1(L)) return _bind_AppendBitmapColumn_overload_1(L);
		if (_lg_typecheck_AppendBitmapColumn_overload_2(L)) return _bind_AppendBitmapColumn_overload_2(L);

		luaL_error(L, "error in function AppendBitmapColumn, cannot match any of the overloads for function AppendBitmapColumn:\n  AppendBitmapColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendBitmapColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendDateColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendDateColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_ACTIVATABLE;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendDateColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendDateColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendDateColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_ACTIVATABLE, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendDateColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_ACTIVATABLE;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendDateColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendDateColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendDateColumn
	static int _bind_AppendDateColumn(lua_State *L) {
		if (_lg_typecheck_AppendDateColumn_overload_1(L)) return _bind_AppendDateColumn_overload_1(L);
		if (_lg_typecheck_AppendDateColumn_overload_2(L)) return _bind_AppendDateColumn_overload_2(L);

		luaL_error(L, "error in function AppendDateColumn, cannot match any of the overloads for function AppendDateColumn:\n  AppendDateColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendDateColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendIconTextColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendIconTextColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendIconTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendIconTextColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendIconTextColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendIconTextColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendIconTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendIconTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendIconTextColumn
	static int _bind_AppendIconTextColumn(lua_State *L) {
		if (_lg_typecheck_AppendIconTextColumn_overload_1(L)) return _bind_AppendIconTextColumn_overload_1(L);
		if (_lg_typecheck_AppendIconTextColumn_overload_2(L)) return _bind_AppendIconTextColumn_overload_2(L);

		luaL_error(L, "error in function AppendIconTextColumn, cannot match any of the overloads for function AppendIconTextColumn:\n  AppendIconTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendIconTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendProgressColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendProgressColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)80;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendProgressColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendProgressColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendProgressColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 80, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendProgressColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)80;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendProgressColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendProgressColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendProgressColumn
	static int _bind_AppendProgressColumn(lua_State *L) {
		if (_lg_typecheck_AppendProgressColumn_overload_1(L)) return _bind_AppendProgressColumn_overload_1(L);
		if (_lg_typecheck_AppendProgressColumn_overload_2(L)) return _bind_AppendProgressColumn_overload_2(L);

		luaL_error(L, "error in function AppendProgressColumn, cannot match any of the overloads for function AppendProgressColumn:\n  AppendProgressColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendProgressColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendTextColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendTextColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendTextColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendTextColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = -1, wxAlignment align = ::wxALIGN_NOT, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendTextColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_NOT;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendTextColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendTextColumn
	static int _bind_AppendTextColumn(lua_State *L) {
		if (_lg_typecheck_AppendTextColumn_overload_1(L)) return _bind_AppendTextColumn_overload_1(L);
		if (_lg_typecheck_AppendTextColumn_overload_2(L)) return _bind_AppendTextColumn_overload_2(L);

		luaL_error(L, "error in function AppendTextColumn, cannot match any of the overloads for function AppendTextColumn:\n  AppendTextColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendTextColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendToggleColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_AppendToggleColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)30;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendToggleColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)
	static int _bind_AppendToggleColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_AppendToggleColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE) function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap & label, unsigned int model_column, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int width = 30, wxAlignment align = ::wxALIGN_CENTER, int flags = ::wxDATAVIEW_COL_RESIZABLE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* label_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !label_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg label in wxDataViewCtrl::AppendToggleColumn function");
		}
		const wxBitmap & label=*label_ptr;
		unsigned int model_column=(unsigned int)lua_tointeger(L,3);
		wxDataViewCellMode mode=luatop>3 ? (wxDataViewCellMode)lua_tointeger(L,4) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)30;
		wxAlignment align=luatop>5 ? (wxAlignment)lua_tointeger(L,6) : (wxAlignment)::wxALIGN_CENTER;
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)::wxDATAVIEW_COL_RESIZABLE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::AppendToggleColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->AppendToggleColumn(label, model_column, mode, width, align, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxDataViewCtrl::AppendToggleColumn
	static int _bind_AppendToggleColumn(lua_State *L) {
		if (_lg_typecheck_AppendToggleColumn_overload_1(L)) return _bind_AppendToggleColumn_overload_1(L);
		if (_lg_typecheck_AppendToggleColumn_overload_2(L)) return _bind_AppendToggleColumn_overload_2(L);

		luaL_error(L, "error in function AppendToggleColumn, cannot match any of the overloads for function AppendToggleColumn:\n  AppendToggleColumn(const wxString &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n  AppendToggleColumn(const wxBitmap &, unsigned int, wxDataViewCellMode, int, wxAlignment, int)\n");
		return 0;
	}

	// bool wxDataViewCtrl::AssociateModel(wxDataViewModel * model)
	static int _bind_AssociateModel(lua_State *L) {
		if (!_lg_typecheck_AssociateModel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::AssociateModel(wxDataViewModel * model) function, expected prototype:\nbool wxDataViewCtrl::AssociateModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::AssociateModel(wxDataViewModel *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AssociateModel(model);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::ClearColumns()
	static int _bind_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_ClearColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::ClearColumns() function, expected prototype:\nbool wxDataViewCtrl::ClearColumns()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::ClearColumns(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClearColumns();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::Collapse(const wxDataViewItem & item)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Collapse(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Collapse(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Collapse function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Collapse(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Collapse(item);

		return 0;
	}

	// bool wxDataViewCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr) function, expected prototype:\nbool wxDataViewCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxDataViewCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxDataViewCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format)
	static int _bind_EnableDragSource(lua_State *L) {
		if (!_lg_typecheck_EnableDragSource(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewCtrl::EnableDragSource function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::EnableDragSource(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnableDragSource(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format)
	static int _bind_EnableDropTarget(lua_State *L) {
		if (!_lg_typecheck_EnableDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewCtrl::EnableDropTarget function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnableDropTarget(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) function, expected prototype:\nvoid wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::EnsureVisible function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* column=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::EnsureVisible(const wxDataViewItem &, const wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnsureVisible(item, column);

		return 0;
	}

	// void wxDataViewCtrl::Expand(const wxDataViewItem & item)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Expand(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Expand(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Expand function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Expand(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Expand(item);

		return 0;
	}

	// void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item)
	static int _bind_ExpandAncestors(lua_State *L) {
		if (!_lg_typecheck_ExpandAncestors(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::ExpandAncestors function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ExpandAncestors(item);

		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->GetColumn(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxDataViewCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewCtrl::GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewCtrl::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewCtrl::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const
	static int _bind_GetColumnPosition(lua_State *L) {
		if (!_lg_typecheck_GetColumnPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const function, expected prototype:\nint wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnPosition(column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const
	static int _bind_GetExpanderColumn(lua_State *L) {
		if (!_lg_typecheck_GetExpanderColumn(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::GetExpanderColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->GetExpanderColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxDataViewItem wxDataViewCtrl::GetCurrentItem() const
	static int _bind_GetCurrentItem(lua_State *L) {
		if (!_lg_typecheck_GetCurrentItem(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewCtrl::GetCurrentItem() const function, expected prototype:\nwxDataViewItem wxDataViewCtrl::GetCurrentItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewCtrl::GetCurrentItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->GetCurrentItem();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewCtrl::GetIndent() const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetIndent() const function, expected prototype:\nint wxDataViewCtrl::GetIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetIndent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	static int _bind_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_GetItemRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const function, expected prototype:\nwxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::GetItemRect function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* col=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem &, const wxDataViewColumn *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetItemRect(item, col);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxDataViewModel * wxDataViewCtrl::GetModel()
	static int _bind_GetModel(lua_State *L) {
		if (!_lg_typecheck_GetModel(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewModel * wxDataViewCtrl::GetModel() function, expected prototype:\nwxDataViewModel * wxDataViewCtrl::GetModel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewModel * wxDataViewCtrl::GetModel(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewModel * lret = self->GetModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewModel >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewCtrl::GetSelectedItemsCount() const
	static int _bind_GetSelectedItemsCount(lua_State *L) {
		if (!_lg_typecheck_GetSelectedItemsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetSelectedItemsCount() const function, expected prototype:\nint wxDataViewCtrl::GetSelectedItemsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetSelectedItemsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelectedItemsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewItem wxDataViewCtrl::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewCtrl::GetSelection() const function, expected prototype:\nwxDataViewItem wxDataViewCtrl::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewCtrl::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->GetSelection();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const
	static int _bind_GetSelections(lua_State *L) {
		if (!_lg_typecheck_GetSelections(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const function, expected prototype:\nint wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewCtrl::GetSelections function");
		}
		wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::GetSelections(wxDataViewItemArray &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelections(sel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const
	static int _bind_GetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_GetSortingColumn(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->GetSortingColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewCtrl::HasSelection() const
	static int _bind_HasSelection(lua_State *L) {
		if (!_lg_typecheck_HasSelection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::HasSelection() const function, expected prototype:\nbool wxDataViewCtrl::HasSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::HasSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasSelection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const function, expected prototype:\nvoid wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 11709329\narg 3 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewCtrl::HitTest function");
		}
		const wxPoint & point=*point_ptr;
		wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::HitTest function");
		}
		wxDataViewItem & item=*item_ptr;
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,4));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::HitTest(const wxPoint &, wxDataViewItem &, wxDataViewColumn *&) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HitTest(point, item, col);

		return 0;
	}

	// bool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::IsExpanded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::IsExpanded(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::IsSelected function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::IsSelected(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::Select(const wxDataViewItem & item)
	static int _bind_Select(lua_State *L) {
		if (!_lg_typecheck_Select(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Select(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Select(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Select function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Select(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Select(item);

		return 0;
	}

	// void wxDataViewCtrl::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SelectAll() function, expected prototype:\nvoid wxDataViewCtrl::SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectAll();

		return 0;
	}

	// void wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn * col)
	static int _bind_SetExpanderColumn(lua_State *L) {
		if (!_lg_typecheck_SetExpanderColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn * col) function, expected prototype:\nvoid wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetExpanderColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExpanderColumn(col);

		return 0;
	}

	// void wxDataViewCtrl::SetCurrentItem(const wxDataViewItem & item)
	static int _bind_SetCurrentItem(lua_State *L) {
		if (!_lg_typecheck_SetCurrentItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetCurrentItem(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::SetCurrentItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::SetCurrentItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetCurrentItem(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCurrentItem(item);

		return 0;
	}

	// void wxDataViewCtrl::SetIndent(int indent)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetIndent(int indent) function, expected prototype:\nvoid wxDataViewCtrl::SetIndent(int indent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int indent=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetIndent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIndent(indent);

		return 0;
	}

	// void wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel)
	static int _bind_SetSelections(lua_State *L) {
		if (!_lg_typecheck_SetSelections(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel) function, expected prototype:\nvoid wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel)\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewCtrl::SetSelections function");
		}
		const wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::SetSelections(const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelections(sel);

		return 0;
	}

	// void wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column)
	static int _bind_StartEditor(lua_State *L) {
		if (!_lg_typecheck_StartEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column) function, expected prototype:\nvoid wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::StartEditor function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,3);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::StartEditor(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StartEditor(item, column);

		return 0;
	}

	// void wxDataViewCtrl::Unselect(const wxDataViewItem & item)
	static int _bind_Unselect(lua_State *L) {
		if (!_lg_typecheck_Unselect(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::Unselect(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::Unselect(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::Unselect function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::Unselect(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Unselect(item);

		return 0;
	}

	// void wxDataViewCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::UnselectAll() function, expected prototype:\nvoid wxDataViewCtrl::UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnselectAll();

		return 0;
	}

	// bool wxDataViewCtrl::SetRowHeight(int rowHeight)
	static int _bind_SetRowHeight(lua_State *L) {
		if (!_lg_typecheck_SetRowHeight(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::SetRowHeight(int rowHeight) function, expected prototype:\nbool wxDataViewCtrl::SetRowHeight(int rowHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rowHeight=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::SetRowHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetRowHeight(rowHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxDataViewCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDataViewCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxDataViewCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxDataViewCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxDataViewCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_HasFocus() const function, expected prototype:\nbool wxDataViewCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxDataViewCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxDataViewCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetFocus() function, expected prototype:\nvoid wxDataViewCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetFocus();

		return 0;
	}

	// void wxDataViewCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxDataViewCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxDataViewCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxDataViewCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::AddChild(child);

		return 0;
	}

	// void wxDataViewCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxDataViewCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxDataViewCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxDataViewCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxDataViewCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxDataViewCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxDataViewCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxDataViewCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxDataViewCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxDataViewCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxDataViewCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxDataViewCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDataViewCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxDataViewCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxDataViewCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxDataViewCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxDataViewCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxDataViewCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxDataViewCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxDataViewCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Fit() function, expected prototype:\nvoid wxDataViewCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Fit();

		return 0;
	}

	// void wxDataViewCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_FitInside() function, expected prototype:\nvoid wxDataViewCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::FitInside();

		return 0;
	}

	// wxSize wxDataViewCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxDataViewCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxDataViewCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDataViewCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxDataViewCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxDataViewCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxDataViewCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxDataViewCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxDataViewCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxDataViewCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxDataViewCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDataViewCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetMinSize(size);

		return 0;
	}

	// void wxDataViewCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxDataViewCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxDataViewCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxDataViewCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxDataViewCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxDataViewCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxDataViewCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxDataViewCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxDataViewCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxDataViewCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxDataViewCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxDataViewCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxDataViewCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_ClearBackground() function, expected prototype:\nvoid wxDataViewCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxDataViewCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxDataViewCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxDataViewCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxDataViewCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxDataViewCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetCharHeight() const function, expected prototype:\nint wxDataViewCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetCharWidth() const function, expected prototype:\nint wxDataViewCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxDataViewCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxDataViewCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxDataViewCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxDataViewCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxDataViewCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxDataViewCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxDataViewCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Update() function, expected prototype:\nvoid wxDataViewCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Update();

		return 0;
	}

	// bool wxDataViewCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxDataViewCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxDataViewCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxDataViewCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxDataViewCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxDataViewCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxDataViewCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxDataViewCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxDataViewCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxDataViewCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDataViewCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxDataViewCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxDataViewCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxDataViewCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxDataViewCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxDataViewCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxDataViewCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxDataViewCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxDataViewCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxDataViewCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxDataViewCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxDataViewCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Lower() function, expected prototype:\nvoid wxDataViewCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Lower();

		return 0;
	}

	// void wxDataViewCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Raise() function, expected prototype:\nvoid wxDataViewCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Raise();

		return 0;
	}

	// bool wxDataViewCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDataViewCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsShown() const function, expected prototype:\nbool wxDataViewCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxDataViewCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxDataViewCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxDataViewCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxDataViewCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxDataViewCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxDataViewCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDataViewCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxDataViewCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxDataViewCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxDataViewCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxDataViewCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxDataViewCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxDataViewCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxDataViewCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxDataViewCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxDataViewCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxDataViewCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_Validate() function, expected prototype:\nbool wxDataViewCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxDataViewCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxDataViewCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxDataViewCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxDataViewCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxDataViewCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewCtrl::base_GetName() const function, expected prototype:\nwxString wxDataViewCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDataViewCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxDataViewCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxDataViewCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxDataViewCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetName(name);

		return 0;
	}

	// void wxDataViewCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxDataViewCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxDataViewCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxDataViewCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_Destroy() function, expected prototype:\nbool wxDataViewCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxDataViewCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxDataViewCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxDataViewCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxDataViewCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxDataViewCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxDataViewCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxDataViewCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxDataViewCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxDataViewCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_Layout() function, expected prototype:\nbool wxDataViewCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_HasCapture() const function, expected prototype:\nbool wxDataViewCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxDataViewCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxDataViewCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxDataViewCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxDataViewCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDataViewCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxDataViewCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxDataViewCtrl::base_GetHandle() const function, expected prototype:\nHWND wxDataViewCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxDataViewCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxDataViewCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxDataViewCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxDataViewCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::InheritAttributes();

		return 0;
	}

	// void wxDataViewCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_InitDialog() function, expected prototype:\nvoid wxDataViewCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::InitDialog();

		return 0;
	}

	// bool wxDataViewCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsRetained() const function, expected prototype:\nbool wxDataViewCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxDataViewCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxDataViewCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::MakeModal(modal);

		return 0;
	}

	// void wxDataViewCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxDataViewCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxDataViewCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxDataViewCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxDataViewCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxDataViewCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxDataViewCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxDataViewCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxDataViewCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Command(event);

		return 0;
	}

	// wxString wxDataViewCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewCtrl::base_GetLabel() const function, expected prototype:\nwxString wxDataViewCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDataViewCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxDataViewCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetLabel(label);

		return 0;
	}

	// bool wxDataViewCtrl::base_AppendColumn(wxDataViewColumn * col)
	static int _bind_base_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_base_AppendColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_AppendColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::base_AppendColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_AppendColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::AppendColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_PrependColumn(wxDataViewColumn * col)
	static int _bind_base_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_base_PrependColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_PrependColumn(wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::base_PrependColumn(wxDataViewColumn * col)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_PrependColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::PrependColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * col)
	static int _bind_base_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_base_InsertColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * col) function, expected prototype:\nbool wxDataViewCtrl::base_InsertColumn(unsigned int pos, wxDataViewColumn * col)\nClass arguments details:\narg 2 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_InsertColumn(unsigned int, wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::InsertColumn(pos, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_AssociateModel(wxDataViewModel * model)
	static int _bind_base_AssociateModel(lua_State *L) {
		if (!_lg_typecheck_base_AssociateModel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_AssociateModel(wxDataViewModel * model) function, expected prototype:\nbool wxDataViewCtrl::base_AssociateModel(wxDataViewModel * model)\nClass arguments details:\narg 1 ID = 66533182\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_AssociateModel(wxDataViewModel *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::AssociateModel(model);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_ClearColumns()
	static int _bind_base_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_base_ClearColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_ClearColumns() function, expected prototype:\nbool wxDataViewCtrl::base_ClearColumns()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_ClearColumns(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::ClearColumns();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_Collapse(const wxDataViewItem & item)
	static int _bind_base_Collapse(lua_State *L) {
		if (!_lg_typecheck_base_Collapse(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Collapse(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::base_Collapse(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_Collapse function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Collapse(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Collapse(item);

		return 0;
	}

	// bool wxDataViewCtrl::base_DeleteColumn(wxDataViewColumn * column)
	static int _bind_base_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_base_DeleteColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_DeleteColumn(wxDataViewColumn * column) function, expected prototype:\nbool wxDataViewCtrl::base_DeleteColumn(wxDataViewColumn * column)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_DeleteColumn(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::DeleteColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_EnableDragSource(const wxDataFormat & format)
	static int _bind_base_EnableDragSource(lua_State *L) {
		if (!_lg_typecheck_base_EnableDragSource(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_EnableDragSource(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewCtrl::base_EnableDragSource(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewCtrl::base_EnableDragSource function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_EnableDragSource(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::EnableDragSource(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_EnableDropTarget(const wxDataFormat & format)
	static int _bind_base_EnableDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_EnableDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_EnableDropTarget(const wxDataFormat & format) function, expected prototype:\nbool wxDataViewCtrl::base_EnableDropTarget(const wxDataFormat & format)\nClass arguments details:\narg 1 ID = 9988153\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataFormat* format_ptr=(Luna< wxDataFormat >::check(L,2));
		if( !format_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg format in wxDataViewCtrl::base_EnableDropTarget function");
		}
		const wxDataFormat & format=*format_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_EnableDropTarget(const wxDataFormat &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::EnableDropTarget(format);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	static int _bind_base_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_base_EnsureVisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) function, expected prototype:\nvoid wxDataViewCtrl::base_EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_EnsureVisible function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* column=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_EnsureVisible(const wxDataViewItem &, const wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::EnsureVisible(item, column);

		return 0;
	}

	// void wxDataViewCtrl::base_Expand(const wxDataViewItem & item)
	static int _bind_base_Expand(lua_State *L) {
		if (!_lg_typecheck_base_Expand(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Expand(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::base_Expand(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_Expand function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Expand(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Expand(item);

		return 0;
	}

	// void wxDataViewCtrl::base_ExpandAncestors(const wxDataViewItem & item)
	static int _bind_base_ExpandAncestors(lua_State *L) {
		if (!_lg_typecheck_base_ExpandAncestors(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_ExpandAncestors(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::base_ExpandAncestors(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_ExpandAncestors function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_ExpandAncestors(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::ExpandAncestors(item);

		return 0;
	}

	// wxDataViewColumn * wxDataViewCtrl::base_GetColumn(unsigned int pos) const
	static int _bind_base_GetColumn(lua_State *L) {
		if (!_lg_typecheck_base_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::base_GetColumn(unsigned int pos) const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::base_GetColumn(unsigned int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::base_GetColumn(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->wxDataViewCtrl::GetColumn(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxDataViewCtrl::base_GetColumnCount() const
	static int _bind_base_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewCtrl::base_GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewCtrl::base_GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewCtrl::base_GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxDataViewCtrl::GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDataViewCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const
	static int _bind_base_GetColumnPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const function, expected prototype:\nint wxDataViewCtrl::base_GetColumnPosition(const wxDataViewColumn * column) const\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewColumn* column=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetColumnPosition(const wxDataViewColumn *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetColumnPosition(column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxDataViewCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	static int _bind_base_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_base_GetItemRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxDataViewCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const function, expected prototype:\nwxRect wxDataViewCtrl::base_GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_GetItemRect function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxDataViewColumn* col=luatop>2 ? (Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,3)) : (const wxDataViewColumn*)NULL;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxDataViewCtrl::base_GetItemRect(const wxDataViewItem &, const wxDataViewColumn *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->wxDataViewCtrl::GetItemRect(item, col);
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewCtrl::base_GetSelectedItemsCount() const
	static int _bind_base_GetSelectedItemsCount(lua_State *L) {
		if (!_lg_typecheck_base_GetSelectedItemsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetSelectedItemsCount() const function, expected prototype:\nint wxDataViewCtrl::base_GetSelectedItemsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetSelectedItemsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetSelectedItemsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewItem wxDataViewCtrl::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewCtrl::base_GetSelection() const function, expected prototype:\nwxDataViewItem wxDataViewCtrl::base_GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewCtrl::base_GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->wxDataViewCtrl::GetSelection();
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// int wxDataViewCtrl::base_GetSelections(wxDataViewItemArray & sel) const
	static int _bind_base_GetSelections(lua_State *L) {
		if (!_lg_typecheck_base_GetSelections(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCtrl::base_GetSelections(wxDataViewItemArray & sel) const function, expected prototype:\nint wxDataViewCtrl::base_GetSelections(wxDataViewItemArray & sel) const\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewCtrl::base_GetSelections function");
		}
		wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCtrl::base_GetSelections(wxDataViewItemArray &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCtrl::GetSelections(sel);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewCtrl::base_GetSortingColumn() const
	static int _bind_base_GetSortingColumn(lua_State *L) {
		if (!_lg_typecheck_base_GetSortingColumn(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewCtrl::base_GetSortingColumn() const function, expected prototype:\nwxDataViewColumn * wxDataViewCtrl::base_GetSortingColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewCtrl::base_GetSortingColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->wxDataViewCtrl::GetSortingColumn();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// void wxDataViewCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	static int _bind_base_HitTest(lua_State *L) {
		if (!_lg_typecheck_base_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const function, expected prototype:\nvoid wxDataViewCtrl::base_HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 11709329\narg 3 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxDataViewCtrl::base_HitTest function");
		}
		const wxPoint & point=*point_ptr;
		wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_HitTest function");
		}
		wxDataViewItem & item=*item_ptr;
		wxDataViewColumn* col=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,4));

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_HitTest(const wxPoint &, wxDataViewItem &, wxDataViewColumn *&) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::HitTest(point, item, col);

		return 0;
	}

	// bool wxDataViewCtrl::base_IsExpanded(const wxDataViewItem & item) const
	static int _bind_base_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_base_IsExpanded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsExpanded(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewCtrl::base_IsExpanded(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_IsExpanded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsExpanded(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCtrl::base_IsSelected(const wxDataViewItem & item) const
	static int _bind_base_IsSelected(lua_State *L) {
		if (!_lg_typecheck_base_IsSelected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_IsSelected(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewCtrl::base_IsSelected(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_IsSelected function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_IsSelected(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCtrl::base_Select(const wxDataViewItem & item)
	static int _bind_base_Select(lua_State *L) {
		if (!_lg_typecheck_base_Select(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Select(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::base_Select(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_Select function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Select(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Select(item);

		return 0;
	}

	// void wxDataViewCtrl::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SelectAll() function, expected prototype:\nvoid wxDataViewCtrl::base_SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SelectAll();

		return 0;
	}

	// void wxDataViewCtrl::base_SetSelections(const wxDataViewItemArray & sel)
	static int _bind_base_SetSelections(lua_State *L) {
		if (!_lg_typecheck_base_SetSelections(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_SetSelections(const wxDataViewItemArray & sel) function, expected prototype:\nvoid wxDataViewCtrl::base_SetSelections(const wxDataViewItemArray & sel)\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItemArray* sel_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !sel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sel in wxDataViewCtrl::base_SetSelections function");
		}
		const wxDataViewItemArray & sel=*sel_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_SetSelections(const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::SetSelections(sel);

		return 0;
	}

	// void wxDataViewCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column)
	static int _bind_base_StartEditor(lua_State *L) {
		if (!_lg_typecheck_base_StartEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column) function, expected prototype:\nvoid wxDataViewCtrl::base_StartEditor(const wxDataViewItem & item, unsigned int column)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_StartEditor function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,3);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_StartEditor(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::StartEditor(item, column);

		return 0;
	}

	// void wxDataViewCtrl::base_Unselect(const wxDataViewItem & item)
	static int _bind_base_Unselect(lua_State *L) {
		if (!_lg_typecheck_base_Unselect(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_Unselect(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewCtrl::base_Unselect(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCtrl::base_Unselect function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_Unselect(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::Unselect(item);

		return 0;
	}

	// void wxDataViewCtrl::base_UnselectAll()
	static int _bind_base_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_base_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCtrl::base_UnselectAll() function, expected prototype:\nvoid wxDataViewCtrl::base_UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCtrl::base_UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCtrl::UnselectAll();

		return 0;
	}

	// bool wxDataViewCtrl::base_SetRowHeight(int rowHeight)
	static int _bind_base_SetRowHeight(lua_State *L) {
		if (!_lg_typecheck_base_SetRowHeight(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCtrl::base_SetRowHeight(int rowHeight) function, expected prototype:\nbool wxDataViewCtrl::base_SetRowHeight(int rowHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rowHeight=(int)lua_tointeger(L,2);

		wxDataViewCtrl* self=Luna< wxObject >::checkSubType< wxDataViewCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCtrl::base_SetRowHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCtrl::SetRowHeight(rowHeight);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewCtrl* LunaTraits< wxDataViewCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewCtrl::_bind_ctor(L);
}

void LunaTraits< wxDataViewCtrl >::_bind_dtor(wxDataViewCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewCtrl >::className[] = "wxDataViewCtrl";
const char LunaTraits< wxDataViewCtrl >::fullName[] = "wxDataViewCtrl";
const char LunaTraits< wxDataViewCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxDataViewCtrl >::hash = 11530985;
const int LunaTraits< wxDataViewCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxDataViewCtrl >::methods[] = {
	{"AppendColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendColumn},
	{"PrependColumn", &luna_wrapper_wxDataViewCtrl::_bind_PrependColumn},
	{"InsertColumn", &luna_wrapper_wxDataViewCtrl::_bind_InsertColumn},
	{"AppendBitmapColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendBitmapColumn},
	{"AppendDateColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendDateColumn},
	{"AppendIconTextColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendIconTextColumn},
	{"AppendProgressColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendProgressColumn},
	{"AppendTextColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendTextColumn},
	{"AppendToggleColumn", &luna_wrapper_wxDataViewCtrl::_bind_AppendToggleColumn},
	{"AssociateModel", &luna_wrapper_wxDataViewCtrl::_bind_AssociateModel},
	{"ClearColumns", &luna_wrapper_wxDataViewCtrl::_bind_ClearColumns},
	{"Collapse", &luna_wrapper_wxDataViewCtrl::_bind_Collapse},
	{"Create", &luna_wrapper_wxDataViewCtrl::_bind_Create},
	{"DeleteColumn", &luna_wrapper_wxDataViewCtrl::_bind_DeleteColumn},
	{"EnableDragSource", &luna_wrapper_wxDataViewCtrl::_bind_EnableDragSource},
	{"EnableDropTarget", &luna_wrapper_wxDataViewCtrl::_bind_EnableDropTarget},
	{"EnsureVisible", &luna_wrapper_wxDataViewCtrl::_bind_EnsureVisible},
	{"Expand", &luna_wrapper_wxDataViewCtrl::_bind_Expand},
	{"ExpandAncestors", &luna_wrapper_wxDataViewCtrl::_bind_ExpandAncestors},
	{"GetColumn", &luna_wrapper_wxDataViewCtrl::_bind_GetColumn},
	{"GetColumnCount", &luna_wrapper_wxDataViewCtrl::_bind_GetColumnCount},
	{"GetColumnPosition", &luna_wrapper_wxDataViewCtrl::_bind_GetColumnPosition},
	{"GetExpanderColumn", &luna_wrapper_wxDataViewCtrl::_bind_GetExpanderColumn},
	{"GetCurrentItem", &luna_wrapper_wxDataViewCtrl::_bind_GetCurrentItem},
	{"GetIndent", &luna_wrapper_wxDataViewCtrl::_bind_GetIndent},
	{"GetItemRect", &luna_wrapper_wxDataViewCtrl::_bind_GetItemRect},
	{"GetModel", &luna_wrapper_wxDataViewCtrl::_bind_GetModel},
	{"GetSelectedItemsCount", &luna_wrapper_wxDataViewCtrl::_bind_GetSelectedItemsCount},
	{"GetSelection", &luna_wrapper_wxDataViewCtrl::_bind_GetSelection},
	{"GetSelections", &luna_wrapper_wxDataViewCtrl::_bind_GetSelections},
	{"GetSortingColumn", &luna_wrapper_wxDataViewCtrl::_bind_GetSortingColumn},
	{"HasSelection", &luna_wrapper_wxDataViewCtrl::_bind_HasSelection},
	{"HitTest", &luna_wrapper_wxDataViewCtrl::_bind_HitTest},
	{"IsExpanded", &luna_wrapper_wxDataViewCtrl::_bind_IsExpanded},
	{"IsSelected", &luna_wrapper_wxDataViewCtrl::_bind_IsSelected},
	{"Select", &luna_wrapper_wxDataViewCtrl::_bind_Select},
	{"SelectAll", &luna_wrapper_wxDataViewCtrl::_bind_SelectAll},
	{"SetExpanderColumn", &luna_wrapper_wxDataViewCtrl::_bind_SetExpanderColumn},
	{"SetCurrentItem", &luna_wrapper_wxDataViewCtrl::_bind_SetCurrentItem},
	{"SetIndent", &luna_wrapper_wxDataViewCtrl::_bind_SetIndent},
	{"SetSelections", &luna_wrapper_wxDataViewCtrl::_bind_SetSelections},
	{"StartEditor", &luna_wrapper_wxDataViewCtrl::_bind_StartEditor},
	{"Unselect", &luna_wrapper_wxDataViewCtrl::_bind_Unselect},
	{"UnselectAll", &luna_wrapper_wxDataViewCtrl::_bind_UnselectAll},
	{"SetRowHeight", &luna_wrapper_wxDataViewCtrl::_bind_SetRowHeight},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxDataViewCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxDataViewCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxDataViewCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxDataViewCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxDataViewCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxDataViewCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxDataViewCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxDataViewCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxDataViewCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxDataViewCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxDataViewCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxDataViewCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxDataViewCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxDataViewCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxDataViewCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxDataViewCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxDataViewCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxDataViewCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxDataViewCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxDataViewCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxDataViewCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxDataViewCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxDataViewCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxDataViewCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxDataViewCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxDataViewCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxDataViewCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxDataViewCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxDataViewCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxDataViewCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxDataViewCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxDataViewCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxDataViewCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxDataViewCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxDataViewCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxDataViewCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxDataViewCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxDataViewCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxDataViewCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxDataViewCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxDataViewCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxDataViewCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxDataViewCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxDataViewCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxDataViewCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxDataViewCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxDataViewCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxDataViewCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxDataViewCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxDataViewCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxDataViewCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxDataViewCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxDataViewCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxDataViewCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxDataViewCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxDataViewCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxDataViewCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxDataViewCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxDataViewCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxDataViewCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxDataViewCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxDataViewCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxDataViewCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxDataViewCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxDataViewCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxDataViewCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxDataViewCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxDataViewCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxDataViewCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxDataViewCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxDataViewCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxDataViewCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxDataViewCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxDataViewCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxDataViewCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxDataViewCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxDataViewCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxDataViewCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxDataViewCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxDataViewCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxDataViewCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxDataViewCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxDataViewCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxDataViewCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxDataViewCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxDataViewCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxDataViewCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxDataViewCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxDataViewCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxDataViewCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxDataViewCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxDataViewCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxDataViewCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxDataViewCtrl::_bind_base_SetLabel},
	{"base_AppendColumn", &luna_wrapper_wxDataViewCtrl::_bind_base_AppendColumn},
	{"base_PrependColumn", &luna_wrapper_wxDataViewCtrl::_bind_base_PrependColumn},
	{"base_InsertColumn", &luna_wrapper_wxDataViewCtrl::_bind_base_InsertColumn},
	{"base_AssociateModel", &luna_wrapper_wxDataViewCtrl::_bind_base_AssociateModel},
	{"base_ClearColumns", &luna_wrapper_wxDataViewCtrl::_bind_base_ClearColumns},
	{"base_Collapse", &luna_wrapper_wxDataViewCtrl::_bind_base_Collapse},
	{"base_DeleteColumn", &luna_wrapper_wxDataViewCtrl::_bind_base_DeleteColumn},
	{"base_EnableDragSource", &luna_wrapper_wxDataViewCtrl::_bind_base_EnableDragSource},
	{"base_EnableDropTarget", &luna_wrapper_wxDataViewCtrl::_bind_base_EnableDropTarget},
	{"base_EnsureVisible", &luna_wrapper_wxDataViewCtrl::_bind_base_EnsureVisible},
	{"base_Expand", &luna_wrapper_wxDataViewCtrl::_bind_base_Expand},
	{"base_ExpandAncestors", &luna_wrapper_wxDataViewCtrl::_bind_base_ExpandAncestors},
	{"base_GetColumn", &luna_wrapper_wxDataViewCtrl::_bind_base_GetColumn},
	{"base_GetColumnCount", &luna_wrapper_wxDataViewCtrl::_bind_base_GetColumnCount},
	{"base_GetColumnPosition", &luna_wrapper_wxDataViewCtrl::_bind_base_GetColumnPosition},
	{"base_GetItemRect", &luna_wrapper_wxDataViewCtrl::_bind_base_GetItemRect},
	{"base_GetSelectedItemsCount", &luna_wrapper_wxDataViewCtrl::_bind_base_GetSelectedItemsCount},
	{"base_GetSelection", &luna_wrapper_wxDataViewCtrl::_bind_base_GetSelection},
	{"base_GetSelections", &luna_wrapper_wxDataViewCtrl::_bind_base_GetSelections},
	{"base_GetSortingColumn", &luna_wrapper_wxDataViewCtrl::_bind_base_GetSortingColumn},
	{"base_HitTest", &luna_wrapper_wxDataViewCtrl::_bind_base_HitTest},
	{"base_IsExpanded", &luna_wrapper_wxDataViewCtrl::_bind_base_IsExpanded},
	{"base_IsSelected", &luna_wrapper_wxDataViewCtrl::_bind_base_IsSelected},
	{"base_Select", &luna_wrapper_wxDataViewCtrl::_bind_base_Select},
	{"base_SelectAll", &luna_wrapper_wxDataViewCtrl::_bind_base_SelectAll},
	{"base_SetSelections", &luna_wrapper_wxDataViewCtrl::_bind_base_SetSelections},
	{"base_StartEditor", &luna_wrapper_wxDataViewCtrl::_bind_base_StartEditor},
	{"base_Unselect", &luna_wrapper_wxDataViewCtrl::_bind_base_Unselect},
	{"base_UnselectAll", &luna_wrapper_wxDataViewCtrl::_bind_base_UnselectAll},
	{"base_SetRowHeight", &luna_wrapper_wxDataViewCtrl::_bind_base_SetRowHeight},
	{"fromVoid", &luna_wrapper_wxDataViewCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewCtrl >::enumValues[] = {
	{0,0}
};


