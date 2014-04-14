#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_proland_TweakViewHandler_Position {
public:
	typedef Luna< std::vector< proland::TweakViewHandler::Position > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22464234) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< proland::TweakViewHandler::Position >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< proland::TweakViewHandler::Position >* rhs =(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,2));
		std::vector< proland::TweakViewHandler::Position >* self=(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,1));
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

		std::vector< proland::TweakViewHandler::Position >* self=(Luna< std::vector< proland::TweakViewHandler::Position > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< proland::TweakViewHandler::Position >");
		
		return luna_dynamicCast(L,converters,"std::vector< proland::TweakViewHandler::Position >",name);
	}

};

std::vector< proland::TweakViewHandler::Position >* LunaTraits< std::vector< proland::TweakViewHandler::Position > >::_bind_ctor(lua_State *L) {
	return new std::vector< proland::TweakViewHandler::Position >();
}

void LunaTraits< std::vector< proland::TweakViewHandler::Position > >::_bind_dtor(std::vector< proland::TweakViewHandler::Position >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< proland::TweakViewHandler::Position > >::className[] = "std_vector_proland_TweakViewHandler_Position";
const char LunaTraits< std::vector< proland::TweakViewHandler::Position > >::fullName[] = "std::vector< proland::TweakViewHandler::Position >";
const char LunaTraits< std::vector< proland::TweakViewHandler::Position > >::moduleName[] = "land";
const char* LunaTraits< std::vector< proland::TweakViewHandler::Position > >::parents[] = {0};
const int LunaTraits< std::vector< proland::TweakViewHandler::Position > >::hash = 22464234;
const int LunaTraits< std::vector< proland::TweakViewHandler::Position > >::uniqueIDs[] = {22464234,0};

luna_RegType LunaTraits< std::vector< proland::TweakViewHandler::Position > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_proland_TweakViewHandler_Position::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_proland_TweakViewHandler_Position::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< proland::TweakViewHandler::Position > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< proland::TweakViewHandler::Position > >::enumValues[] = {
	{0,0}
};


