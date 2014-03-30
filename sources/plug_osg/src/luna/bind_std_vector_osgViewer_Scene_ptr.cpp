#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgViewer_Scene_ptr {
public:
	typedef Luna< std::vector< osgViewer::Scene * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,36779322) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgViewer::Scene * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osgViewer::Scene * >* rhs =(Luna< std::vector< osgViewer::Scene * > >::check(L,2));
		std::vector< osgViewer::Scene * >* self=(Luna< std::vector< osgViewer::Scene * > >::check(L,1));
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

		std::vector< osgViewer::Scene * >* self=(Luna< std::vector< osgViewer::Scene * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgViewer::Scene * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgViewer::Scene * >",name);
	}

};

std::vector< osgViewer::Scene * >* LunaTraits< std::vector< osgViewer::Scene * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osgViewer::Scene * >();
}

void LunaTraits< std::vector< osgViewer::Scene * > >::_bind_dtor(std::vector< osgViewer::Scene * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osgViewer::Scene * > >::className[] = "std_vector_osgViewer_Scene_ptr";
const char LunaTraits< std::vector< osgViewer::Scene * > >::fullName[] = "std::vector< osgViewer::Scene * >";
const char LunaTraits< std::vector< osgViewer::Scene * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgViewer::Scene * > >::parents[] = {0};
const int LunaTraits< std::vector< osgViewer::Scene * > >::hash = 36779322;
const int LunaTraits< std::vector< osgViewer::Scene * > >::uniqueIDs[] = {36779322,0};

luna_RegType LunaTraits< std::vector< osgViewer::Scene * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgViewer_Scene_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgViewer_Scene_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgViewer::Scene * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgViewer::Scene * > >::enumValues[] = {
	{0,0}
};


