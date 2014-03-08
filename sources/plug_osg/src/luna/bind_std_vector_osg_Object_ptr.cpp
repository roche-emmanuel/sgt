#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_Object_ptr {
public:
	typedef Luna< std::vector< osg::Object * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,57488909) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::Object * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::Object * >* rhs =(Luna< std::vector< osg::Object * > >::check(L,2));
		std::vector< osg::Object * >* self=(Luna< std::vector< osg::Object * > >::check(L,1));
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

		std::vector< osg::Object * >* self=(Luna< std::vector< osg::Object * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::Object * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::Object * >",name);
	}

};

std::vector< osg::Object * >* LunaTraits< std::vector< osg::Object * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::Object * >();
}

void LunaTraits< std::vector< osg::Object * > >::_bind_dtor(std::vector< osg::Object * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::Object * > >::className[] = "std_vector_osg_Object_ptr";
const char LunaTraits< std::vector< osg::Object * > >::fullName[] = "std::vector< osg::Object * >";
const char LunaTraits< std::vector< osg::Object * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::Object * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::Object * > >::hash = 57488909;
const int LunaTraits< std::vector< osg::Object * > >::uniqueIDs[] = {57488909,0};

luna_RegType LunaTraits< std::vector< osg::Object * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_Object_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_Object_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::Object * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::Object * > >::enumValues[] = {
	{0,0}
};


