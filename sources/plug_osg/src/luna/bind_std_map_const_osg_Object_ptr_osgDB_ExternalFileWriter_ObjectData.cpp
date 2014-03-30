#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_const_osg_Object_ptr_osgDB_ExternalFileWriter_ObjectData {
public:
	typedef Luna< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49100922) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* rhs =(Luna< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::check(L,2));
		std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* self=(Luna< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::check(L,1));
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

		std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* self=(Luna< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >");
		
		return luna_dynamicCast(L,converters,"std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >",name);
	}

};

std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::_bind_ctor(lua_State *L) {
	return new std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >();
}

void LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::_bind_dtor(std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >* obj) {
	delete obj;
}

const char LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::className[] = "std_map_const_osg_Object_ptr_osgDB_ExternalFileWriter_ObjectData";
const char LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::fullName[] = "std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData >";
const char LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::moduleName[] = "osg";
const char* LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::parents[] = {0};
const int LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::hash = 49100922;
const int LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::uniqueIDs[] = {49100922,0};

luna_RegType LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_const_osg_Object_ptr_osgDB_ExternalFileWriter_ObjectData::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_const_osg_Object_ptr_osgDB_ExternalFileWriter_ObjectData::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< const osg::Object *, osgDB::ExternalFileWriter::ObjectData > >::enumValues[] = {
	{0,0}
};


