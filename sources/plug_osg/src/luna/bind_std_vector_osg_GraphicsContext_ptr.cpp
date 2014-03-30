#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_GraphicsContext_ptr {
public:
	typedef Luna< std::vector< osg::GraphicsContext * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81169401) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::GraphicsContext * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::GraphicsContext * >* rhs =(Luna< std::vector< osg::GraphicsContext * > >::check(L,2));
		std::vector< osg::GraphicsContext * >* self=(Luna< std::vector< osg::GraphicsContext * > >::check(L,1));
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

		std::vector< osg::GraphicsContext * >* self=(Luna< std::vector< osg::GraphicsContext * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::GraphicsContext * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::GraphicsContext * >",name);
	}

};

std::vector< osg::GraphicsContext * >* LunaTraits< std::vector< osg::GraphicsContext * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::GraphicsContext * >();
}

void LunaTraits< std::vector< osg::GraphicsContext * > >::_bind_dtor(std::vector< osg::GraphicsContext * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::GraphicsContext * > >::className[] = "std_vector_osg_GraphicsContext_ptr";
const char LunaTraits< std::vector< osg::GraphicsContext * > >::fullName[] = "std::vector< osg::GraphicsContext * >";
const char LunaTraits< std::vector< osg::GraphicsContext * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::GraphicsContext * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::GraphicsContext * > >::hash = 81169401;
const int LunaTraits< std::vector< osg::GraphicsContext * > >::uniqueIDs[] = {81169401,0};

luna_RegType LunaTraits< std::vector< osg::GraphicsContext * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_GraphicsContext_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_GraphicsContext_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::GraphicsContext * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::GraphicsContext * > >::enumValues[] = {
	{0,0}
};


