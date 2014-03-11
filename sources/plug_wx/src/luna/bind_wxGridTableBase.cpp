#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridTableBase.h>

class luna_wrapper_wxGridTableBase {
public:
	typedef Luna< wxGridTableBase > luna_t;

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

		wxGridTableBase* self= (wxGridTableBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridTableBase >::push(L,self,false);
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
		//wxGridTableBase* ptr= dynamic_cast< wxGridTableBase* >(Luna< wxObject >::check(L,1));
		wxGridTableBase* ptr= luna_caster< wxObject, wxGridTableBase >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridTableBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetNumberRows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNumberCols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmptyCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTypeName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanGetValueAs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanSetValueAs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsLong(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsBool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueAsCustom(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsLong(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsDouble(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsBool(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueAsCustom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttrProvider(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96494917)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttrProvider(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanHaveAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEmptyCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTypeName(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanGetValueAs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanSetValueAs(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValueAsLong(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValueAsDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValueAsBool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValueAsCustom(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValueAsLong(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValueAsDouble(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValueAsBool(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValueAsCustom(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InsertRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AppendRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteRows(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_InsertCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AppendCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteCols(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetRowLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetColLabelValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanHaveAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridTableBase::wxGridTableBase(lua_Table * data)
	static wxGridTableBase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridTableBase::wxGridTableBase(lua_Table * data) function, expected prototype:\nwxGridTableBase::wxGridTableBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridTableBase(L,NULL);
	}


	// Function binds:
	// int wxGridTableBase::GetNumberRows()
	static int _bind_GetNumberRows(lua_State *L) {
		if (!_lg_typecheck_GetNumberRows(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetNumberRows() function, expected prototype:\nint wxGridTableBase::GetNumberRows()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetNumberRows(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberRows();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridTableBase::GetNumberCols()
	static int _bind_GetNumberCols(lua_State *L) {
		if (!_lg_typecheck_GetNumberCols(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetNumberCols() function, expected prototype:\nint wxGridTableBase::GetNumberCols()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetNumberCols(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetNumberCols();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridTableBase::GetRowsCount() const
	static int _bind_GetRowsCount(lua_State *L) {
		if (!_lg_typecheck_GetRowsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetRowsCount() const function, expected prototype:\nint wxGridTableBase::GetRowsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetRowsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridTableBase::GetColsCount() const
	static int _bind_GetColsCount(lua_State *L) {
		if (!_lg_typecheck_GetColsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridTableBase::GetColsCount() const function, expected prototype:\nint wxGridTableBase::GetColsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridTableBase::GetColsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridTableBase::IsEmptyCell(int row, int col)
	static int _bind_IsEmptyCell(lua_State *L) {
		if (!_lg_typecheck_IsEmptyCell(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::IsEmptyCell(int row, int col) function, expected prototype:\nbool wxGridTableBase::IsEmptyCell(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::IsEmptyCell(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEmptyCell(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::IsEmpty(const wxGridCellCoords & coords)
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::IsEmpty(const wxGridCellCoords & coords) function, expected prototype:\nbool wxGridTableBase::IsEmpty(const wxGridCellCoords & coords)\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* coords_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !coords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg coords in wxGridTableBase::IsEmpty function");
		}
		const wxGridCellCoords & coords=*coords_ptr;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::IsEmpty(const wxGridCellCoords &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEmpty(coords);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridTableBase::GetValue(int row, int col)
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetValue(int row, int col) function, expected prototype:\nwxString wxGridTableBase::GetValue(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetValue(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetValue(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGridTableBase::SetValue(int row, int col, const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValue(int row, int col, const wxString & value) function, expected prototype:\nvoid wxGridTableBase::SetValue(int row, int col, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValue(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(row, col, value);

		return 0;
	}

	// wxString wxGridTableBase::GetTypeName(int row, int col)
	static int _bind_GetTypeName(lua_State *L) {
		if (!_lg_typecheck_GetTypeName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetTypeName(int row, int col) function, expected prototype:\nwxString wxGridTableBase::GetTypeName(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetTypeName(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetTypeName(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName)
	static int _bind_CanGetValueAs(lua_State *L) {
		if (!_lg_typecheck_CanGetValueAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName) function, expected prototype:\nbool wxGridTableBase::CanGetValueAs(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::CanGetValueAs(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanGetValueAs(row, col, typeName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName)
	static int _bind_CanSetValueAs(lua_State *L) {
		if (!_lg_typecheck_CanSetValueAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName) function, expected prototype:\nbool wxGridTableBase::CanSetValueAs(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::CanSetValueAs(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanSetValueAs(row, col, typeName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxGridTableBase::GetValueAsLong(int row, int col)
	static int _bind_GetValueAsLong(lua_State *L) {
		if (!_lg_typecheck_GetValueAsLong(L)) {
			luaL_error(L, "luna typecheck failed in long wxGridTableBase::GetValueAsLong(int row, int col) function, expected prototype:\nlong wxGridTableBase::GetValueAsLong(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxGridTableBase::GetValueAsLong(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetValueAsLong(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxGridTableBase::GetValueAsDouble(int row, int col)
	static int _bind_GetValueAsDouble(lua_State *L) {
		if (!_lg_typecheck_GetValueAsDouble(L)) {
			luaL_error(L, "luna typecheck failed in double wxGridTableBase::GetValueAsDouble(int row, int col) function, expected prototype:\ndouble wxGridTableBase::GetValueAsDouble(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxGridTableBase::GetValueAsDouble(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetValueAsDouble(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridTableBase::GetValueAsBool(int row, int col)
	static int _bind_GetValueAsBool(lua_State *L) {
		if (!_lg_typecheck_GetValueAsBool(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::GetValueAsBool(int row, int col) function, expected prototype:\nbool wxGridTableBase::GetValueAsBool(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::GetValueAsBool(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetValueAsBool(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName)
	static int _bind_GetValueAsCustom(lua_State *L) {
		if (!_lg_typecheck_GetValueAsCustom(L)) {
			luaL_error(L, "luna typecheck failed in void * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName) function, expected prototype:\nvoid * wxGridTableBase::GetValueAsCustom(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxGridTableBase::GetValueAsCustom(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetValueAsCustom(row, col, typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::SetValueAsLong(int row, int col, long value)
	static int _bind_SetValueAsLong(lua_State *L) {
		if (!_lg_typecheck_SetValueAsLong(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsLong(int row, int col, long value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsLong(int row, int col, long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		long value=(long)lua_tonumber(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsLong(int, int, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueAsLong(row, col, value);

		return 0;
	}

	// void wxGridTableBase::SetValueAsDouble(int row, int col, double value)
	static int _bind_SetValueAsDouble(lua_State *L) {
		if (!_lg_typecheck_SetValueAsDouble(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsDouble(int row, int col, double value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsDouble(int row, int col, double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		double value=(double)lua_tonumber(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsDouble(int, int, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueAsDouble(row, col, value);

		return 0;
	}

	// void wxGridTableBase::SetValueAsBool(int row, int col, bool value)
	static int _bind_SetValueAsBool(lua_State *L) {
		if (!_lg_typecheck_SetValueAsBool(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsBool(int row, int col, bool value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsBool(int row, int col, bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		bool value=(bool)(lua_toboolean(L,4)==1);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsBool(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueAsBool(row, col, value);

		return 0;
	}

	// void wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value)
	static int _bind_SetValueAsCustom(lua_State *L) {
		if (!_lg_typecheck_SetValueAsCustom(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value) function, expected prototype:\nvoid wxGridTableBase::SetValueAsCustom(int row, int col, const wxString & typeName, void * value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));
		void* value=(Luna< void >::check(L,5));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetValueAsCustom(int, int, const wxString &, void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueAsCustom(row, col, typeName, value);

		return 0;
	}

	// void wxGridTableBase::SetView(wxGrid * grid)
	static int _bind_SetView(lua_State *L) {
		if (!_lg_typecheck_SetView(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetView(wxGrid * grid) function, expected prototype:\nvoid wxGridTableBase::SetView(wxGrid * grid)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGrid* grid=(Luna< wxObject >::checkSubType< wxGrid >(L,2));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetView(wxGrid *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetView(grid);

		return 0;
	}

	// wxGrid * wxGridTableBase::GetView() const
	static int _bind_GetView(lua_State *L) {
		if (!_lg_typecheck_GetView(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid * wxGridTableBase::GetView() const function, expected prototype:\nwxGrid * wxGridTableBase::GetView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGrid * wxGridTableBase::GetView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGrid * lret = self->GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGrid >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::Clear() function, expected prototype:\nvoid wxGridTableBase::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// bool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1)
	static int _bind_InsertRows(lua_State *L) {
		if (!_lg_typecheck_InsertRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::InsertRows(size_t pos = 0, size_t numRows = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numRows=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::InsertRows(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertRows(pos, numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::AppendRows(size_t numRows = 1)
	static int _bind_AppendRows(lua_State *L) {
		if (!_lg_typecheck_AppendRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::AppendRows(size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::AppendRows(size_t numRows = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t numRows=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::AppendRows(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AppendRows(numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1)
	static int _bind_DeleteRows(lua_State *L) {
		if (!_lg_typecheck_DeleteRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::DeleteRows(size_t pos = 0, size_t numRows = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numRows=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::DeleteRows(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteRows(pos, numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1)
	static int _bind_InsertCols(lua_State *L) {
		if (!_lg_typecheck_InsertCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::InsertCols(size_t pos = 0, size_t numCols = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numCols=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::InsertCols(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InsertCols(pos, numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::AppendCols(size_t numCols = 1)
	static int _bind_AppendCols(lua_State *L) {
		if (!_lg_typecheck_AppendCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::AppendCols(size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::AppendCols(size_t numCols = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t numCols=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::AppendCols(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AppendCols(numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1)
	static int _bind_DeleteCols(lua_State *L) {
		if (!_lg_typecheck_DeleteCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::DeleteCols(size_t pos = 0, size_t numCols = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numCols=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::DeleteCols(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteCols(pos, numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridTableBase::GetRowLabelValue(int row)
	static int _bind_GetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_GetRowLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetRowLabelValue(int row) function, expected prototype:\nwxString wxGridTableBase::GetRowLabelValue(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetRowLabelValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetRowLabelValue(row);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGridTableBase::GetColLabelValue(int col)
	static int _bind_GetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_GetColLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::GetColLabelValue(int col) function, expected prototype:\nwxString wxGridTableBase::GetColLabelValue(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::GetColLabelValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetColLabelValue(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGridTableBase::SetRowLabelValue(int row, const wxString & label)
	static int _bind_SetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_SetRowLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetRowLabelValue(int row, const wxString & label) function, expected prototype:\nvoid wxGridTableBase::SetRowLabelValue(int row, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetRowLabelValue(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowLabelValue(row, label);

		return 0;
	}

	// void wxGridTableBase::SetColLabelValue(int col, const wxString & label)
	static int _bind_SetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_SetColLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetColLabelValue(int col, const wxString & label) function, expected prototype:\nvoid wxGridTableBase::SetColLabelValue(int col, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetColLabelValue(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColLabelValue(col, label);

		return 0;
	}

	// void wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider * attrProvider)
	static int _bind_SetAttrProvider(lua_State *L) {
		if (!_lg_typecheck_SetAttrProvider(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider * attrProvider) function, expected prototype:\nvoid wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider * attrProvider)\nClass arguments details:\narg 1 ID = 96494917\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttrProvider* attrProvider=(Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,2));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetAttrProvider(wxGridCellAttrProvider *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttrProvider(attrProvider);

		return 0;
	}

	// wxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const
	static int _bind_GetAttrProvider(lua_State *L) {
		if (!_lg_typecheck_GetAttrProvider(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const function, expected prototype:\nwxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttrProvider * wxGridTableBase::GetAttrProvider() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttrProvider * lret = self->GetAttrProvider();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttrProvider >::push(L,lret,false);

		return 1;
	}

	// wxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) function, expected prototype:\nwxGridCellAttr * wxGridTableBase::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellAttr::wxAttrKind kind=(wxGridCellAttr::wxAttrKind)lua_tointeger(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridTableBase::GetAttr(int, int, wxGridCellAttr::wxAttrKind). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttr * lret = self->GetAttr(row, col, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col)
	static int _bind_SetAttr(lua_State *L) {
		if (!_lg_typecheck_SetAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col) function, expected prototype:\nvoid wxGridTableBase::SetAttr(wxGridCellAttr * attr, int row, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetAttr(wxGridCellAttr *, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttr(attr, row, col);

		return 0;
	}

	// void wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row)
	static int _bind_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_SetRowAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row) function, expected prototype:\nvoid wxGridTableBase::SetRowAttr(wxGridCellAttr * attr, int row)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetRowAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowAttr(attr, row);

		return 0;
	}

	// void wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col)
	static int _bind_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_SetColAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col) function, expected prototype:\nvoid wxGridTableBase::SetColAttr(wxGridCellAttr * attr, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::SetColAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColAttr(attr, col);

		return 0;
	}

	// bool wxGridTableBase::CanHaveAttributes()
	static int _bind_CanHaveAttributes(lua_State *L) {
		if (!_lg_typecheck_CanHaveAttributes(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::CanHaveAttributes() function, expected prototype:\nbool wxGridTableBase::CanHaveAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::CanHaveAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanHaveAttributes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxGridTableBase::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridTableBase::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridTableBase::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridTableBase::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGridTableBase::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxGridTableBase::base_IsEmptyCell(int row, int col)
	static int _bind_base_IsEmptyCell(lua_State *L) {
		if (!_lg_typecheck_base_IsEmptyCell(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_IsEmptyCell(int row, int col) function, expected prototype:\nbool wxGridTableBase::base_IsEmptyCell(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_IsEmptyCell(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::IsEmptyCell(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridTableBase::base_GetTypeName(int row, int col)
	static int _bind_base_GetTypeName(lua_State *L) {
		if (!_lg_typecheck_base_GetTypeName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::base_GetTypeName(int row, int col) function, expected prototype:\nwxString wxGridTableBase::base_GetTypeName(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::base_GetTypeName(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGridTableBase::GetTypeName(row, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxGridTableBase::base_CanGetValueAs(int row, int col, const wxString & typeName)
	static int _bind_base_CanGetValueAs(lua_State *L) {
		if (!_lg_typecheck_base_CanGetValueAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_CanGetValueAs(int row, int col, const wxString & typeName) function, expected prototype:\nbool wxGridTableBase::base_CanGetValueAs(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_CanGetValueAs(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::CanGetValueAs(row, col, typeName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::base_CanSetValueAs(int row, int col, const wxString & typeName)
	static int _bind_base_CanSetValueAs(lua_State *L) {
		if (!_lg_typecheck_base_CanSetValueAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_CanSetValueAs(int row, int col, const wxString & typeName) function, expected prototype:\nbool wxGridTableBase::base_CanSetValueAs(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_CanSetValueAs(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::CanSetValueAs(row, col, typeName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxGridTableBase::base_GetValueAsLong(int row, int col)
	static int _bind_base_GetValueAsLong(lua_State *L) {
		if (!_lg_typecheck_base_GetValueAsLong(L)) {
			luaL_error(L, "luna typecheck failed in long wxGridTableBase::base_GetValueAsLong(int row, int col) function, expected prototype:\nlong wxGridTableBase::base_GetValueAsLong(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxGridTableBase::base_GetValueAsLong(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxGridTableBase::GetValueAsLong(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxGridTableBase::base_GetValueAsDouble(int row, int col)
	static int _bind_base_GetValueAsDouble(lua_State *L) {
		if (!_lg_typecheck_base_GetValueAsDouble(L)) {
			luaL_error(L, "luna typecheck failed in double wxGridTableBase::base_GetValueAsDouble(int row, int col) function, expected prototype:\ndouble wxGridTableBase::base_GetValueAsDouble(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxGridTableBase::base_GetValueAsDouble(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->wxGridTableBase::GetValueAsDouble(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridTableBase::base_GetValueAsBool(int row, int col)
	static int _bind_base_GetValueAsBool(lua_State *L) {
		if (!_lg_typecheck_base_GetValueAsBool(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_GetValueAsBool(int row, int col) function, expected prototype:\nbool wxGridTableBase::base_GetValueAsBool(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_GetValueAsBool(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::GetValueAsBool(row, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * wxGridTableBase::base_GetValueAsCustom(int row, int col, const wxString & typeName)
	static int _bind_base_GetValueAsCustom(lua_State *L) {
		if (!_lg_typecheck_base_GetValueAsCustom(L)) {
			luaL_error(L, "luna typecheck failed in void * wxGridTableBase::base_GetValueAsCustom(int row, int col, const wxString & typeName) function, expected prototype:\nvoid * wxGridTableBase::base_GetValueAsCustom(int row, int col, const wxString & typeName)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxGridTableBase::base_GetValueAsCustom(int, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->wxGridTableBase::GetValueAsCustom(row, col, typeName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::base_SetValueAsLong(int row, int col, long value)
	static int _bind_base_SetValueAsLong(lua_State *L) {
		if (!_lg_typecheck_base_SetValueAsLong(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetValueAsLong(int row, int col, long value) function, expected prototype:\nvoid wxGridTableBase::base_SetValueAsLong(int row, int col, long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		long value=(long)lua_tonumber(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetValueAsLong(int, int, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetValueAsLong(row, col, value);

		return 0;
	}

	// void wxGridTableBase::base_SetValueAsDouble(int row, int col, double value)
	static int _bind_base_SetValueAsDouble(lua_State *L) {
		if (!_lg_typecheck_base_SetValueAsDouble(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetValueAsDouble(int row, int col, double value) function, expected prototype:\nvoid wxGridTableBase::base_SetValueAsDouble(int row, int col, double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		double value=(double)lua_tonumber(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetValueAsDouble(int, int, double). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetValueAsDouble(row, col, value);

		return 0;
	}

	// void wxGridTableBase::base_SetValueAsBool(int row, int col, bool value)
	static int _bind_base_SetValueAsBool(lua_State *L) {
		if (!_lg_typecheck_base_SetValueAsBool(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetValueAsBool(int row, int col, bool value) function, expected prototype:\nvoid wxGridTableBase::base_SetValueAsBool(int row, int col, bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		bool value=(bool)(lua_toboolean(L,4)==1);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetValueAsBool(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetValueAsBool(row, col, value);

		return 0;
	}

	// void wxGridTableBase::base_SetValueAsCustom(int row, int col, const wxString & typeName, void * value)
	static int _bind_base_SetValueAsCustom(lua_State *L) {
		if (!_lg_typecheck_base_SetValueAsCustom(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetValueAsCustom(int row, int col, const wxString & typeName, void * value) function, expected prototype:\nvoid wxGridTableBase::base_SetValueAsCustom(int row, int col, const wxString & typeName, void * value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxString typeName(lua_tostring(L,4),lua_objlen(L,4));
		void* value=(Luna< void >::check(L,5));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetValueAsCustom(int, int, const wxString &, void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetValueAsCustom(row, col, typeName, value);

		return 0;
	}

	// void wxGridTableBase::base_SetView(wxGrid * grid)
	static int _bind_base_SetView(lua_State *L) {
		if (!_lg_typecheck_base_SetView(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetView(wxGrid * grid) function, expected prototype:\nvoid wxGridTableBase::base_SetView(wxGrid * grid)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGrid* grid=(Luna< wxObject >::checkSubType< wxGrid >(L,2));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetView(wxGrid *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetView(grid);

		return 0;
	}

	// wxGrid * wxGridTableBase::base_GetView() const
	static int _bind_base_GetView(lua_State *L) {
		if (!_lg_typecheck_base_GetView(L)) {
			luaL_error(L, "luna typecheck failed in wxGrid * wxGridTableBase::base_GetView() const function, expected prototype:\nwxGrid * wxGridTableBase::base_GetView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGrid * wxGridTableBase::base_GetView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGrid * lret = self->wxGridTableBase::GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGrid >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_Clear() function, expected prototype:\nvoid wxGridTableBase::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::Clear();

		return 0;
	}

	// bool wxGridTableBase::base_InsertRows(size_t pos = 0, size_t numRows = 1)
	static int _bind_base_InsertRows(lua_State *L) {
		if (!_lg_typecheck_base_InsertRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_InsertRows(size_t pos = 0, size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::base_InsertRows(size_t pos = 0, size_t numRows = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numRows=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_InsertRows(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::InsertRows(pos, numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::base_AppendRows(size_t numRows = 1)
	static int _bind_base_AppendRows(lua_State *L) {
		if (!_lg_typecheck_base_AppendRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_AppendRows(size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::base_AppendRows(size_t numRows = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t numRows=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_AppendRows(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::AppendRows(numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::base_DeleteRows(size_t pos = 0, size_t numRows = 1)
	static int _bind_base_DeleteRows(lua_State *L) {
		if (!_lg_typecheck_base_DeleteRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_DeleteRows(size_t pos = 0, size_t numRows = 1) function, expected prototype:\nbool wxGridTableBase::base_DeleteRows(size_t pos = 0, size_t numRows = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numRows=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_DeleteRows(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::DeleteRows(pos, numRows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::base_InsertCols(size_t pos = 0, size_t numCols = 1)
	static int _bind_base_InsertCols(lua_State *L) {
		if (!_lg_typecheck_base_InsertCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_InsertCols(size_t pos = 0, size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::base_InsertCols(size_t pos = 0, size_t numCols = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numCols=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_InsertCols(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::InsertCols(pos, numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::base_AppendCols(size_t numCols = 1)
	static int _bind_base_AppendCols(lua_State *L) {
		if (!_lg_typecheck_base_AppendCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_AppendCols(size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::base_AppendCols(size_t numCols = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t numCols=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_AppendCols(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::AppendCols(numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridTableBase::base_DeleteCols(size_t pos = 0, size_t numCols = 1)
	static int _bind_base_DeleteCols(lua_State *L) {
		if (!_lg_typecheck_base_DeleteCols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_DeleteCols(size_t pos = 0, size_t numCols = 1) function, expected prototype:\nbool wxGridTableBase::base_DeleteCols(size_t pos = 0, size_t numCols = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t pos=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;
		size_t numCols=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)1;

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_DeleteCols(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::DeleteCols(pos, numCols);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGridTableBase::base_GetRowLabelValue(int row)
	static int _bind_base_GetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_base_GetRowLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::base_GetRowLabelValue(int row) function, expected prototype:\nwxString wxGridTableBase::base_GetRowLabelValue(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::base_GetRowLabelValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGridTableBase::GetRowLabelValue(row);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGridTableBase::base_GetColLabelValue(int col)
	static int _bind_base_GetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_base_GetColLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGridTableBase::base_GetColLabelValue(int col) function, expected prototype:\nwxString wxGridTableBase::base_GetColLabelValue(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGridTableBase::base_GetColLabelValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGridTableBase::GetColLabelValue(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGridTableBase::base_SetRowLabelValue(int row, const wxString & label)
	static int _bind_base_SetRowLabelValue(lua_State *L) {
		if (!_lg_typecheck_base_SetRowLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetRowLabelValue(int row, const wxString & label) function, expected prototype:\nvoid wxGridTableBase::base_SetRowLabelValue(int row, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetRowLabelValue(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetRowLabelValue(row, label);

		return 0;
	}

	// void wxGridTableBase::base_SetColLabelValue(int col, const wxString & label)
	static int _bind_base_SetColLabelValue(lua_State *L) {
		if (!_lg_typecheck_base_SetColLabelValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetColLabelValue(int col, const wxString & label) function, expected prototype:\nvoid wxGridTableBase::base_SetColLabelValue(int col, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetColLabelValue(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetColLabelValue(col, label);

		return 0;
	}

	// wxGridCellAttr * wxGridTableBase::base_GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridTableBase::base_GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) function, expected prototype:\nwxGridCellAttr * wxGridTableBase::base_GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellAttr::wxAttrKind kind=(wxGridCellAttr::wxAttrKind)lua_tointeger(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridTableBase::base_GetAttr(int, int, wxGridCellAttr::wxAttrKind). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttr * lret = self->wxGridTableBase::GetAttr(row, col, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridTableBase::base_SetAttr(wxGridCellAttr * attr, int row, int col)
	static int _bind_base_SetAttr(lua_State *L) {
		if (!_lg_typecheck_base_SetAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetAttr(wxGridCellAttr * attr, int row, int col) function, expected prototype:\nvoid wxGridTableBase::base_SetAttr(wxGridCellAttr * attr, int row, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetAttr(wxGridCellAttr *, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetAttr(attr, row, col);

		return 0;
	}

	// void wxGridTableBase::base_SetRowAttr(wxGridCellAttr * attr, int row)
	static int _bind_base_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_base_SetRowAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetRowAttr(wxGridCellAttr * attr, int row) function, expected prototype:\nvoid wxGridTableBase::base_SetRowAttr(wxGridCellAttr * attr, int row)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetRowAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetRowAttr(attr, row);

		return 0;
	}

	// void wxGridTableBase::base_SetColAttr(wxGridCellAttr * attr, int col)
	static int _bind_base_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_base_SetColAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridTableBase::base_SetColAttr(wxGridCellAttr * attr, int col) function, expected prototype:\nvoid wxGridTableBase::base_SetColAttr(wxGridCellAttr * attr, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int col=(int)lua_tointeger(L,3);

		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridTableBase::base_SetColAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridTableBase::SetColAttr(attr, col);

		return 0;
	}

	// bool wxGridTableBase::base_CanHaveAttributes()
	static int _bind_base_CanHaveAttributes(lua_State *L) {
		if (!_lg_typecheck_base_CanHaveAttributes(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridTableBase::base_CanHaveAttributes() function, expected prototype:\nbool wxGridTableBase::base_CanHaveAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridTableBase* self=Luna< wxObject >::checkSubType< wxGridTableBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridTableBase::base_CanHaveAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGridTableBase::CanHaveAttributes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGridTableBase* LunaTraits< wxGridTableBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridTableBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxGridTableBase::GetNumberRows()
	// int wxGridTableBase::GetNumberCols()
	// wxString wxGridTableBase::GetValue(int row, int col)
	// void wxGridTableBase::SetValue(int row, int col, const wxString & value)
}

void LunaTraits< wxGridTableBase >::_bind_dtor(wxGridTableBase* obj) {
	delete obj;
}

const char LunaTraits< wxGridTableBase >::className[] = "wxGridTableBase";
const char LunaTraits< wxGridTableBase >::fullName[] = "wxGridTableBase";
const char LunaTraits< wxGridTableBase >::moduleName[] = "wx";
const char* LunaTraits< wxGridTableBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGridTableBase >::hash = 50677725;
const int LunaTraits< wxGridTableBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridTableBase >::methods[] = {
	{"GetNumberRows", &luna_wrapper_wxGridTableBase::_bind_GetNumberRows},
	{"GetNumberCols", &luna_wrapper_wxGridTableBase::_bind_GetNumberCols},
	{"GetRowsCount", &luna_wrapper_wxGridTableBase::_bind_GetRowsCount},
	{"GetColsCount", &luna_wrapper_wxGridTableBase::_bind_GetColsCount},
	{"IsEmptyCell", &luna_wrapper_wxGridTableBase::_bind_IsEmptyCell},
	{"IsEmpty", &luna_wrapper_wxGridTableBase::_bind_IsEmpty},
	{"GetValue", &luna_wrapper_wxGridTableBase::_bind_GetValue},
	{"SetValue", &luna_wrapper_wxGridTableBase::_bind_SetValue},
	{"GetTypeName", &luna_wrapper_wxGridTableBase::_bind_GetTypeName},
	{"CanGetValueAs", &luna_wrapper_wxGridTableBase::_bind_CanGetValueAs},
	{"CanSetValueAs", &luna_wrapper_wxGridTableBase::_bind_CanSetValueAs},
	{"GetValueAsLong", &luna_wrapper_wxGridTableBase::_bind_GetValueAsLong},
	{"GetValueAsDouble", &luna_wrapper_wxGridTableBase::_bind_GetValueAsDouble},
	{"GetValueAsBool", &luna_wrapper_wxGridTableBase::_bind_GetValueAsBool},
	{"GetValueAsCustom", &luna_wrapper_wxGridTableBase::_bind_GetValueAsCustom},
	{"SetValueAsLong", &luna_wrapper_wxGridTableBase::_bind_SetValueAsLong},
	{"SetValueAsDouble", &luna_wrapper_wxGridTableBase::_bind_SetValueAsDouble},
	{"SetValueAsBool", &luna_wrapper_wxGridTableBase::_bind_SetValueAsBool},
	{"SetValueAsCustom", &luna_wrapper_wxGridTableBase::_bind_SetValueAsCustom},
	{"SetView", &luna_wrapper_wxGridTableBase::_bind_SetView},
	{"GetView", &luna_wrapper_wxGridTableBase::_bind_GetView},
	{"Clear", &luna_wrapper_wxGridTableBase::_bind_Clear},
	{"InsertRows", &luna_wrapper_wxGridTableBase::_bind_InsertRows},
	{"AppendRows", &luna_wrapper_wxGridTableBase::_bind_AppendRows},
	{"DeleteRows", &luna_wrapper_wxGridTableBase::_bind_DeleteRows},
	{"InsertCols", &luna_wrapper_wxGridTableBase::_bind_InsertCols},
	{"AppendCols", &luna_wrapper_wxGridTableBase::_bind_AppendCols},
	{"DeleteCols", &luna_wrapper_wxGridTableBase::_bind_DeleteCols},
	{"GetRowLabelValue", &luna_wrapper_wxGridTableBase::_bind_GetRowLabelValue},
	{"GetColLabelValue", &luna_wrapper_wxGridTableBase::_bind_GetColLabelValue},
	{"SetRowLabelValue", &luna_wrapper_wxGridTableBase::_bind_SetRowLabelValue},
	{"SetColLabelValue", &luna_wrapper_wxGridTableBase::_bind_SetColLabelValue},
	{"SetAttrProvider", &luna_wrapper_wxGridTableBase::_bind_SetAttrProvider},
	{"GetAttrProvider", &luna_wrapper_wxGridTableBase::_bind_GetAttrProvider},
	{"GetAttr", &luna_wrapper_wxGridTableBase::_bind_GetAttr},
	{"SetAttr", &luna_wrapper_wxGridTableBase::_bind_SetAttr},
	{"SetRowAttr", &luna_wrapper_wxGridTableBase::_bind_SetRowAttr},
	{"SetColAttr", &luna_wrapper_wxGridTableBase::_bind_SetColAttr},
	{"CanHaveAttributes", &luna_wrapper_wxGridTableBase::_bind_CanHaveAttributes},
	{"base_GetClassInfo", &luna_wrapper_wxGridTableBase::_bind_base_GetClassInfo},
	{"base_IsEmptyCell", &luna_wrapper_wxGridTableBase::_bind_base_IsEmptyCell},
	{"base_GetTypeName", &luna_wrapper_wxGridTableBase::_bind_base_GetTypeName},
	{"base_CanGetValueAs", &luna_wrapper_wxGridTableBase::_bind_base_CanGetValueAs},
	{"base_CanSetValueAs", &luna_wrapper_wxGridTableBase::_bind_base_CanSetValueAs},
	{"base_GetValueAsLong", &luna_wrapper_wxGridTableBase::_bind_base_GetValueAsLong},
	{"base_GetValueAsDouble", &luna_wrapper_wxGridTableBase::_bind_base_GetValueAsDouble},
	{"base_GetValueAsBool", &luna_wrapper_wxGridTableBase::_bind_base_GetValueAsBool},
	{"base_GetValueAsCustom", &luna_wrapper_wxGridTableBase::_bind_base_GetValueAsCustom},
	{"base_SetValueAsLong", &luna_wrapper_wxGridTableBase::_bind_base_SetValueAsLong},
	{"base_SetValueAsDouble", &luna_wrapper_wxGridTableBase::_bind_base_SetValueAsDouble},
	{"base_SetValueAsBool", &luna_wrapper_wxGridTableBase::_bind_base_SetValueAsBool},
	{"base_SetValueAsCustom", &luna_wrapper_wxGridTableBase::_bind_base_SetValueAsCustom},
	{"base_SetView", &luna_wrapper_wxGridTableBase::_bind_base_SetView},
	{"base_GetView", &luna_wrapper_wxGridTableBase::_bind_base_GetView},
	{"base_Clear", &luna_wrapper_wxGridTableBase::_bind_base_Clear},
	{"base_InsertRows", &luna_wrapper_wxGridTableBase::_bind_base_InsertRows},
	{"base_AppendRows", &luna_wrapper_wxGridTableBase::_bind_base_AppendRows},
	{"base_DeleteRows", &luna_wrapper_wxGridTableBase::_bind_base_DeleteRows},
	{"base_InsertCols", &luna_wrapper_wxGridTableBase::_bind_base_InsertCols},
	{"base_AppendCols", &luna_wrapper_wxGridTableBase::_bind_base_AppendCols},
	{"base_DeleteCols", &luna_wrapper_wxGridTableBase::_bind_base_DeleteCols},
	{"base_GetRowLabelValue", &luna_wrapper_wxGridTableBase::_bind_base_GetRowLabelValue},
	{"base_GetColLabelValue", &luna_wrapper_wxGridTableBase::_bind_base_GetColLabelValue},
	{"base_SetRowLabelValue", &luna_wrapper_wxGridTableBase::_bind_base_SetRowLabelValue},
	{"base_SetColLabelValue", &luna_wrapper_wxGridTableBase::_bind_base_SetColLabelValue},
	{"base_GetAttr", &luna_wrapper_wxGridTableBase::_bind_base_GetAttr},
	{"base_SetAttr", &luna_wrapper_wxGridTableBase::_bind_base_SetAttr},
	{"base_SetRowAttr", &luna_wrapper_wxGridTableBase::_bind_base_SetRowAttr},
	{"base_SetColAttr", &luna_wrapper_wxGridTableBase::_bind_base_SetColAttr},
	{"base_CanHaveAttributes", &luna_wrapper_wxGridTableBase::_bind_base_CanHaveAttributes},
	{"fromVoid", &luna_wrapper_wxGridTableBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridTableBase::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridTableBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridTableBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridTableBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridTableBase >::enumValues[] = {
	{0,0}
};


