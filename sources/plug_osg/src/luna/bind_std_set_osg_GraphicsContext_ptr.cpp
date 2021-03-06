#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_GraphicsContext_ptr {
public:
	typedef Luna< std::set< osg::GraphicsContext * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37168712) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::GraphicsContext * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< osg::GraphicsContext * >* rhs =(Luna< std::set< osg::GraphicsContext * > >::check(L,2));
		std::set< osg::GraphicsContext * >* self=(Luna< std::set< osg::GraphicsContext * > >::check(L,1));
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

		std::set< osg::GraphicsContext * >* self=(Luna< std::set< osg::GraphicsContext * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::GraphicsContext * >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::GraphicsContext * >",name);
	}

};

std::set< osg::GraphicsContext * >* LunaTraits< std::set< osg::GraphicsContext * > >::_bind_ctor(lua_State *L) {
	return new std::set< osg::GraphicsContext * >();
}

void LunaTraits< std::set< osg::GraphicsContext * > >::_bind_dtor(std::set< osg::GraphicsContext * >* obj) {
	delete obj;
}

const char LunaTraits< std::set< osg::GraphicsContext * > >::className[] = "std_set_osg_GraphicsContext_ptr";
const char LunaTraits< std::set< osg::GraphicsContext * > >::fullName[] = "std::set< osg::GraphicsContext * >";
const char LunaTraits< std::set< osg::GraphicsContext * > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::GraphicsContext * > >::parents[] = {0};
const int LunaTraits< std::set< osg::GraphicsContext * > >::hash = 37168712;
const int LunaTraits< std::set< osg::GraphicsContext * > >::uniqueIDs[] = {37168712,0};

luna_RegType LunaTraits< std::set< osg::GraphicsContext * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_GraphicsContext_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_GraphicsContext_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::GraphicsContext * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::GraphicsContext * > >::enumValues[] = {
	{0,0}
};


