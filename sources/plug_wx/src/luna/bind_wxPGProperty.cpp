#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPGProperty.h>

class luna_wrapper_wxPGProperty {
public:
	typedef Luna< wxPGProperty > luna_t;

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

		wxPGProperty* self= (wxPGProperty*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGProperty >::push(L,self,false);
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
		//wxPGProperty* ptr= dynamic_cast< wxPGProperty* >(Luna< wxObject >::check(L,1));
		wxPGProperty* ptr= luna_caster< wxObject, wxPGProperty >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGProperty >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnSetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValueFromString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueFromInt(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnMeasureImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnEvent(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoGetEditorClass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoGetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCellRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChoiceSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RefreshChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditorDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddChoice(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_wxDEPRECATED(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'void '
		////////////////////////////////////////////////////////////////////
		return true;
	}

	inline static bool _lg_typecheck_AddPrivateChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreChildrenComponents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ChangeFlag(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteChoice(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GenerateComposedValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAttribute(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttributeAsLong(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttributeAsDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnEditor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBaseName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCell_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCell_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetOrCreateCell(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildrenHeight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChoices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDisplayedString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditorClass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGrid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGridIfDisplayed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHelpString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndexInParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastVisibleSubItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMainParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPropertyByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValueImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValueAsString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValueType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasVisibleChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertChoice(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSomeParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsTextEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsValueUnspecified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Item(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshEditor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAutoUnspecified(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEditor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxPGEditor >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEditor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCell(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChoices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69274883) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChoiceSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlagRecursively(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHelpString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetModifiedStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParentalType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValidator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueToUnspecified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWasModified(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateParentValues(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UsesAutoUnspecified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnSetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnMeasureImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnEvent(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoGetEditorClass(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DoGetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetChoiceSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RefreshChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetValueAsString(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPGProperty::wxPGProperty()
	static wxPGProperty* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty::wxPGProperty() function, expected prototype:\nwxPGProperty::wxPGProperty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPGProperty();
	}

	// wxPGProperty::wxPGProperty(const wxString & label, const wxString & name)
	static wxPGProperty* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty::wxPGProperty(const wxString & label, const wxString & name) function, expected prototype:\nwxPGProperty::wxPGProperty(const wxString & label, const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,1),lua_objlen(L,1));
		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		return new wxPGProperty(label, name);
	}

	// wxPGProperty::wxPGProperty(lua_Table * data)
	static wxPGProperty* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty::wxPGProperty(lua_Table * data) function, expected prototype:\nwxPGProperty::wxPGProperty(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPGProperty(L,NULL);
	}

	// wxPGProperty::wxPGProperty(lua_Table * data, const wxString & label, const wxString & name)
	static wxPGProperty* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty::wxPGProperty(lua_Table * data, const wxString & label, const wxString & name) function, expected prototype:\nwxPGProperty::wxPGProperty(lua_Table * data, const wxString & label, const wxString & name)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxString name(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_wxPGProperty(L,NULL, label, name);
	}

	// Overload binder for wxPGProperty::wxPGProperty
	static wxPGProperty* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPGProperty, cannot match any of the overloads for function wxPGProperty:\n  wxPGProperty()\n  wxPGProperty(const wxString &, const wxString &)\n  wxPGProperty(lua_Table *)\n  wxPGProperty(lua_Table *, const wxString &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxPGProperty::OnSetValue()
	static int _bind_OnSetValue(lua_State *L) {
		if (!_lg_typecheck_OnSetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::OnSetValue() function, expected prototype:\nvoid wxPGProperty::OnSetValue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::OnSetValue(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnSetValue();

		return 0;
	}

	// bool wxPGProperty::SetValueFromString(const wxString & text, int flags = 0)
	static int _bind_SetValueFromString(lua_State *L) {
		if (!_lg_typecheck_SetValueFromString(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::SetValueFromString(const wxString & text, int flags = 0) function, expected prototype:\nbool wxPGProperty::SetValueFromString(const wxString & text, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::SetValueFromString(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetValueFromString(text, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::SetValueFromInt(long value, int flags = 0)
	static int _bind_SetValueFromInt(lua_State *L) {
		if (!_lg_typecheck_SetValueFromInt(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::SetValueFromInt(long value, int flags = 0) function, expected prototype:\nbool wxPGProperty::SetValueFromInt(long value, int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long value=(long)lua_tonumber(L,2);
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::SetValueFromInt(long, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetValueFromInt(value, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxPGProperty::OnMeasureImage(int item = -1) const
	static int _bind_OnMeasureImage(lua_State *L) {
		if (!_lg_typecheck_OnMeasureImage(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPGProperty::OnMeasureImage(int item = -1) const function, expected prototype:\nwxSize wxPGProperty::OnMeasureImage(int item = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int item=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPGProperty::OnMeasureImage(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->OnMeasureImage(item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPGProperty::OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event)
	static int _bind_OnEvent(lua_State *L) {
		if (!_lg_typecheck_OnEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event) function, expected prototype:\nbool wxPGProperty::OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGrid* propgrid=(Luna< wxObject >::checkSubType< wxPropertyGrid >(L,2));
		wxWindow* wnd_primary=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,4));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPGProperty::OnEvent function");
		}
		wxEvent & event=*event_ptr;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::OnEvent(wxPropertyGrid *, wxWindow *, wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnEvent(propgrid, wnd_primary, event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxPGEditor * wxPGProperty::DoGetEditorClass() const
	static int _bind_DoGetEditorClass(lua_State *L) {
		if (!_lg_typecheck_DoGetEditorClass(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGEditor * wxPGProperty::DoGetEditorClass() const function, expected prototype:\nconst wxPGEditor * wxPGProperty::DoGetEditorClass() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGEditor * wxPGProperty::DoGetEditorClass() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGEditor * lret = self->DoGetEditorClass();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGEditor >::push(L,lret,false);

		return 1;
	}

	// wxValidator * wxPGProperty::DoGetValidator() const
	static int _bind_DoGetValidator(lua_State *L) {
		if (!_lg_typecheck_DoGetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxPGProperty::DoGetValidator() const function, expected prototype:\nwxValidator * wxPGProperty::DoGetValidator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxPGProperty::DoGetValidator() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->DoGetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// wxPGCellRenderer * wxPGProperty::GetCellRenderer(int column) const
	static int _bind_GetCellRenderer(lua_State *L) {
		if (!_lg_typecheck_GetCellRenderer(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCellRenderer * wxPGProperty::GetCellRenderer(int column) const function, expected prototype:\nwxPGCellRenderer * wxPGProperty::GetCellRenderer(int column) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int column=(int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGCellRenderer * wxPGProperty::GetCellRenderer(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGCellRenderer * lret = self->GetCellRenderer(column);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCellRenderer >::push(L,lret,false);

		return 1;
	}

	// int wxPGProperty::GetChoiceSelection() const
	static int _bind_GetChoiceSelection(lua_State *L) {
		if (!_lg_typecheck_GetChoiceSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::GetChoiceSelection() const function, expected prototype:\nint wxPGProperty::GetChoiceSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::GetChoiceSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetChoiceSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPGProperty::RefreshChildren()
	static int _bind_RefreshChildren(lua_State *L) {
		if (!_lg_typecheck_RefreshChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::RefreshChildren() function, expected prototype:\nvoid wxPGProperty::RefreshChildren()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::RefreshChildren(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshChildren();

		return 0;
	}

	// wxPGEditorDialogAdapter * wxPGProperty::GetEditorDialog() const
	static int _bind_GetEditorDialog(lua_State *L) {
		if (!_lg_typecheck_GetEditorDialog(L)) {
			luaL_error(L, "luna typecheck failed in wxPGEditorDialogAdapter * wxPGProperty::GetEditorDialog() const function, expected prototype:\nwxPGEditorDialogAdapter * wxPGProperty::GetEditorDialog() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGEditorDialogAdapter * wxPGProperty::GetEditorDialog() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGEditorDialogAdapter * lret = self->GetEditorDialog();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGEditorDialogAdapter >::push(L,lret,false);

		return 1;
	}

	// int wxPGProperty::AddChoice(const wxString & label, int value = wxPG_INVALID_VALUE)
	static int _bind_AddChoice(lua_State *L) {
		if (!_lg_typecheck_AddChoice(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::AddChoice(const wxString & label, int value = wxPG_INVALID_VALUE) function, expected prototype:\nint wxPGProperty::AddChoice(const wxString & label, int value = wxPG_INVALID_VALUE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		int value=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxPG_INVALID_VALUE;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::AddChoice(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AddChoice(label, value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty::wxDEPRECATED(void  AddChild)
	static int _bind_wxDEPRECATED(lua_State *L) {
		if (!_lg_typecheck_wxDEPRECATED(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty::wxDEPRECATED(void  AddChild) function, expected prototype:\nwxPGProperty::wxDEPRECATED(void  AddChild)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		////////////////////////////////////////////////////////////////////
		// ERROR: Cannot decide the argument type for 'void ' baseTypeName is 'void '
		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		// ERROR: Invalid return type object for function 'wxPGProperty::wxDEPRECATED'
		////////////////////////////////////////////////////////////////////
		return 0;
	}

	// void wxPGProperty::AddPrivateChild(wxPGProperty * prop)
	static int _bind_AddPrivateChild(lua_State *L) {
		if (!_lg_typecheck_AddPrivateChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::AddPrivateChild(wxPGProperty * prop) function, expected prototype:\nvoid wxPGProperty::AddPrivateChild(wxPGProperty * prop)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* prop=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::AddPrivateChild(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddPrivateChild(prop);

		return 0;
	}

	// wxPGProperty * wxPGProperty::AppendChild(wxPGProperty * childProperty)
	static int _bind_AppendChild(lua_State *L) {
		if (!_lg_typecheck_AppendChild(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::AppendChild(wxPGProperty * childProperty) function, expected prototype:\nwxPGProperty * wxPGProperty::AppendChild(wxPGProperty * childProperty)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* childProperty=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::AppendChild(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->AppendChild(childProperty);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// bool wxPGProperty::AreChildrenComponents() const
	static int _bind_AreChildrenComponents(lua_State *L) {
		if (!_lg_typecheck_AreChildrenComponents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::AreChildrenComponents() const function, expected prototype:\nbool wxPGProperty::AreChildrenComponents() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::AreChildrenComponents() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AreChildrenComponents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPGProperty::ChangeFlag(wxPGPropertyFlags flag, bool set)
	static int _bind_ChangeFlag(lua_State *L) {
		if (!_lg_typecheck_ChangeFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::ChangeFlag(wxPGPropertyFlags flag, bool set) function, expected prototype:\nvoid wxPGProperty::ChangeFlag(wxPGPropertyFlags flag, bool set)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGPropertyFlags flag=(wxPGPropertyFlags)lua_tointeger(L,2);
		bool set=(bool)(lua_toboolean(L,3)==1);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::ChangeFlag(wxPGPropertyFlags, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ChangeFlag(flag, set);

		return 0;
	}

	// void wxPGProperty::DeleteChildren()
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::DeleteChildren() function, expected prototype:\nvoid wxPGProperty::DeleteChildren()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::DeleteChildren(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteChildren();

		return 0;
	}

	// void wxPGProperty::DeleteChoice(int index)
	static int _bind_DeleteChoice(lua_State *L) {
		if (!_lg_typecheck_DeleteChoice(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::DeleteChoice(int index) function, expected prototype:\nvoid wxPGProperty::DeleteChoice(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::DeleteChoice(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteChoice(index);

		return 0;
	}

	// void wxPGProperty::Enable(bool enable = true)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::Enable(bool enable = true) function, expected prototype:\nvoid wxPGProperty::Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Enable(enable);

		return 0;
	}

	// wxString wxPGProperty::GenerateComposedValue() const
	static int _bind_GenerateComposedValue(lua_State *L) {
		if (!_lg_typecheck_GenerateComposedValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::GenerateComposedValue() const function, expected prototype:\nwxString wxPGProperty::GenerateComposedValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::GenerateComposedValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GenerateComposedValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxPGProperty::GetAttribute(const wxString & name, const wxString & defVal) const
	static int _bind_GetAttribute(lua_State *L) {
		if (!_lg_typecheck_GetAttribute(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::GetAttribute(const wxString & name, const wxString & defVal) const function, expected prototype:\nwxString wxPGProperty::GetAttribute(const wxString & name, const wxString & defVal) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString defVal(lua_tostring(L,3),lua_objlen(L,3));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::GetAttribute(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetAttribute(name, defVal);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxPGProperty::GetAttributeAsLong(const wxString & name, long defVal) const
	static int _bind_GetAttributeAsLong(lua_State *L) {
		if (!_lg_typecheck_GetAttributeAsLong(L)) {
			luaL_error(L, "luna typecheck failed in long wxPGProperty::GetAttributeAsLong(const wxString & name, long defVal) const function, expected prototype:\nlong wxPGProperty::GetAttributeAsLong(const wxString & name, long defVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		long defVal=(long)lua_tonumber(L,3);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxPGProperty::GetAttributeAsLong(const wxString &, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetAttributeAsLong(name, defVal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxPGProperty::GetAttributeAsDouble(const wxString & name, double defVal) const
	static int _bind_GetAttributeAsDouble(lua_State *L) {
		if (!_lg_typecheck_GetAttributeAsDouble(L)) {
			luaL_error(L, "luna typecheck failed in double wxPGProperty::GetAttributeAsDouble(const wxString & name, double defVal) const function, expected prototype:\ndouble wxPGProperty::GetAttributeAsDouble(const wxString & name, double defVal) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		double defVal=(double)lua_tonumber(L,3);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxPGProperty::GetAttributeAsDouble(const wxString &, double) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetAttributeAsDouble(name, defVal);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxPGEditor * wxPGProperty::GetColumnEditor(int column) const
	static int _bind_GetColumnEditor(lua_State *L) {
		if (!_lg_typecheck_GetColumnEditor(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGEditor * wxPGProperty::GetColumnEditor(int column) const function, expected prototype:\nconst wxPGEditor * wxPGProperty::GetColumnEditor(int column) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int column=(int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGEditor * wxPGProperty::GetColumnEditor(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGEditor * lret = self->GetColumnEditor(column);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGEditor >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxPGProperty::GetBaseName() const
	static int _bind_GetBaseName(lua_State *L) {
		if (!_lg_typecheck_GetBaseName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPGProperty::GetBaseName() const function, expected prototype:\nconst wxString & wxPGProperty::GetBaseName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPGProperty::GetBaseName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetBaseName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxPGCell & wxPGProperty::GetCell(unsigned int column) const
	static int _bind_GetCell_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetCell_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGCell & wxPGProperty::GetCell(unsigned int column) const function, expected prototype:\nconst wxPGCell & wxPGProperty::GetCell(unsigned int column) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int column=(unsigned int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGCell & wxPGProperty::GetCell(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGCell* lret = &self->GetCell(column);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCell >::push(L,lret,false);

		return 1;
	}

	// wxPGCell & wxPGProperty::GetCell(unsigned int column)
	static int _bind_GetCell_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetCell_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell & wxPGProperty::GetCell(unsigned int column) function, expected prototype:\nwxPGCell & wxPGProperty::GetCell(unsigned int column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int column=(unsigned int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGCell & wxPGProperty::GetCell(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGCell* lret = &self->GetCell(column);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCell >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPGProperty::GetCell
	static int _bind_GetCell(lua_State *L) {
		if (_lg_typecheck_GetCell_overload_1(L)) return _bind_GetCell_overload_1(L);
		if (_lg_typecheck_GetCell_overload_2(L)) return _bind_GetCell_overload_2(L);

		luaL_error(L, "error in function GetCell, cannot match any of the overloads for function GetCell:\n  GetCell(unsigned int)\n  GetCell(unsigned int)\n");
		return 0;
	}

	// wxPGCell & wxPGProperty::GetOrCreateCell(unsigned int column)
	static int _bind_GetOrCreateCell(lua_State *L) {
		if (!_lg_typecheck_GetOrCreateCell(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell & wxPGProperty::GetOrCreateCell(unsigned int column) function, expected prototype:\nwxPGCell & wxPGProperty::GetOrCreateCell(unsigned int column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int column=(unsigned int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGCell & wxPGProperty::GetOrCreateCell(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGCell* lret = &self->GetOrCreateCell(column);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCell >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxPGProperty::GetChildCount() const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPGProperty::GetChildCount() const function, expected prototype:\nunsigned int wxPGProperty::GetChildCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPGProperty::GetChildCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetChildCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPGProperty::GetChildrenHeight(int lh, int iMax = -1) const
	static int _bind_GetChildrenHeight(lua_State *L) {
		if (!_lg_typecheck_GetChildrenHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::GetChildrenHeight(int lh, int iMax = -1) const function, expected prototype:\nint wxPGProperty::GetChildrenHeight(int lh, int iMax = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int lh=(int)lua_tointeger(L,2);
		int iMax=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::GetChildrenHeight(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetChildrenHeight(lh, iMax);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxPGChoices & wxPGProperty::GetChoices() const
	static int _bind_GetChoices(lua_State *L) {
		if (!_lg_typecheck_GetChoices(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGChoices & wxPGProperty::GetChoices() const function, expected prototype:\nconst wxPGChoices & wxPGProperty::GetChoices() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGChoices & wxPGProperty::GetChoices() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGChoices* lret = &self->GetChoices();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGChoices >::push(L,lret,false);

		return 1;
	}

	// void * wxPGProperty::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxPGProperty::GetClientData() const function, expected prototype:\nvoid * wxPGProperty::GetClientData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxPGProperty::GetClientData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxClientData * wxPGProperty::GetClientObject() const
	static int _bind_GetClientObject(lua_State *L) {
		if (!_lg_typecheck_GetClientObject(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData * wxPGProperty::GetClientObject() const function, expected prototype:\nwxClientData * wxPGProperty::GetClientObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClientData * wxPGProperty::GetClientObject() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClientData * lret = self->GetClientObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// wxString wxPGProperty::GetDisplayedString() const
	static int _bind_GetDisplayedString(lua_State *L) {
		if (!_lg_typecheck_GetDisplayedString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::GetDisplayedString() const function, expected prototype:\nwxString wxPGProperty::GetDisplayedString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::GetDisplayedString() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDisplayedString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxPGEditor * wxPGProperty::GetEditorClass() const
	static int _bind_GetEditorClass(lua_State *L) {
		if (!_lg_typecheck_GetEditorClass(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGEditor * wxPGProperty::GetEditorClass() const function, expected prototype:\nconst wxPGEditor * wxPGProperty::GetEditorClass() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGEditor * wxPGProperty::GetEditorClass() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGEditor * lret = self->GetEditorClass();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGEditor >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxPGProperty::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPGProperty::GetFlags() const function, expected prototype:\nunsigned int wxPGProperty::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPGProperty::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGrid * wxPGProperty::GetGrid() const
	static int _bind_GetGrid(lua_State *L) {
		if (!_lg_typecheck_GetGrid(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid * wxPGProperty::GetGrid() const function, expected prototype:\nwxPropertyGrid * wxPGProperty::GetGrid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGrid * wxPGProperty::GetGrid() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGrid * lret = self->GetGrid();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGrid >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGrid * wxPGProperty::GetGridIfDisplayed() const
	static int _bind_GetGridIfDisplayed(lua_State *L) {
		if (!_lg_typecheck_GetGridIfDisplayed(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid * wxPGProperty::GetGridIfDisplayed() const function, expected prototype:\nwxPropertyGrid * wxPGProperty::GetGridIfDisplayed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGrid * wxPGProperty::GetGridIfDisplayed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGrid * lret = self->GetGridIfDisplayed();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGrid >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxPGProperty::GetHelpString() const
	static int _bind_GetHelpString(lua_State *L) {
		if (!_lg_typecheck_GetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPGProperty::GetHelpString() const function, expected prototype:\nconst wxString & wxPGProperty::GetHelpString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPGProperty::GetHelpString() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetHelpString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int wxPGProperty::GetIndexInParent() const
	static int _bind_GetIndexInParent(lua_State *L) {
		if (!_lg_typecheck_GetIndexInParent(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPGProperty::GetIndexInParent() const function, expected prototype:\nunsigned int wxPGProperty::GetIndexInParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPGProperty::GetIndexInParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetIndexInParent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxPGProperty::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPGProperty::GetLabel() const function, expected prototype:\nconst wxString & wxPGProperty::GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPGProperty::GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxPGProperty * wxPGProperty::GetLastVisibleSubItem() const
	static int _bind_GetLastVisibleSubItem(lua_State *L) {
		if (!_lg_typecheck_GetLastVisibleSubItem(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGProperty * wxPGProperty::GetLastVisibleSubItem() const function, expected prototype:\nconst wxPGProperty * wxPGProperty::GetLastVisibleSubItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGProperty * wxPGProperty::GetLastVisibleSubItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGProperty * lret = self->GetLastVisibleSubItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPGProperty::GetMainParent() const
	static int _bind_GetMainParent(lua_State *L) {
		if (!_lg_typecheck_GetMainParent(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::GetMainParent() const function, expected prototype:\nwxPGProperty * wxPGProperty::GetMainParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::GetMainParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetMainParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPGProperty::GetMaxLength() const
	static int _bind_GetMaxLength(lua_State *L) {
		if (!_lg_typecheck_GetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::GetMaxLength() const function, expected prototype:\nint wxPGProperty::GetMaxLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::GetMaxLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMaxLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxPGProperty::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::GetName() const function, expected prototype:\nwxString wxPGProperty::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPGProperty * wxPGProperty::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::GetParent() const function, expected prototype:\nwxPGProperty * wxPGProperty::GetParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::GetParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPGProperty::GetPropertyByName(const wxString & name) const
	static int _bind_GetPropertyByName(lua_State *L) {
		if (!_lg_typecheck_GetPropertyByName(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::GetPropertyByName(const wxString & name) const function, expected prototype:\nwxPGProperty * wxPGProperty::GetPropertyByName(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::GetPropertyByName(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetPropertyByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxValidator * wxPGProperty::GetValidator() const
	static int _bind_GetValidator(lua_State *L) {
		if (!_lg_typecheck_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxPGProperty::GetValidator() const function, expected prototype:\nwxValidator * wxPGProperty::GetValidator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxPGProperty::GetValidator() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// wxBitmap * wxPGProperty::GetValueImage() const
	static int _bind_GetValueImage(lua_State *L) {
		if (!_lg_typecheck_GetValueImage(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap * wxPGProperty::GetValueImage() const function, expected prototype:\nwxBitmap * wxPGProperty::GetValueImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap * wxPGProperty::GetValueImage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap * lret = self->GetValueImage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxString wxPGProperty::GetValueAsString(int argFlags = 0) const
	static int _bind_GetValueAsString(lua_State *L) {
		if (!_lg_typecheck_GetValueAsString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::GetValueAsString(int argFlags = 0) const function, expected prototype:\nwxString wxPGProperty::GetValueAsString(int argFlags = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int argFlags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::GetValueAsString(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetValueAsString(argFlags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxPGProperty::GetValueType() const
	static int _bind_GetValueType(lua_State *L) {
		if (!_lg_typecheck_GetValueType(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::GetValueType() const function, expected prototype:\nwxString wxPGProperty::GetValueType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::GetValueType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetValueType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxPGProperty::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::GetY() const function, expected prototype:\nint wxPGProperty::GetY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::GetY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxPGProperty::HasFlag(wxPGPropertyFlags flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPGProperty::HasFlag(wxPGPropertyFlags flag) const function, expected prototype:\nunsigned int wxPGProperty::HasFlag(wxPGPropertyFlags flag) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGPropertyFlags flag=(wxPGPropertyFlags)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPGProperty::HasFlag(wxPGPropertyFlags) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->HasFlag(flag);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPGProperty::HasVisibleChildren() const
	static int _bind_HasVisibleChildren(lua_State *L) {
		if (!_lg_typecheck_HasVisibleChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::HasVisibleChildren() const function, expected prototype:\nbool wxPGProperty::HasVisibleChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::HasVisibleChildren() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasVisibleChildren();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::Hide(bool hide, int flags = ::wxPG_RECURSE)
	static int _bind_Hide(lua_State *L) {
		if (!_lg_typecheck_Hide(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::Hide(bool hide, int flags = ::wxPG_RECURSE) function, expected prototype:\nbool wxPGProperty::Hide(bool hide, int flags = ::wxPG_RECURSE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hide=(bool)(lua_toboolean(L,2)==1);
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPG_RECURSE;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::Hide(bool, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hide(hide, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxPGProperty::Index(const wxPGProperty * p) const
	static int _bind_Index(lua_State *L) {
		if (!_lg_typecheck_Index(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::Index(const wxPGProperty * p) const function, expected prototype:\nint wxPGProperty::Index(const wxPGProperty * p) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGProperty* p=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::Index(const wxPGProperty *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Index(p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPGProperty::InsertChild(int index, wxPGProperty * childProperty)
	static int _bind_InsertChild(lua_State *L) {
		if (!_lg_typecheck_InsertChild(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::InsertChild(int index, wxPGProperty * childProperty) function, expected prototype:\nwxPGProperty * wxPGProperty::InsertChild(int index, wxPGProperty * childProperty)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		wxPGProperty* childProperty=(Luna< wxObject >::checkSubType< wxPGProperty >(L,3));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::InsertChild(int, wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->InsertChild(index, childProperty);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPGProperty::InsertChoice(const wxString & label, int index, int value = wxPG_INVALID_VALUE)
	static int _bind_InsertChoice(lua_State *L) {
		if (!_lg_typecheck_InsertChoice(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::InsertChoice(const wxString & label, int index, int value = wxPG_INVALID_VALUE) function, expected prototype:\nint wxPGProperty::InsertChoice(const wxString & label, int index, int value = wxPG_INVALID_VALUE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		int index=(int)lua_tointeger(L,3);
		int value=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxPG_INVALID_VALUE;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::InsertChoice(const wxString &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->InsertChoice(label, index, value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPGProperty::IsCategory() const
	static int _bind_IsCategory(lua_State *L) {
		if (!_lg_typecheck_IsCategory(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsCategory() const function, expected prototype:\nbool wxPGProperty::IsCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsCategory();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsEnabled() const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsEnabled() const function, expected prototype:\nbool wxPGProperty::IsEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsExpanded() const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsExpanded() const function, expected prototype:\nbool wxPGProperty::IsExpanded() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsExpanded() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExpanded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsRoot() const
	static int _bind_IsRoot(lua_State *L) {
		if (!_lg_typecheck_IsRoot(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsRoot() const function, expected prototype:\nbool wxPGProperty::IsRoot() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsRoot() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRoot();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsSomeParent(wxPGProperty * candidateParent) const
	static int _bind_IsSomeParent(lua_State *L) {
		if (!_lg_typecheck_IsSomeParent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsSomeParent(wxPGProperty * candidateParent) const function, expected prototype:\nbool wxPGProperty::IsSomeParent(wxPGProperty * candidateParent) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* candidateParent=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsSomeParent(wxPGProperty *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSomeParent(candidateParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsTextEditable() const
	static int _bind_IsTextEditable(lua_State *L) {
		if (!_lg_typecheck_IsTextEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsTextEditable() const function, expected prototype:\nbool wxPGProperty::IsTextEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsTextEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsTextEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsValueUnspecified() const
	static int _bind_IsValueUnspecified(lua_State *L) {
		if (!_lg_typecheck_IsValueUnspecified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsValueUnspecified() const function, expected prototype:\nbool wxPGProperty::IsValueUnspecified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsValueUnspecified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValueUnspecified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPGProperty::IsVisible() const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::IsVisible() const function, expected prototype:\nbool wxPGProperty::IsVisible() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::IsVisible() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsVisible();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPGProperty * wxPGProperty::Item(unsigned int i) const
	static int _bind_Item(lua_State *L) {
		if (!_lg_typecheck_Item(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::Item(unsigned int i) const function, expected prototype:\nwxPGProperty * wxPGProperty::Item(unsigned int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int i=(unsigned int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::Item(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->Item(i);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// void wxPGProperty::RefreshEditor()
	static int _bind_RefreshEditor(lua_State *L) {
		if (!_lg_typecheck_RefreshEditor(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::RefreshEditor() function, expected prototype:\nvoid wxPGProperty::RefreshEditor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::RefreshEditor(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshEditor();

		return 0;
	}

	// void wxPGProperty::SetAutoUnspecified(bool enable = true)
	static int _bind_SetAutoUnspecified(lua_State *L) {
		if (!_lg_typecheck_SetAutoUnspecified(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetAutoUnspecified(bool enable = true) function, expected prototype:\nvoid wxPGProperty::SetAutoUnspecified(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetAutoUnspecified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAutoUnspecified(enable);

		return 0;
	}

	// void wxPGProperty::SetBackgroundColour(const wxColour & colour, int flags = ::wxPG_RECURSE)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetBackgroundColour(const wxColour & colour, int flags = ::wxPG_RECURSE) function, expected prototype:\nvoid wxPGProperty::SetBackgroundColour(const wxColour & colour, int flags = ::wxPG_RECURSE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPGProperty::SetBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPG_RECURSE;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetBackgroundColour(const wxColour &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(colour, flags);

		return 0;
	}

	// void wxPGProperty::SetEditor(const wxPGEditor * editor)
	static int _bind_SetEditor_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetEditor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetEditor(const wxPGEditor * editor) function, expected prototype:\nvoid wxPGProperty::SetEditor(const wxPGEditor * editor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGEditor* editor=(Luna< wxObject >::checkSubType< wxPGEditor >(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetEditor(const wxPGEditor *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEditor(editor);

		return 0;
	}

	// void wxPGProperty::SetEditor(const wxString & editorName)
	static int _bind_SetEditor_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetEditor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetEditor(const wxString & editorName) function, expected prototype:\nvoid wxPGProperty::SetEditor(const wxString & editorName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString editorName(lua_tostring(L,2),lua_objlen(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetEditor(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEditor(editorName);

		return 0;
	}

	// Overload binder for wxPGProperty::SetEditor
	static int _bind_SetEditor(lua_State *L) {
		if (_lg_typecheck_SetEditor_overload_1(L)) return _bind_SetEditor_overload_1(L);
		if (_lg_typecheck_SetEditor_overload_2(L)) return _bind_SetEditor_overload_2(L);

		luaL_error(L, "error in function SetEditor, cannot match any of the overloads for function SetEditor:\n  SetEditor(const wxPGEditor *)\n  SetEditor(const wxString &)\n");
		return 0;
	}

	// void wxPGProperty::SetCell(int column, const wxPGCell & cell)
	static int _bind_SetCell(lua_State *L) {
		if (!_lg_typecheck_SetCell(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetCell(int column, const wxPGCell & cell) function, expected prototype:\nvoid wxPGProperty::SetCell(int column, const wxPGCell & cell)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int column=(int)lua_tointeger(L,2);
		const wxPGCell* cell_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxPGProperty::SetCell function");
		}
		const wxPGCell & cell=*cell_ptr;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetCell(int, const wxPGCell &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCell(column, cell);

		return 0;
	}

	// bool wxPGProperty::SetChoices(wxPGChoices & choices)
	static int _bind_SetChoices(lua_State *L) {
		if (!_lg_typecheck_SetChoices(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::SetChoices(wxPGChoices & choices) function, expected prototype:\nbool wxPGProperty::SetChoices(wxPGChoices & choices)\nClass arguments details:\narg 1 ID = 69274883\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGChoices* choices_ptr=(Luna< wxPGChoices >::check(L,2));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxPGProperty::SetChoices function");
		}
		wxPGChoices & choices=*choices_ptr;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::SetChoices(wxPGChoices &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetChoices(choices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPGProperty::SetClientData(void * clientData)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetClientData(void * clientData) function, expected prototype:\nvoid wxPGProperty::SetClientData(void * clientData)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* clientData=(Luna< void >::check(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetClientData(void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientData(clientData);

		return 0;
	}

	// void wxPGProperty::SetClientObject(wxClientData * clientObject)
	static int _bind_SetClientObject(lua_State *L) {
		if (!_lg_typecheck_SetClientObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetClientObject(wxClientData * clientObject) function, expected prototype:\nvoid wxPGProperty::SetClientObject(wxClientData * clientObject)\nClass arguments details:\narg 1 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		wxClientData* clientObject=(Luna< wxClientData >::check(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetClientObject(wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientObject(clientObject);

		return 0;
	}

	// void wxPGProperty::SetChoiceSelection(int newValue)
	static int _bind_SetChoiceSelection(lua_State *L) {
		if (!_lg_typecheck_SetChoiceSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetChoiceSelection(int newValue) function, expected prototype:\nvoid wxPGProperty::SetChoiceSelection(int newValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int newValue=(int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetChoiceSelection(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetChoiceSelection(newValue);

		return 0;
	}

	// void wxPGProperty::SetFlagRecursively(wxPGPropertyFlags flag, bool set)
	static int _bind_SetFlagRecursively(lua_State *L) {
		if (!_lg_typecheck_SetFlagRecursively(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetFlagRecursively(wxPGPropertyFlags flag, bool set) function, expected prototype:\nvoid wxPGProperty::SetFlagRecursively(wxPGPropertyFlags flag, bool set)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGPropertyFlags flag=(wxPGPropertyFlags)lua_tointeger(L,2);
		bool set=(bool)(lua_toboolean(L,3)==1);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetFlagRecursively(wxPGPropertyFlags, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlagRecursively(flag, set);

		return 0;
	}

	// void wxPGProperty::SetHelpString(const wxString & helpString)
	static int _bind_SetHelpString(lua_State *L) {
		if (!_lg_typecheck_SetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetHelpString(const wxString & helpString) function, expected prototype:\nvoid wxPGProperty::SetHelpString(const wxString & helpString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString helpString(lua_tostring(L,2),lua_objlen(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetHelpString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHelpString(helpString);

		return 0;
	}

	// void wxPGProperty::SetLabel(const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetLabel(const wxString & label) function, expected prototype:\nvoid wxPGProperty::SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabel(label);

		return 0;
	}

	// bool wxPGProperty::SetMaxLength(int maxLen)
	static int _bind_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_SetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::SetMaxLength(int maxLen) function, expected prototype:\nbool wxPGProperty::SetMaxLength(int maxLen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maxLen=(int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::SetMaxLength(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetMaxLength(maxLen);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPGProperty::SetModifiedStatus(bool modified)
	static int _bind_SetModifiedStatus(lua_State *L) {
		if (!_lg_typecheck_SetModifiedStatus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetModifiedStatus(bool modified) function, expected prototype:\nvoid wxPGProperty::SetModifiedStatus(bool modified)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetModifiedStatus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetModifiedStatus(modified);

		return 0;
	}

	// void wxPGProperty::SetName(const wxString & newName)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetName(const wxString & newName) function, expected prototype:\nvoid wxPGProperty::SetName(const wxString & newName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString newName(lua_tostring(L,2),lua_objlen(L,2));

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(newName);

		return 0;
	}

	// void wxPGProperty::SetParentalType(int flag)
	static int _bind_SetParentalType(lua_State *L) {
		if (!_lg_typecheck_SetParentalType(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetParentalType(int flag) function, expected prototype:\nvoid wxPGProperty::SetParentalType(int flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetParentalType(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParentalType(flag);

		return 0;
	}

	// void wxPGProperty::SetTextColour(const wxColour & colour, int flags = ::wxPG_RECURSE)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetTextColour(const wxColour & colour, int flags = ::wxPG_RECURSE) function, expected prototype:\nvoid wxPGProperty::SetTextColour(const wxColour & colour, int flags = ::wxPG_RECURSE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPGProperty::SetTextColour function");
		}
		const wxColour & colour=*colour_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPG_RECURSE;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetTextColour(const wxColour &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(colour, flags);

		return 0;
	}

	// void wxPGProperty::SetValidator(const wxValidator & validator)
	static int _bind_SetValidator(lua_State *L) {
		if (!_lg_typecheck_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxPGProperty::SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxPGProperty::SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValidator(validator);

		return 0;
	}

	// void wxPGProperty::SetValueImage(wxBitmap & bmp)
	static int _bind_SetValueImage(lua_State *L) {
		if (!_lg_typecheck_SetValueImage(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetValueImage(wxBitmap & bmp) function, expected prototype:\nvoid wxPGProperty::SetValueImage(wxBitmap & bmp)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* bmp_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxPGProperty::SetValueImage function");
		}
		wxBitmap & bmp=*bmp_ptr;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetValueImage(wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueImage(bmp);

		return 0;
	}

	// void wxPGProperty::SetValueToUnspecified()
	static int _bind_SetValueToUnspecified(lua_State *L) {
		if (!_lg_typecheck_SetValueToUnspecified(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetValueToUnspecified() function, expected prototype:\nvoid wxPGProperty::SetValueToUnspecified()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetValueToUnspecified(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueToUnspecified();

		return 0;
	}

	// void wxPGProperty::SetWasModified(bool set = true)
	static int _bind_SetWasModified(lua_State *L) {
		if (!_lg_typecheck_SetWasModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::SetWasModified(bool set = true) function, expected prototype:\nvoid wxPGProperty::SetWasModified(bool set = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool set=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::SetWasModified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWasModified(set);

		return 0;
	}

	// wxPGProperty * wxPGProperty::UpdateParentValues()
	static int _bind_UpdateParentValues(lua_State *L) {
		if (!_lg_typecheck_UpdateParentValues(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPGProperty::UpdateParentValues() function, expected prototype:\nwxPGProperty * wxPGProperty::UpdateParentValues()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPGProperty::UpdateParentValues(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->UpdateParentValues();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// bool wxPGProperty::UsesAutoUnspecified() const
	static int _bind_UsesAutoUnspecified(lua_State *L) {
		if (!_lg_typecheck_UsesAutoUnspecified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::UsesAutoUnspecified() const function, expected prototype:\nbool wxPGProperty::UsesAutoUnspecified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::UsesAutoUnspecified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UsesAutoUnspecified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxPGProperty::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPGProperty::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPGProperty::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPGProperty::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPGProperty::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxPGProperty::base_OnSetValue()
	static int _bind_base_OnSetValue(lua_State *L) {
		if (!_lg_typecheck_base_OnSetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::base_OnSetValue() function, expected prototype:\nvoid wxPGProperty::base_OnSetValue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::base_OnSetValue(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGProperty::OnSetValue();

		return 0;
	}

	// wxSize wxPGProperty::base_OnMeasureImage(int item = -1) const
	static int _bind_base_OnMeasureImage(lua_State *L) {
		if (!_lg_typecheck_base_OnMeasureImage(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPGProperty::base_OnMeasureImage(int item = -1) const function, expected prototype:\nwxSize wxPGProperty::base_OnMeasureImage(int item = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int item=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPGProperty::base_OnMeasureImage(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPGProperty::OnMeasureImage(item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPGProperty::base_OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event)
	static int _bind_base_OnEvent(lua_State *L) {
		if (!_lg_typecheck_base_OnEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGProperty::base_OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event) function, expected prototype:\nbool wxPGProperty::base_OnEvent(wxPropertyGrid * propgrid, wxWindow * wnd_primary, wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGrid* propgrid=(Luna< wxObject >::checkSubType< wxPropertyGrid >(L,2));
		wxWindow* wnd_primary=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,4));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPGProperty::base_OnEvent function");
		}
		wxEvent & event=*event_ptr;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGProperty::base_OnEvent(wxPropertyGrid *, wxWindow *, wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPGProperty::OnEvent(propgrid, wnd_primary, event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxPGEditor * wxPGProperty::base_DoGetEditorClass() const
	static int _bind_base_DoGetEditorClass(lua_State *L) {
		if (!_lg_typecheck_base_DoGetEditorClass(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGEditor * wxPGProperty::base_DoGetEditorClass() const function, expected prototype:\nconst wxPGEditor * wxPGProperty::base_DoGetEditorClass() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGEditor * wxPGProperty::base_DoGetEditorClass() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGEditor * lret = self->wxPGProperty::DoGetEditorClass();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGEditor >::push(L,lret,false);

		return 1;
	}

	// wxValidator * wxPGProperty::base_DoGetValidator() const
	static int _bind_base_DoGetValidator(lua_State *L) {
		if (!_lg_typecheck_base_DoGetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxPGProperty::base_DoGetValidator() const function, expected prototype:\nwxValidator * wxPGProperty::base_DoGetValidator() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxPGProperty::base_DoGetValidator() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxPGProperty::DoGetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// int wxPGProperty::base_GetChoiceSelection() const
	static int _bind_base_GetChoiceSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetChoiceSelection(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGProperty::base_GetChoiceSelection() const function, expected prototype:\nint wxPGProperty::base_GetChoiceSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGProperty::base_GetChoiceSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPGProperty::GetChoiceSelection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPGProperty::base_RefreshChildren()
	static int _bind_base_RefreshChildren(lua_State *L) {
		if (!_lg_typecheck_base_RefreshChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGProperty::base_RefreshChildren() function, expected prototype:\nvoid wxPGProperty::base_RefreshChildren()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGProperty::base_RefreshChildren(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPGProperty::RefreshChildren();

		return 0;
	}

	// wxString wxPGProperty::base_GetValueAsString(int argFlags = 0) const
	static int _bind_base_GetValueAsString(lua_State *L) {
		if (!_lg_typecheck_base_GetValueAsString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPGProperty::base_GetValueAsString(int argFlags = 0) const function, expected prototype:\nwxString wxPGProperty::base_GetValueAsString(int argFlags = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int argFlags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPGProperty* self=Luna< wxObject >::checkSubType< wxPGProperty >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPGProperty::base_GetValueAsString(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPGProperty::GetValueAsString(argFlags);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxPGProperty* LunaTraits< wxPGProperty >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGProperty::_bind_ctor(L);
}

void LunaTraits< wxPGProperty >::_bind_dtor(wxPGProperty* obj) {
	delete obj;
}

const char LunaTraits< wxPGProperty >::className[] = "wxPGProperty";
const char LunaTraits< wxPGProperty >::fullName[] = "wxPGProperty";
const char LunaTraits< wxPGProperty >::moduleName[] = "wx";
const char* LunaTraits< wxPGProperty >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPGProperty >::hash = 93041770;
const int LunaTraits< wxPGProperty >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPGProperty >::methods[] = {
	{"OnSetValue", &luna_wrapper_wxPGProperty::_bind_OnSetValue},
	{"SetValueFromString", &luna_wrapper_wxPGProperty::_bind_SetValueFromString},
	{"SetValueFromInt", &luna_wrapper_wxPGProperty::_bind_SetValueFromInt},
	{"OnMeasureImage", &luna_wrapper_wxPGProperty::_bind_OnMeasureImage},
	{"OnEvent", &luna_wrapper_wxPGProperty::_bind_OnEvent},
	{"DoGetEditorClass", &luna_wrapper_wxPGProperty::_bind_DoGetEditorClass},
	{"DoGetValidator", &luna_wrapper_wxPGProperty::_bind_DoGetValidator},
	{"GetCellRenderer", &luna_wrapper_wxPGProperty::_bind_GetCellRenderer},
	{"GetChoiceSelection", &luna_wrapper_wxPGProperty::_bind_GetChoiceSelection},
	{"RefreshChildren", &luna_wrapper_wxPGProperty::_bind_RefreshChildren},
	{"GetEditorDialog", &luna_wrapper_wxPGProperty::_bind_GetEditorDialog},
	{"AddChoice", &luna_wrapper_wxPGProperty::_bind_AddChoice},
	{"wxDEPRECATED", &luna_wrapper_wxPGProperty::_bind_wxDEPRECATED},
	{"AddPrivateChild", &luna_wrapper_wxPGProperty::_bind_AddPrivateChild},
	{"AppendChild", &luna_wrapper_wxPGProperty::_bind_AppendChild},
	{"AreChildrenComponents", &luna_wrapper_wxPGProperty::_bind_AreChildrenComponents},
	{"ChangeFlag", &luna_wrapper_wxPGProperty::_bind_ChangeFlag},
	{"DeleteChildren", &luna_wrapper_wxPGProperty::_bind_DeleteChildren},
	{"DeleteChoice", &luna_wrapper_wxPGProperty::_bind_DeleteChoice},
	{"Enable", &luna_wrapper_wxPGProperty::_bind_Enable},
	{"GenerateComposedValue", &luna_wrapper_wxPGProperty::_bind_GenerateComposedValue},
	{"GetAttribute", &luna_wrapper_wxPGProperty::_bind_GetAttribute},
	{"GetAttributeAsLong", &luna_wrapper_wxPGProperty::_bind_GetAttributeAsLong},
	{"GetAttributeAsDouble", &luna_wrapper_wxPGProperty::_bind_GetAttributeAsDouble},
	{"GetColumnEditor", &luna_wrapper_wxPGProperty::_bind_GetColumnEditor},
	{"GetBaseName", &luna_wrapper_wxPGProperty::_bind_GetBaseName},
	{"GetCell", &luna_wrapper_wxPGProperty::_bind_GetCell},
	{"GetOrCreateCell", &luna_wrapper_wxPGProperty::_bind_GetOrCreateCell},
	{"GetChildCount", &luna_wrapper_wxPGProperty::_bind_GetChildCount},
	{"GetChildrenHeight", &luna_wrapper_wxPGProperty::_bind_GetChildrenHeight},
	{"GetChoices", &luna_wrapper_wxPGProperty::_bind_GetChoices},
	{"GetClientData", &luna_wrapper_wxPGProperty::_bind_GetClientData},
	{"GetClientObject", &luna_wrapper_wxPGProperty::_bind_GetClientObject},
	{"GetDisplayedString", &luna_wrapper_wxPGProperty::_bind_GetDisplayedString},
	{"GetEditorClass", &luna_wrapper_wxPGProperty::_bind_GetEditorClass},
	{"GetFlags", &luna_wrapper_wxPGProperty::_bind_GetFlags},
	{"GetGrid", &luna_wrapper_wxPGProperty::_bind_GetGrid},
	{"GetGridIfDisplayed", &luna_wrapper_wxPGProperty::_bind_GetGridIfDisplayed},
	{"GetHelpString", &luna_wrapper_wxPGProperty::_bind_GetHelpString},
	{"GetIndexInParent", &luna_wrapper_wxPGProperty::_bind_GetIndexInParent},
	{"GetLabel", &luna_wrapper_wxPGProperty::_bind_GetLabel},
	{"GetLastVisibleSubItem", &luna_wrapper_wxPGProperty::_bind_GetLastVisibleSubItem},
	{"GetMainParent", &luna_wrapper_wxPGProperty::_bind_GetMainParent},
	{"GetMaxLength", &luna_wrapper_wxPGProperty::_bind_GetMaxLength},
	{"GetName", &luna_wrapper_wxPGProperty::_bind_GetName},
	{"GetParent", &luna_wrapper_wxPGProperty::_bind_GetParent},
	{"GetPropertyByName", &luna_wrapper_wxPGProperty::_bind_GetPropertyByName},
	{"GetValidator", &luna_wrapper_wxPGProperty::_bind_GetValidator},
	{"GetValueImage", &luna_wrapper_wxPGProperty::_bind_GetValueImage},
	{"GetValueAsString", &luna_wrapper_wxPGProperty::_bind_GetValueAsString},
	{"GetValueType", &luna_wrapper_wxPGProperty::_bind_GetValueType},
	{"GetY", &luna_wrapper_wxPGProperty::_bind_GetY},
	{"HasFlag", &luna_wrapper_wxPGProperty::_bind_HasFlag},
	{"HasVisibleChildren", &luna_wrapper_wxPGProperty::_bind_HasVisibleChildren},
	{"Hide", &luna_wrapper_wxPGProperty::_bind_Hide},
	{"Index", &luna_wrapper_wxPGProperty::_bind_Index},
	{"InsertChild", &luna_wrapper_wxPGProperty::_bind_InsertChild},
	{"InsertChoice", &luna_wrapper_wxPGProperty::_bind_InsertChoice},
	{"IsCategory", &luna_wrapper_wxPGProperty::_bind_IsCategory},
	{"IsEnabled", &luna_wrapper_wxPGProperty::_bind_IsEnabled},
	{"IsExpanded", &luna_wrapper_wxPGProperty::_bind_IsExpanded},
	{"IsRoot", &luna_wrapper_wxPGProperty::_bind_IsRoot},
	{"IsSomeParent", &luna_wrapper_wxPGProperty::_bind_IsSomeParent},
	{"IsTextEditable", &luna_wrapper_wxPGProperty::_bind_IsTextEditable},
	{"IsValueUnspecified", &luna_wrapper_wxPGProperty::_bind_IsValueUnspecified},
	{"IsVisible", &luna_wrapper_wxPGProperty::_bind_IsVisible},
	{"Item", &luna_wrapper_wxPGProperty::_bind_Item},
	{"RefreshEditor", &luna_wrapper_wxPGProperty::_bind_RefreshEditor},
	{"SetAutoUnspecified", &luna_wrapper_wxPGProperty::_bind_SetAutoUnspecified},
	{"SetBackgroundColour", &luna_wrapper_wxPGProperty::_bind_SetBackgroundColour},
	{"SetEditor", &luna_wrapper_wxPGProperty::_bind_SetEditor},
	{"SetCell", &luna_wrapper_wxPGProperty::_bind_SetCell},
	{"SetChoices", &luna_wrapper_wxPGProperty::_bind_SetChoices},
	{"SetClientData", &luna_wrapper_wxPGProperty::_bind_SetClientData},
	{"SetClientObject", &luna_wrapper_wxPGProperty::_bind_SetClientObject},
	{"SetChoiceSelection", &luna_wrapper_wxPGProperty::_bind_SetChoiceSelection},
	{"SetFlagRecursively", &luna_wrapper_wxPGProperty::_bind_SetFlagRecursively},
	{"SetHelpString", &luna_wrapper_wxPGProperty::_bind_SetHelpString},
	{"SetLabel", &luna_wrapper_wxPGProperty::_bind_SetLabel},
	{"SetMaxLength", &luna_wrapper_wxPGProperty::_bind_SetMaxLength},
	{"SetModifiedStatus", &luna_wrapper_wxPGProperty::_bind_SetModifiedStatus},
	{"SetName", &luna_wrapper_wxPGProperty::_bind_SetName},
	{"SetParentalType", &luna_wrapper_wxPGProperty::_bind_SetParentalType},
	{"SetTextColour", &luna_wrapper_wxPGProperty::_bind_SetTextColour},
	{"SetValidator", &luna_wrapper_wxPGProperty::_bind_SetValidator},
	{"SetValueImage", &luna_wrapper_wxPGProperty::_bind_SetValueImage},
	{"SetValueToUnspecified", &luna_wrapper_wxPGProperty::_bind_SetValueToUnspecified},
	{"SetWasModified", &luna_wrapper_wxPGProperty::_bind_SetWasModified},
	{"UpdateParentValues", &luna_wrapper_wxPGProperty::_bind_UpdateParentValues},
	{"UsesAutoUnspecified", &luna_wrapper_wxPGProperty::_bind_UsesAutoUnspecified},
	{"base_GetClassInfo", &luna_wrapper_wxPGProperty::_bind_base_GetClassInfo},
	{"base_OnSetValue", &luna_wrapper_wxPGProperty::_bind_base_OnSetValue},
	{"base_OnMeasureImage", &luna_wrapper_wxPGProperty::_bind_base_OnMeasureImage},
	{"base_OnEvent", &luna_wrapper_wxPGProperty::_bind_base_OnEvent},
	{"base_DoGetEditorClass", &luna_wrapper_wxPGProperty::_bind_base_DoGetEditorClass},
	{"base_DoGetValidator", &luna_wrapper_wxPGProperty::_bind_base_DoGetValidator},
	{"base_GetChoiceSelection", &luna_wrapper_wxPGProperty::_bind_base_GetChoiceSelection},
	{"base_RefreshChildren", &luna_wrapper_wxPGProperty::_bind_base_RefreshChildren},
	{"base_GetValueAsString", &luna_wrapper_wxPGProperty::_bind_base_GetValueAsString},
	{"fromVoid", &luna_wrapper_wxPGProperty::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGProperty::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPGProperty::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGProperty >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGProperty::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGProperty >::enumValues[] = {
	{0,0}
};


