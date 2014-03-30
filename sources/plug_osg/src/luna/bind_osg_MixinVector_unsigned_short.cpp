#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_MixinVector_unsigned_short {
public:
	typedef Luna< osg::MixinVector< unsigned short > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37920625) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::MixinVector< unsigned short >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::MixinVector< unsigned short >* rhs =(Luna< osg::MixinVector< unsigned short > >::check(L,2));
		osg::MixinVector< unsigned short >* self=(Luna< osg::MixinVector< unsigned short > >::check(L,1));
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

		osg::MixinVector< unsigned short >* self=(Luna< osg::MixinVector< unsigned short > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::MixinVector< unsigned short >");
		
		return luna_dynamicCast(L,converters,"osg::MixinVector< unsigned short >",name);
	}

};

osg::MixinVector< unsigned short >* LunaTraits< osg::MixinVector< unsigned short > >::_bind_ctor(lua_State *L) {
	return new osg::MixinVector< unsigned short >();
}

void LunaTraits< osg::MixinVector< unsigned short > >::_bind_dtor(osg::MixinVector< unsigned short >* obj) {
	delete obj;
}

const char LunaTraits< osg::MixinVector< unsigned short > >::className[] = "osg_MixinVector_unsigned_short";
const char LunaTraits< osg::MixinVector< unsigned short > >::fullName[] = "osg::MixinVector< unsigned short >";
const char LunaTraits< osg::MixinVector< unsigned short > >::moduleName[] = "osg";
const char* LunaTraits< osg::MixinVector< unsigned short > >::parents[] = {0};
const int LunaTraits< osg::MixinVector< unsigned short > >::hash = 37920625;
const int LunaTraits< osg::MixinVector< unsigned short > >::uniqueIDs[] = {37920625,0};

luna_RegType LunaTraits< osg::MixinVector< unsigned short > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_MixinVector_unsigned_short::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_MixinVector_unsigned_short::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::MixinVector< unsigned short > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::MixinVector< unsigned short > >::enumValues[] = {
	{0,0}
};


