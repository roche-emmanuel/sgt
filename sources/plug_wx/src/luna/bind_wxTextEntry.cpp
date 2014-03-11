#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextEntry.h>

class luna_wrapper_wxTextEntry {
public:
	typedef Luna< wxTextEntry > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
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

		wxTextEntry* self= (wxTextEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextEntry >::push(L,self,false);
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

		wxTextEntry* self=(Luna< wxTextEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextEntry");
		
		return luna_dynamicCast(L,converters,"wxTextEntry",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AppendText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoComplete_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoComplete_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92690309)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxTextCompleter >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AutoCompleteFileNames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AutoCompleteDirectories(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanCopy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanCut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanPaste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ChangeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEditable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WriteText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AppendText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanCopy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanCut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanPaste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ChangeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetEditable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_WriteText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxTextEntry::AppendText(const wxString & text)
	static int _bind_AppendText(lua_State *L) {
		if (!_lg_typecheck_AppendText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::AppendText(const wxString & text) function, expected prototype:\nvoid wxTextEntry::AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::AppendText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AppendText(text);

		return 0;
	}

	// bool wxTextEntry::AutoComplete(const wxArrayString & choices)
	static int _bind_AutoComplete_overload_1(lua_State *L) {
		if (!_lg_typecheck_AutoComplete_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoComplete(const wxArrayString & choices) function, expected prototype:\nbool wxTextEntry::AutoComplete(const wxArrayString & choices)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,2));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxTextEntry::AutoComplete function");
		}
		const wxArrayString & choices=*choices_ptr;

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoComplete(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoComplete(choices);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::AutoComplete(wxTextCompleter * completer)
	static int _bind_AutoComplete_overload_2(lua_State *L) {
		if (!_lg_typecheck_AutoComplete_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoComplete(wxTextCompleter * completer) function, expected prototype:\nbool wxTextEntry::AutoComplete(wxTextCompleter * completer)\nClass arguments details:\narg 1 ID = 92690309\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextCompleter* completer=(Luna< wxTextCompleter >::check(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoComplete(wxTextCompleter *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoComplete(completer);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTextEntry::AutoComplete
	static int _bind_AutoComplete(lua_State *L) {
		if (_lg_typecheck_AutoComplete_overload_1(L)) return _bind_AutoComplete_overload_1(L);
		if (_lg_typecheck_AutoComplete_overload_2(L)) return _bind_AutoComplete_overload_2(L);

		luaL_error(L, "error in function AutoComplete, cannot match any of the overloads for function AutoComplete:\n  AutoComplete(const wxArrayString &)\n  AutoComplete(wxTextCompleter *)\n");
		return 0;
	}

	// bool wxTextEntry::AutoCompleteFileNames()
	static int _bind_AutoCompleteFileNames(lua_State *L) {
		if (!_lg_typecheck_AutoCompleteFileNames(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoCompleteFileNames() function, expected prototype:\nbool wxTextEntry::AutoCompleteFileNames()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoCompleteFileNames(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoCompleteFileNames();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::AutoCompleteDirectories()
	static int _bind_AutoCompleteDirectories(lua_State *L) {
		if (!_lg_typecheck_AutoCompleteDirectories(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::AutoCompleteDirectories() function, expected prototype:\nbool wxTextEntry::AutoCompleteDirectories()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::AutoCompleteDirectories(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AutoCompleteDirectories();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanCopy() const
	static int _bind_CanCopy(lua_State *L) {
		if (!_lg_typecheck_CanCopy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanCopy() const function, expected prototype:\nbool wxTextEntry::CanCopy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanCopy() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanCopy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanCut() const
	static int _bind_CanCut(lua_State *L) {
		if (!_lg_typecheck_CanCut(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanCut() const function, expected prototype:\nbool wxTextEntry::CanCut() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanCut() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanCut();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanPaste() const
	static int _bind_CanPaste(lua_State *L) {
		if (!_lg_typecheck_CanPaste(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanPaste() const function, expected prototype:\nbool wxTextEntry::CanPaste() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanPaste() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanRedo() const
	static int _bind_CanRedo(lua_State *L) {
		if (!_lg_typecheck_CanRedo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanRedo() const function, expected prototype:\nbool wxTextEntry::CanRedo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanRedo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::CanUndo() const
	static int _bind_CanUndo(lua_State *L) {
		if (!_lg_typecheck_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::CanUndo() const function, expected prototype:\nbool wxTextEntry::CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextEntry::ChangeValue(const wxString & value)
	static int _bind_ChangeValue(lua_State *L) {
		if (!_lg_typecheck_ChangeValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::ChangeValue(const wxString & value) function, expected prototype:\nvoid wxTextEntry::ChangeValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::ChangeValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ChangeValue(value);

		return 0;
	}

	// void wxTextEntry::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Clear() function, expected prototype:\nvoid wxTextEntry::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// void wxTextEntry::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Copy() function, expected prototype:\nvoid wxTextEntry::Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Copy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Copy();

		return 0;
	}

	// long wxTextEntry::GetInsertionPoint() const
	static int _bind_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_GetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextEntry::GetInsertionPoint() const function, expected prototype:\nlong wxTextEntry::GetInsertionPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextEntry::GetInsertionPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextEntry::GetLastPosition() const
	static int _bind_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_GetLastPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextEntry::GetLastPosition() const function, expected prototype:\nlong wxTextEntry::GetLastPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextEntry::GetLastPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextEntry::GetRange(long from, long to) const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetRange(long from, long to) const function, expected prototype:\nwxString wxTextEntry::GetRange(long from, long to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetRange(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetRange(from, to);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextEntry::GetSelection(long * from, long * to) const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxTextEntry::GetSelection(long * from, long * to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long* from=(long*)Luna< void >::check(L,2);
		long* to=(long*)Luna< void >::check(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::GetSelection(long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetSelection(from, to);

		return 0;
	}

	// wxString wxTextEntry::GetStringSelection() const
	static int _bind_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_GetStringSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetStringSelection() const function, expected prototype:\nwxString wxTextEntry::GetStringSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetStringSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxTextEntry::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetValue() const function, expected prototype:\nwxString wxTextEntry::GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextEntry::IsEditable() const
	static int _bind_IsEditable(lua_State *L) {
		if (!_lg_typecheck_IsEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::IsEditable() const function, expected prototype:\nbool wxTextEntry::IsEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::IsEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::IsEmpty() const function, expected prototype:\nbool wxTextEntry::IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextEntry::Paste()
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Paste() function, expected prototype:\nvoid wxTextEntry::Paste()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Paste(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Paste();

		return 0;
	}

	// void wxTextEntry::Redo()
	static int _bind_Redo(lua_State *L) {
		if (!_lg_typecheck_Redo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Redo() function, expected prototype:\nvoid wxTextEntry::Redo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Redo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Redo();

		return 0;
	}

	// void wxTextEntry::Remove(long from, long to)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Remove(long from, long to) function, expected prototype:\nvoid wxTextEntry::Remove(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Remove(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Remove(from, to);

		return 0;
	}

	// void wxTextEntry::Replace(long from, long to, const wxString & value)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Replace(long from, long to, const wxString & value) function, expected prototype:\nvoid wxTextEntry::Replace(long from, long to, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Replace(long, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Replace(from, to, value);

		return 0;
	}

	// void wxTextEntry::SetEditable(bool editable)
	static int _bind_SetEditable(lua_State *L) {
		if (!_lg_typecheck_SetEditable(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetEditable(bool editable) function, expected prototype:\nvoid wxTextEntry::SetEditable(bool editable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool editable=(bool)(lua_toboolean(L,2)==1);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetEditable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEditable(editable);

		return 0;
	}

	// void wxTextEntry::SetInsertionPoint(long pos)
	static int _bind_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetInsertionPoint(long pos) function, expected prototype:\nvoid wxTextEntry::SetInsertionPoint(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetInsertionPoint(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInsertionPoint(pos);

		return 0;
	}

	// void wxTextEntry::SetInsertionPointEnd()
	static int _bind_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPointEnd(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetInsertionPointEnd() function, expected prototype:\nvoid wxTextEntry::SetInsertionPointEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetInsertionPointEnd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInsertionPointEnd();

		return 0;
	}

	// void wxTextEntry::SetMaxLength(unsigned long len)
	static int _bind_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_SetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetMaxLength(unsigned long len) function, expected prototype:\nvoid wxTextEntry::SetMaxLength(unsigned long len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long len=(unsigned long)lua_tonumber(L,2);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetMaxLength(unsigned long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMaxLength(len);

		return 0;
	}

	// void wxTextEntry::SetSelection(long from, long to)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetSelection(long from, long to) function, expected prototype:\nvoid wxTextEntry::SetSelection(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetSelection(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxTextEntry::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SelectAll() function, expected prototype:\nvoid wxTextEntry::SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectAll();

		return 0;
	}

	// bool wxTextEntry::SetHint(const wxString & hint)
	static int _bind_SetHint(lua_State *L) {
		if (!_lg_typecheck_SetHint(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::SetHint(const wxString & hint) function, expected prototype:\nbool wxTextEntry::SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::SetHint(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextEntry::GetHint() const
	static int _bind_GetHint(lua_State *L) {
		if (!_lg_typecheck_GetHint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::GetHint() const function, expected prototype:\nwxString wxTextEntry::GetHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::GetHint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextEntry::SetMargins(const wxPoint & pt)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::SetMargins(const wxPoint & pt) function, expected prototype:\nbool wxTextEntry::SetMargins(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxTextEntry::SetMargins function");
		}
		const wxPoint & pt=*pt_ptr;

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::SetMargins(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetMargins(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::SetMargins(int left, int top = -1)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::SetMargins(int left, int top = -1) function, expected prototype:\nbool wxTextEntry::SetMargins(int left, int top = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int left=(int)lua_tointeger(L,2);
		int top=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::SetMargins(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetMargins(left, top);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTextEntry::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(const wxPoint &)\n  SetMargins(int, int)\n");
		return 0;
	}

	// wxPoint wxTextEntry::GetMargins() const
	static int _bind_GetMargins(lua_State *L) {
		if (!_lg_typecheck_GetMargins(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxTextEntry::GetMargins() const function, expected prototype:\nwxPoint wxTextEntry::GetMargins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxTextEntry::GetMargins() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetMargins();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxTextEntry::SetValue(const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::SetValue(const wxString & value) function, expected prototype:\nvoid wxTextEntry::SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(value);

		return 0;
	}

	// void wxTextEntry::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::Undo() function, expected prototype:\nvoid wxTextEntry::Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Undo();

		return 0;
	}

	// void wxTextEntry::WriteText(const wxString & text)
	static int _bind_WriteText(lua_State *L) {
		if (!_lg_typecheck_WriteText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::WriteText(const wxString & text) function, expected prototype:\nvoid wxTextEntry::WriteText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::WriteText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteText(text);

		return 0;
	}

	// void wxTextEntry::base_AppendText(const wxString & text)
	static int _bind_base_AppendText(lua_State *L) {
		if (!_lg_typecheck_base_AppendText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_AppendText(const wxString & text) function, expected prototype:\nvoid wxTextEntry::base_AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_AppendText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::AppendText(text);

		return 0;
	}

	// bool wxTextEntry::base_CanCopy() const
	static int _bind_base_CanCopy(lua_State *L) {
		if (!_lg_typecheck_base_CanCopy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_CanCopy() const function, expected prototype:\nbool wxTextEntry::base_CanCopy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_CanCopy() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::CanCopy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::base_CanCut() const
	static int _bind_base_CanCut(lua_State *L) {
		if (!_lg_typecheck_base_CanCut(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_CanCut() const function, expected prototype:\nbool wxTextEntry::base_CanCut() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_CanCut() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::CanCut();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::base_CanPaste() const
	static int _bind_base_CanPaste(lua_State *L) {
		if (!_lg_typecheck_base_CanPaste(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_CanPaste() const function, expected prototype:\nbool wxTextEntry::base_CanPaste() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_CanPaste() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::base_CanRedo() const
	static int _bind_base_CanRedo(lua_State *L) {
		if (!_lg_typecheck_base_CanRedo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_CanRedo() const function, expected prototype:\nbool wxTextEntry::base_CanRedo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_CanRedo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::base_CanUndo() const
	static int _bind_base_CanUndo(lua_State *L) {
		if (!_lg_typecheck_base_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_CanUndo() const function, expected prototype:\nbool wxTextEntry::base_CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextEntry::base_ChangeValue(const wxString & value)
	static int _bind_base_ChangeValue(lua_State *L) {
		if (!_lg_typecheck_base_ChangeValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_ChangeValue(const wxString & value) function, expected prototype:\nvoid wxTextEntry::base_ChangeValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_ChangeValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::ChangeValue(value);

		return 0;
	}

	// void wxTextEntry::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Clear() function, expected prototype:\nvoid wxTextEntry::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Clear();

		return 0;
	}

	// void wxTextEntry::base_Copy()
	static int _bind_base_Copy(lua_State *L) {
		if (!_lg_typecheck_base_Copy(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Copy() function, expected prototype:\nvoid wxTextEntry::base_Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Copy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Copy();

		return 0;
	}

	// long wxTextEntry::base_GetInsertionPoint() const
	static int _bind_base_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextEntry::base_GetInsertionPoint() const function, expected prototype:\nlong wxTextEntry::base_GetInsertionPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextEntry::base_GetInsertionPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTextEntry::GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxTextEntry::base_GetLastPosition() const
	static int _bind_base_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetLastPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextEntry::base_GetLastPosition() const function, expected prototype:\nlong wxTextEntry::base_GetLastPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextEntry::base_GetLastPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTextEntry::GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTextEntry::base_GetRange(long from, long to) const
	static int _bind_base_GetRange(lua_State *L) {
		if (!_lg_typecheck_base_GetRange(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::base_GetRange(long from, long to) const function, expected prototype:\nwxString wxTextEntry::base_GetRange(long from, long to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::base_GetRange(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextEntry::GetRange(from, to);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextEntry::base_GetSelection(long * from, long * to) const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxTextEntry::base_GetSelection(long * from, long * to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long* from=(long*)Luna< void >::check(L,2);
		long* to=(long*)Luna< void >::check(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_GetSelection(long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::GetSelection(from, to);

		return 0;
	}

	// wxString wxTextEntry::base_GetStringSelection() const
	static int _bind_base_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetStringSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::base_GetStringSelection() const function, expected prototype:\nwxString wxTextEntry::base_GetStringSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::base_GetStringSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextEntry::GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxTextEntry::base_GetValue() const
	static int _bind_base_GetValue(lua_State *L) {
		if (!_lg_typecheck_base_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::base_GetValue() const function, expected prototype:\nwxString wxTextEntry::base_GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::base_GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextEntry::GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxTextEntry::base_IsEditable() const
	static int _bind_base_IsEditable(lua_State *L) {
		if (!_lg_typecheck_base_IsEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_IsEditable() const function, expected prototype:\nbool wxTextEntry::base_IsEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_IsEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextEntry::base_IsEmpty() const
	static int _bind_base_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_base_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_IsEmpty() const function, expected prototype:\nbool wxTextEntry::base_IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextEntry::base_Paste()
	static int _bind_base_Paste(lua_State *L) {
		if (!_lg_typecheck_base_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Paste() function, expected prototype:\nvoid wxTextEntry::base_Paste()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Paste(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Paste();

		return 0;
	}

	// void wxTextEntry::base_Redo()
	static int _bind_base_Redo(lua_State *L) {
		if (!_lg_typecheck_base_Redo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Redo() function, expected prototype:\nvoid wxTextEntry::base_Redo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Redo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Redo();

		return 0;
	}

	// void wxTextEntry::base_Remove(long from, long to)
	static int _bind_base_Remove(lua_State *L) {
		if (!_lg_typecheck_base_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Remove(long from, long to) function, expected prototype:\nvoid wxTextEntry::base_Remove(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Remove(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Remove(from, to);

		return 0;
	}

	// void wxTextEntry::base_Replace(long from, long to, const wxString & value)
	static int _bind_base_Replace(lua_State *L) {
		if (!_lg_typecheck_base_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Replace(long from, long to, const wxString & value) function, expected prototype:\nvoid wxTextEntry::base_Replace(long from, long to, const wxString & value)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);
		wxString value(lua_tostring(L,4),lua_objlen(L,4));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Replace(long, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Replace(from, to, value);

		return 0;
	}

	// void wxTextEntry::base_SetEditable(bool editable)
	static int _bind_base_SetEditable(lua_State *L) {
		if (!_lg_typecheck_base_SetEditable(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SetEditable(bool editable) function, expected prototype:\nvoid wxTextEntry::base_SetEditable(bool editable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool editable=(bool)(lua_toboolean(L,2)==1);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SetEditable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SetEditable(editable);

		return 0;
	}

	// void wxTextEntry::base_SetInsertionPoint(long pos)
	static int _bind_base_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SetInsertionPoint(long pos) function, expected prototype:\nvoid wxTextEntry::base_SetInsertionPoint(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SetInsertionPoint(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SetInsertionPoint(pos);

		return 0;
	}

	// void wxTextEntry::base_SetInsertionPointEnd()
	static int _bind_base_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPointEnd(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SetInsertionPointEnd() function, expected prototype:\nvoid wxTextEntry::base_SetInsertionPointEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SetInsertionPointEnd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SetInsertionPointEnd();

		return 0;
	}

	// void wxTextEntry::base_SetMaxLength(unsigned long len)
	static int _bind_base_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SetMaxLength(unsigned long len) function, expected prototype:\nvoid wxTextEntry::base_SetMaxLength(unsigned long len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long len=(unsigned long)lua_tonumber(L,2);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SetMaxLength(unsigned long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SetMaxLength(len);

		return 0;
	}

	// void wxTextEntry::base_SetSelection(long from, long to)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SetSelection(long from, long to) function, expected prototype:\nvoid wxTextEntry::base_SetSelection(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SetSelection(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SetSelection(from, to);

		return 0;
	}

	// void wxTextEntry::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SelectAll() function, expected prototype:\nvoid wxTextEntry::base_SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SelectAll();

		return 0;
	}

	// bool wxTextEntry::base_SetHint(const wxString & hint)
	static int _bind_base_SetHint(lua_State *L) {
		if (!_lg_typecheck_base_SetHint(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextEntry::base_SetHint(const wxString & hint) function, expected prototype:\nbool wxTextEntry::base_SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextEntry::base_SetHint(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextEntry::SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextEntry::base_GetHint() const
	static int _bind_base_GetHint(lua_State *L) {
		if (!_lg_typecheck_base_GetHint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextEntry::base_GetHint() const function, expected prototype:\nwxString wxTextEntry::base_GetHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextEntry::base_GetHint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTextEntry::GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTextEntry::base_SetValue(const wxString & value)
	static int _bind_base_SetValue(lua_State *L) {
		if (!_lg_typecheck_base_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_SetValue(const wxString & value) function, expected prototype:\nvoid wxTextEntry::base_SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::SetValue(value);

		return 0;
	}

	// void wxTextEntry::base_Undo()
	static int _bind_base_Undo(lua_State *L) {
		if (!_lg_typecheck_base_Undo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_Undo() function, expected prototype:\nvoid wxTextEntry::base_Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::Undo();

		return 0;
	}

	// void wxTextEntry::base_WriteText(const wxString & text)
	static int _bind_base_WriteText(lua_State *L) {
		if (!_lg_typecheck_base_WriteText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextEntry::base_WriteText(const wxString & text) function, expected prototype:\nvoid wxTextEntry::base_WriteText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTextEntry* self=Luna< wxObject >::checkSubType< wxTextEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextEntry::base_WriteText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextEntry::WriteText(text);

		return 0;
	}


	// Operator binds:

};

wxTextEntry* LunaTraits< wxTextEntry >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTextEntry >::_bind_dtor(wxTextEntry* obj) {
	delete obj;
}

const char LunaTraits< wxTextEntry >::className[] = "wxTextEntry";
const char LunaTraits< wxTextEntry >::fullName[] = "wxTextEntry";
const char LunaTraits< wxTextEntry >::moduleName[] = "wx";
const char* LunaTraits< wxTextEntry >::parents[] = {0};
const int LunaTraits< wxTextEntry >::hash = 54144136;
const int LunaTraits< wxTextEntry >::uniqueIDs[] = {54144136,0};

luna_RegType LunaTraits< wxTextEntry >::methods[] = {
	{"AppendText", &luna_wrapper_wxTextEntry::_bind_AppendText},
	{"AutoComplete", &luna_wrapper_wxTextEntry::_bind_AutoComplete},
	{"AutoCompleteFileNames", &luna_wrapper_wxTextEntry::_bind_AutoCompleteFileNames},
	{"AutoCompleteDirectories", &luna_wrapper_wxTextEntry::_bind_AutoCompleteDirectories},
	{"CanCopy", &luna_wrapper_wxTextEntry::_bind_CanCopy},
	{"CanCut", &luna_wrapper_wxTextEntry::_bind_CanCut},
	{"CanPaste", &luna_wrapper_wxTextEntry::_bind_CanPaste},
	{"CanRedo", &luna_wrapper_wxTextEntry::_bind_CanRedo},
	{"CanUndo", &luna_wrapper_wxTextEntry::_bind_CanUndo},
	{"ChangeValue", &luna_wrapper_wxTextEntry::_bind_ChangeValue},
	{"Clear", &luna_wrapper_wxTextEntry::_bind_Clear},
	{"Copy", &luna_wrapper_wxTextEntry::_bind_Copy},
	{"GetInsertionPoint", &luna_wrapper_wxTextEntry::_bind_GetInsertionPoint},
	{"GetLastPosition", &luna_wrapper_wxTextEntry::_bind_GetLastPosition},
	{"GetRange", &luna_wrapper_wxTextEntry::_bind_GetRange},
	{"GetSelection", &luna_wrapper_wxTextEntry::_bind_GetSelection},
	{"GetStringSelection", &luna_wrapper_wxTextEntry::_bind_GetStringSelection},
	{"GetValue", &luna_wrapper_wxTextEntry::_bind_GetValue},
	{"IsEditable", &luna_wrapper_wxTextEntry::_bind_IsEditable},
	{"IsEmpty", &luna_wrapper_wxTextEntry::_bind_IsEmpty},
	{"Paste", &luna_wrapper_wxTextEntry::_bind_Paste},
	{"Redo", &luna_wrapper_wxTextEntry::_bind_Redo},
	{"Remove", &luna_wrapper_wxTextEntry::_bind_Remove},
	{"Replace", &luna_wrapper_wxTextEntry::_bind_Replace},
	{"SetEditable", &luna_wrapper_wxTextEntry::_bind_SetEditable},
	{"SetInsertionPoint", &luna_wrapper_wxTextEntry::_bind_SetInsertionPoint},
	{"SetInsertionPointEnd", &luna_wrapper_wxTextEntry::_bind_SetInsertionPointEnd},
	{"SetMaxLength", &luna_wrapper_wxTextEntry::_bind_SetMaxLength},
	{"SetSelection", &luna_wrapper_wxTextEntry::_bind_SetSelection},
	{"SelectAll", &luna_wrapper_wxTextEntry::_bind_SelectAll},
	{"SetHint", &luna_wrapper_wxTextEntry::_bind_SetHint},
	{"GetHint", &luna_wrapper_wxTextEntry::_bind_GetHint},
	{"SetMargins", &luna_wrapper_wxTextEntry::_bind_SetMargins},
	{"GetMargins", &luna_wrapper_wxTextEntry::_bind_GetMargins},
	{"SetValue", &luna_wrapper_wxTextEntry::_bind_SetValue},
	{"Undo", &luna_wrapper_wxTextEntry::_bind_Undo},
	{"WriteText", &luna_wrapper_wxTextEntry::_bind_WriteText},
	{"base_AppendText", &luna_wrapper_wxTextEntry::_bind_base_AppendText},
	{"base_CanCopy", &luna_wrapper_wxTextEntry::_bind_base_CanCopy},
	{"base_CanCut", &luna_wrapper_wxTextEntry::_bind_base_CanCut},
	{"base_CanPaste", &luna_wrapper_wxTextEntry::_bind_base_CanPaste},
	{"base_CanRedo", &luna_wrapper_wxTextEntry::_bind_base_CanRedo},
	{"base_CanUndo", &luna_wrapper_wxTextEntry::_bind_base_CanUndo},
	{"base_ChangeValue", &luna_wrapper_wxTextEntry::_bind_base_ChangeValue},
	{"base_Clear", &luna_wrapper_wxTextEntry::_bind_base_Clear},
	{"base_Copy", &luna_wrapper_wxTextEntry::_bind_base_Copy},
	{"base_GetInsertionPoint", &luna_wrapper_wxTextEntry::_bind_base_GetInsertionPoint},
	{"base_GetLastPosition", &luna_wrapper_wxTextEntry::_bind_base_GetLastPosition},
	{"base_GetRange", &luna_wrapper_wxTextEntry::_bind_base_GetRange},
	{"base_GetSelection", &luna_wrapper_wxTextEntry::_bind_base_GetSelection},
	{"base_GetStringSelection", &luna_wrapper_wxTextEntry::_bind_base_GetStringSelection},
	{"base_GetValue", &luna_wrapper_wxTextEntry::_bind_base_GetValue},
	{"base_IsEditable", &luna_wrapper_wxTextEntry::_bind_base_IsEditable},
	{"base_IsEmpty", &luna_wrapper_wxTextEntry::_bind_base_IsEmpty},
	{"base_Paste", &luna_wrapper_wxTextEntry::_bind_base_Paste},
	{"base_Redo", &luna_wrapper_wxTextEntry::_bind_base_Redo},
	{"base_Remove", &luna_wrapper_wxTextEntry::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxTextEntry::_bind_base_Replace},
	{"base_SetEditable", &luna_wrapper_wxTextEntry::_bind_base_SetEditable},
	{"base_SetInsertionPoint", &luna_wrapper_wxTextEntry::_bind_base_SetInsertionPoint},
	{"base_SetInsertionPointEnd", &luna_wrapper_wxTextEntry::_bind_base_SetInsertionPointEnd},
	{"base_SetMaxLength", &luna_wrapper_wxTextEntry::_bind_base_SetMaxLength},
	{"base_SetSelection", &luna_wrapper_wxTextEntry::_bind_base_SetSelection},
	{"base_SelectAll", &luna_wrapper_wxTextEntry::_bind_base_SelectAll},
	{"base_SetHint", &luna_wrapper_wxTextEntry::_bind_base_SetHint},
	{"base_GetHint", &luna_wrapper_wxTextEntry::_bind_base_GetHint},
	{"base_SetValue", &luna_wrapper_wxTextEntry::_bind_base_SetValue},
	{"base_Undo", &luna_wrapper_wxTextEntry::_bind_base_Undo},
	{"base_WriteText", &luna_wrapper_wxTextEntry::_bind_base_WriteText},
	{"dynCast", &luna_wrapper_wxTextEntry::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextEntry::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTextEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextEntry::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTextEntry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextEntry >::enumValues[] = {
	{0,0}
};


