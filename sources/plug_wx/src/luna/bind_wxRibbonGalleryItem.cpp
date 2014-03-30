#include <plug_common.h>

class luna_wrapper_wxRibbonGalleryItem {
public:
	typedef Luna< wxRibbonGalleryItem > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56057674) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRibbonGalleryItem*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonGalleryItem* rhs =(Luna< wxRibbonGalleryItem >::check(L,2));
		wxRibbonGalleryItem* self=(Luna< wxRibbonGalleryItem >::check(L,1));
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

		wxRibbonGalleryItem* self= (wxRibbonGalleryItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonGalleryItem >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56057674) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRibbonGalleryItem >::check(L,1));
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

		wxRibbonGalleryItem* self=(Luna< wxRibbonGalleryItem >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRibbonGalleryItem");
		
		return luna_dynamicCast(L,converters,"wxRibbonGalleryItem",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRibbonGalleryItem* LunaTraits< wxRibbonGalleryItem >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRibbonGalleryItem >::_bind_dtor(wxRibbonGalleryItem* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonGalleryItem >::className[] = "wxRibbonGalleryItem";
const char LunaTraits< wxRibbonGalleryItem >::fullName[] = "wxRibbonGalleryItem";
const char LunaTraits< wxRibbonGalleryItem >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonGalleryItem >::parents[] = {0};
const int LunaTraits< wxRibbonGalleryItem >::hash = 56057674;
const int LunaTraits< wxRibbonGalleryItem >::uniqueIDs[] = {56057674,0};

luna_RegType LunaTraits< wxRibbonGalleryItem >::methods[] = {
	{"dynCast", &luna_wrapper_wxRibbonGalleryItem::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRibbonGalleryItem::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRibbonGalleryItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonGalleryItem::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGalleryItem >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGalleryItem >::enumValues[] = {
	{0,0}
};


