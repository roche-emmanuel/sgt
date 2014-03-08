#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_State_AttributePair {
public:
	typedef Luna< std::vector< osg::State::AttributePair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13757199) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::State::AttributePair >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::State::AttributePair >* rhs =(Luna< std::vector< osg::State::AttributePair > >::check(L,2));
		std::vector< osg::State::AttributePair >* self=(Luna< std::vector< osg::State::AttributePair > >::check(L,1));
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

		std::vector< osg::State::AttributePair >* self=(Luna< std::vector< osg::State::AttributePair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::State::AttributePair >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::State::AttributePair >",name);
	}

};

std::vector< osg::State::AttributePair >* LunaTraits< std::vector< osg::State::AttributePair > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::State::AttributePair >();
}

void LunaTraits< std::vector< osg::State::AttributePair > >::_bind_dtor(std::vector< osg::State::AttributePair >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::State::AttributePair > >::className[] = "std_vector_osg_State_AttributePair";
const char LunaTraits< std::vector< osg::State::AttributePair > >::fullName[] = "std::vector< osg::State::AttributePair >";
const char LunaTraits< std::vector< osg::State::AttributePair > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::State::AttributePair > >::parents[] = {0};
const int LunaTraits< std::vector< osg::State::AttributePair > >::hash = 13757199;
const int LunaTraits< std::vector< osg::State::AttributePair > >::uniqueIDs[] = {13757199,0};

luna_RegType LunaTraits< std::vector< osg::State::AttributePair > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_State_AttributePair::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_State_AttributePair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::State::AttributePair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::State::AttributePair > >::enumValues[] = {
	{0,0}
};


