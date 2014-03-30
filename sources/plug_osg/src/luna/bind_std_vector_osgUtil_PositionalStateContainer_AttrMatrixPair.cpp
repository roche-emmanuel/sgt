#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgUtil_PositionalStateContainer_AttrMatrixPair {
public:
	typedef Luna< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94794184) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* rhs =(Luna< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::check(L,2));
		std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* self=(Luna< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::check(L,1));
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

		std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* self=(Luna< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >",name);
	}

};

std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::_bind_ctor(lua_State *L) {
	return new std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >();
}

void LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::_bind_dtor(std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::className[] = "std_vector_osgUtil_PositionalStateContainer_AttrMatrixPair";
const char LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::fullName[] = "std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair >";
const char LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::parents[] = {0};
const int LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::hash = 94794184;
const int LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::uniqueIDs[] = {94794184,0};

luna_RegType LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgUtil_PositionalStateContainer_AttrMatrixPair::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgUtil_PositionalStateContainer_AttrMatrixPair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgUtil::PositionalStateContainer::AttrMatrixPair > >::enumValues[] = {
	{0,0}
};


