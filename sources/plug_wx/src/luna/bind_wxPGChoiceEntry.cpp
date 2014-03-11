#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPGChoiceEntry.h>

class luna_wrapper_wxPGChoiceEntry {
public:
	typedef Luna< wxPGChoiceEntry > luna_t;

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

		wxPGChoiceEntry* self= (wxPGChoiceEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGChoiceEntry >::push(L,self,false);
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
		//wxPGChoiceEntry* ptr= dynamic_cast< wxPGChoiceEntry* >(Luna< wxObject >::check(L,1));
		wxPGChoiceEntry* ptr= luna_caster< wxObject, wxPGChoiceEntry >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGChoiceEntry >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPGChoiceEntry::wxPGChoiceEntry()
	static wxPGChoiceEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry::wxPGChoiceEntry() function, expected prototype:\nwxPGChoiceEntry::wxPGChoiceEntry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPGChoiceEntry();
	}

	// wxPGChoiceEntry::wxPGChoiceEntry(lua_Table * data)
	static wxPGChoiceEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGChoiceEntry::wxPGChoiceEntry(lua_Table * data) function, expected prototype:\nwxPGChoiceEntry::wxPGChoiceEntry(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPGChoiceEntry(L,NULL);
	}

	// Overload binder for wxPGChoiceEntry::wxPGChoiceEntry
	static wxPGChoiceEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPGChoiceEntry, cannot match any of the overloads for function wxPGChoiceEntry:\n  wxPGChoiceEntry()\n  wxPGChoiceEntry(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxPGChoiceEntry::SetValue(int value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGChoiceEntry::SetValue(int value) function, expected prototype:\nvoid wxPGChoiceEntry::SetValue(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxPGChoiceEntry* self=Luna< wxObject >::checkSubType< wxPGChoiceEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGChoiceEntry::SetValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(value);

		return 0;
	}

	// int wxPGChoiceEntry::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in int wxPGChoiceEntry::GetValue() const function, expected prototype:\nint wxPGChoiceEntry::GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoiceEntry* self=Luna< wxObject >::checkSubType< wxPGChoiceEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPGChoiceEntry::GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxPGChoiceEntry::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPGChoiceEntry::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPGChoiceEntry::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGChoiceEntry* self=Luna< wxObject >::checkSubType< wxPGChoiceEntry >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPGChoiceEntry::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPGChoiceEntry::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPGChoiceEntry* LunaTraits< wxPGChoiceEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGChoiceEntry::_bind_ctor(L);
}

void LunaTraits< wxPGChoiceEntry >::_bind_dtor(wxPGChoiceEntry* obj) {
	delete obj;
}

const char LunaTraits< wxPGChoiceEntry >::className[] = "wxPGChoiceEntry";
const char LunaTraits< wxPGChoiceEntry >::fullName[] = "wxPGChoiceEntry";
const char LunaTraits< wxPGChoiceEntry >::moduleName[] = "wx";
const char* LunaTraits< wxPGChoiceEntry >::parents[] = {"wx.wxPGCell", 0};
const int LunaTraits< wxPGChoiceEntry >::hash = 62441136;
const int LunaTraits< wxPGChoiceEntry >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPGChoiceEntry >::methods[] = {
	{"SetValue", &luna_wrapper_wxPGChoiceEntry::_bind_SetValue},
	{"GetValue", &luna_wrapper_wxPGChoiceEntry::_bind_GetValue},
	{"base_GetClassInfo", &luna_wrapper_wxPGChoiceEntry::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxPGChoiceEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGChoiceEntry::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPGChoiceEntry::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGChoiceEntry >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGChoiceEntry::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGChoiceEntry >::enumValues[] = {
	{0,0}
};


