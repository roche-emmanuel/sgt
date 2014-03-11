#include <plug_common.h>

class luna_wrapper_wxRendererVersion {
public:
	typedef Luna< wxRendererVersion > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83336883) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRendererVersion*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRendererVersion* rhs =(Luna< wxRendererVersion >::check(L,2));
		wxRendererVersion* self=(Luna< wxRendererVersion >::check(L,1));
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

		wxRendererVersion* self= (wxRendererVersion*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRendererVersion >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83336883) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRendererVersion >::check(L,1));
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

		wxRendererVersion* self=(Luna< wxRendererVersion >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRendererVersion");
		
		return luna_dynamicCast(L,converters,"wxRendererVersion",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_IsCompatible(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83336883) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getAge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static bool wxRendererVersion::IsCompatible(const wxRendererVersion & ver)
	static int _bind_IsCompatible(lua_State *L) {
		if (!_lg_typecheck_IsCompatible(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxRendererVersion::IsCompatible(const wxRendererVersion & ver) function, expected prototype:\nstatic bool wxRendererVersion::IsCompatible(const wxRendererVersion & ver)\nClass arguments details:\narg 1 ID = 83336883\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRendererVersion* ver_ptr=(Luna< wxRendererVersion >::check(L,1));
		if( !ver_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ver in wxRendererVersion::IsCompatible function");
		}
		const wxRendererVersion & ver=*ver_ptr;

		bool lret = wxRendererVersion::IsCompatible(ver);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const int wxRendererVersion::age()
	static int _bind_getAge(lua_State *L) {
		if (!_lg_typecheck_getAge(L)) {
			luaL_error(L, "luna typecheck failed in const int wxRendererVersion::age() function, expected prototype:\nconst int wxRendererVersion::age()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRendererVersion* self=(Luna< wxRendererVersion >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int wxRendererVersion::age(). Got : '%s'\n%s",typeid(Luna< wxRendererVersion >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->age;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const int wxRendererVersion::version()
	static int _bind_getVersion(lua_State *L) {
		if (!_lg_typecheck_getVersion(L)) {
			luaL_error(L, "luna typecheck failed in const int wxRendererVersion::version() function, expected prototype:\nconst int wxRendererVersion::version()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRendererVersion* self=(Luna< wxRendererVersion >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const int wxRendererVersion::version(). Got : '%s'\n%s",typeid(Luna< wxRendererVersion >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->version;
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRendererVersion* LunaTraits< wxRendererVersion >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRendererVersion >::_bind_dtor(wxRendererVersion* obj) {
	delete obj;
}

const char LunaTraits< wxRendererVersion >::className[] = "wxRendererVersion";
const char LunaTraits< wxRendererVersion >::fullName[] = "wxRendererVersion";
const char LunaTraits< wxRendererVersion >::moduleName[] = "wx";
const char* LunaTraits< wxRendererVersion >::parents[] = {0};
const int LunaTraits< wxRendererVersion >::hash = 83336883;
const int LunaTraits< wxRendererVersion >::uniqueIDs[] = {83336883,0};

luna_RegType LunaTraits< wxRendererVersion >::methods[] = {
	{"IsCompatible", &luna_wrapper_wxRendererVersion::_bind_IsCompatible},
	{"getAge", &luna_wrapper_wxRendererVersion::_bind_getAge},
	{"getVersion", &luna_wrapper_wxRendererVersion::_bind_getVersion},
	{"dynCast", &luna_wrapper_wxRendererVersion::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRendererVersion::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRendererVersion::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRendererVersion::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRendererVersion >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRendererVersion >::enumValues[] = {
	{0,0}
};


