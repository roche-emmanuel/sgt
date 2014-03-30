#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_std_string_osg_ref_ptr_osgGA_CameraManipulator {
public:
	typedef Luna< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95430599) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* rhs =(Luna< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::check(L,2));
		std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* self=(Luna< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::check(L,1));
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

		std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* self=(Luna< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >");
		
		return luna_dynamicCast(L,converters,"std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >",name);
	}

};

std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::_bind_ctor(lua_State *L) {
	return new std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >();
}

void LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::_bind_dtor(std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::className[] = "std_pair_std_string_osg_ref_ptr_osgGA_CameraManipulator";
const char LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::fullName[] = "std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > >";
const char LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::parents[] = {0};
const int LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::hash = 95430599;
const int LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::uniqueIDs[] = {95430599,0};

luna_RegType LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_std_string_osg_ref_ptr_osgGA_CameraManipulator::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_std_string_osg_ref_ptr_osgGA_CameraManipulator::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< std::string, osg::ref_ptr< osgGA::CameraManipulator > > >::enumValues[] = {
	{0,0}
};


