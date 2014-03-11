#include <plug_common.h>

#include <luna/wrappers/wrapper_wxValidator.h>

class luna_wrapper_wxValidator {
public:
	typedef Luna< wxValidator > luna_t;

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

		wxValidator* self= (wxValidator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxValidator >::push(L,self,false);
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
		//wxValidator* ptr= dynamic_cast< wxValidator* >(Luna< wxObject >::check(L,1));
		wxValidator* ptr= luna_caster< wxObject, wxValidator >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxValidator >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
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

	inline static bool _lg_typecheck_SuppressBellOnError(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
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
	// wxValidator::wxValidator()
	static wxValidator* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator::wxValidator() function, expected prototype:\nwxValidator::wxValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxValidator();
	}

	// wxValidator::wxValidator(lua_Table * data)
	static wxValidator* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator::wxValidator(lua_Table * data) function, expected prototype:\nwxValidator::wxValidator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxValidator(L,NULL);
	}

	// Overload binder for wxValidator::wxValidator
	static wxValidator* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxValidator, cannot match any of the overloads for function wxValidator:\n  wxValidator()\n  wxValidator(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxObject * wxValidator::Clone() const
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxValidator::Clone() const function, expected prototype:\nwxObject * wxValidator::Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxValidator::Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxValidator::GetWindow() const
	static int _bind_GetWindow(lua_State *L) {
		if (!_lg_typecheck_GetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxValidator::GetWindow() const function, expected prototype:\nwxWindow * wxValidator::GetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxValidator::GetWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxValidator::SetWindow(wxWindow * window)
	static int _bind_SetWindow(lua_State *L) {
		if (!_lg_typecheck_SetWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxValidator::SetWindow(wxWindow * window) function, expected prototype:\nvoid wxValidator::SetWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxValidator::SetWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindow(window);

		return 0;
	}

	// bool wxValidator::TransferFromWindow()
	static int _bind_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::TransferFromWindow() function, expected prototype:\nbool wxValidator::TransferFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::TransferFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxValidator::TransferToWindow()
	static int _bind_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::TransferToWindow() function, expected prototype:\nbool wxValidator::TransferToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::TransferToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxValidator::Validate(wxWindow * parent)
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::Validate(wxWindow * parent) function, expected prototype:\nbool wxValidator::Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::Validate(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxValidator::SuppressBellOnError(bool suppress = true)
	static int _bind_SuppressBellOnError(lua_State *L) {
		if (!_lg_typecheck_SuppressBellOnError(L)) {
			luaL_error(L, "luna typecheck failed in static void wxValidator::SuppressBellOnError(bool suppress = true) function, expected prototype:\nstatic void wxValidator::SuppressBellOnError(bool suppress = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool suppress=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)true;

		wxValidator::SuppressBellOnError(suppress);

		return 0;
	}

	// wxClassInfo * wxValidator::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxValidator::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxValidator::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxValidator::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxValidator::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxValidator::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxValidator::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxValidator::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxValidator::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxValidator::QueueEvent(event);

		return 0;
	}

	// void wxValidator::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxValidator::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxValidator::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxValidator::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxValidator::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxValidator::AddPendingEvent(event);

		return 0;
	}

	// bool wxValidator::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxValidator::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxValidator::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxValidator::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxValidator::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxValidator::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxValidator::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxValidator::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxValidator::SetNextHandler(handler);

		return 0;
	}

	// void wxValidator::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxValidator::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxValidator::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxValidator::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxValidator::SetPreviousHandler(handler);

		return 0;
	}

	// wxObject * wxValidator::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxValidator::base_Clone() const function, expected prototype:\nwxObject * wxValidator::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxValidator::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->wxValidator::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// bool wxValidator::base_TransferFromWindow()
	static int _bind_base_TransferFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::base_TransferFromWindow() function, expected prototype:\nbool wxValidator::base_TransferFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::base_TransferFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxValidator::TransferFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxValidator::base_TransferToWindow()
	static int _bind_base_TransferToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::base_TransferToWindow() function, expected prototype:\nbool wxValidator::base_TransferToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::base_TransferToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxValidator::TransferToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxValidator::base_Validate(wxWindow * parent)
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxValidator::base_Validate(wxWindow * parent) function, expected prototype:\nbool wxValidator::base_Validate(wxWindow * parent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxValidator* self=Luna< wxObject >::checkSubType< wxValidator >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxValidator::base_Validate(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxValidator::Validate(parent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxValidator* LunaTraits< wxValidator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxValidator::_bind_ctor(L);
}

void LunaTraits< wxValidator >::_bind_dtor(wxValidator* obj) {
	delete obj;
}

const char LunaTraits< wxValidator >::className[] = "wxValidator";
const char LunaTraits< wxValidator >::fullName[] = "wxValidator";
const char LunaTraits< wxValidator >::moduleName[] = "wx";
const char* LunaTraits< wxValidator >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxValidator >::hash = 48897359;
const int LunaTraits< wxValidator >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxValidator >::methods[] = {
	{"Clone", &luna_wrapper_wxValidator::_bind_Clone},
	{"GetWindow", &luna_wrapper_wxValidator::_bind_GetWindow},
	{"SetWindow", &luna_wrapper_wxValidator::_bind_SetWindow},
	{"TransferFromWindow", &luna_wrapper_wxValidator::_bind_TransferFromWindow},
	{"TransferToWindow", &luna_wrapper_wxValidator::_bind_TransferToWindow},
	{"Validate", &luna_wrapper_wxValidator::_bind_Validate},
	{"SuppressBellOnError", &luna_wrapper_wxValidator::_bind_SuppressBellOnError},
	{"base_GetClassInfo", &luna_wrapper_wxValidator::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxValidator::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxValidator::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxValidator::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxValidator::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxValidator::_bind_base_SetPreviousHandler},
	{"base_Clone", &luna_wrapper_wxValidator::_bind_base_Clone},
	{"base_TransferFromWindow", &luna_wrapper_wxValidator::_bind_base_TransferFromWindow},
	{"base_TransferToWindow", &luna_wrapper_wxValidator::_bind_base_TransferToWindow},
	{"base_Validate", &luna_wrapper_wxValidator::_bind_base_Validate},
	{"fromVoid", &luna_wrapper_wxValidator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxValidator::_bind_asVoid},
	{"getTable", &luna_wrapper_wxValidator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxValidator >::converters[] = {
	{"wxObject", &luna_wrapper_wxValidator::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxValidator >::enumValues[] = {
	{0,0}
};


