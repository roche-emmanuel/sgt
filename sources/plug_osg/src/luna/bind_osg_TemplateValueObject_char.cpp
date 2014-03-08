#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_char {
public:
	typedef Luna< osg::TemplateValueObject< char > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,40013318) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< char >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< char >* rhs =(Luna< osg::TemplateValueObject< char > >::check(L,2));
		osg::TemplateValueObject< char >* self=(Luna< osg::TemplateValueObject< char > >::check(L,1));
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

		osg::TemplateValueObject< char >* self=(Luna< osg::TemplateValueObject< char > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< char >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< char >",name);
	}

};

osg::TemplateValueObject< char >* LunaTraits< osg::TemplateValueObject< char > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< char >();
}

void LunaTraits< osg::TemplateValueObject< char > >::_bind_dtor(osg::TemplateValueObject< char >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< char > >::className[] = "osg_TemplateValueObject_char";
const char LunaTraits< osg::TemplateValueObject< char > >::fullName[] = "osg::TemplateValueObject< char >";
const char LunaTraits< osg::TemplateValueObject< char > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< char > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< char > >::hash = 40013318;
const int LunaTraits< osg::TemplateValueObject< char > >::uniqueIDs[] = {40013318,0};

luna_RegType LunaTraits< osg::TemplateValueObject< char > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_char::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_char::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< char > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< char > >::enumValues[] = {
	{0,0}
};


