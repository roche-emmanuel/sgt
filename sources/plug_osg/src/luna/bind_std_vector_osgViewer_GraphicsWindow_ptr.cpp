#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgViewer_GraphicsWindow_ptr {
public:
	typedef Luna< std::vector< osgViewer::GraphicsWindow * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20911347) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgViewer::GraphicsWindow * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osgViewer::GraphicsWindow * >* rhs =(Luna< std::vector< osgViewer::GraphicsWindow * > >::check(L,2));
		std::vector< osgViewer::GraphicsWindow * >* self=(Luna< std::vector< osgViewer::GraphicsWindow * > >::check(L,1));
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

		std::vector< osgViewer::GraphicsWindow * >* self=(Luna< std::vector< osgViewer::GraphicsWindow * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgViewer::GraphicsWindow * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgViewer::GraphicsWindow * >",name);
	}

};

std::vector< osgViewer::GraphicsWindow * >* LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osgViewer::GraphicsWindow * >();
}

void LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::_bind_dtor(std::vector< osgViewer::GraphicsWindow * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::className[] = "std_vector_osgViewer_GraphicsWindow_ptr";
const char LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::fullName[] = "std::vector< osgViewer::GraphicsWindow * >";
const char LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::parents[] = {0};
const int LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::hash = 20911347;
const int LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::uniqueIDs[] = {20911347,0};

luna_RegType LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgViewer_GraphicsWindow_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgViewer_GraphicsWindow_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgViewer::GraphicsWindow * > >::enumValues[] = {
	{0,0}
};


