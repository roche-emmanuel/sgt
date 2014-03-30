#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_osgDB_FinishedObjectReadCallback {
public:
	typedef Luna< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18642457) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* rhs =(Luna< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::check(L,2));
		std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* self=(Luna< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::check(L,1));
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

		std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* self=(Luna< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >",name);
	}

};

std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >();
}

void LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::_bind_dtor(std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::className[] = "std_vector_osg_ref_ptr_osgDB_FinishedObjectReadCallback";
const char LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::fullName[] = "std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > >";
const char LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::hash = 18642457;
const int LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::uniqueIDs[] = {18642457,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_osgDB_FinishedObjectReadCallback::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_osgDB_FinishedObjectReadCallback::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< osgDB::FinishedObjectReadCallback > > >::enumValues[] = {
	{0,0}
};


