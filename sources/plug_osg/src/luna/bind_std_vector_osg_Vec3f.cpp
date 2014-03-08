#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Vec3f {
public:
	typedef Luna< std::vector< osg::Vec3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30220088) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Vec3f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::Vec3f >* rhs =(Luna< std::vector< osg::Vec3f > >::check(L,2));
		std::vector< osg::Vec3f >* self=(Luna< std::vector< osg::Vec3f > >::check(L,1));
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

		std::vector< osg::Vec3f >* self=(Luna< std::vector< osg::Vec3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Vec3f >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Vec3f >",name);
	}

};

std::vector< osg::Vec3f >* LunaTraits< std::vector< osg::Vec3f > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::Vec3f >();
}

void LunaTraits< std::vector< osg::Vec3f > >::_bind_dtor(std::vector< osg::Vec3f >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::Vec3f > >::className[] = "std_vector_osg_Vec3f";
const char LunaTraits< std::vector< osg::Vec3f > >::fullName[] = "std::vector< osg::Vec3f >";
const char LunaTraits< std::vector< osg::Vec3f > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Vec3f > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Vec3f > >::hash = 30220088;
const int LunaTraits< std::vector< osg::Vec3f > >::uniqueIDs[] = {30220088,0};

luna_RegType LunaTraits< std::vector< osg::Vec3f > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Vec3f::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Vec3f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Vec3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Vec3f > >::enumValues[] = {
	{0,0}
};


