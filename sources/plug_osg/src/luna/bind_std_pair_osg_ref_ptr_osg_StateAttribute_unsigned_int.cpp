#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_osg_ref_ptr_osg_StateAttribute_unsigned_int {
public:
	typedef Luna< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36696863) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* rhs =(Luna< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::check(L,2));
		std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* self=(Luna< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::check(L,1));
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

		std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* self=(Luna< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >");
		
		return luna_dynamicCast(L,converters,"std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >",name);
	}

};

std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::_bind_ctor(lua_State *L) {
	return new std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >();
}

void LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::_bind_dtor(std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::className[] = "std_pair_osg_ref_ptr_osg_StateAttribute_unsigned_int";
const char LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::fullName[] = "std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int >";
const char LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::parents[] = {0};
const int LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::hash = 36696863;
const int LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::uniqueIDs[] = {36696863,0};

luna_RegType LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_osg_ref_ptr_osg_StateAttribute_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_osg_ref_ptr_osg_StateAttribute_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< osg::ref_ptr< osg::StateAttribute >, unsigned int > >::enumValues[] = {
	{0,0}
};


