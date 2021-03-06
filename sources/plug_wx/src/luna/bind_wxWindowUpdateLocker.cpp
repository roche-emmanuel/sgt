#include <plug_common.h>

class luna_wrapper_wxWindowUpdateLocker {
public:
	typedef Luna< wxWindowUpdateLocker > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69362373) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxWindowUpdateLocker*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxWindowUpdateLocker* rhs =(Luna< wxWindowUpdateLocker >::check(L,2));
		wxWindowUpdateLocker* self=(Luna< wxWindowUpdateLocker >::check(L,1));
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

		wxWindowUpdateLocker* self= (wxWindowUpdateLocker*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWindowUpdateLocker >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69362373) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxWindowUpdateLocker >::check(L,1));
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

		wxWindowUpdateLocker* self=(Luna< wxWindowUpdateLocker >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxWindowUpdateLocker");
		
		return luna_dynamicCast(L,converters,"wxWindowUpdateLocker",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWindowUpdateLocker::wxWindowUpdateLocker(wxWindow * win)
	static wxWindowUpdateLocker* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowUpdateLocker::wxWindowUpdateLocker(wxWindow * win) function, expected prototype:\nwxWindowUpdateLocker::wxWindowUpdateLocker(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		return new wxWindowUpdateLocker(win);
	}


	// Function binds:

	// Operator binds:

};

wxWindowUpdateLocker* LunaTraits< wxWindowUpdateLocker >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindowUpdateLocker::_bind_ctor(L);
}

void LunaTraits< wxWindowUpdateLocker >::_bind_dtor(wxWindowUpdateLocker* obj) {
	delete obj;
}

const char LunaTraits< wxWindowUpdateLocker >::className[] = "wxWindowUpdateLocker";
const char LunaTraits< wxWindowUpdateLocker >::fullName[] = "wxWindowUpdateLocker";
const char LunaTraits< wxWindowUpdateLocker >::moduleName[] = "wx";
const char* LunaTraits< wxWindowUpdateLocker >::parents[] = {0};
const int LunaTraits< wxWindowUpdateLocker >::hash = 69362373;
const int LunaTraits< wxWindowUpdateLocker >::uniqueIDs[] = {69362373,0};

luna_RegType LunaTraits< wxWindowUpdateLocker >::methods[] = {
	{"dynCast", &luna_wrapper_wxWindowUpdateLocker::_bind_dynCast},
	{"__eq", &luna_wrapper_wxWindowUpdateLocker::_bind___eq},
	{"fromVoid", &luna_wrapper_wxWindowUpdateLocker::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWindowUpdateLocker::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindowUpdateLocker >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindowUpdateLocker >::enumValues[] = {
	{0,0}
};


