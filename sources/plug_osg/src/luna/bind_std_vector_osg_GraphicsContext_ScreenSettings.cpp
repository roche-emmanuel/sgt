#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_GraphicsContext_ScreenSettings {
public:
	typedef Luna< std::vector< osg::GraphicsContext::ScreenSettings > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51480349) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::GraphicsContext::ScreenSettings >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::GraphicsContext::ScreenSettings >* rhs =(Luna< std::vector< osg::GraphicsContext::ScreenSettings > >::check(L,2));
		std::vector< osg::GraphicsContext::ScreenSettings >* self=(Luna< std::vector< osg::GraphicsContext::ScreenSettings > >::check(L,1));
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

		std::vector< osg::GraphicsContext::ScreenSettings >* self=(Luna< std::vector< osg::GraphicsContext::ScreenSettings > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::GraphicsContext::ScreenSettings >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::GraphicsContext::ScreenSettings >",name);
	}

};

std::vector< osg::GraphicsContext::ScreenSettings >* LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::GraphicsContext::ScreenSettings >();
}

void LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::_bind_dtor(std::vector< osg::GraphicsContext::ScreenSettings >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::className[] = "std_vector_osg_GraphicsContext_ScreenSettings";
const char LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::fullName[] = "std::vector< osg::GraphicsContext::ScreenSettings >";
const char LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::parents[] = {0};
const int LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::hash = 51480349;
const int LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::uniqueIDs[] = {51480349,0};

luna_RegType LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_GraphicsContext_ScreenSettings::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_GraphicsContext_ScreenSettings::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::GraphicsContext::ScreenSettings > >::enumValues[] = {
	{0,0}
};


