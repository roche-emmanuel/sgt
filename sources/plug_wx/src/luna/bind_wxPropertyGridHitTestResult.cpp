#include <plug_common.h>

class luna_wrapper_wxPropertyGridHitTestResult {
public:
	typedef Luna< wxPropertyGridHitTestResult > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65784637) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPropertyGridHitTestResult*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGridHitTestResult* rhs =(Luna< wxPropertyGridHitTestResult >::check(L,2));
		wxPropertyGridHitTestResult* self=(Luna< wxPropertyGridHitTestResult >::check(L,1));
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

		wxPropertyGridHitTestResult* self= (wxPropertyGridHitTestResult*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPropertyGridHitTestResult >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65784637) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPropertyGridHitTestResult >::check(L,1));
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

		wxPropertyGridHitTestResult* self=(Luna< wxPropertyGridHitTestResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPropertyGridHitTestResult");
		
		return luna_dynamicCast(L,converters,"wxPropertyGridHitTestResult",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxPGProperty * wxPropertyGridHitTestResult::GetProperty() const
	static int _bind_GetProperty(lua_State *L) {
		if (!_lg_typecheck_GetProperty(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridHitTestResult::GetProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGridHitTestResult::GetProperty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridHitTestResult* self=(Luna< wxPropertyGridHitTestResult >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridHitTestResult::GetProperty() const. Got : '%s'\n%s",typeid(Luna< wxPropertyGridHitTestResult >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPropertyGridHitTestResult* LunaTraits< wxPropertyGridHitTestResult >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPropertyGridHitTestResult >::_bind_dtor(wxPropertyGridHitTestResult* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridHitTestResult >::className[] = "wxPropertyGridHitTestResult";
const char LunaTraits< wxPropertyGridHitTestResult >::fullName[] = "wxPropertyGridHitTestResult";
const char LunaTraits< wxPropertyGridHitTestResult >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridHitTestResult >::parents[] = {0};
const int LunaTraits< wxPropertyGridHitTestResult >::hash = 65784637;
const int LunaTraits< wxPropertyGridHitTestResult >::uniqueIDs[] = {65784637,0};

luna_RegType LunaTraits< wxPropertyGridHitTestResult >::methods[] = {
	{"GetProperty", &luna_wrapper_wxPropertyGridHitTestResult::_bind_GetProperty},
	{"dynCast", &luna_wrapper_wxPropertyGridHitTestResult::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPropertyGridHitTestResult::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPropertyGridHitTestResult::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPropertyGridHitTestResult::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridHitTestResult >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridHitTestResult >::enumValues[] = {
	{0,0}
};


