#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_Camera_ptr {
public:
	typedef Luna< std::list< osg::Camera * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29668977) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::Camera * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osg::Camera * >* rhs =(Luna< std::list< osg::Camera * > >::check(L,2));
		std::list< osg::Camera * >* self=(Luna< std::list< osg::Camera * > >::check(L,1));
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

		std::list< osg::Camera * >* self=(Luna< std::list< osg::Camera * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::Camera * >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::Camera * >",name);
	}

};

std::list< osg::Camera * >* LunaTraits< std::list< osg::Camera * > >::_bind_ctor(lua_State *L) {
	return new std::list< osg::Camera * >();
}

void LunaTraits< std::list< osg::Camera * > >::_bind_dtor(std::list< osg::Camera * >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osg::Camera * > >::className[] = "std_list_osg_Camera_ptr";
const char LunaTraits< std::list< osg::Camera * > >::fullName[] = "std::list< osg::Camera * >";
const char LunaTraits< std::list< osg::Camera * > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::Camera * > >::parents[] = {0};
const int LunaTraits< std::list< osg::Camera * > >::hash = 29668977;
const int LunaTraits< std::list< osg::Camera * > >::uniqueIDs[] = {29668977,0};

luna_RegType LunaTraits< std::list< osg::Camera * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_Camera_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_Camera_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::Camera * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::Camera * > >::enumValues[] = {
	{0,0}
};


