#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_osgDB_ImageProcessor {
public:
	typedef Luna< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,34672077) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< osgDB::ImageProcessor > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* rhs =(Luna< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::check(L,2));
		std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* self=(Luna< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::check(L,1));
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

		std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* self=(Luna< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< osgDB::ImageProcessor > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< osgDB::ImageProcessor > >",name);
	}

};

std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< osgDB::ImageProcessor > >();
}

void LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::_bind_dtor(std::vector< osg::ref_ptr< osgDB::ImageProcessor > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::className[] = "std_vector_osg_ref_ptr_osgDB_ImageProcessor";
const char LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::fullName[] = "std::vector< osg::ref_ptr< osgDB::ImageProcessor > >";
const char LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::hash = 34672077;
const int LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::uniqueIDs[] = {34672077,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_osgDB_ImageProcessor::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_osgDB_ImageProcessor::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< osgDB::ImageProcessor > > >::enumValues[] = {
	{0,0}
};


