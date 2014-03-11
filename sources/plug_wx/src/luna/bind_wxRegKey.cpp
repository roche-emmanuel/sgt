#include <plug_common.h>

class luna_wrapper_wxRegKey {
public:
	typedef Luna< wxRegKey > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45357347) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRegKey*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRegKey* rhs =(Luna< wxRegKey >::check(L,2));
		wxRegKey* self=(Luna< wxRegKey >::check(L,1));
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

		wxRegKey* self= (wxRegKey*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRegKey >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45357347) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRegKey >::check(L,1));
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

		wxRegKey* self=(Luna< wxRegKey >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRegKey");
		
		return luna_dynamicCast(L,converters,"wxRegKey",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxRegKey* LunaTraits< wxRegKey >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRegKey >::_bind_dtor(wxRegKey* obj) {
	delete obj;
}

const char LunaTraits< wxRegKey >::className[] = "wxRegKey";
const char LunaTraits< wxRegKey >::fullName[] = "wxRegKey";
const char LunaTraits< wxRegKey >::moduleName[] = "wx";
const char* LunaTraits< wxRegKey >::parents[] = {0};
const int LunaTraits< wxRegKey >::hash = 45357347;
const int LunaTraits< wxRegKey >::uniqueIDs[] = {45357347,0};

luna_RegType LunaTraits< wxRegKey >::methods[] = {
	{"dynCast", &luna_wrapper_wxRegKey::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRegKey::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRegKey::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRegKey::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRegKey >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRegKey >::enumValues[] = {
	{"Read", wxRegKey::Read},
	{"Write", wxRegKey::Write},
	{"HKCR", wxRegKey::HKCR},
	{"HKCU", wxRegKey::HKCU},
	{"HKLM", wxRegKey::HKLM},
	{"HKUSR", wxRegKey::HKUSR},
	{"HKPD", wxRegKey::HKPD},
	{"HKCC", wxRegKey::HKCC},
	{"HKDD", wxRegKey::HKDD},
	{"HKMAX", wxRegKey::HKMAX},
	{"Type_None", wxRegKey::Type_None},
	{"Type_String", wxRegKey::Type_String},
	{"Type_Expand_String", wxRegKey::Type_Expand_String},
	{"Type_Binary", wxRegKey::Type_Binary},
	{"Type_Dword", wxRegKey::Type_Dword},
	{"Type_Dword_little_endian", wxRegKey::Type_Dword_little_endian},
	{"Type_Dword_big_endian", wxRegKey::Type_Dword_big_endian},
	{"Type_Link", wxRegKey::Type_Link},
	{"Type_Multi_String", wxRegKey::Type_Multi_String},
	{"Type_Resource_list", wxRegKey::Type_Resource_list},
	{"Type_Full_resource_descriptor", wxRegKey::Type_Full_resource_descriptor},
	{"Type_Resource_requirements_list", wxRegKey::Type_Resource_requirements_list},
	{"WOW64ViewMode_Default", wxRegKey::WOW64ViewMode_Default},
	{"WOW64ViewMode_32", wxRegKey::WOW64ViewMode_32},
	{"WOW64ViewMode_64", wxRegKey::WOW64ViewMode_64},
	{0,0}
};


