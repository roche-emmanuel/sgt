#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osgViewer_View_ptr {
public:
	typedef Luna< std::list< osgViewer::View * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70560566) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osgViewer::View * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osgViewer::View * >* rhs =(Luna< std::list< osgViewer::View * > >::check(L,2));
		std::list< osgViewer::View * >* self=(Luna< std::list< osgViewer::View * > >::check(L,1));
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

		std::list< osgViewer::View * >* self=(Luna< std::list< osgViewer::View * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osgViewer::View * >");
		
		return luna_dynamicCast(L,converters,"std::list< osgViewer::View * >",name);
	}

};

std::list< osgViewer::View * >* LunaTraits< std::list< osgViewer::View * > >::_bind_ctor(lua_State *L) {
	return new std::list< osgViewer::View * >();
}

void LunaTraits< std::list< osgViewer::View * > >::_bind_dtor(std::list< osgViewer::View * >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osgViewer::View * > >::className[] = "std_list_osgViewer_View_ptr";
const char LunaTraits< std::list< osgViewer::View * > >::fullName[] = "std::list< osgViewer::View * >";
const char LunaTraits< std::list< osgViewer::View * > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osgViewer::View * > >::parents[] = {0};
const int LunaTraits< std::list< osgViewer::View * > >::hash = 70560566;
const int LunaTraits< std::list< osgViewer::View * > >::uniqueIDs[] = {70560566,0};

luna_RegType LunaTraits< std::list< osgViewer::View * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osgViewer_View_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osgViewer_View_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osgViewer::View * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osgViewer::View * > >::enumValues[] = {
	{0,0}
};


