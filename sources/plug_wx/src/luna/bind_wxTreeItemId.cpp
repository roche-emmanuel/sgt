#include <plug_common.h>

class luna_wrapper_wxTreeItemId {
public:
	typedef Luna< wxTreeItemId > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28400299) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeItemId*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeItemId* rhs =(Luna< wxTreeItemId >::check(L,2));
		wxTreeItemId* self=(Luna< wxTreeItemId >::check(L,1));
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

		wxTreeItemId* self= (wxTreeItemId*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeItemId >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28400299) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTreeItemId >::check(L,1));
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

		wxTreeItemId* self=(Luna< wxTreeItemId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeItemId");
		
		return luna_dynamicCast(L,converters,"wxTreeItemId",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeItemId::wxTreeItemId()
	static wxTreeItemId* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId::wxTreeItemId() function, expected prototype:\nwxTreeItemId::wxTreeItemId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTreeItemId();
	}


	// Function binds:
	// bool wxTreeItemId::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeItemId::IsOk() const function, expected prototype:\nbool wxTreeItemId::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeItemId* self=(Luna< wxTreeItemId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeItemId::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxTreeItemId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTreeItemId* LunaTraits< wxTreeItemId >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeItemId::_bind_ctor(L);
}

void LunaTraits< wxTreeItemId >::_bind_dtor(wxTreeItemId* obj) {
	delete obj;
}

const char LunaTraits< wxTreeItemId >::className[] = "wxTreeItemId";
const char LunaTraits< wxTreeItemId >::fullName[] = "wxTreeItemId";
const char LunaTraits< wxTreeItemId >::moduleName[] = "wx";
const char* LunaTraits< wxTreeItemId >::parents[] = {0};
const int LunaTraits< wxTreeItemId >::hash = 28400299;
const int LunaTraits< wxTreeItemId >::uniqueIDs[] = {28400299,0};

luna_RegType LunaTraits< wxTreeItemId >::methods[] = {
	{"IsOk", &luna_wrapper_wxTreeItemId::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxTreeItemId::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeItemId::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTreeItemId::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeItemId::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeItemId >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeItemId >::enumValues[] = {
	{0,0}
};


