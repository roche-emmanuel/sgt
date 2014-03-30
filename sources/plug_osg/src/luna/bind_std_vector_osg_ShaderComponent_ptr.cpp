#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ShaderComponent_ptr {
public:
	typedef Luna< std::vector< osg::ShaderComponent * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,17530095) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ShaderComponent * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ShaderComponent * >* rhs =(Luna< std::vector< osg::ShaderComponent * > >::check(L,2));
		std::vector< osg::ShaderComponent * >* self=(Luna< std::vector< osg::ShaderComponent * > >::check(L,1));
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

		std::vector< osg::ShaderComponent * >* self=(Luna< std::vector< osg::ShaderComponent * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ShaderComponent * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ShaderComponent * >",name);
	}

};

std::vector< osg::ShaderComponent * >* LunaTraits< std::vector< osg::ShaderComponent * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ShaderComponent * >();
}

void LunaTraits< std::vector< osg::ShaderComponent * > >::_bind_dtor(std::vector< osg::ShaderComponent * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ShaderComponent * > >::className[] = "std_vector_osg_ShaderComponent_ptr";
const char LunaTraits< std::vector< osg::ShaderComponent * > >::fullName[] = "std::vector< osg::ShaderComponent * >";
const char LunaTraits< std::vector< osg::ShaderComponent * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ShaderComponent * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ShaderComponent * > >::hash = 17530095;
const int LunaTraits< std::vector< osg::ShaderComponent * > >::uniqueIDs[] = {17530095,0};

luna_RegType LunaTraits< std::vector< osg::ShaderComponent * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ShaderComponent_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ShaderComponent_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ShaderComponent * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ShaderComponent * > >::enumValues[] = {
	{0,0}
};


