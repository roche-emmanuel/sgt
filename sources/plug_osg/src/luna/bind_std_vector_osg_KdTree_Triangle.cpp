#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_KdTree_Triangle {
public:
	typedef Luna< std::vector< osg::KdTree::Triangle > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95925804) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::KdTree::Triangle >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::KdTree::Triangle >* rhs =(Luna< std::vector< osg::KdTree::Triangle > >::check(L,2));
		std::vector< osg::KdTree::Triangle >* self=(Luna< std::vector< osg::KdTree::Triangle > >::check(L,1));
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

		std::vector< osg::KdTree::Triangle >* self=(Luna< std::vector< osg::KdTree::Triangle > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::KdTree::Triangle >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::KdTree::Triangle >",name);
	}

};

std::vector< osg::KdTree::Triangle >* LunaTraits< std::vector< osg::KdTree::Triangle > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::KdTree::Triangle >();
}

void LunaTraits< std::vector< osg::KdTree::Triangle > >::_bind_dtor(std::vector< osg::KdTree::Triangle >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::KdTree::Triangle > >::className[] = "std_vector_osg_KdTree_Triangle";
const char LunaTraits< std::vector< osg::KdTree::Triangle > >::fullName[] = "std::vector< osg::KdTree::Triangle >";
const char LunaTraits< std::vector< osg::KdTree::Triangle > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::KdTree::Triangle > >::parents[] = {0};
const int LunaTraits< std::vector< osg::KdTree::Triangle > >::hash = 95925804;
const int LunaTraits< std::vector< osg::KdTree::Triangle > >::uniqueIDs[] = {95925804,0};

luna_RegType LunaTraits< std::vector< osg::KdTree::Triangle > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_KdTree_Triangle::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_KdTree_Triangle::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::KdTree::Triangle > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::KdTree::Triangle > >::enumValues[] = {
	{0,0}
};


