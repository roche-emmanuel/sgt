#include <plug_common.h>

class luna_wrapper_wxEventLoopActivator {
public:
	typedef Luna< wxEventLoopActivator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91195009) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxEventLoopActivator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopActivator* rhs =(Luna< wxEventLoopActivator >::check(L,2));
		wxEventLoopActivator* self=(Luna< wxEventLoopActivator >::check(L,1));
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

		wxEventLoopActivator* self= (wxEventLoopActivator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxEventLoopActivator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91195009) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxEventLoopActivator >::check(L,1));
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

		wxEventLoopActivator* self=(Luna< wxEventLoopActivator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxEventLoopActivator");
		
		return luna_dynamicCast(L,converters,"wxEventLoopActivator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,77241040)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEventLoopActivator::wxEventLoopActivator(wxEventLoopBase * loop)
	static wxEventLoopActivator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxEventLoopActivator::wxEventLoopActivator(wxEventLoopBase * loop) function, expected prototype:\nwxEventLoopActivator::wxEventLoopActivator(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,1));

		return new wxEventLoopActivator(loop);
	}


	// Function binds:

	// Operator binds:

};

wxEventLoopActivator* LunaTraits< wxEventLoopActivator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEventLoopActivator::_bind_ctor(L);
}

void LunaTraits< wxEventLoopActivator >::_bind_dtor(wxEventLoopActivator* obj) {
	delete obj;
}

const char LunaTraits< wxEventLoopActivator >::className[] = "wxEventLoopActivator";
const char LunaTraits< wxEventLoopActivator >::fullName[] = "wxEventLoopActivator";
const char LunaTraits< wxEventLoopActivator >::moduleName[] = "wx";
const char* LunaTraits< wxEventLoopActivator >::parents[] = {0};
const int LunaTraits< wxEventLoopActivator >::hash = 91195009;
const int LunaTraits< wxEventLoopActivator >::uniqueIDs[] = {91195009,0};

luna_RegType LunaTraits< wxEventLoopActivator >::methods[] = {
	{"dynCast", &luna_wrapper_wxEventLoopActivator::_bind_dynCast},
	{"__eq", &luna_wrapper_wxEventLoopActivator::_bind___eq},
	{"fromVoid", &luna_wrapper_wxEventLoopActivator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxEventLoopActivator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxEventLoopActivator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxEventLoopActivator >::enumValues[] = {
	{0,0}
};


