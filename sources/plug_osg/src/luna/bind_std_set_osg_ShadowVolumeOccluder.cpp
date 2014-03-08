#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_ShadowVolumeOccluder {
public:
	typedef Luna< std::set< osg::ShadowVolumeOccluder > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28893306) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::ShadowVolumeOccluder >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< osg::ShadowVolumeOccluder >* rhs =(Luna< std::set< osg::ShadowVolumeOccluder > >::check(L,2));
		std::set< osg::ShadowVolumeOccluder >* self=(Luna< std::set< osg::ShadowVolumeOccluder > >::check(L,1));
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

		std::set< osg::ShadowVolumeOccluder >* self=(Luna< std::set< osg::ShadowVolumeOccluder > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::ShadowVolumeOccluder >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::ShadowVolumeOccluder >",name);
	}

};

std::set< osg::ShadowVolumeOccluder >* LunaTraits< std::set< osg::ShadowVolumeOccluder > >::_bind_ctor(lua_State *L) {
	return new std::set< osg::ShadowVolumeOccluder >();
}

void LunaTraits< std::set< osg::ShadowVolumeOccluder > >::_bind_dtor(std::set< osg::ShadowVolumeOccluder >* obj) {
	delete obj;
}

const char LunaTraits< std::set< osg::ShadowVolumeOccluder > >::className[] = "std_set_osg_ShadowVolumeOccluder";
const char LunaTraits< std::set< osg::ShadowVolumeOccluder > >::fullName[] = "std::set< osg::ShadowVolumeOccluder >";
const char LunaTraits< std::set< osg::ShadowVolumeOccluder > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::ShadowVolumeOccluder > >::parents[] = {0};
const int LunaTraits< std::set< osg::ShadowVolumeOccluder > >::hash = 28893306;
const int LunaTraits< std::set< osg::ShadowVolumeOccluder > >::uniqueIDs[] = {28893306,0};

luna_RegType LunaTraits< std::set< osg::ShadowVolumeOccluder > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_ShadowVolumeOccluder::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_ShadowVolumeOccluder::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::ShadowVolumeOccluder > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::ShadowVolumeOccluder > >::enumValues[] = {
	{0,0}
};


