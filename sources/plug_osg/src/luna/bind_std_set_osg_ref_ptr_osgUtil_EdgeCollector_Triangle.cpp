#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_ref_ptr_osgUtil_EdgeCollector_Triangle {
public:
	typedef Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71050428) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* rhs =(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::check(L,2));
		std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* self=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::check(L,1));
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

		std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* self=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >",name);
	}

};

std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::_bind_ctor(lua_State *L) {
	return new std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >();
}

void LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::_bind_dtor(std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >* obj) {
	delete obj;
}

const char LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::className[] = "std_set_osg_ref_ptr_osgUtil_EdgeCollector_Triangle";
const char LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::fullName[] = "std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > >";
const char LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::parents[] = {0};
const int LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::hash = 71050428;
const int LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::uniqueIDs[] = {71050428,0};

luna_RegType LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_ref_ptr_osgUtil_EdgeCollector_Triangle::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_ref_ptr_osgUtil_EdgeCollector_Triangle::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::enumValues[] = {
	{0,0}
};


