#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_static_ptr_proland_EditGraphOrthoLayer_EditGraphHandlerList {
public:
	typedef Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68532613) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* rhs =(Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::check(L,2));
		ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* self=(Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::check(L,1));
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

		ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* self=(Luna< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >");
		
		return luna_dynamicCast(L,converters,"ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >",name);
	}

};

ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::_bind_ctor(lua_State *L) {
	return new ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >();
}

void LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::_bind_dtor(ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >* obj) {
	delete obj;
}

const char LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::className[] = "ork_static_ptr_proland_EditGraphOrthoLayer_EditGraphHandlerList";
const char LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::fullName[] = "ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList >";
const char LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::moduleName[] = "land";
const char* LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::parents[] = {0};
const int LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::hash = 68532613;
const int LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::uniqueIDs[] = {68532613,0};

luna_RegType LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_static_ptr_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_static_ptr_proland_EditGraphOrthoLayer_EditGraphHandlerList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::static_ptr< proland::EditGraphOrthoLayer::EditGraphHandlerList > >::enumValues[] = {
	{0,0}
};


