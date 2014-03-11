#include <plug_common.h>

#include <luna/wrappers/wrapper_wxQueryLayoutInfoEvent.h>

class luna_wrapper_wxQueryLayoutInfoEvent {
public:
	typedef Luna< wxQueryLayoutInfoEvent > luna_t;

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

		wxQueryLayoutInfoEvent* self= (wxQueryLayoutInfoEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxQueryLayoutInfoEvent >::push(L,self,false);
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
		//wxQueryLayoutInfoEvent* ptr= dynamic_cast< wxQueryLayoutInfoEvent* >(Luna< wxObject >::check(L,1));
		wxQueryLayoutInfoEvent* ptr= luna_caster< wxObject, wxQueryLayoutInfoEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxQueryLayoutInfoEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRequestedLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRequestedLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
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
	// wxQueryLayoutInfoEvent::wxQueryLayoutInfoEvent(lua_Table * data, int id = 0)
	static wxQueryLayoutInfoEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxQueryLayoutInfoEvent::wxQueryLayoutInfoEvent(lua_Table * data, int id = 0) function, expected prototype:\nwxQueryLayoutInfoEvent::wxQueryLayoutInfoEvent(lua_Table * data, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxQueryLayoutInfoEvent(L,NULL, id);
	}


	// Function binds:
	// wxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const function, expected prototype:\nwxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutAlignment wxQueryLayoutInfoEvent::GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxQueryLayoutInfoEvent::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxQueryLayoutInfoEvent::GetFlags() const function, expected prototype:\nint wxQueryLayoutInfoEvent::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxQueryLayoutInfoEvent::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const function, expected prototype:\nwxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutOrientation wxQueryLayoutInfoEvent::GetOrientation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutOrientation lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxQueryLayoutInfoEvent::GetRequestedLength() const
	static int _bind_GetRequestedLength(lua_State *L) {
		if (!_lg_typecheck_GetRequestedLength(L)) {
			luaL_error(L, "luna typecheck failed in int wxQueryLayoutInfoEvent::GetRequestedLength() const function, expected prototype:\nint wxQueryLayoutInfoEvent::GetRequestedLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxQueryLayoutInfoEvent::GetRequestedLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRequestedLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSize wxQueryLayoutInfoEvent::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxQueryLayoutInfoEvent::GetSize() const function, expected prototype:\nwxSize wxQueryLayoutInfoEvent::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxQueryLayoutInfoEvent::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment alignment)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment alignment) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutAlignment alignment=(wxLayoutAlignment)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetAlignment(wxLayoutAlignment). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlignment(alignment);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetFlags(int flags) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetFlags(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation orientation)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation orientation) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutOrientation orientation=(wxLayoutOrientation)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetOrientation(wxLayoutOrientation). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOrientation(orientation);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetRequestedLength(int length)
	static int _bind_SetRequestedLength(lua_State *L) {
		if (!_lg_typecheck_SetRequestedLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetRequestedLength(int length) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetRequestedLength(int length)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int length=(int)lua_tointeger(L,2);

		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetRequestedLength(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRequestedLength(length);

		return 0;
	}

	// void wxQueryLayoutInfoEvent::SetSize(const wxSize & size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxQueryLayoutInfoEvent::SetSize(const wxSize & size) function, expected prototype:\nvoid wxQueryLayoutInfoEvent::SetSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxQueryLayoutInfoEvent::SetSize function");
		}
		const wxSize & size=*size_ptr;

		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxQueryLayoutInfoEvent::SetSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(size);

		return 0;
	}

	// wxClassInfo * wxQueryLayoutInfoEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxQueryLayoutInfoEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxQueryLayoutInfoEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxQueryLayoutInfoEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxQueryLayoutInfoEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxQueryLayoutInfoEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxQueryLayoutInfoEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxQueryLayoutInfoEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxQueryLayoutInfoEvent* self=Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxQueryLayoutInfoEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxQueryLayoutInfoEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxQueryLayoutInfoEvent* LunaTraits< wxQueryLayoutInfoEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxQueryLayoutInfoEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxQueryLayoutInfoEvent >::_bind_dtor(wxQueryLayoutInfoEvent* obj) {
	delete obj;
}

const char LunaTraits< wxQueryLayoutInfoEvent >::className[] = "wxQueryLayoutInfoEvent";
const char LunaTraits< wxQueryLayoutInfoEvent >::fullName[] = "wxQueryLayoutInfoEvent";
const char LunaTraits< wxQueryLayoutInfoEvent >::moduleName[] = "wx";
const char* LunaTraits< wxQueryLayoutInfoEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxQueryLayoutInfoEvent >::hash = 82783281;
const int LunaTraits< wxQueryLayoutInfoEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxQueryLayoutInfoEvent >::methods[] = {
	{"GetAlignment", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetAlignment},
	{"GetFlags", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetFlags},
	{"GetOrientation", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetOrientation},
	{"GetRequestedLength", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetRequestedLength},
	{"GetSize", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_GetSize},
	{"SetAlignment", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetAlignment},
	{"SetFlags", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetFlags},
	{"SetOrientation", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetOrientation},
	{"SetRequestedLength", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetRequestedLength},
	{"SetSize", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_SetSize},
	{"base_GetClassInfo", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxQueryLayoutInfoEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxQueryLayoutInfoEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxQueryLayoutInfoEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxQueryLayoutInfoEvent >::enumValues[] = {
	{0,0}
};


