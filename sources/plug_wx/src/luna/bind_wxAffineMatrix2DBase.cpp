#include <plug_common.h>

class luna_wrapper_wxAffineMatrix2DBase {
public:
	typedef Luna< wxAffineMatrix2DBase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74549152) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxAffineMatrix2DBase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAffineMatrix2DBase* rhs =(Luna< wxAffineMatrix2DBase >::check(L,2));
		wxAffineMatrix2DBase* self=(Luna< wxAffineMatrix2DBase >::check(L,1));
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

		wxAffineMatrix2DBase* self= (wxAffineMatrix2DBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAffineMatrix2DBase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74549152) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAffineMatrix2DBase >::check(L,1));
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

		wxAffineMatrix2DBase* self=(Luna< wxAffineMatrix2DBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAffineMatrix2DBase");
		
		return luna_dynamicCast(L,converters,"wxAffineMatrix2DBase",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxAffineMatrix2DBase* LunaTraits< wxAffineMatrix2DBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxAffineMatrix2DBase >::_bind_dtor(wxAffineMatrix2DBase* obj) {
	delete obj;
}

const char LunaTraits< wxAffineMatrix2DBase >::className[] = "wxAffineMatrix2DBase";
const char LunaTraits< wxAffineMatrix2DBase >::fullName[] = "wxAffineMatrix2DBase";
const char LunaTraits< wxAffineMatrix2DBase >::moduleName[] = "wx";
const char* LunaTraits< wxAffineMatrix2DBase >::parents[] = {0};
const int LunaTraits< wxAffineMatrix2DBase >::hash = 74549152;
const int LunaTraits< wxAffineMatrix2DBase >::uniqueIDs[] = {74549152,0};

luna_RegType LunaTraits< wxAffineMatrix2DBase >::methods[] = {
	{"dynCast", &luna_wrapper_wxAffineMatrix2DBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxAffineMatrix2DBase::_bind___eq},
	{"fromVoid", &luna_wrapper_wxAffineMatrix2DBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAffineMatrix2DBase::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxAffineMatrix2DBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAffineMatrix2DBase >::enumValues[] = {
	{0,0}
};


