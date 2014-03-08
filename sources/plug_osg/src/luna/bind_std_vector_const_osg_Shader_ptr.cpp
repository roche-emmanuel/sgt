#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_const_osg_Shader_ptr {
public:
	typedef Luna< std::vector< const osg::Shader * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97623200) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< const osg::Shader * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< const osg::Shader * >* rhs =(Luna< std::vector< const osg::Shader * > >::check(L,2));
		std::vector< const osg::Shader * >* self=(Luna< std::vector< const osg::Shader * > >::check(L,1));
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

		std::vector< const osg::Shader * >* self=(Luna< std::vector< const osg::Shader * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< const osg::Shader * >");
		
		return luna_dynamicCast(L,converters,"std::vector< const osg::Shader * >",name);
	}

};

std::vector< const osg::Shader * >* LunaTraits< std::vector< const osg::Shader * > >::_bind_ctor(lua_State *L) {
	return new std::vector< const osg::Shader * >();
}

void LunaTraits< std::vector< const osg::Shader * > >::_bind_dtor(std::vector< const osg::Shader * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< const osg::Shader * > >::className[] = "std_vector_const_osg_Shader_ptr";
const char LunaTraits< std::vector< const osg::Shader * > >::fullName[] = "std::vector< const osg::Shader * >";
const char LunaTraits< std::vector< const osg::Shader * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< const osg::Shader * > >::parents[] = {0};
const int LunaTraits< std::vector< const osg::Shader * > >::hash = 97623200;
const int LunaTraits< std::vector< const osg::Shader * > >::uniqueIDs[] = {97623200,0};

luna_RegType LunaTraits< std::vector< const osg::Shader * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_const_osg_Shader_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_const_osg_Shader_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< const osg::Shader * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< const osg::Shader * > >::enumValues[] = {
	{0,0}
};


