#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Vec2f {
public:
	typedef Luna< std::vector< osg::Vec2f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30190297) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Vec2f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::Vec2f >* rhs =(Luna< std::vector< osg::Vec2f > >::check(L,2));
		std::vector< osg::Vec2f >* self=(Luna< std::vector< osg::Vec2f > >::check(L,1));
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

		std::vector< osg::Vec2f >* self=(Luna< std::vector< osg::Vec2f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Vec2f >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Vec2f >",name);
	}

};

std::vector< osg::Vec2f >* LunaTraits< std::vector< osg::Vec2f > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::Vec2f >();
}

void LunaTraits< std::vector< osg::Vec2f > >::_bind_dtor(std::vector< osg::Vec2f >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::Vec2f > >::className[] = "std_vector_osg_Vec2f";
const char LunaTraits< std::vector< osg::Vec2f > >::fullName[] = "std::vector< osg::Vec2f >";
const char LunaTraits< std::vector< osg::Vec2f > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Vec2f > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Vec2f > >::hash = 30190297;
const int LunaTraits< std::vector< osg::Vec2f > >::uniqueIDs[] = {30190297,0};

luna_RegType LunaTraits< std::vector< osg::Vec2f > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Vec2f::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Vec2f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Vec2f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Vec2f > >::enumValues[] = {
	{0,0}
};


