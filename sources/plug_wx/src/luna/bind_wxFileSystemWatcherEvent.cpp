#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileSystemWatcherEvent.h>

class luna_wrapper_wxFileSystemWatcherEvent {
public:
	typedef Luna< wxFileSystemWatcherEvent > luna_t;

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

		wxFileSystemWatcherEvent* self= (wxFileSystemWatcherEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileSystemWatcherEvent >::push(L,self,false);
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
		//wxFileSystemWatcherEvent* ptr= dynamic_cast< wxFileSystemWatcherEvent* >(Luna< wxObject >::check(L,1));
		wxFileSystemWatcherEvent* ptr= luna_caster< wxObject, wxFileSystemWatcherEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileSystemWatcherEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNewPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChangeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetErrorDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const wxFileName & wxFileSystemWatcherEvent::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in const wxFileName & wxFileSystemWatcherEvent::GetPath() const function, expected prototype:\nconst wxFileName & wxFileSystemWatcherEvent::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFileName & wxFileSystemWatcherEvent::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFileName* lret = &self->GetPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,false);

		return 1;
	}

	// const wxFileName & wxFileSystemWatcherEvent::GetNewPath() const
	static int _bind_GetNewPath(lua_State *L) {
		if (!_lg_typecheck_GetNewPath(L)) {
			luaL_error(L, "luna typecheck failed in const wxFileName & wxFileSystemWatcherEvent::GetNewPath() const function, expected prototype:\nconst wxFileName & wxFileSystemWatcherEvent::GetNewPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFileName & wxFileSystemWatcherEvent::GetNewPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFileName* lret = &self->GetNewPath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileName >::push(L,lret,false);

		return 1;
	}

	// int wxFileSystemWatcherEvent::GetChangeType() const
	static int _bind_GetChangeType(lua_State *L) {
		if (!_lg_typecheck_GetChangeType(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileSystemWatcherEvent::GetChangeType() const function, expected prototype:\nint wxFileSystemWatcherEvent::GetChangeType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileSystemWatcherEvent::GetChangeType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetChangeType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFileSystemWatcherEvent::IsError() const
	static int _bind_IsError(lua_State *L) {
		if (!_lg_typecheck_IsError(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileSystemWatcherEvent::IsError() const function, expected prototype:\nbool wxFileSystemWatcherEvent::IsError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileSystemWatcherEvent::IsError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsError();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileSystemWatcherEvent::GetErrorDescription() const
	static int _bind_GetErrorDescription(lua_State *L) {
		if (!_lg_typecheck_GetErrorDescription(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemWatcherEvent::GetErrorDescription() const function, expected prototype:\nwxString wxFileSystemWatcherEvent::GetErrorDescription() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystemWatcherEvent::GetErrorDescription() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetErrorDescription();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileSystemWatcherEvent::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileSystemWatcherEvent::ToString() const function, expected prototype:\nwxString wxFileSystemWatcherEvent::ToString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileSystemWatcherEvent::ToString() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxClassInfo * wxFileSystemWatcherEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileSystemWatcherEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileSystemWatcherEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileSystemWatcherEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileSystemWatcherEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxFileSystemWatcherEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxFileSystemWatcherEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxFileSystemWatcherEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileSystemWatcherEvent* self=Luna< wxObject >::checkSubType< wxFileSystemWatcherEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxFileSystemWatcherEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxFileSystemWatcherEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFileSystemWatcherEvent* LunaTraits< wxFileSystemWatcherEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxFileSystemWatcherEvent >::_bind_dtor(wxFileSystemWatcherEvent* obj) {
	delete obj;
}

const char LunaTraits< wxFileSystemWatcherEvent >::className[] = "wxFileSystemWatcherEvent";
const char LunaTraits< wxFileSystemWatcherEvent >::fullName[] = "wxFileSystemWatcherEvent";
const char LunaTraits< wxFileSystemWatcherEvent >::moduleName[] = "wx";
const char* LunaTraits< wxFileSystemWatcherEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxFileSystemWatcherEvent >::hash = 36134358;
const int LunaTraits< wxFileSystemWatcherEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileSystemWatcherEvent >::methods[] = {
	{"GetPath", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetPath},
	{"GetNewPath", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetNewPath},
	{"GetChangeType", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetChangeType},
	{"IsError", &luna_wrapper_wxFileSystemWatcherEvent::_bind_IsError},
	{"GetErrorDescription", &luna_wrapper_wxFileSystemWatcherEvent::_bind_GetErrorDescription},
	{"ToString", &luna_wrapper_wxFileSystemWatcherEvent::_bind_ToString},
	{"base_GetClassInfo", &luna_wrapper_wxFileSystemWatcherEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxFileSystemWatcherEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxFileSystemWatcherEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileSystemWatcherEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileSystemWatcherEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileSystemWatcherEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileSystemWatcherEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileSystemWatcherEvent >::enumValues[] = {
	{0,0}
};


