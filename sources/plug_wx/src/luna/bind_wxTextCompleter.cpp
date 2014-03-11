#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTextCompleter.h>

class luna_wrapper_wxTextCompleter {
public:
	typedef Luna< wxTextCompleter > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92690309) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTextCompleter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTextCompleter* rhs =(Luna< wxTextCompleter >::check(L,2));
		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxTextCompleter* self= (wxTextCompleter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTextCompleter >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTextCompleter");
		
		return luna_dynamicCast(L,converters,"wxTextCompleter",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Start(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxTextCompleter::Start(const wxString & prefix)
	static int _bind_Start(lua_State *L) {
		if (!_lg_typecheck_Start(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTextCompleter::Start(const wxString & prefix) function, expected prototype:\nbool wxTextCompleter::Start(const wxString & prefix)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString prefix(lua_tostring(L,2),lua_objlen(L,2));

		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTextCompleter::Start(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTextCompleter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Start(prefix);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTextCompleter::GetNext()
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTextCompleter::GetNext() function, expected prototype:\nwxString wxTextCompleter::GetNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTextCompleter* self=(Luna< wxTextCompleter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTextCompleter::GetNext(). Got : '%s'\n%s",typeid(Luna< wxTextCompleter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetNext();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxTextCompleter* LunaTraits< wxTextCompleter >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxTextCompleter::Start(const wxString & prefix)
	// wxString wxTextCompleter::GetNext()
}

void LunaTraits< wxTextCompleter >::_bind_dtor(wxTextCompleter* obj) {
	delete obj;
}

const char LunaTraits< wxTextCompleter >::className[] = "wxTextCompleter";
const char LunaTraits< wxTextCompleter >::fullName[] = "wxTextCompleter";
const char LunaTraits< wxTextCompleter >::moduleName[] = "wx";
const char* LunaTraits< wxTextCompleter >::parents[] = {0};
const int LunaTraits< wxTextCompleter >::hash = 92690309;
const int LunaTraits< wxTextCompleter >::uniqueIDs[] = {92690309,0};

luna_RegType LunaTraits< wxTextCompleter >::methods[] = {
	{"Start", &luna_wrapper_wxTextCompleter::_bind_Start},
	{"GetNext", &luna_wrapper_wxTextCompleter::_bind_GetNext},
	{"dynCast", &luna_wrapper_wxTextCompleter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTextCompleter::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTextCompleter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTextCompleter::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTextCompleter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTextCompleter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTextCompleter >::enumValues[] = {
	{0,0}
};


