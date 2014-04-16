#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_multimap_proland_CurveId_proland_CurvePtr {
public:
	typedef Luna< multimap< proland::CurveId, proland::CurvePtr > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46585073) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(multimap< proland::CurveId, proland::CurvePtr >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		multimap< proland::CurveId, proland::CurvePtr >* rhs =(Luna< multimap< proland::CurveId, proland::CurvePtr > >::check(L,2));
		multimap< proland::CurveId, proland::CurvePtr >* self=(Luna< multimap< proland::CurveId, proland::CurvePtr > >::check(L,1));
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

		multimap< proland::CurveId, proland::CurvePtr >* self=(Luna< multimap< proland::CurveId, proland::CurvePtr > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("multimap< proland::CurveId, proland::CurvePtr >");
		
		return luna_dynamicCast(L,converters,"multimap< proland::CurveId, proland::CurvePtr >",name);
	}

};

multimap< proland::CurveId, proland::CurvePtr >* LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::_bind_ctor(lua_State *L) {
	return new multimap< proland::CurveId, proland::CurvePtr >();
}

void LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::_bind_dtor(multimap< proland::CurveId, proland::CurvePtr >* obj) {
	delete obj;
}

const char LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::className[] = "multimap_proland_CurveId_proland_CurvePtr";
const char LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::fullName[] = "multimap< proland::CurveId, proland::CurvePtr >";
const char LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::moduleName[] = "land";
const char* LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::parents[] = {0};
const int LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::hash = 46585073;
const int LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::uniqueIDs[] = {46585073,0};

luna_RegType LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::methods[] = {
	{"dynCast", &luna_wrapper_multimap_proland_CurveId_proland_CurvePtr::_bind_dynCast},
	{"__eq", &luna_wrapper_multimap_proland_CurveId_proland_CurvePtr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< multimap< proland::CurveId, proland::CurvePtr > >::enumValues[] = {
	{0,0}
};


