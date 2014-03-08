#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_osg_Plane {
public:
	typedef Luna< osg::TemplateValueObject< osg::Plane > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,60958792) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< osg::Plane >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< osg::Plane >* rhs =(Luna< osg::TemplateValueObject< osg::Plane > >::check(L,2));
		osg::TemplateValueObject< osg::Plane >* self=(Luna< osg::TemplateValueObject< osg::Plane > >::check(L,1));
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

		osg::TemplateValueObject< osg::Plane >* self=(Luna< osg::TemplateValueObject< osg::Plane > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< osg::Plane >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< osg::Plane >",name);
	}

};

osg::TemplateValueObject< osg::Plane >* LunaTraits< osg::TemplateValueObject< osg::Plane > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< osg::Plane >();
}

void LunaTraits< osg::TemplateValueObject< osg::Plane > >::_bind_dtor(osg::TemplateValueObject< osg::Plane >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< osg::Plane > >::className[] = "osg_TemplateValueObject_osg_Plane";
const char LunaTraits< osg::TemplateValueObject< osg::Plane > >::fullName[] = "osg::TemplateValueObject< osg::Plane >";
const char LunaTraits< osg::TemplateValueObject< osg::Plane > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< osg::Plane > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< osg::Plane > >::hash = 60958792;
const int LunaTraits< osg::TemplateValueObject< osg::Plane > >::uniqueIDs[] = {60958792,0};

luna_RegType LunaTraits< osg::TemplateValueObject< osg::Plane > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_osg_Plane::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_osg_Plane::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< osg::Plane > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< osg::Plane > >::enumValues[] = {
	{0,0}
};


