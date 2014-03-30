#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime {
public:
	typedef Luna< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98510513) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* rhs =(Luna< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::check(L,2));
		std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* self=(Luna< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::check(L,1));
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

		std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* self=(Luna< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >");
		
		return luna_dynamicCast(L,converters,"std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >",name);
	}

};

std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::_bind_ctor(lua_State *L) {
	return new std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >();
}

void LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::_bind_dtor(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >* obj) {
	delete obj;
}

const char LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::className[] = "std_map_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime";
const char LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::fullName[] = "std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >";
const char LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::parents[] = {0};
const int LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::hash = 98510513;
const int LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::uniqueIDs[] = {98510513,0};

luna_RegType LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell_osgParticle_PrecipitationEffect_PrecipitationDrawable_DepthMatrixStartTime::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell, osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime > >::enumValues[] = {
	{0,0}
};


