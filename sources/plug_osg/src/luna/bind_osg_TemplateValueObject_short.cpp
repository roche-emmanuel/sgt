#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_short {
public:
	typedef Luna< osg::TemplateValueObject< short > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53475946) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< short >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< short >* rhs =(Luna< osg::TemplateValueObject< short > >::check(L,2));
		osg::TemplateValueObject< short >* self=(Luna< osg::TemplateValueObject< short > >::check(L,1));
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

		osg::TemplateValueObject< short >* self=(Luna< osg::TemplateValueObject< short > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< short >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< short >",name);
	}

};

osg::TemplateValueObject< short >* LunaTraits< osg::TemplateValueObject< short > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< short >();
}

void LunaTraits< osg::TemplateValueObject< short > >::_bind_dtor(osg::TemplateValueObject< short >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< short > >::className[] = "osg_TemplateValueObject_short";
const char LunaTraits< osg::TemplateValueObject< short > >::fullName[] = "osg::TemplateValueObject< short >";
const char LunaTraits< osg::TemplateValueObject< short > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< short > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< short > >::hash = 53475946;
const int LunaTraits< osg::TemplateValueObject< short > >::uniqueIDs[] = {53475946,0};

luna_RegType LunaTraits< osg::TemplateValueObject< short > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_short::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_short::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< short > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< short > >::enumValues[] = {
	{0,0}
};


