#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_DrawElements_ptr {
public:
	typedef Luna< std::vector< osg::DrawElements * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66006148) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::DrawElements * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::DrawElements * >* rhs =(Luna< std::vector< osg::DrawElements * > >::check(L,2));
		std::vector< osg::DrawElements * >* self=(Luna< std::vector< osg::DrawElements * > >::check(L,1));
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

		std::vector< osg::DrawElements * >* self=(Luna< std::vector< osg::DrawElements * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::DrawElements * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::DrawElements * >",name);
	}

};

std::vector< osg::DrawElements * >* LunaTraits< std::vector< osg::DrawElements * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::DrawElements * >();
}

void LunaTraits< std::vector< osg::DrawElements * > >::_bind_dtor(std::vector< osg::DrawElements * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::DrawElements * > >::className[] = "std_vector_osg_DrawElements_ptr";
const char LunaTraits< std::vector< osg::DrawElements * > >::fullName[] = "std::vector< osg::DrawElements * >";
const char LunaTraits< std::vector< osg::DrawElements * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::DrawElements * > >::parents[] = {0};
const int LunaTraits< std::vector< osg::DrawElements * > >::hash = 66006148;
const int LunaTraits< std::vector< osg::DrawElements * > >::uniqueIDs[] = {66006148,0};

luna_RegType LunaTraits< std::vector< osg::DrawElements * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_DrawElements_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_DrawElements_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::DrawElements * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::DrawElements * > >::enumValues[] = {
	{0,0}
};


