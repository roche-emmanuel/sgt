#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_StateSet_AttributeList {
public:
	typedef Luna< std::vector< osg::StateSet::AttributeList > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27505286) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::StateSet::AttributeList >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::StateSet::AttributeList >* rhs =(Luna< std::vector< osg::StateSet::AttributeList > >::check(L,2));
		std::vector< osg::StateSet::AttributeList >* self=(Luna< std::vector< osg::StateSet::AttributeList > >::check(L,1));
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

		std::vector< osg::StateSet::AttributeList >* self=(Luna< std::vector< osg::StateSet::AttributeList > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::StateSet::AttributeList >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::StateSet::AttributeList >",name);
	}

};

std::vector< osg::StateSet::AttributeList >* LunaTraits< std::vector< osg::StateSet::AttributeList > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::StateSet::AttributeList >();
}

void LunaTraits< std::vector< osg::StateSet::AttributeList > >::_bind_dtor(std::vector< osg::StateSet::AttributeList >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::StateSet::AttributeList > >::className[] = "std_vector_osg_StateSet_AttributeList";
const char LunaTraits< std::vector< osg::StateSet::AttributeList > >::fullName[] = "std::vector< osg::StateSet::AttributeList >";
const char LunaTraits< std::vector< osg::StateSet::AttributeList > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::StateSet::AttributeList > >::parents[] = {0};
const int LunaTraits< std::vector< osg::StateSet::AttributeList > >::hash = 27505286;
const int LunaTraits< std::vector< osg::StateSet::AttributeList > >::uniqueIDs[] = {27505286,0};

luna_RegType LunaTraits< std::vector< osg::StateSet::AttributeList > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_StateSet_AttributeList::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_StateSet_AttributeList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::StateSet::AttributeList > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::StateSet::AttributeList > >::enumValues[] = {
	{0,0}
};


