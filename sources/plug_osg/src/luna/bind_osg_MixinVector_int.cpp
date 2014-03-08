#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_MixinVector_int {
public:
	typedef Luna< osg::MixinVector< int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49500314) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MixinVector< int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::MixinVector< int >* rhs =(Luna< osg::MixinVector< int > >::check(L,2));
		osg::MixinVector< int >* self=(Luna< osg::MixinVector< int > >::check(L,1));
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

		osg::MixinVector< int >* self=(Luna< osg::MixinVector< int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MixinVector< int >");
		
		return luna_dynamicCast(L,converters,"osg::MixinVector< int >",name);
	}

};

osg::MixinVector< int >* LunaTraits< osg::MixinVector< int > >::_bind_ctor(lua_State *L) {
	return new osg::MixinVector< int >();
}

void LunaTraits< osg::MixinVector< int > >::_bind_dtor(osg::MixinVector< int >* obj) {
	delete obj;
}

const char LunaTraits< osg::MixinVector< int > >::className[] = "osg_MixinVector_int";
const char LunaTraits< osg::MixinVector< int > >::fullName[] = "osg::MixinVector< int >";
const char LunaTraits< osg::MixinVector< int > >::moduleName[] = "osg";
const char* LunaTraits< osg::MixinVector< int > >::parents[] = {0};
const int LunaTraits< osg::MixinVector< int > >::hash = 49500314;
const int LunaTraits< osg::MixinVector< int > >::uniqueIDs[] = {49500314,0};

luna_RegType LunaTraits< osg::MixinVector< int > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MixinVector_int::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MixinVector_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::MixinVector< int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MixinVector< int > >::enumValues[] = {
	{0,0}
};


