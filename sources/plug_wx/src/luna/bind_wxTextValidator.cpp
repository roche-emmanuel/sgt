#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextValidator.h>

class luna_wrapper_wxTextValidator {
public:
	typedef Luna< wxTextValidator > luna_t;

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

		wxTextValidator* self= (wxTextValidator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextValidator >::push(L,self,false);
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
		//wxTextValidator* ptr= dynamic_cast< wxTextValidator* >(Luna< wxObject >::check(L,1));
		wxTextValidator* ptr= luna_caster< wxObject, wxTextValidator >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextValidator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTextValidator >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTextValidator >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExcludes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIncludes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnChar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExcludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharExcludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIncludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCharIncludes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransferFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Validate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Validate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTextValidator::wxTextValidator(const wxTextValidator & validator)
	static wxTextValidator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTextValidator::wxTextValidator(const wxTextValidator & validator) function, expected prototype:\nwxTextValidator::wxTextValidator(const wxTextValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxTextValidator >(L,1));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextValidator::wxTextValidator function");
		}
		const wxTextValidator & validator=*validator_ptr;

		return new wxTextValidator(validator);
	}

	// wxTextValidator::wxTextValidator(long style = ::wxFILTER_NONE, wxString * valPtr = NULL)
	static wxTextValidator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTextValidator::wxTextValidator(long style = ::wxFILTER_NONE, wxString * valPtr = NULL) function, expected prototype:\nwxTextValidator::wxTextValidator(long style = ::wxFILTER_NONE, wxString * valPtr = NULL)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long style=luatop>0 ? (long)lua_tonumber(L,1) : (long)::wxFILTER_NONE;
		wxString valPtr(lua_tostring(L,2),lua_objlen(L,2));

		return new wxTextValidator(style, &valPtr);
	}

	// wxTextValidator::wxTextValidator(lua_Table * data, const wxTextValidator & validator)
	static wxTextValidator* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTextValidator::wxTextValidator(lua_Table * data, const wxTextValidator & validator) function, expected prototype:\nwxTextValidator::wxTextValidator(lua_Table * data, const wxTextValidator & validator)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTextValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxTextValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTextValidator::wxTextValidator function");
		}
		const wxTextValidator & validator=*validator_ptr;

		return new wrapper_wxTextValidator(L,NULL, validator);
	}

	// wxTextValidator::wxTextValidator(lua_Table * data, long style = ::wxFILTER_NONE, wxString * valPtr = NULL)
	static wxTextValidator* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxTextValidator::wxTextValidator(lua_Table * data, long style = ::wxFILTER_NONE, wxString * valPtr = NULL) function, expected prototype:\nwxTextValidator::wxTextValidator(lua_Table * data, long style = ::wxFILTER_NONE, wxString * valPtr = NULL)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxFILTER_NONE;
		wxString valPtr(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_wxTextValidator(L,NULL, style, &valPtr);
	}

	// Overload binder for wxTextValidator::wxTextValidator
	static wxTextValidator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTextValidator, cannot match any of the overloads for function wxTextValidator:\n  wxTextValidator(const wxTextValidator &)\n  wxTextValidator(long, wxString *)\n  wxTextValidator(lua_Table *, const wxTextValidator &)\n  wxTextValidator(lua_Table *, long, wxString *)\n");
		return NULL;
	}


	// Function binds:
	// wxObject * wxTextValidator::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxTextValidator::Clone() const function, expected prototype:\nwxObject * wxTextValidator::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxTextValidator::Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxArrayString & wxTextValidator::GetExcludes()
	static int _bind_GetExcludes(lua_State *L) {
		if (!_lg_typecheck_GetExcludes(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayString & wxTextValidator::GetExcludes() function, expected prototype:\nwxArrayString & wxTextValidator::GetExcludes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayString & wxTextValidator::GetExcludes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxArrayString* lret = &self->GetExcludes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// wxArrayString & wxTextValidator::GetIncludes()
	static int _bind_GetIncludes(lua_State *L) {
		if (!_lg_typecheck_GetIncludes(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayString & wxTextValidator::GetIncludes() function, expected prototype:\nwxArrayString & wxTextValidator::GetIncludes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayString & wxTextValidator::GetIncludes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxArrayString* lret = &self->GetIncludes();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// long wxTextValidator::GetStyle() const
	static int _bind_GetStyle(lua_State *L) {
		if (!_lg_typecheck_GetStyle(L)) {
			luaL_error(L, "luna typecheck failed in long wxTextValidator::GetStyle() const function, expected prototype:\nlong wxTextValidator::GetStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTextValidator::GetStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTextValidator::HasFlag(wxTextValidatorStyle style) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::HasFlag(wxTextValidatorStyle style) const function, expected prototype:\nbool wxTextValidator::HasFlag(wxTextValidatorStyle style) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTextValidatorStyle style=(wxTextValidatorStyle)lua_tointeger(L,2);

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::HasFlag(wxTextValidatorStyle) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFlag(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextValidator::OnChar(wxKeyEvent & event)
	static int _bind_OnChar(lua_State *L) {
		if (!_lg_typecheck_OnChar(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::OnChar(wxKeyEvent & event) function, expected prototype:\nvoid wxTextValidator::OnChar(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextValidator::OnChar function");
		}
		wxKeyEvent & event=*event_ptr;

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::OnChar(wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnChar(event);

		return 0;
	}

	// void wxTextValidator::SetExcludes(const wxArrayString & stringList)
	static int _bind_SetExcludes(lua_State *L) {
		if (!_lg_typecheck_SetExcludes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetExcludes(const wxArrayString & stringList) function, expected prototype:\nvoid wxTextValidator::SetExcludes(const wxArrayString & stringList)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* stringList_ptr=(Luna< wxArrayString >::check(L,2));
		if( !stringList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stringList in wxTextValidator::SetExcludes function");
		}
		const wxArrayString & stringList=*stringList_ptr;

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetExcludes(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExcludes(stringList);

		return 0;
	}

	// void wxTextValidator::SetCharExcludes(const wxString & chars)
	static int _bind_SetCharExcludes(lua_State *L) {
		if (!_lg_typecheck_SetCharExcludes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetCharExcludes(const wxString & chars) function, expected prototype:\nvoid wxTextValidator::SetCharExcludes(const wxString & chars)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString chars(lua_tostring(L,2),lua_objlen(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetCharExcludes(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCharExcludes(chars);

		return 0;
	}

	// void wxTextValidator::SetIncludes(const wxArrayString & stringList)
	static int _bind_SetIncludes(lua_State *L) {
		if (!_lg_typecheck_SetIncludes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetIncludes(const wxArrayString & stringList) function, expected prototype:\nvoid wxTextValidator::SetIncludes(const wxArrayString & stringList)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* stringList_ptr=(Luna< wxArrayString >::check(L,2));
		if( !stringList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stringList in wxTextValidator::SetIncludes function");
		}
		const wxArrayString & stringList=*stringList_ptr;

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetIncludes(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIncludes(stringList);

		return 0;
	}

	// void wxTextValidator::SetCharIncludes(const wxString & chars)
	static int _bind_SetCharIncludes(lua_State *L) {
		if (!_lg_typecheck_SetCharIncludes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetCharIncludes(const wxString & chars) function, expected prototype:\nvoid wxTextValidator::SetCharIncludes(const wxString & chars)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString chars(lua_tostring(L,2),lua_objlen(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetCharIncludes(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCharIncludes(chars);

		return 0;
	}

	// void wxTextValidator::SetStyle(long style)
	static int _bind_SetStyle(lua_State *L) {
		if (!_lg_typecheck_SetStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::SetStyle(long style) function, expected prototype:\nvoid wxTextValidator::SetStyle(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::SetStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStyle(style);

		return 0;
	}

	// bool wxTextValidator::TransferFromWindow()
	static int _bind_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::TransferFromWindow() function, expected prototype:\nbool wxTextValidator::TransferFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::TransferFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::TransferToWindow()
	static int _bind_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::TransferToWindow() function, expected prototype:\nbool wxTextValidator::TransferToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::TransferToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::Validate(wxWindow * parent)
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::Validate(wxWindow * parent) function, expected prototype:\nbool wxTextValidator::Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::Validate(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxTextValidator::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTextValidator::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTextValidator::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTextValidator::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTextValidator::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxTextValidator::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxTextValidator::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextValidator::QueueEvent(event);

		return 0;
	}

	// void wxTextValidator::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxTextValidator::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextValidator::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextValidator::AddPendingEvent(event);

		return 0;
	}

	// bool wxTextValidator::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxTextValidator::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTextValidator::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextValidator::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTextValidator::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTextValidator::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextValidator::SetNextHandler(handler);

		return 0;
	}

	// void wxTextValidator::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextValidator::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTextValidator::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextValidator::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTextValidator::SetPreviousHandler(handler);

		return 0;
	}

	// wxObject * wxTextValidator::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxTextValidator::base_Clone() const function, expected prototype:\nwxObject * wxTextValidator::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxTextValidator::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->wxTextValidator::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxTextValidator::base_TransferFromWindow()
	static int _bind_base_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::base_TransferFromWindow() function, expected prototype:\nbool wxTextValidator::base_TransferFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::base_TransferFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextValidator::TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::base_TransferToWindow()
	static int _bind_base_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::base_TransferToWindow() function, expected prototype:\nbool wxTextValidator::base_TransferToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::base_TransferToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextValidator::TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTextValidator::base_Validate(wxWindow * parent)
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextValidator::base_Validate(wxWindow * parent) function, expected prototype:\nbool wxTextValidator::base_Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTextValidator* self=Luna< wxObject >::checkSubType< wxTextValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextValidator::base_Validate(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTextValidator::Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTextValidator* LunaTraits< wxTextValidator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTextValidator::_bind_ctor(L);
}

void LunaTraits< wxTextValidator >::_bind_dtor(wxTextValidator* obj) {
	delete obj;
}

const char LunaTraits< wxTextValidator >::className[] = "wxTextValidator";
const char LunaTraits< wxTextValidator >::fullName[] = "wxTextValidator";
const char LunaTraits< wxTextValidator >::moduleName[] = "wx";
const char* LunaTraits< wxTextValidator >::parents[] = {"wx.wxValidator", 0};
const int LunaTraits< wxTextValidator >::hash = 48482282;
const int LunaTraits< wxTextValidator >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTextValidator >::methods[] = {
	{"Clone", &luna_wrapper_wxTextValidator::_bind_Clone},
	{"GetExcludes", &luna_wrapper_wxTextValidator::_bind_GetExcludes},
	{"GetIncludes", &luna_wrapper_wxTextValidator::_bind_GetIncludes},
	{"GetStyle", &luna_wrapper_wxTextValidator::_bind_GetStyle},
	{"HasFlag", &luna_wrapper_wxTextValidator::_bind_HasFlag},
	{"OnChar", &luna_wrapper_wxTextValidator::_bind_OnChar},
	{"SetExcludes", &luna_wrapper_wxTextValidator::_bind_SetExcludes},
	{"SetCharExcludes", &luna_wrapper_wxTextValidator::_bind_SetCharExcludes},
	{"SetIncludes", &luna_wrapper_wxTextValidator::_bind_SetIncludes},
	{"SetCharIncludes", &luna_wrapper_wxTextValidator::_bind_SetCharIncludes},
	{"SetStyle", &luna_wrapper_wxTextValidator::_bind_SetStyle},
	{"TransferFromWindow", &luna_wrapper_wxTextValidator::_bind_TransferFromWindow},
	{"TransferToWindow", &luna_wrapper_wxTextValidator::_bind_TransferToWindow},
	{"Validate", &luna_wrapper_wxTextValidator::_bind_Validate},
	{"base_GetClassInfo", &luna_wrapper_wxTextValidator::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxTextValidator::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxTextValidator::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxTextValidator::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxTextValidator::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxTextValidator::_bind_base_SetPreviousHandler},
	{"base_Clone", &luna_wrapper_wxTextValidator::_bind_base_Clone},
	{"base_TransferFromWindow", &luna_wrapper_wxTextValidator::_bind_base_TransferFromWindow},
	{"base_TransferToWindow", &luna_wrapper_wxTextValidator::_bind_base_TransferToWindow},
	{"base_Validate", &luna_wrapper_wxTextValidator::_bind_base_Validate},
	{"fromVoid", &luna_wrapper_wxTextValidator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextValidator::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTextValidator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextValidator >::converters[] = {
	{"wxObject", &luna_wrapper_wxTextValidator::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextValidator >::enumValues[] = {
	{0,0}
};


