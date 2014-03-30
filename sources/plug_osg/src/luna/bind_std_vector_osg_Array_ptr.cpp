#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Array_ptr {
public:
	typedef Luna< std::vector< osg::Array * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44000933) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Array * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::Array * >* rhs =(Luna< std::vector< osg::Array * > >::check(L,2));
		std::vector< osg::Array * >* self=(Luna< std::vector< osg::Array * > >::check(L,1));
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

		std::vector< osg::Array * >* self=(Luna< std::vector< osg::Array * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Array * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Array * >",name);
	}

};

std::vector< osg::Array * >* LunaTraits< std::vector< osg::Array * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::Array * >();
}

void LunaTraits< std::vector< osg::Array * > >::_bind_dtor(std::vector< osg::Array * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::Array * > >::className[] = "std_vector_osg_Array_ptr";
const char LunaTraits< std::vector< osg::Array * > >::fullName[] = "std::vector< osg::Array * >";
const char LunaTraits< std::vector< osg::Array * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Array * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Array * > >::hash = 44000933;
const int LunaTraits< std::vector< osg::Array * > >::uniqueIDs[] = {44000933,0};

luna_RegType LunaTraits< std::vector< osg::Array * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Array_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Array_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Array * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Array * > >::enumValues[] = {
	{0,0}
};


