#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_osg_ref_ptr_osg_Uniform_unsigned_int {
public:
	typedef Luna< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61531030) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* rhs =(Luna< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::check(L,2));
		std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* self=(Luna< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::check(L,1));
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

		std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* self=(Luna< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >");
		
		return luna_dynamicCast(L,converters,"std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >",name);
	}

};

std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::_bind_ctor(lua_State *L) {
	return new std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >();
}

void LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::_bind_dtor(std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::className[] = "std_pair_osg_ref_ptr_osg_Uniform_unsigned_int";
const char LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::fullName[] = "std::pair< osg::ref_ptr< osg::Uniform >, unsigned int >";
const char LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::parents[] = {0};
const int LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::hash = 61531030;
const int LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::uniqueIDs[] = {61531030,0};

luna_RegType LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_osg_ref_ptr_osg_Uniform_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_osg_ref_ptr_osg_Uniform_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< osg::ref_ptr< osg::Uniform >, unsigned int > >::enumValues[] = {
	{0,0}
};


