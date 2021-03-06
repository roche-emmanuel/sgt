#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_MixinVector_unsigned_int {
public:
	typedef Luna< osg::MixinVector< unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,24387920) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MixinVector< unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::MixinVector< unsigned int >* rhs =(Luna< osg::MixinVector< unsigned int > >::check(L,2));
		osg::MixinVector< unsigned int >* self=(Luna< osg::MixinVector< unsigned int > >::check(L,1));
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

		osg::MixinVector< unsigned int >* self=(Luna< osg::MixinVector< unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MixinVector< unsigned int >");
		
		return luna_dynamicCast(L,converters,"osg::MixinVector< unsigned int >",name);
	}

};

osg::MixinVector< unsigned int >* LunaTraits< osg::MixinVector< unsigned int > >::_bind_ctor(lua_State *L) {
	return new osg::MixinVector< unsigned int >();
}

void LunaTraits< osg::MixinVector< unsigned int > >::_bind_dtor(osg::MixinVector< unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< osg::MixinVector< unsigned int > >::className[] = "osg_MixinVector_unsigned_int";
const char LunaTraits< osg::MixinVector< unsigned int > >::fullName[] = "osg::MixinVector< unsigned int >";
const char LunaTraits< osg::MixinVector< unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< osg::MixinVector< unsigned int > >::parents[] = {0};
const int LunaTraits< osg::MixinVector< unsigned int > >::hash = 24387920;
const int LunaTraits< osg::MixinVector< unsigned int > >::uniqueIDs[] = {24387920,0};

luna_RegType LunaTraits< osg::MixinVector< unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MixinVector_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MixinVector_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::MixinVector< unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MixinVector< unsigned int > >::enumValues[] = {
	{0,0}
};


