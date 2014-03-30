#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_int_osgGA_KeySwitchMatrixManipulator_NamedManipulator {
public:
	typedef Luna< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83573716) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* rhs =(Luna< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::check(L,2));
		std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* self=(Luna< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::check(L,1));
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

		std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* self=(Luna< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >");
		
		return luna_dynamicCast(L,converters,"std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >",name);
	}

};

std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::_bind_ctor(lua_State *L) {
	return new std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >();
}

void LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::_bind_dtor(std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >* obj) {
	delete obj;
}

const char LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::className[] = "std_map_int_osgGA_KeySwitchMatrixManipulator_NamedManipulator";
const char LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::fullName[] = "std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator >";
const char LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::moduleName[] = "osg";
const char* LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::parents[] = {0};
const int LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::hash = 83573716;
const int LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::uniqueIDs[] = {83573716,0};

luna_RegType LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_int_osgGA_KeySwitchMatrixManipulator_NamedManipulator::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_int_osgGA_KeySwitchMatrixManipulator_NamedManipulator::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< int, osgGA::KeySwitchMatrixManipulator::NamedManipulator > >::enumValues[] = {
	{0,0}
};


