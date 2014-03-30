#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSizeEvent.h>

class luna_wrapper_wxSizeEvent {
public:
	typedef Luna< wxSizeEvent > luna_t;

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

		wxSizeEvent* self= (wxSizeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSizeEvent >::push(L,self,false);
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
		//wxSizeEvent* ptr= dynamic_cast< wxSizeEvent* >(Luna< wxObject >::check(L,1));
		wxSizeEvent* ptr= luna_caster< wxObject, wxSizeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
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
	// wxSizeEvent::wxSizeEvent(lua_Table * data, const wxSize & sz, int id = 0)
	static wxSizeEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxSizeEvent::wxSizeEvent(lua_Table * data, const wxSize & sz, int id = 0) function, expected prototype:\nwxSizeEvent::wxSizeEvent(lua_Table * data, const wxSize & sz, int id = 0)\nClass arguments details:\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxSizeEvent::wxSizeEvent function");
		}
		const wxSize & sz=*sz_ptr;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxSizeEvent(L,NULL, sz, id);
	}


	// Function binds:
	// wxSize wxSizeEvent::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSizeEvent::GetSize() const function, expected prototype:\nwxSize wxSizeEvent::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizeEvent* self=Luna< wxObject >::checkSubType< wxSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSizeEvent::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSizeEvent::SetSize(wxSize size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizeEvent::SetSize(wxSize size) function, expected prototype:\nvoid wxSizeEvent::SetSize(wxSize size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSizeEvent::SetSize function");
		}
		wxSize size=*size_ptr;

		wxSizeEvent* self=Luna< wxObject >::checkSubType< wxSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizeEvent::SetSize(wxSize). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(size);

		return 0;
	}

	// wxRect wxSizeEvent::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxSizeEvent::GetRect() const function, expected prototype:\nwxRect wxSizeEvent::GetRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizeEvent* self=Luna< wxObject >::checkSubType< wxSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxSizeEvent::GetRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxSizeEvent::SetRect(wxRect rect)
	static int _bind_SetRect(lua_State *L) {
		if (!_lg_typecheck_SetRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxSizeEvent::SetRect(wxRect rect) function, expected prototype:\nvoid wxSizeEvent::SetRect(wxRect rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxSizeEvent::SetRect function");
		}
		wxRect rect=*rect_ptr;

		wxSizeEvent* self=Luna< wxObject >::checkSubType< wxSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSizeEvent::SetRect(wxRect). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRect(rect);

		return 0;
	}

	// wxClassInfo * wxSizeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSizeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSizeEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizeEvent* self=Luna< wxObject >::checkSubType< wxSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSizeEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSizeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSizeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSizeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSizeEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSizeEvent* self=Luna< wxObject >::checkSubType< wxSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxSizeEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxSizeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSizeEvent* LunaTraits< wxSizeEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSizeEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSizeEvent >::_bind_dtor(wxSizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSizeEvent >::className[] = "wxSizeEvent";
const char LunaTraits< wxSizeEvent >::fullName[] = "wxSizeEvent";
const char LunaTraits< wxSizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSizeEvent >::hash = 59394658;
const int LunaTraits< wxSizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSizeEvent >::methods[] = {
	{"GetSize", &luna_wrapper_wxSizeEvent::_bind_GetSize},
	{"SetSize", &luna_wrapper_wxSizeEvent::_bind_SetSize},
	{"GetRect", &luna_wrapper_wxSizeEvent::_bind_GetRect},
	{"SetRect", &luna_wrapper_wxSizeEvent::_bind_SetRect},
	{"base_GetClassInfo", &luna_wrapper_wxSizeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSizeEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxSizeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSizeEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSizeEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSizeEvent >::enumValues[] = {
	{0,0}
};


