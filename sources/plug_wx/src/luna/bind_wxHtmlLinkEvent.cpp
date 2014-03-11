#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlLinkEvent.h>

class luna_wrapper_wxHtmlLinkEvent {
public:
	typedef Luna< wxHtmlLinkEvent > luna_t;

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

		wxHtmlLinkEvent* self= (wxHtmlLinkEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlLinkEvent >::push(L,self,false);
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
		//wxHtmlLinkEvent* ptr= dynamic_cast< wxHtmlLinkEvent* >(Luna< wxObject >::check(L,1));
		wxHtmlLinkEvent* ptr= luna_caster< wxObject, wxHtmlLinkEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlLinkEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetLinkInfo(lua_State *L) {
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
	// wxHtmlLinkEvent::wxHtmlLinkEvent(int id, const wxHtmlLinkInfo & linkinfo)
	static wxHtmlLinkEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlLinkEvent::wxHtmlLinkEvent(int id, const wxHtmlLinkInfo & linkinfo) function, expected prototype:\nwxHtmlLinkEvent::wxHtmlLinkEvent(int id, const wxHtmlLinkInfo & linkinfo)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,1);
		const wxHtmlLinkInfo* linkinfo_ptr=(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,2));
		if( !linkinfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linkinfo in wxHtmlLinkEvent::wxHtmlLinkEvent function");
		}
		const wxHtmlLinkInfo & linkinfo=*linkinfo_ptr;

		return new wxHtmlLinkEvent(id, linkinfo);
	}

	// wxHtmlLinkEvent::wxHtmlLinkEvent(lua_Table * data, int id, const wxHtmlLinkInfo & linkinfo)
	static wxHtmlLinkEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlLinkEvent::wxHtmlLinkEvent(lua_Table * data, int id, const wxHtmlLinkInfo & linkinfo) function, expected prototype:\nwxHtmlLinkEvent::wxHtmlLinkEvent(lua_Table * data, int id, const wxHtmlLinkInfo & linkinfo)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		const wxHtmlLinkInfo* linkinfo_ptr=(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,3));
		if( !linkinfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg linkinfo in wxHtmlLinkEvent::wxHtmlLinkEvent function");
		}
		const wxHtmlLinkInfo & linkinfo=*linkinfo_ptr;

		return new wrapper_wxHtmlLinkEvent(L,NULL, id, linkinfo);
	}

	// Overload binder for wxHtmlLinkEvent::wxHtmlLinkEvent
	static wxHtmlLinkEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlLinkEvent, cannot match any of the overloads for function wxHtmlLinkEvent:\n  wxHtmlLinkEvent(int, const wxHtmlLinkInfo &)\n  wxHtmlLinkEvent(lua_Table *, int, const wxHtmlLinkInfo &)\n");
		return NULL;
	}


	// Function binds:
	// const wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const
	static int _bind_GetLinkInfo(lua_State *L) {
		if (!_lg_typecheck_GetLinkInfo(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const function, expected prototype:\nconst wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlLinkEvent* self=Luna< wxObject >::checkSubType< wxHtmlLinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlLinkInfo & wxHtmlLinkEvent::GetLinkInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlLinkInfo* lret = &self->GetLinkInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxHtmlLinkEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlLinkEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlLinkEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlLinkEvent* self=Luna< wxObject >::checkSubType< wxHtmlLinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlLinkEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlLinkEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHtmlLinkEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHtmlLinkEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHtmlLinkEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlLinkEvent* self=Luna< wxObject >::checkSubType< wxHtmlLinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxHtmlLinkEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxHtmlLinkEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxHtmlLinkEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxHtmlLinkEvent::base_Clone() const function, expected prototype:\nwxEvent * wxHtmlLinkEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlLinkEvent* self=Luna< wxObject >::checkSubType< wxHtmlLinkEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxHtmlLinkEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxHtmlLinkEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlLinkEvent* LunaTraits< wxHtmlLinkEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlLinkEvent::_bind_ctor(L);
}

void LunaTraits< wxHtmlLinkEvent >::_bind_dtor(wxHtmlLinkEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlLinkEvent >::className[] = "wxHtmlLinkEvent";
const char LunaTraits< wxHtmlLinkEvent >::fullName[] = "wxHtmlLinkEvent";
const char LunaTraits< wxHtmlLinkEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlLinkEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHtmlLinkEvent >::hash = 11938045;
const int LunaTraits< wxHtmlLinkEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlLinkEvent >::methods[] = {
	{"GetLinkInfo", &luna_wrapper_wxHtmlLinkEvent::_bind_GetLinkInfo},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlLinkEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHtmlLinkEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxHtmlLinkEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxHtmlLinkEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlLinkEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlLinkEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlLinkEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlLinkEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlLinkEvent >::enumValues[] = {
	{0,0}
};


