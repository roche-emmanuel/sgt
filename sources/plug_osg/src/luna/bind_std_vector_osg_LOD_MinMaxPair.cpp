#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_LOD_MinMaxPair {
public:
	typedef Luna< std::vector< osg::LOD::MinMaxPair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15056692) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::LOD::MinMaxPair >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::LOD::MinMaxPair >* rhs =(Luna< std::vector< osg::LOD::MinMaxPair > >::check(L,2));
		std::vector< osg::LOD::MinMaxPair >* self=(Luna< std::vector< osg::LOD::MinMaxPair > >::check(L,1));
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

		std::vector< osg::LOD::MinMaxPair >* self=(Luna< std::vector< osg::LOD::MinMaxPair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::LOD::MinMaxPair >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::LOD::MinMaxPair >",name);
	}

};

std::vector< osg::LOD::MinMaxPair >* LunaTraits< std::vector< osg::LOD::MinMaxPair > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::LOD::MinMaxPair >();
}

void LunaTraits< std::vector< osg::LOD::MinMaxPair > >::_bind_dtor(std::vector< osg::LOD::MinMaxPair >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::LOD::MinMaxPair > >::className[] = "std_vector_osg_LOD_MinMaxPair";
const char LunaTraits< std::vector< osg::LOD::MinMaxPair > >::fullName[] = "std::vector< osg::LOD::MinMaxPair >";
const char LunaTraits< std::vector< osg::LOD::MinMaxPair > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::LOD::MinMaxPair > >::parents[] = {0};
const int LunaTraits< std::vector< osg::LOD::MinMaxPair > >::hash = 15056692;
const int LunaTraits< std::vector< osg::LOD::MinMaxPair > >::uniqueIDs[] = {15056692,0};

luna_RegType LunaTraits< std::vector< osg::LOD::MinMaxPair > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_LOD_MinMaxPair::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_LOD_MinMaxPair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::LOD::MinMaxPair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::LOD::MinMaxPair > >::enumValues[] = {
	{0,0}
};


