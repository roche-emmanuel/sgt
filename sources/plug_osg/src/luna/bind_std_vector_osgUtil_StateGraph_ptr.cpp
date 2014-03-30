#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgUtil_StateGraph_ptr {
public:
	typedef Luna< std::vector< osgUtil::StateGraph * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53124285) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgUtil::StateGraph * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osgUtil::StateGraph * >* rhs =(Luna< std::vector< osgUtil::StateGraph * > >::check(L,2));
		std::vector< osgUtil::StateGraph * >* self=(Luna< std::vector< osgUtil::StateGraph * > >::check(L,1));
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

		std::vector< osgUtil::StateGraph * >* self=(Luna< std::vector< osgUtil::StateGraph * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgUtil::StateGraph * >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgUtil::StateGraph * >",name);
	}

};

std::vector< osgUtil::StateGraph * >* LunaTraits< std::vector< osgUtil::StateGraph * > >::_bind_ctor(lua_State *L) {
	return new std::vector< osgUtil::StateGraph * >();
}

void LunaTraits< std::vector< osgUtil::StateGraph * > >::_bind_dtor(std::vector< osgUtil::StateGraph * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osgUtil::StateGraph * > >::className[] = "std_vector_osgUtil_StateGraph_ptr";
const char LunaTraits< std::vector< osgUtil::StateGraph * > >::fullName[] = "std::vector< osgUtil::StateGraph * >";
const char LunaTraits< std::vector< osgUtil::StateGraph * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgUtil::StateGraph * > >::parents[] = {0};
const int LunaTraits< std::vector< osgUtil::StateGraph * > >::hash = 53124285;
const int LunaTraits< std::vector< osgUtil::StateGraph * > >::uniqueIDs[] = {53124285,0};

luna_RegType LunaTraits< std::vector< osgUtil::StateGraph * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgUtil_StateGraph_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgUtil_StateGraph_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgUtil::StateGraph * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgUtil::StateGraph * > >::enumValues[] = {
	{0,0}
};


