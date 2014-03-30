#include <plug_common.h>

class luna_wrapper_wxExecuteEnv {
public:
	typedef Luna< wxExecuteEnv > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57480074) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxExecuteEnv*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxExecuteEnv* rhs =(Luna< wxExecuteEnv >::check(L,2));
		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
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

		wxExecuteEnv* self= (wxExecuteEnv*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxExecuteEnv >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57480074) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxExecuteEnv >::check(L,1));
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

		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxExecuteEnv");
		
		return luna_dynamicCast(L,converters,"wxExecuteEnv",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCwd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCwd(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxString wxExecuteEnv::cwd()
	static int _bind_getCwd(lua_State *L) {
		if (!_lg_typecheck_getCwd(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxExecuteEnv::cwd() function, expected prototype:\nwxString wxExecuteEnv::cwd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxExecuteEnv::cwd(). Got : '%s'\n%s",typeid(Luna< wxExecuteEnv >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->cwd;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxExecuteEnv::cwd(wxString value)
	static int _bind_setCwd(lua_State *L) {
		if (!_lg_typecheck_setCwd(L)) {
			luaL_error(L, "luna typecheck failed in void wxExecuteEnv::cwd(wxString value) function, expected prototype:\nvoid wxExecuteEnv::cwd(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxExecuteEnv* self=(Luna< wxExecuteEnv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxExecuteEnv::cwd(wxString). Got : '%s'\n%s",typeid(Luna< wxExecuteEnv >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->cwd = value;

		return 0;
	}


	// Operator binds:

};

wxExecuteEnv* LunaTraits< wxExecuteEnv >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxExecuteEnv >::_bind_dtor(wxExecuteEnv* obj) {
	delete obj;
}

const char LunaTraits< wxExecuteEnv >::className[] = "wxExecuteEnv";
const char LunaTraits< wxExecuteEnv >::fullName[] = "wxExecuteEnv";
const char LunaTraits< wxExecuteEnv >::moduleName[] = "wx";
const char* LunaTraits< wxExecuteEnv >::parents[] = {0};
const int LunaTraits< wxExecuteEnv >::hash = 57480074;
const int LunaTraits< wxExecuteEnv >::uniqueIDs[] = {57480074,0};

luna_RegType LunaTraits< wxExecuteEnv >::methods[] = {
	{"getCwd", &luna_wrapper_wxExecuteEnv::_bind_getCwd},
	{"setCwd", &luna_wrapper_wxExecuteEnv::_bind_setCwd},
	{"dynCast", &luna_wrapper_wxExecuteEnv::_bind_dynCast},
	{"__eq", &luna_wrapper_wxExecuteEnv::_bind___eq},
	{"fromVoid", &luna_wrapper_wxExecuteEnv::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxExecuteEnv::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxExecuteEnv >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxExecuteEnv >::enumValues[] = {
	{0,0}
};


