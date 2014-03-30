#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_KdTree_KdNode {
public:
	typedef Luna< std::vector< osg::KdTree::KdNode > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11129999) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::KdTree::KdNode >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::KdTree::KdNode >* rhs =(Luna< std::vector< osg::KdTree::KdNode > >::check(L,2));
		std::vector< osg::KdTree::KdNode >* self=(Luna< std::vector< osg::KdTree::KdNode > >::check(L,1));
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

		std::vector< osg::KdTree::KdNode >* self=(Luna< std::vector< osg::KdTree::KdNode > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::KdTree::KdNode >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::KdTree::KdNode >",name);
	}

};

std::vector< osg::KdTree::KdNode >* LunaTraits< std::vector< osg::KdTree::KdNode > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::KdTree::KdNode >();
}

void LunaTraits< std::vector< osg::KdTree::KdNode > >::_bind_dtor(std::vector< osg::KdTree::KdNode >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::KdTree::KdNode > >::className[] = "std_vector_osg_KdTree_KdNode";
const char LunaTraits< std::vector< osg::KdTree::KdNode > >::fullName[] = "std::vector< osg::KdTree::KdNode >";
const char LunaTraits< std::vector< osg::KdTree::KdNode > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::KdTree::KdNode > >::parents[] = {0};
const int LunaTraits< std::vector< osg::KdTree::KdNode > >::hash = 11129999;
const int LunaTraits< std::vector< osg::KdTree::KdNode > >::uniqueIDs[] = {11129999,0};

luna_RegType LunaTraits< std::vector< osg::KdTree::KdNode > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_KdTree_KdNode::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_KdTree_KdNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::KdTree::KdNode > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::KdTree::KdNode > >::enumValues[] = {
	{0,0}
};


