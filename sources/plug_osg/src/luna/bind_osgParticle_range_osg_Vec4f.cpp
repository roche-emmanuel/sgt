#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osgParticle_range_osg_Vec4f {
public:
	typedef Luna< osgParticle::range< osg::Vec4f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67820122) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::range< osg::Vec4f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::range< osg::Vec4f >* rhs =(Luna< osgParticle::range< osg::Vec4f > >::check(L,2));
		osgParticle::range< osg::Vec4f >* self=(Luna< osgParticle::range< osg::Vec4f > >::check(L,1));
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

		osgParticle::range< osg::Vec4f >* self=(Luna< osgParticle::range< osg::Vec4f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::range< osg::Vec4f >");
		
		return luna_dynamicCast(L,converters,"osgParticle::range< osg::Vec4f >",name);
	}

};

osgParticle::range< osg::Vec4f >* LunaTraits< osgParticle::range< osg::Vec4f > >::_bind_ctor(lua_State *L) {
	return new osgParticle::range< osg::Vec4f >();
}

void LunaTraits< osgParticle::range< osg::Vec4f > >::_bind_dtor(osgParticle::range< osg::Vec4f >* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::range< osg::Vec4f > >::className[] = "osgParticle_range_osg_Vec4f";
const char LunaTraits< osgParticle::range< osg::Vec4f > >::fullName[] = "osgParticle::range< osg::Vec4f >";
const char LunaTraits< osgParticle::range< osg::Vec4f > >::moduleName[] = "osg";
const char* LunaTraits< osgParticle::range< osg::Vec4f > >::parents[] = {0};
const int LunaTraits< osgParticle::range< osg::Vec4f > >::hash = 67820122;
const int LunaTraits< osgParticle::range< osg::Vec4f > >::uniqueIDs[] = {67820122,0};

luna_RegType LunaTraits< osgParticle::range< osg::Vec4f > >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_range_osg_Vec4f::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_range_osg_Vec4f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::range< osg::Vec4f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::range< osg::Vec4f > >::enumValues[] = {
	{0,0}
};


