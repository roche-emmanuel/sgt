#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextCompleterSimple.h>

class luna_wrapper_wxTextCompleterSimple {
public:
	typedef Luna< wxTextCompleterSimple > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTextCompleter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxTextCompleterSimple* self= (wxTextCompleterSimple*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextCompleterSimple >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92690309) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxTextCompleter(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxTextCompleterSimple* ptr= dynamic_cast< wxTextCompleterSimple* >(Luna< wxTextCompleter >::check(L,1));
		wxTextCompleterSimple* ptr= luna_caster< wxTextCompleter, wxTextCompleterSimple >::cast(Luna< wxTextCompleter >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTextCompleterSimple >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetCompletions(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,59507769) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)
	static int _bind_GetCompletions(lua_State *L) {
		if (!_lg_typecheck_GetCompletions(L)) {
			luaL_error(L, "luna typecheck failed in void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res) function, expected prototype:\nvoid wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));
		wxArrayString* res_ptr=(Luna< wxArrayString >::check(L,3));
		if( !res_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg res in wxTextCompleterSimple::GetCompletions function");
		}
		wxArrayString & res=*res_ptr;

		wxTextCompleterSimple* self=Luna< wxTextCompleter >::checkSubType< wxTextCompleterSimple >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTextCompleterSimple::GetCompletions(const wxString &, wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxTextCompleter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetCompletions(prefix, res);

		return 0;
	}


	// Operator binds:

};

wxTextCompleterSimple* LunaTraits< wxTextCompleterSimple >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)
	// bool wxTextCompleter::Start(const wxString & prefix)
	// wxString wxTextCompleter::GetNext()
}

void LunaTraits< wxTextCompleterSimple >::_bind_dtor(wxTextCompleterSimple* obj) {
	delete obj;
}

const char LunaTraits< wxTextCompleterSimple >::className[] = "wxTextCompleterSimple";
const char LunaTraits< wxTextCompleterSimple >::fullName[] = "wxTextCompleterSimple";
const char LunaTraits< wxTextCompleterSimple >::moduleName[] = "wx";
const char* LunaTraits< wxTextCompleterSimple >::parents[] = {"wx.wxTextCompleter", 0};
const int LunaTraits< wxTextCompleterSimple >::hash = 23277280;
const int LunaTraits< wxTextCompleterSimple >::uniqueIDs[] = {92690309,0};

luna_RegType LunaTraits< wxTextCompleterSimple >::methods[] = {
	{"GetCompletions", &luna_wrapper_wxTextCompleterSimple::_bind_GetCompletions},
	{"fromVoid", &luna_wrapper_wxTextCompleterSimple::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextCompleterSimple::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTextCompleterSimple::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextCompleterSimple >::converters[] = {
	{"wxTextCompleter", &luna_wrapper_wxTextCompleterSimple::_cast_from_wxTextCompleter},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextCompleterSimple >::enumValues[] = {
	{0,0}
};


