#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeListItemComparator.h>

class luna_wrapper_wxTreeListItemComparator {
public:
	typedef Luna< wxTreeListItemComparator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTreeListItemComparator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87583976) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTreeListItemComparator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItemComparator* rhs =(Luna< wxTreeListItemComparator >::check(L,2));
		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
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

		wxTreeListItemComparator* self= (wxTreeListItemComparator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeListItemComparator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87583976) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTreeListItemComparator >::check(L,1));
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

		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTreeListItemComparator");
		
		return luna_dynamicCast(L,converters,"wxTreeListItemComparator",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Compare(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,75268455) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,75268455) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeListItemComparator::wxTreeListItemComparator(lua_Table * data)
	static wxTreeListItemComparator* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItemComparator::wxTreeListItemComparator(lua_Table * data) function, expected prototype:\nwxTreeListItemComparator::wxTreeListItemComparator(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTreeListItemComparator(L,NULL);
	}


	// Function binds:
	// int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)
	static int _bind_Compare(lua_State *L) {
		if (!_lg_typecheck_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second) function, expected prototype:\nint wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 75268455\narg 4 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListCtrl* treelist=(Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,2));
		unsigned column=(unsigned)lua_tointeger(L,3);
		wxTreeListItem* first_ptr=(Luna< wxTreeListItem >::check(L,4));
		if( !first_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg first in wxTreeListItemComparator::Compare function");
		}
		wxTreeListItem first=*first_ptr;
		wxTreeListItem* second_ptr=(Luna< wxTreeListItem >::check(L,5));
		if( !second_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg second in wxTreeListItemComparator::Compare function");
		}
		wxTreeListItem second=*second_ptr;

		wxTreeListItemComparator* self=(Luna< wxTreeListItemComparator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListItemComparator::Compare(wxTreeListCtrl *, unsigned int, wxTreeListItem, wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxTreeListItemComparator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Compare(treelist, column, first, second);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTreeListItemComparator* LunaTraits< wxTreeListItemComparator >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeListItemComparator::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxTreeListItemComparator::Compare(wxTreeListCtrl * treelist, unsigned int column, wxTreeListItem first, wxTreeListItem second)
}

void LunaTraits< wxTreeListItemComparator >::_bind_dtor(wxTreeListItemComparator* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListItemComparator >::className[] = "wxTreeListItemComparator";
const char LunaTraits< wxTreeListItemComparator >::fullName[] = "wxTreeListItemComparator";
const char LunaTraits< wxTreeListItemComparator >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListItemComparator >::parents[] = {0};
const int LunaTraits< wxTreeListItemComparator >::hash = 87583976;
const int LunaTraits< wxTreeListItemComparator >::uniqueIDs[] = {87583976,0};

luna_RegType LunaTraits< wxTreeListItemComparator >::methods[] = {
	{"Compare", &luna_wrapper_wxTreeListItemComparator::_bind_Compare},
	{"dynCast", &luna_wrapper_wxTreeListItemComparator::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTreeListItemComparator::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTreeListItemComparator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeListItemComparator::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTreeListItemComparator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListItemComparator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListItemComparator >::enumValues[] = {
	{0,0}
};


