#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Stats_AttributeMap {
public:
	typedef Luna< std::vector< osg::Stats::AttributeMap > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12653154) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Stats::AttributeMap >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::Stats::AttributeMap >* rhs =(Luna< std::vector< osg::Stats::AttributeMap > >::check(L,2));
		std::vector< osg::Stats::AttributeMap >* self=(Luna< std::vector< osg::Stats::AttributeMap > >::check(L,1));
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

		std::vector< osg::Stats::AttributeMap >* self=(Luna< std::vector< osg::Stats::AttributeMap > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Stats::AttributeMap >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Stats::AttributeMap >",name);
	}

};

std::vector< osg::Stats::AttributeMap >* LunaTraits< std::vector< osg::Stats::AttributeMap > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::Stats::AttributeMap >();
}

void LunaTraits< std::vector< osg::Stats::AttributeMap > >::_bind_dtor(std::vector< osg::Stats::AttributeMap >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::Stats::AttributeMap > >::className[] = "std_vector_osg_Stats_AttributeMap";
const char LunaTraits< std::vector< osg::Stats::AttributeMap > >::fullName[] = "std::vector< osg::Stats::AttributeMap >";
const char LunaTraits< std::vector< osg::Stats::AttributeMap > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Stats::AttributeMap > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Stats::AttributeMap > >::hash = 12653154;
const int LunaTraits< std::vector< osg::Stats::AttributeMap > >::uniqueIDs[] = {12653154,0};

luna_RegType LunaTraits< std::vector< osg::Stats::AttributeMap > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Stats_AttributeMap::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Stats_AttributeMap::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Stats::AttributeMap > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Stats::AttributeMap > >::enumValues[] = {
	{0,0}
};


