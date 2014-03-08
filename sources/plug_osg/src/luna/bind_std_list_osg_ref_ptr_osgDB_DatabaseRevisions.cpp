#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_ref_ptr_osgDB_DatabaseRevisions {
public:
	typedef Luna< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87953072) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* rhs =(Luna< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::check(L,2));
		std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* self=(Luna< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::check(L,1));
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

		std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* self=(Luna< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >",name);
	}

};

std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::_bind_ctor(lua_State *L) {
	return new std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >();
}

void LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::_bind_dtor(std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::className[] = "std_list_osg_ref_ptr_osgDB_DatabaseRevisions";
const char LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::fullName[] = "std::list< osg::ref_ptr< osgDB::DatabaseRevisions > >";
const char LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::parents[] = {0};
const int LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::hash = 87953072;
const int LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::uniqueIDs[] = {87953072,0};

luna_RegType LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_ref_ptr_osgDB_DatabaseRevisions::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_ref_ptr_osgDB_DatabaseRevisions::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::ref_ptr< osgDB::DatabaseRevisions > > >::enumValues[] = {
	{0,0}
};


