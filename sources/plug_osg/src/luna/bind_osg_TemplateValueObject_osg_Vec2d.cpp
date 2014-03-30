#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_osg_Vec2d {
public:
	typedef Luna< osg::TemplateValueObject< osg::Vec2d > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85633535) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< osg::Vec2d >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< osg::Vec2d >* rhs =(Luna< osg::TemplateValueObject< osg::Vec2d > >::check(L,2));
		osg::TemplateValueObject< osg::Vec2d >* self=(Luna< osg::TemplateValueObject< osg::Vec2d > >::check(L,1));
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

		osg::TemplateValueObject< osg::Vec2d >* self=(Luna< osg::TemplateValueObject< osg::Vec2d > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< osg::Vec2d >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< osg::Vec2d >",name);
	}

};

osg::TemplateValueObject< osg::Vec2d >* LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< osg::Vec2d >();
}

void LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::_bind_dtor(osg::TemplateValueObject< osg::Vec2d >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::className[] = "osg_TemplateValueObject_osg_Vec2d";
const char LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::fullName[] = "osg::TemplateValueObject< osg::Vec2d >";
const char LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::hash = 85633535;
const int LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::uniqueIDs[] = {85633535,0};

luna_RegType LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_osg_Vec2d::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_osg_Vec2d::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< osg::Vec2d > >::enumValues[] = {
	{0,0}
};


