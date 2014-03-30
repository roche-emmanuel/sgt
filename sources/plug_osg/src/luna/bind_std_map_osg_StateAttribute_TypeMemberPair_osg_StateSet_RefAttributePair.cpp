#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osg_StateAttribute_TypeMemberPair_osg_StateSet_RefAttributePair {
public:
	typedef Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94158825) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* rhs =(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::check(L,2));
		std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* self=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::check(L,1));
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

		std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* self=(Luna< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >");
		
		return luna_dynamicCast(L,converters,"std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >",name);
	}

};

std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::_bind_ctor(lua_State *L) {
	return new std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >();
}

void LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::_bind_dtor(std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >* obj) {
	delete obj;
}

const char LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::className[] = "std_map_osg_StateAttribute_TypeMemberPair_osg_StateSet_RefAttributePair";
const char LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::fullName[] = "std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair >";
const char LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::parents[] = {0};
const int LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::hash = 94158825;
const int LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::uniqueIDs[] = {94158825,0};

luna_RegType LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osg_StateAttribute_TypeMemberPair_osg_StateSet_RefAttributePair::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osg_StateAttribute_TypeMemberPair_osg_StateSet_RefAttributePair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osg::StateAttribute::TypeMemberPair, osg::StateSet::RefAttributePair > >::enumValues[] = {
	{0,0}
};


