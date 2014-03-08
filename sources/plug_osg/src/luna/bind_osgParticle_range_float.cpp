#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osgParticle_range_float {
public:
	typedef Luna< osgParticle::range< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42175463) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::range< float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::range< float >* rhs =(Luna< osgParticle::range< float > >::check(L,2));
		osgParticle::range< float >* self=(Luna< osgParticle::range< float > >::check(L,1));
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

		osgParticle::range< float >* self=(Luna< osgParticle::range< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::range< float >");
		
		return luna_dynamicCast(L,converters,"osgParticle::range< float >",name);
	}

};

osgParticle::range< float >* LunaTraits< osgParticle::range< float > >::_bind_ctor(lua_State *L) {
	return new osgParticle::range< float >();
}

void LunaTraits< osgParticle::range< float > >::_bind_dtor(osgParticle::range< float >* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::range< float > >::className[] = "osgParticle_range_float";
const char LunaTraits< osgParticle::range< float > >::fullName[] = "osgParticle::range< float >";
const char LunaTraits< osgParticle::range< float > >::moduleName[] = "osg";
const char* LunaTraits< osgParticle::range< float > >::parents[] = {0};
const int LunaTraits< osgParticle::range< float > >::hash = 42175463;
const int LunaTraits< osgParticle::range< float > >::uniqueIDs[] = {42175463,0};

luna_RegType LunaTraits< osgParticle::range< float > >::methods[] = {
	{"dynCast", &luna_wrapper_osgParticle_range_float::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_range_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::range< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::range< float > >::enumValues[] = {
	{0,0}
};


