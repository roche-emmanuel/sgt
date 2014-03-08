#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_ref_ptr_osgDB_ReaderWriterInfo {
public:
	typedef Luna< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14972349) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* rhs =(Luna< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::check(L,2));
		std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* self=(Luna< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::check(L,1));
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

		std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* self=(Luna< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >",name);
	}

};

std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::_bind_ctor(lua_State *L) {
	return new std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >();
}

void LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::_bind_dtor(std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::className[] = "std_list_osg_ref_ptr_osgDB_ReaderWriterInfo";
const char LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::fullName[] = "std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >";
const char LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::parents[] = {0};
const int LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::hash = 14972349;
const int LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::uniqueIDs[] = {14972349,0};

luna_RegType LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_ref_ptr_osgDB_ReaderWriterInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_ref_ptr_osgDB_ReaderWriterInfo::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > > >::enumValues[] = {
	{0,0}
};


