#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_osg_ref_ptr_osg_StateSet_osg_Polytope {
public:
	typedef Luna< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88384434) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* rhs =(Luna< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::check(L,2));
		std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* self=(Luna< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::check(L,1));
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

		std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* self=(Luna< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >");
		
		return luna_dynamicCast(L,converters,"std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >",name);
	}

};

std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::_bind_ctor(lua_State *L) {
	return new std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >();
}

void LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::_bind_dtor(std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::className[] = "std_pair_osg_ref_ptr_osg_StateSet_osg_Polytope";
const char LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::fullName[] = "std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope >";
const char LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::parents[] = {0};
const int LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::hash = 88384434;
const int LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::uniqueIDs[] = {88384434,0};

luna_RegType LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_osg_ref_ptr_osg_StateSet_osg_Polytope::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_osg_ref_ptr_osg_StateSet_osg_Polytope::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< osg::ref_ptr< osg::StateSet >, osg::Polytope > >::enumValues[] = {
	{0,0}
};


