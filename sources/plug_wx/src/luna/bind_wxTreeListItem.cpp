#include <plug_common.h>

class luna_wrapper_wxTreeListItem {
public:
	typedef Luna< wxTreeListItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75268455) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeListItem*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* rhs =(Luna< wxTreeListItem >::check(L,2));
		wxTreeListItem* self=(Luna< wxTreeListItem >::check(L,1));
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

		wxTreeListItem* self= (wxTreeListItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeListItem >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75268455) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTreeListItem >::check(L,1));
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

		wxTreeListItem* self=(Luna< wxTreeListItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeListItem");
		
		return luna_dynamicCast(L,converters,"wxTreeListItem",name);
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
	// wxTreeListItem::wxTreeListItem()
	static wxTreeListItem* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem::wxTreeListItem() function, expected prototype:\nwxTreeListItem::wxTreeListItem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTreeListItem();
	}


	// Function binds:
	// bool wxTreeListItem::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListItem::IsOk() const function, expected prototype:\nbool wxTreeListItem::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListItem* self=(Luna< wxTreeListItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListItem::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxTreeListItem >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTreeListItem* LunaTraits< wxTreeListItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeListItem::_bind_ctor(L);
}

void LunaTraits< wxTreeListItem >::_bind_dtor(wxTreeListItem* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListItem >::className[] = "wxTreeListItem";
const char LunaTraits< wxTreeListItem >::fullName[] = "wxTreeListItem";
const char LunaTraits< wxTreeListItem >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListItem >::parents[] = {0};
const int LunaTraits< wxTreeListItem >::hash = 75268455;
const int LunaTraits< wxTreeListItem >::uniqueIDs[] = {75268455,0};

luna_RegType LunaTraits< wxTreeListItem >::methods[] = {
	{"IsOk", &luna_wrapper_wxTreeListItem::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxTreeListItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeListItem::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTreeListItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeListItem::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListItem >::enumValues[] = {
	{0,0}
};


