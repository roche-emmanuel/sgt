#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWizardEvent.h>

class luna_wrapper_wxWizardEvent {
public:
	typedef Luna< wxWizardEvent > luna_t;

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

		wxWizardEvent* self= (wxWizardEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWizardEvent >::push(L,self,false);
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
		//wxWizardEvent* ptr= dynamic_cast< wxWizardEvent* >(Luna< wxObject >::check(L,1));
		wxWizardEvent* ptr= luna_caster< wxObject, wxWizardEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWizardEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxWizardPage >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::checkSubType< wxWizardPage >(L,5)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage(lua_State *L) {
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
	// wxWizardEvent::wxWizardEvent(int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0)
	static wxWizardEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWizardEvent::wxWizardEvent(int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0) function, expected prototype:\nwxWizardEvent::wxWizardEvent(int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0)\nClass arguments details:\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int type=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		bool direction=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		wxWizardPage* page=luatop>3 ? (Luna< wxObject >::checkSubType< wxWizardPage >(L,4)) : (wxWizardPage*)0;

		return new wxWizardEvent(type, id, direction, page);
	}

	// wxWizardEvent::wxWizardEvent(lua_Table * data, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0)
	static wxWizardEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWizardEvent::wxWizardEvent(lua_Table * data, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0) function, expected prototype:\nwxWizardEvent::wxWizardEvent(lua_Table * data, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0)\nClass arguments details:\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		bool direction=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		wxWizardPage* page=luatop>4 ? (Luna< wxObject >::checkSubType< wxWizardPage >(L,5)) : (wxWizardPage*)0;

		return new wrapper_wxWizardEvent(L,NULL, type, id, direction, page);
	}

	// Overload binder for wxWizardEvent::wxWizardEvent
	static wxWizardEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxWizardEvent, cannot match any of the overloads for function wxWizardEvent:\n  wxWizardEvent(int, int, bool, wxWizardPage *)\n  wxWizardEvent(lua_Table *, int, int, bool, wxWizardPage *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWizardEvent::GetDirection() const
	static int _bind_GetDirection(lua_State *L) {
		if (!_lg_typecheck_GetDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWizardEvent::GetDirection() const function, expected prototype:\nbool wxWizardEvent::GetDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWizardEvent::GetDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetDirection();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWizardPage * wxWizardEvent::GetPage() const
	static int _bind_GetPage(lua_State *L) {
		if (!_lg_typecheck_GetPage(L)) {
			luaL_error(L, "luna typecheck failed in wxWizardPage * wxWizardEvent::GetPage() const function, expected prototype:\nwxWizardPage * wxWizardEvent::GetPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWizardPage * wxWizardEvent::GetPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWizardPage * lret = self->GetPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWizardPage >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxWizardEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWizardEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWizardEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWizardEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxWizardEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxWizardEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxWizardEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxWizardEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxWizardEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxWizardEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxWizardEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxWizardEvent::base_Clone() const function, expected prototype:\nwxEvent * wxWizardEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWizardEvent* self=Luna< wxObject >::checkSubType< wxWizardEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxWizardEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxWizardEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxWizardEvent* LunaTraits< wxWizardEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWizardEvent::_bind_ctor(L);
}

void LunaTraits< wxWizardEvent >::_bind_dtor(wxWizardEvent* obj) {
	delete obj;
}

const char LunaTraits< wxWizardEvent >::className[] = "wxWizardEvent";
const char LunaTraits< wxWizardEvent >::fullName[] = "wxWizardEvent";
const char LunaTraits< wxWizardEvent >::moduleName[] = "wx";
const char* LunaTraits< wxWizardEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxWizardEvent >::hash = 1835864;
const int LunaTraits< wxWizardEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxWizardEvent >::methods[] = {
	{"GetDirection", &luna_wrapper_wxWizardEvent::_bind_GetDirection},
	{"GetPage", &luna_wrapper_wxWizardEvent::_bind_GetPage},
	{"base_GetClassInfo", &luna_wrapper_wxWizardEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxWizardEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxWizardEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxWizardEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWizardEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWizardEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWizardEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxWizardEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWizardEvent >::enumValues[] = {
	{0,0}
};


