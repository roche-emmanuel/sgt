#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ShadowVolumeOccluder {
public:
	typedef Luna< std::vector< osg::ShadowVolumeOccluder > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75920513) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ShadowVolumeOccluder >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ShadowVolumeOccluder >* rhs =(Luna< std::vector< osg::ShadowVolumeOccluder > >::check(L,2));
		std::vector< osg::ShadowVolumeOccluder >* self=(Luna< std::vector< osg::ShadowVolumeOccluder > >::check(L,1));
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

		std::vector< osg::ShadowVolumeOccluder >* self=(Luna< std::vector< osg::ShadowVolumeOccluder > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ShadowVolumeOccluder >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ShadowVolumeOccluder >",name);
	}

};

std::vector< osg::ShadowVolumeOccluder >* LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ShadowVolumeOccluder >();
}

void LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::_bind_dtor(std::vector< osg::ShadowVolumeOccluder >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::className[] = "std_vector_osg_ShadowVolumeOccluder";
const char LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::fullName[] = "std::vector< osg::ShadowVolumeOccluder >";
const char LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::hash = 75920513;
const int LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::uniqueIDs[] = {75920513,0};

luna_RegType LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ShadowVolumeOccluder::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ShadowVolumeOccluder::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ShadowVolumeOccluder > >::enumValues[] = {
	{0,0}
};


