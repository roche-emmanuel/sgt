#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_StateSet_const_ptr {
public:
	typedef Luna< std::vector< osg::StateSet const * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21911421) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::StateSet const * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::StateSet const * >* rhs =(Luna< std::vector< osg::StateSet const * > >::check(L,2));
		std::vector< osg::StateSet const * >* self=(Luna< std::vector< osg::StateSet const * > >::check(L,1));
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

		std::vector< osg::StateSet const * >* self=(Luna< std::vector< osg::StateSet const * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::StateSet const * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::StateSet const * >",name);
	}

};

std::vector< osg::StateSet const * >* LunaTraits< std::vector< osg::StateSet const * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::StateSet const * >();
}

void LunaTraits< std::vector< osg::StateSet const * > >::_bind_dtor(std::vector< osg::StateSet const * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::StateSet const * > >::className[] = "std_vector_osg_StateSet_const_ptr";
const char LunaTraits< std::vector< osg::StateSet const * > >::fullName[] = "std::vector< osg::StateSet const * >";
const char LunaTraits< std::vector< osg::StateSet const * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::StateSet const * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::StateSet const * > >::hash = 21911421;
const int LunaTraits< std::vector< osg::StateSet const * > >::uniqueIDs[] = {21911421,0};

luna_RegType LunaTraits< std::vector< osg::StateSet const * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_StateSet_const_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_StateSet_const_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::StateSet const * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::StateSet const * > >::enumValues[] = {
	{0,0}
};


