#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Geometry_ArrayData {
public:
	typedef Luna< std::vector< osg::Geometry::ArrayData > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40737742) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Geometry::ArrayData >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::Geometry::ArrayData >* rhs =(Luna< std::vector< osg::Geometry::ArrayData > >::check(L,2));
		std::vector< osg::Geometry::ArrayData >* self=(Luna< std::vector< osg::Geometry::ArrayData > >::check(L,1));
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

		std::vector< osg::Geometry::ArrayData >* self=(Luna< std::vector< osg::Geometry::ArrayData > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Geometry::ArrayData >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Geometry::ArrayData >",name);
	}

};

std::vector< osg::Geometry::ArrayData >* LunaTraits< std::vector< osg::Geometry::ArrayData > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::Geometry::ArrayData >();
}

void LunaTraits< std::vector< osg::Geometry::ArrayData > >::_bind_dtor(std::vector< osg::Geometry::ArrayData >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::Geometry::ArrayData > >::className[] = "std_vector_osg_Geometry_ArrayData";
const char LunaTraits< std::vector< osg::Geometry::ArrayData > >::fullName[] = "std::vector< osg::Geometry::ArrayData >";
const char LunaTraits< std::vector< osg::Geometry::ArrayData > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Geometry::ArrayData > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Geometry::ArrayData > >::hash = 40737742;
const int LunaTraits< std::vector< osg::Geometry::ArrayData > >::uniqueIDs[] = {40737742,0};

luna_RegType LunaTraits< std::vector< osg::Geometry::ArrayData > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Geometry_ArrayData::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Geometry_ArrayData::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Geometry::ArrayData > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Geometry::ArrayData > >::enumValues[] = {
	{0,0}
};


