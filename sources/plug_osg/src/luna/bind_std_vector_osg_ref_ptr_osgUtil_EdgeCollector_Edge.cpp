#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_osgUtil_EdgeCollector_Edge {
public:
	typedef Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57514973) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* rhs =(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::check(L,2));
		std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* self=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::check(L,1));
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

		std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* self=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >",name);
	}

};

std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >();
}

void LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::_bind_dtor(std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::className[] = "std_vector_osg_ref_ptr_osgUtil_EdgeCollector_Edge";
const char LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::fullName[] = "std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > >";
const char LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::hash = 57514973;
const int LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::uniqueIDs[] = {57514973,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_osgUtil_EdgeCollector_Edge::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_osgUtil_EdgeCollector_Edge::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::enumValues[] = {
	{0,0}
};


