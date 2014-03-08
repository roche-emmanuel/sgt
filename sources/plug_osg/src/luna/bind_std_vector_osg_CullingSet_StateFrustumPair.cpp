#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_CullingSet_StateFrustumPair {
public:
	typedef Luna< std::vector< osg::CullingSet::StateFrustumPair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42640190) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::CullingSet::StateFrustumPair >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::CullingSet::StateFrustumPair >* rhs =(Luna< std::vector< osg::CullingSet::StateFrustumPair > >::check(L,2));
		std::vector< osg::CullingSet::StateFrustumPair >* self=(Luna< std::vector< osg::CullingSet::StateFrustumPair > >::check(L,1));
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

		std::vector< osg::CullingSet::StateFrustumPair >* self=(Luna< std::vector< osg::CullingSet::StateFrustumPair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::CullingSet::StateFrustumPair >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::CullingSet::StateFrustumPair >",name);
	}

};

std::vector< osg::CullingSet::StateFrustumPair >* LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::CullingSet::StateFrustumPair >();
}

void LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::_bind_dtor(std::vector< osg::CullingSet::StateFrustumPair >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::className[] = "std_vector_osg_CullingSet_StateFrustumPair";
const char LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::fullName[] = "std::vector< osg::CullingSet::StateFrustumPair >";
const char LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::parents[] = {0};
const int LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::hash = 42640190;
const int LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::uniqueIDs[] = {42640190,0};

luna_RegType LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_CullingSet_StateFrustumPair::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_CullingSet_StateFrustumPair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::CullingSet::StateFrustumPair > >::enumValues[] = {
	{0,0}
};


