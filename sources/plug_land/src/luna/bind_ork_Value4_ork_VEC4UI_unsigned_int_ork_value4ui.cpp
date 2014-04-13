#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_Value4_ork_VEC4UI_unsigned_int_ork_value4ui {
public:
	typedef Luna< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70212555) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* rhs =(Luna< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::check(L,2));
		ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* self=(Luna< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::check(L,1));
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

		ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* self=(Luna< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >");
		
		return luna_dynamicCast(L,converters,"ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >",name);
	}

};

ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::_bind_dtor(ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >* obj) {
	delete obj;
}

const char LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::className[] = "ork_Value4_ork_VEC4UI_unsigned_int_ork_value4ui";
const char LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::fullName[] = "ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui >";
const char LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::moduleName[] = "land";
const char* LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::parents[] = {0};
const int LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::hash = 70212555;
const int LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::uniqueIDs[] = {70212555,0};

luna_RegType LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_Value4_ork_VEC4UI_unsigned_int_ork_value4ui::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_Value4_ork_VEC4UI_unsigned_int_ork_value4ui::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::Value4< ork::VEC4UI, unsigned int, ork::value4ui > >::enumValues[] = {
	{0,0}
};


