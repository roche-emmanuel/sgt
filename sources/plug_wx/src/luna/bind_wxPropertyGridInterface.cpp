#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPropertyGridInterface.h>

class luna_wrapper_wxPropertyGridInterface {
public:
	typedef Luna< wxPropertyGridInterface > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxPropertyGridInterface,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61417741) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPropertyGridInterface*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGridInterface* rhs =(Luna< wxPropertyGridInterface >::check(L,2));
		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxPropertyGridInterface* self= (wxPropertyGridInterface*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPropertyGridInterface >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61417741) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPropertyGridInterface");
		
		return luna_dynamicCast(L,converters,"wxPropertyGridInterface",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Append(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearSelection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearModifiedStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CollapseAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EditorValidate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ExpandAll(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnProportion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirst(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPropertyByLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPropertyByName_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPropertyByName_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPropertyName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RestoreEditableState(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveEditableState(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnProportion(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValidationFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Sort(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InitAllTypeHandlers(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RegisterAdditionalEditors(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBoolChoices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEditorByName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxPGProperty * wxPropertyGridInterface::Append(wxPGProperty * property)
	static int _bind_Append(lua_State *L) {
		if (!_lg_typecheck_Append(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::Append(wxPGProperty * property) function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::Append(wxPGProperty * property)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::Append(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->Append(property);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGridInterface::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridInterface::Clear() function, expected prototype:\nvoid wxPropertyGridInterface::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridInterface::Clear(). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// bool wxPropertyGridInterface::ClearSelection(bool validation = false)
	static int _bind_ClearSelection(lua_State *L) {
		if (!_lg_typecheck_ClearSelection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridInterface::ClearSelection(bool validation = false) function, expected prototype:\nbool wxPropertyGridInterface::ClearSelection(bool validation = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool validation=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridInterface::ClearSelection(bool). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ClearSelection(validation);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridInterface::ClearModifiedStatus()
	static int _bind_ClearModifiedStatus(lua_State *L) {
		if (!_lg_typecheck_ClearModifiedStatus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridInterface::ClearModifiedStatus() function, expected prototype:\nvoid wxPropertyGridInterface::ClearModifiedStatus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridInterface::ClearModifiedStatus(). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearModifiedStatus();

		return 0;
	}

	// bool wxPropertyGridInterface::CollapseAll()
	static int _bind_CollapseAll(lua_State *L) {
		if (!_lg_typecheck_CollapseAll(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridInterface::CollapseAll() function, expected prototype:\nbool wxPropertyGridInterface::CollapseAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridInterface::CollapseAll(). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CollapseAll();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridInterface::EditorValidate()
	static int _bind_EditorValidate(lua_State *L) {
		if (!_lg_typecheck_EditorValidate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridInterface::EditorValidate() function, expected prototype:\nbool wxPropertyGridInterface::EditorValidate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridInterface::EditorValidate(). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditorValidate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridInterface::ExpandAll(bool expand = true)
	static int _bind_ExpandAll(lua_State *L) {
		if (!_lg_typecheck_ExpandAll(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridInterface::ExpandAll(bool expand = true) function, expected prototype:\nbool wxPropertyGridInterface::ExpandAll(bool expand = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool expand=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridInterface::ExpandAll(bool). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ExpandAll(expand);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxPropertyGridInterface::GetColumnProportion(unsigned int column) const
	static int _bind_GetColumnProportion(lua_State *L) {
		if (!_lg_typecheck_GetColumnProportion(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridInterface::GetColumnProportion(unsigned int column) const function, expected prototype:\nint wxPropertyGridInterface::GetColumnProportion(unsigned int column) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int column=(unsigned int)lua_tointeger(L,2);

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridInterface::GetColumnProportion(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnProportion(column);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridInterface::GetFirst(int flags = ::wxPG_ITERATE_ALL)
	static int _bind_GetFirst(lua_State *L) {
		if (!_lg_typecheck_GetFirst(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::GetFirst(int flags = ::wxPG_ITERATE_ALL) function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::GetFirst(int flags = ::wxPG_ITERATE_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxPG_ITERATE_ALL;

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::GetFirst(int). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetFirst(flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridInterface::GetProperty(const wxString & name) const
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::GetProperty(const wxString & name) const function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::GetProperty(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::GetProperty(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetProperty(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridInterface::GetPropertyByLabel(const wxString & label) const
	static int _bind_GetPropertyByLabel(lua_State *L) {
		if (!_lg_typecheck_GetPropertyByLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::GetPropertyByLabel(const wxString & label) const function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::GetPropertyByLabel(const wxString & label) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::GetPropertyByLabel(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetPropertyByLabel(label);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString & name) const
	static int _bind_GetPropertyByName_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPropertyByName_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString & name) const function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetPropertyByName(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString & name, const wxString & subname) const
	static int _bind_GetPropertyByName_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPropertyByName_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString & name, const wxString & subname) const function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString & name, const wxString & subname) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString subname(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::GetPropertyByName(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetPropertyByName(name, subname);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPropertyGridInterface::GetPropertyByName
	static int _bind_GetPropertyByName(lua_State *L) {
		if (_lg_typecheck_GetPropertyByName_overload_1(L)) return _bind_GetPropertyByName_overload_1(L);
		if (_lg_typecheck_GetPropertyByName_overload_2(L)) return _bind_GetPropertyByName_overload_2(L);

		luaL_error(L, "error in function GetPropertyByName, cannot match any of the overloads for function GetPropertyByName:\n  GetPropertyByName(const wxString &)\n  GetPropertyByName(const wxString &, const wxString &)\n");
		return 0;
	}

	// wxString wxPropertyGridInterface::GetPropertyName(wxPGProperty * property)
	static int _bind_GetPropertyName(lua_State *L) {
		if (!_lg_typecheck_GetPropertyName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridInterface::GetPropertyName(wxPGProperty * property) function, expected prototype:\nwxString wxPropertyGridInterface::GetPropertyName(wxPGProperty * property)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* property=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridInterface::GetPropertyName(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPropertyName(property);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPGProperty * wxPropertyGridInterface::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridInterface::GetSelection() const function, expected prototype:\nwxPGProperty * wxPropertyGridInterface::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridInterface::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// bool wxPropertyGridInterface::RestoreEditableState(const wxString & src, int restoreStates = wxPropertyGridInterface::AllStates)
	static int _bind_RestoreEditableState(lua_State *L) {
		if (!_lg_typecheck_RestoreEditableState(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridInterface::RestoreEditableState(const wxString & src, int restoreStates = wxPropertyGridInterface::AllStates) function, expected prototype:\nbool wxPropertyGridInterface::RestoreEditableState(const wxString & src, int restoreStates = wxPropertyGridInterface::AllStates)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString src(lua_tostring(L,2),lua_objlen(L,2));
		int restoreStates=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxPropertyGridInterface::AllStates;

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridInterface::RestoreEditableState(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RestoreEditableState(src, restoreStates);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPropertyGridInterface::SaveEditableState(int includedStates = wxPropertyGridInterface::AllStates) const
	static int _bind_SaveEditableState(lua_State *L) {
		if (!_lg_typecheck_SaveEditableState(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridInterface::SaveEditableState(int includedStates = wxPropertyGridInterface::AllStates) const function, expected prototype:\nwxString wxPropertyGridInterface::SaveEditableState(int includedStates = wxPropertyGridInterface::AllStates) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int includedStates=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxPropertyGridInterface::AllStates;

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridInterface::SaveEditableState(int) const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->SaveEditableState(includedStates);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxPropertyGridInterface::SetColumnProportion(unsigned int column, int proportion)
	static int _bind_SetColumnProportion(lua_State *L) {
		if (!_lg_typecheck_SetColumnProportion(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridInterface::SetColumnProportion(unsigned int column, int proportion) function, expected prototype:\nbool wxPropertyGridInterface::SetColumnProportion(unsigned int column, int proportion)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int column=(unsigned int)lua_tointeger(L,2);
		int proportion=(int)lua_tointeger(L,3);

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridInterface::SetColumnProportion(unsigned int, int). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetColumnProportion(column, proportion);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridInterface::SetValidationFailureBehavior(int vfbFlags)
	static int _bind_SetValidationFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_SetValidationFailureBehavior(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridInterface::SetValidationFailureBehavior(int vfbFlags) function, expected prototype:\nvoid wxPropertyGridInterface::SetValidationFailureBehavior(int vfbFlags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int vfbFlags=(int)lua_tointeger(L,2);

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridInterface::SetValidationFailureBehavior(int). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValidationFailureBehavior(vfbFlags);

		return 0;
	}

	// void wxPropertyGridInterface::Sort(int flags = 0)
	static int _bind_Sort(lua_State *L) {
		if (!_lg_typecheck_Sort(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridInterface::Sort(int flags = 0) function, expected prototype:\nvoid wxPropertyGridInterface::Sort(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPropertyGridInterface* self=(Luna< wxPropertyGridInterface >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridInterface::Sort(int). Got : '%s'\n%s",typeid(Luna< wxPropertyGridInterface >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Sort(flags);

		return 0;
	}

	// static void wxPropertyGridInterface::InitAllTypeHandlers()
	static int _bind_InitAllTypeHandlers(lua_State *L) {
		if (!_lg_typecheck_InitAllTypeHandlers(L)) {
			luaL_error(L, "luna typecheck failed in static void wxPropertyGridInterface::InitAllTypeHandlers() function, expected prototype:\nstatic void wxPropertyGridInterface::InitAllTypeHandlers()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface::InitAllTypeHandlers();

		return 0;
	}

	// static void wxPropertyGridInterface::RegisterAdditionalEditors()
	static int _bind_RegisterAdditionalEditors(lua_State *L) {
		if (!_lg_typecheck_RegisterAdditionalEditors(L)) {
			luaL_error(L, "luna typecheck failed in static void wxPropertyGridInterface::RegisterAdditionalEditors() function, expected prototype:\nstatic void wxPropertyGridInterface::RegisterAdditionalEditors()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridInterface::RegisterAdditionalEditors();

		return 0;
	}

	// static void wxPropertyGridInterface::SetBoolChoices(const wxString & trueChoice, const wxString & falseChoice)
	static int _bind_SetBoolChoices(lua_State *L) {
		if (!_lg_typecheck_SetBoolChoices(L)) {
			luaL_error(L, "luna typecheck failed in static void wxPropertyGridInterface::SetBoolChoices(const wxString & trueChoice, const wxString & falseChoice) function, expected prototype:\nstatic void wxPropertyGridInterface::SetBoolChoices(const wxString & trueChoice, const wxString & falseChoice)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString trueChoice(lua_tostring(L,1),lua_objlen(L,1));
		wxString falseChoice(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridInterface::SetBoolChoices(trueChoice, falseChoice);

		return 0;
	}

	// static wxPGEditor * wxPropertyGridInterface::GetEditorByName(const wxString & editorName)
	static int _bind_GetEditorByName(lua_State *L) {
		if (!_lg_typecheck_GetEditorByName(L)) {
			luaL_error(L, "luna typecheck failed in static wxPGEditor * wxPropertyGridInterface::GetEditorByName(const wxString & editorName) function, expected prototype:\nstatic wxPGEditor * wxPropertyGridInterface::GetEditorByName(const wxString & editorName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString editorName(lua_tostring(L,1),lua_objlen(L,1));

		wxPGEditor * lret = wxPropertyGridInterface::GetEditorByName(editorName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGEditor >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPropertyGridInterface* LunaTraits< wxPropertyGridInterface >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxPropertyGridInterface::Clear()
}

void LunaTraits< wxPropertyGridInterface >::_bind_dtor(wxPropertyGridInterface* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridInterface >::className[] = "wxPropertyGridInterface";
const char LunaTraits< wxPropertyGridInterface >::fullName[] = "wxPropertyGridInterface";
const char LunaTraits< wxPropertyGridInterface >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridInterface >::parents[] = {0};
const int LunaTraits< wxPropertyGridInterface >::hash = 61417741;
const int LunaTraits< wxPropertyGridInterface >::uniqueIDs[] = {61417741,0};

luna_RegType LunaTraits< wxPropertyGridInterface >::methods[] = {
	{"Append", &luna_wrapper_wxPropertyGridInterface::_bind_Append},
	{"Clear", &luna_wrapper_wxPropertyGridInterface::_bind_Clear},
	{"ClearSelection", &luna_wrapper_wxPropertyGridInterface::_bind_ClearSelection},
	{"ClearModifiedStatus", &luna_wrapper_wxPropertyGridInterface::_bind_ClearModifiedStatus},
	{"CollapseAll", &luna_wrapper_wxPropertyGridInterface::_bind_CollapseAll},
	{"EditorValidate", &luna_wrapper_wxPropertyGridInterface::_bind_EditorValidate},
	{"ExpandAll", &luna_wrapper_wxPropertyGridInterface::_bind_ExpandAll},
	{"GetColumnProportion", &luna_wrapper_wxPropertyGridInterface::_bind_GetColumnProportion},
	{"GetFirst", &luna_wrapper_wxPropertyGridInterface::_bind_GetFirst},
	{"GetProperty", &luna_wrapper_wxPropertyGridInterface::_bind_GetProperty},
	{"GetPropertyByLabel", &luna_wrapper_wxPropertyGridInterface::_bind_GetPropertyByLabel},
	{"GetPropertyByName", &luna_wrapper_wxPropertyGridInterface::_bind_GetPropertyByName},
	{"GetPropertyName", &luna_wrapper_wxPropertyGridInterface::_bind_GetPropertyName},
	{"GetSelection", &luna_wrapper_wxPropertyGridInterface::_bind_GetSelection},
	{"RestoreEditableState", &luna_wrapper_wxPropertyGridInterface::_bind_RestoreEditableState},
	{"SaveEditableState", &luna_wrapper_wxPropertyGridInterface::_bind_SaveEditableState},
	{"SetColumnProportion", &luna_wrapper_wxPropertyGridInterface::_bind_SetColumnProportion},
	{"SetValidationFailureBehavior", &luna_wrapper_wxPropertyGridInterface::_bind_SetValidationFailureBehavior},
	{"Sort", &luna_wrapper_wxPropertyGridInterface::_bind_Sort},
	{"InitAllTypeHandlers", &luna_wrapper_wxPropertyGridInterface::_bind_InitAllTypeHandlers},
	{"RegisterAdditionalEditors", &luna_wrapper_wxPropertyGridInterface::_bind_RegisterAdditionalEditors},
	{"SetBoolChoices", &luna_wrapper_wxPropertyGridInterface::_bind_SetBoolChoices},
	{"GetEditorByName", &luna_wrapper_wxPropertyGridInterface::_bind_GetEditorByName},
	{"dynCast", &luna_wrapper_wxPropertyGridInterface::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPropertyGridInterface::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPropertyGridInterface::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPropertyGridInterface::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPropertyGridInterface::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridInterface >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridInterface >::enumValues[] = {
	{"SelectionState", wxPropertyGridInterface::SelectionState},
	{"ExpandedState", wxPropertyGridInterface::ExpandedState},
	{"ScrollPosState", wxPropertyGridInterface::ScrollPosState},
	{"PageState", wxPropertyGridInterface::PageState},
	{"SplitterPosState", wxPropertyGridInterface::SplitterPosState},
	{"DescBoxState", wxPropertyGridInterface::DescBoxState},
	{"AllStates", wxPropertyGridInterface::AllStates},
	{0,0}
};


