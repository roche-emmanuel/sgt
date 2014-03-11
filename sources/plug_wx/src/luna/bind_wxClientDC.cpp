#include <plug_common.h>

#include <luna/wrappers/wrapper_wxClientDC.h>

class luna_wrapper_wxClientDC {
public:
	typedef Luna< wxClientDC > luna_t;

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

		wxClientDC* self= (wxClientDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxClientDC >::push(L,self,false);
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
		//wxClientDC* ptr= dynamic_cast< wxClientDC* >(Luna< wxObject >::check(L,1));
		wxClientDC* ptr= luna_caster< wxObject, wxClientDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClientDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClientDC::wxClientDC(wxWindow * window)
	static wxClientDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxClientDC::wxClientDC(wxWindow * window) function, expected prototype:\nwxClientDC::wxClientDC(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		return new wxClientDC(window);
	}

	// wxClientDC::wxClientDC(lua_Table * data, wxWindow * window)
	static wxClientDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxClientDC::wxClientDC(lua_Table * data, wxWindow * window) function, expected prototype:\nwxClientDC::wxClientDC(lua_Table * data, wxWindow * window)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		return new wrapper_wxClientDC(L,NULL, window);
	}

	// Overload binder for wxClientDC::wxClientDC
	static wxClientDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxClientDC, cannot match any of the overloads for function wxClientDC:\n  wxClientDC(wxWindow *)\n  wxClientDC(lua_Table *, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxClientDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxClientDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxClientDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClientDC* self=Luna< wxObject >::checkSubType< wxClientDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxClientDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxClientDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxClientDC* LunaTraits< wxClientDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClientDC::_bind_ctor(L);
}

void LunaTraits< wxClientDC >::_bind_dtor(wxClientDC* obj) {
	delete obj;
}

const char LunaTraits< wxClientDC >::className[] = "wxClientDC";
const char LunaTraits< wxClientDC >::fullName[] = "wxClientDC";
const char LunaTraits< wxClientDC >::moduleName[] = "wx";
const char* LunaTraits< wxClientDC >::parents[] = {"wx.wxWindowDC", 0};
const int LunaTraits< wxClientDC >::hash = 93288694;
const int LunaTraits< wxClientDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClientDC >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxClientDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxClientDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxClientDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxClientDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxClientDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxClientDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClientDC >::enumValues[] = {
	{0,0}
};


