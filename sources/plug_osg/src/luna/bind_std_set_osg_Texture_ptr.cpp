#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osg_Texture_ptr {
public:
	typedef Luna< std::set< osg::Texture * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55546203) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osg::Texture * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< osg::Texture * >* rhs =(Luna< std::set< osg::Texture * > >::check(L,2));
		std::set< osg::Texture * >* self=(Luna< std::set< osg::Texture * > >::check(L,1));
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

		std::set< osg::Texture * >* self=(Luna< std::set< osg::Texture * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osg::Texture * >");
		
		return luna_dynamicCast(L,converters,"std::set< osg::Texture * >",name);
	}

};

std::set< osg::Texture * >* LunaTraits< std::set< osg::Texture * > >::_bind_ctor(lua_State *L) {
	return new std::set< osg::Texture * >();
}

void LunaTraits< std::set< osg::Texture * > >::_bind_dtor(std::set< osg::Texture * >* obj) {
	delete obj;
}

const char LunaTraits< std::set< osg::Texture * > >::className[] = "std_set_osg_Texture_ptr";
const char LunaTraits< std::set< osg::Texture * > >::fullName[] = "std::set< osg::Texture * >";
const char LunaTraits< std::set< osg::Texture * > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osg::Texture * > >::parents[] = {0};
const int LunaTraits< std::set< osg::Texture * > >::hash = 55546203;
const int LunaTraits< std::set< osg::Texture * > >::uniqueIDs[] = {55546203,0};

luna_RegType LunaTraits< std::set< osg::Texture * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osg_Texture_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osg_Texture_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osg::Texture * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osg::Texture * > >::enumValues[] = {
	{0,0}
};


