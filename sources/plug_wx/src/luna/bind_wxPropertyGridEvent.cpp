#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPropertyGridEvent.h>

class luna_wrapper_wxPropertyGridEvent {
public:
	typedef Luna< wxPropertyGridEvent > luna_t;

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

		wxPropertyGridEvent* self= (wxPropertyGridEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPropertyGridEvent >::push(L,self,false);
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
		//wxPropertyGridEvent* ptr= dynamic_cast< wxPropertyGridEvent* >(Luna< wxObject >::check(L,1));
		wxPropertyGridEvent* ptr= luna_caster< wxObject, wxPropertyGridEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridEvent >::push(L,ptr,false);
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
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanVeto(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMainParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValidationFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPropertyName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCanVeto(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValidationFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValidationFailureMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Veto(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WasVetoed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPropertyGridEvent::wxPropertyGridEvent(int commandType = 0, int id = 0)
	static wxPropertyGridEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridEvent::wxPropertyGridEvent(int commandType = 0, int id = 0) function, expected prototype:\nwxPropertyGridEvent::wxPropertyGridEvent(int commandType = 0, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxPropertyGridEvent(commandType, id);
	}

	// wxPropertyGridEvent::wxPropertyGridEvent(const wxPropertyGridEvent & event)
	static wxPropertyGridEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridEvent::wxPropertyGridEvent(const wxPropertyGridEvent & event) function, expected prototype:\nwxPropertyGridEvent::wxPropertyGridEvent(const wxPropertyGridEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPropertyGridEvent* event_ptr=(Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGridEvent::wxPropertyGridEvent function");
		}
		const wxPropertyGridEvent & event=*event_ptr;

		return new wxPropertyGridEvent(event);
	}

	// wxPropertyGridEvent::wxPropertyGridEvent(lua_Table * data, int commandType = 0, int id = 0)
	static wxPropertyGridEvent* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridEvent::wxPropertyGridEvent(lua_Table * data, int commandType = 0, int id = 0) function, expected prototype:\nwxPropertyGridEvent::wxPropertyGridEvent(lua_Table * data, int commandType = 0, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxPropertyGridEvent(L,NULL, commandType, id);
	}

	// wxPropertyGridEvent::wxPropertyGridEvent(lua_Table * data, const wxPropertyGridEvent & event)
	static wxPropertyGridEvent* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridEvent::wxPropertyGridEvent(lua_Table * data, const wxPropertyGridEvent & event) function, expected prototype:\nwxPropertyGridEvent::wxPropertyGridEvent(lua_Table * data, const wxPropertyGridEvent & event)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPropertyGridEvent* event_ptr=(Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGridEvent::wxPropertyGridEvent function");
		}
		const wxPropertyGridEvent & event=*event_ptr;

		return new wrapper_wxPropertyGridEvent(L,NULL, event);
	}

	// Overload binder for wxPropertyGridEvent::wxPropertyGridEvent
	static wxPropertyGridEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxPropertyGridEvent, cannot match any of the overloads for function wxPropertyGridEvent:\n  wxPropertyGridEvent(int, int)\n  wxPropertyGridEvent(const wxPropertyGridEvent &)\n  wxPropertyGridEvent(lua_Table *, int, int)\n  wxPropertyGridEvent(lua_Table *, const wxPropertyGridEvent &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxPropertyGridEvent::CanVeto() const
	static int _bind_CanVeto(lua_State *L) {
		if (!_lg_typecheck_CanVeto(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridEvent::CanVeto() const function, expected prototype:\nbool wxPropertyGridEvent::CanVeto() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridEvent::CanVeto() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanVeto();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxPropertyGridEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxPropertyGridEvent::GetColumn() const function, expected prototype:\nunsigned int wxPropertyGridEvent::GetColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxPropertyGridEvent::GetColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridEvent::GetMainParent() const
	static int _bind_GetMainParent(lua_State *L) {
		if (!_lg_typecheck_GetMainParent(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridEvent::GetMainParent() const function, expected prototype:\nwxPGProperty * wxPropertyGridEvent::GetMainParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridEvent::GetMainParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetMainParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridEvent::GetProperty() const
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridEvent::GetProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGridEvent::GetProperty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridEvent::GetProperty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// unsigned char wxPropertyGridEvent::GetValidationFailureBehavior() const
	static int _bind_GetValidationFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_GetValidationFailureBehavior(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxPropertyGridEvent::GetValidationFailureBehavior() const function, expected prototype:\nunsigned char wxPropertyGridEvent::GetValidationFailureBehavior() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxPropertyGridEvent::GetValidationFailureBehavior() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetValidationFailureBehavior();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// wxString wxPropertyGridEvent::GetPropertyName() const
	static int _bind_GetPropertyName(lua_State *L) {
		if (!_lg_typecheck_GetPropertyName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridEvent::GetPropertyName() const function, expected prototype:\nwxString wxPropertyGridEvent::GetPropertyName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridEvent::GetPropertyName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPropertyName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPropertyGridEvent::SetCanVeto(bool canVeto)
	static int _bind_SetCanVeto(lua_State *L) {
		if (!_lg_typecheck_SetCanVeto(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetCanVeto(bool canVeto) function, expected prototype:\nvoid wxPropertyGridEvent::SetCanVeto(bool canVeto)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canVeto=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetCanVeto(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCanVeto(canVeto);

		return 0;
	}

	// void wxPropertyGridEvent::SetProperty(wxPGProperty * p)
	static int _bind_SetProperty(lua_State *L) {
		if (!_lg_typecheck_SetProperty(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetProperty(wxPGProperty * p) function, expected prototype:\nvoid wxPropertyGridEvent::SetProperty(wxPGProperty * p)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPGProperty* p=(Luna< wxObject >::checkSubType< wxPGProperty >(L,2));

		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetProperty(wxPGProperty *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetProperty(p);

		return 0;
	}

	// void wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char flags)
	static int _bind_SetValidationFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_SetValidationFailureBehavior(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char flags) function, expected prototype:\nvoid wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char flags = (unsigned char)(lua_tointeger(L,2));

		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetValidationFailureBehavior(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValidationFailureBehavior(flags);

		return 0;
	}

	// void wxPropertyGridEvent::SetValidationFailureMessage(const wxString & message)
	static int _bind_SetValidationFailureMessage(lua_State *L) {
		if (!_lg_typecheck_SetValidationFailureMessage(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::SetValidationFailureMessage(const wxString & message) function, expected prototype:\nvoid wxPropertyGridEvent::SetValidationFailureMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::SetValidationFailureMessage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValidationFailureMessage(message);

		return 0;
	}

	// void wxPropertyGridEvent::Veto(bool veto = true)
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridEvent::Veto(bool veto = true) function, expected prototype:\nvoid wxPropertyGridEvent::Veto(bool veto = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool veto=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridEvent::Veto(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Veto(veto);

		return 0;
	}

	// bool wxPropertyGridEvent::WasVetoed() const
	static int _bind_WasVetoed(lua_State *L) {
		if (!_lg_typecheck_WasVetoed(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridEvent::WasVetoed() const function, expected prototype:\nbool wxPropertyGridEvent::WasVetoed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridEvent::WasVetoed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WasVetoed();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxPropertyGridEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPropertyGridEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPropertyGridEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPropertyGridEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPropertyGridEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxPropertyGridEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxPropertyGridEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxPropertyGridEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxPropertyGridEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxPropertyGridEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxPropertyGridEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxPropertyGridEvent::base_Clone() const function, expected prototype:\nwxEvent * wxPropertyGridEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridEvent* self=Luna< wxObject >::checkSubType< wxPropertyGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxPropertyGridEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxPropertyGridEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPropertyGridEvent* LunaTraits< wxPropertyGridEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPropertyGridEvent::_bind_ctor(L);
}

void LunaTraits< wxPropertyGridEvent >::_bind_dtor(wxPropertyGridEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridEvent >::className[] = "wxPropertyGridEvent";
const char LunaTraits< wxPropertyGridEvent >::fullName[] = "wxPropertyGridEvent";
const char LunaTraits< wxPropertyGridEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxPropertyGridEvent >::hash = 6006083;
const int LunaTraits< wxPropertyGridEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPropertyGridEvent >::methods[] = {
	{"CanVeto", &luna_wrapper_wxPropertyGridEvent::_bind_CanVeto},
	{"GetColumn", &luna_wrapper_wxPropertyGridEvent::_bind_GetColumn},
	{"GetMainParent", &luna_wrapper_wxPropertyGridEvent::_bind_GetMainParent},
	{"GetProperty", &luna_wrapper_wxPropertyGridEvent::_bind_GetProperty},
	{"GetValidationFailureBehavior", &luna_wrapper_wxPropertyGridEvent::_bind_GetValidationFailureBehavior},
	{"GetPropertyName", &luna_wrapper_wxPropertyGridEvent::_bind_GetPropertyName},
	{"SetCanVeto", &luna_wrapper_wxPropertyGridEvent::_bind_SetCanVeto},
	{"SetProperty", &luna_wrapper_wxPropertyGridEvent::_bind_SetProperty},
	{"SetValidationFailureBehavior", &luna_wrapper_wxPropertyGridEvent::_bind_SetValidationFailureBehavior},
	{"SetValidationFailureMessage", &luna_wrapper_wxPropertyGridEvent::_bind_SetValidationFailureMessage},
	{"Veto", &luna_wrapper_wxPropertyGridEvent::_bind_Veto},
	{"WasVetoed", &luna_wrapper_wxPropertyGridEvent::_bind_WasVetoed},
	{"base_GetClassInfo", &luna_wrapper_wxPropertyGridEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxPropertyGridEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxPropertyGridEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxPropertyGridEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPropertyGridEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPropertyGridEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGridEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridEvent >::enumValues[] = {
	{0,0}
};


