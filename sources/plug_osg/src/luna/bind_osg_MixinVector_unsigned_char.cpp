#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_MixinVector_unsigned_char {
public:
	typedef Luna< osg::MixinVector< unsigned char > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78221228) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MixinVector< unsigned char >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::MixinVector< unsigned char >* rhs =(Luna< osg::MixinVector< unsigned char > >::check(L,2));
		osg::MixinVector< unsigned char >* self=(Luna< osg::MixinVector< unsigned char > >::check(L,1));
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

		osg::MixinVector< unsigned char >* self=(Luna< osg::MixinVector< unsigned char > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MixinVector< unsigned char >");
		
		return luna_dynamicCast(L,converters,"osg::MixinVector< unsigned char >",name);
	}

};

osg::MixinVector< unsigned char >* LunaTraits< osg::MixinVector< unsigned char > >::_bind_ctor(lua_State *L) {
	return new osg::MixinVector< unsigned char >();
}

void LunaTraits< osg::MixinVector< unsigned char > >::_bind_dtor(osg::MixinVector< unsigned char >* obj) {
	delete obj;
}

const char LunaTraits< osg::MixinVector< unsigned char > >::className[] = "osg_MixinVector_unsigned_char";
const char LunaTraits< osg::MixinVector< unsigned char > >::fullName[] = "osg::MixinVector< unsigned char >";
const char LunaTraits< osg::MixinVector< unsigned char > >::moduleName[] = "osg";
const char* LunaTraits< osg::MixinVector< unsigned char > >::parents[] = {0};
const int LunaTraits< osg::MixinVector< unsigned char > >::hash = 78221228;
const int LunaTraits< osg::MixinVector< unsigned char > >::uniqueIDs[] = {78221228,0};

luna_RegType LunaTraits< osg::MixinVector< unsigned char > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MixinVector_unsigned_char::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MixinVector_unsigned_char::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::MixinVector< unsigned char > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MixinVector< unsigned char > >::enumValues[] = {
	{0,0}
};


