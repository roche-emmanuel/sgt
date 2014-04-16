#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int {
public:
	typedef Luna< ork::Mesh< ork::vec2f, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1443305) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Mesh< ork::vec2f, unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Mesh< ork::vec2f, unsigned int >* rhs =(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,2));
		ork::Mesh< ork::vec2f, unsigned int >* self=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		ork::Mesh< ork::vec2f, unsigned int >* self=(Luna< ork::Mesh< ork::vec2f, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Mesh< ork::vec2f, unsigned int >");
		
		return luna_dynamicCast(L,converters,"ork::Mesh< ork::vec2f, unsigned int >",name);
	}

};

ork::Mesh< ork::vec2f, unsigned int >* LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::_bind_dtor(ork::Mesh< ork::vec2f, unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::className[] = "ork_Mesh_ork_vec2f_unsigned_int";
const char LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::fullName[] = "ork::Mesh< ork::vec2f, unsigned int >";
const char LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::moduleName[] = "land";
const char* LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::parents[] = {0};
const int LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::hash = 1443305;
const int LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::uniqueIDs[] = {1443305,0};

luna_RegType LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Mesh_ork_vec2f_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Mesh< ork::vec2f, unsigned int > >::enumValues[] = {
	{0,0}
};


