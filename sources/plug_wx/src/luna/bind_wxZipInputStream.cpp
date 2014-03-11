#include <plug_common.h>

#include <luna/wrappers/wrapper_wxZipInputStream.h>

class luna_wrapper_wxZipInputStream {
public:
	typedef Luna< wxZipInputStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxZipInputStream* self=(Luna< wxZipInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxZipInputStream,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91321549) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxZipInputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxZipInputStream* rhs =(Luna< wxZipInputStream >::check(L,2));
		wxZipInputStream* self=(Luna< wxZipInputStream >::check(L,1));
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

		wxZipInputStream* self= (wxZipInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxZipInputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91321549) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxZipInputStream >::check(L,1));
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

		wxZipInputStream* self=(Luna< wxZipInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxZipInputStream");
		
		return luna_dynamicCast(L,converters,"wxZipInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxZipInputStream* LunaTraits< wxZipInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxZipInputStream >::_bind_dtor(wxZipInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxZipInputStream >::className[] = "wxZipInputStream";
const char LunaTraits< wxZipInputStream >::fullName[] = "wxZipInputStream";
const char LunaTraits< wxZipInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxZipInputStream >::parents[] = {0};
const int LunaTraits< wxZipInputStream >::hash = 91321549;
const int LunaTraits< wxZipInputStream >::uniqueIDs[] = {91321549,0};

luna_RegType LunaTraits< wxZipInputStream >::methods[] = {
	{"dynCast", &luna_wrapper_wxZipInputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxZipInputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxZipInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxZipInputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxZipInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxZipInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxZipInputStream >::enumValues[] = {
	{0,0}
};


