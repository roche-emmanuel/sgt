#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_osg_ref_ptr_osgDB_ObjectWrapper {
public:
	typedef Luna< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75452281) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* rhs =(Luna< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::check(L,2));
		std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* self=(Luna< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::check(L,1));
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

		std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* self=(Luna< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >",name);
	}

};

std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::_bind_ctor(lua_State *L) {
	return new std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >();
}

void LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::_bind_dtor(std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >* obj) {
	delete obj;
}

const char LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::className[] = "std_map_std_string_osg_ref_ptr_osgDB_ObjectWrapper";
const char LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::fullName[] = "std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > >";
const char LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::moduleName[] = "osg";
const char* LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::parents[] = {0};
const int LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::hash = 75452281;
const int LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::uniqueIDs[] = {75452281,0};

luna_RegType LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_osg_ref_ptr_osgDB_ObjectWrapper::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_osg_ref_ptr_osgDB_ObjectWrapper::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, osg::ref_ptr< osgDB::ObjectWrapper > > >::enumValues[] = {
	{0,0}
};


