#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_OperationThread_ptr {
public:
	typedef Luna< std::set< osg::OperationThread * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97507829) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::OperationThread * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< osg::OperationThread * >* rhs =(Luna< std::set< osg::OperationThread * > >::check(L,2));
		std::set< osg::OperationThread * >* self=(Luna< std::set< osg::OperationThread * > >::check(L,1));
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

		std::set< osg::OperationThread * >* self=(Luna< std::set< osg::OperationThread * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::OperationThread * >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::OperationThread * >",name);
	}

};

std::set< osg::OperationThread * >* LunaTraits< std::set< osg::OperationThread * > >::_bind_ctor(lua_State *L) {
	return new std::set< osg::OperationThread * >();
}

void LunaTraits< std::set< osg::OperationThread * > >::_bind_dtor(std::set< osg::OperationThread * >* obj) {
	delete obj;
}

const char LunaTraits< std::set< osg::OperationThread * > >::className[] = "std_set_osg_OperationThread_ptr";
const char LunaTraits< std::set< osg::OperationThread * > >::fullName[] = "std::set< osg::OperationThread * >";
const char LunaTraits< std::set< osg::OperationThread * > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::OperationThread * > >::parents[] = {0};
const int LunaTraits< std::set< osg::OperationThread * > >::hash = 97507829;
const int LunaTraits< std::set< osg::OperationThread * > >::uniqueIDs[] = {97507829,0};

luna_RegType LunaTraits< std::set< osg::OperationThread * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_OperationThread_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_OperationThread_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::OperationThread * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::OperationThread * > >::enumValues[] = {
	{0,0}
};


