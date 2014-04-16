#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_static_ptr_ork_Uniform2f {
public:
	typedef Luna< ork::static_ptr< ork::Uniform2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,45755873) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::static_ptr< ork::Uniform2f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< ork::Uniform2f >* rhs =(Luna< ork::static_ptr< ork::Uniform2f > >::check(L,2));
		ork::static_ptr< ork::Uniform2f >* self=(Luna< ork::static_ptr< ork::Uniform2f > >::check(L,1));
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

		ork::static_ptr< ork::Uniform2f >* self=(Luna< ork::static_ptr< ork::Uniform2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::static_ptr< ork::Uniform2f >");
		
		return luna_dynamicCast(L,converters,"ork::static_ptr< ork::Uniform2f >",name);
	}

};

ork::static_ptr< ork::Uniform2f >* LunaTraits< ork::static_ptr< ork::Uniform2f > >::_bind_ctor(lua_State *L) {
	return new ork::static_ptr< ork::Uniform2f >();
}

void LunaTraits< ork::static_ptr< ork::Uniform2f > >::_bind_dtor(ork::static_ptr< ork::Uniform2f >* obj) {
	delete obj;
}

const char LunaTraits< ork::static_ptr< ork::Uniform2f > >::className[] = "ork_static_ptr_ork_Uniform2f";
const char LunaTraits< ork::static_ptr< ork::Uniform2f > >::fullName[] = "ork::static_ptr< ork::Uniform2f >";
const char LunaTraits< ork::static_ptr< ork::Uniform2f > >::moduleName[] = "land";
const char* LunaTraits< ork::static_ptr< ork::Uniform2f > >::parents[] = {0};
const int LunaTraits< ork::static_ptr< ork::Uniform2f > >::hash = 45755873;
const int LunaTraits< ork::static_ptr< ork::Uniform2f > >::uniqueIDs[] = {45755873,0};

luna_RegType LunaTraits< ork::static_ptr< ork::Uniform2f > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_static_ptr_ork_Uniform2f::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_static_ptr_ork_Uniform2f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::static_ptr< ork::Uniform2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::static_ptr< ork::Uniform2f > >::enumValues[] = {
	{0,0}
};


