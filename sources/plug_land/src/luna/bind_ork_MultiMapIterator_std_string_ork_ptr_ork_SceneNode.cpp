#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_ork_MultiMapIterator_std_string_ork_ptr_ork_SceneNode {
public:
	typedef Luna< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94394620) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* rhs =(Luna< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::check(L,2));
		ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* self=(Luna< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::check(L,1));
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

		ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* self=(Luna< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >");
		
		return luna_dynamicCast(L,converters,"ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >",name);
	}

};

ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::_bind_ctor(lua_State *L) {
	return new ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >();
}

void LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::_bind_dtor(ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >* obj) {
	delete obj;
}

const char LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::className[] = "ork_MultiMapIterator_std_string_ork_ptr_ork_SceneNode";
const char LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::fullName[] = "ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > >";
const char LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::moduleName[] = "land";
const char* LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::parents[] = {0};
const int LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::hash = 94394620;
const int LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::uniqueIDs[] = {94394620,0};

luna_RegType LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::methods[] = {
	{"dynCast", &luna_wrapper_ork_MultiMapIterator_std_string_ork_ptr_ork_SceneNode::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_MultiMapIterator_std_string_ork_ptr_ork_SceneNode::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::MultiMapIterator< std::string, ork::ptr< ork::SceneNode > > >::enumValues[] = {
	{0,0}
};


