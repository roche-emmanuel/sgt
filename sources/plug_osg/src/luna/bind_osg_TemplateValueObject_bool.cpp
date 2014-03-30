#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_bool {
public:
	typedef Luna< osg::TemplateValueObject< bool > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18260122) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< bool >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< bool >* rhs =(Luna< osg::TemplateValueObject< bool > >::check(L,2));
		osg::TemplateValueObject< bool >* self=(Luna< osg::TemplateValueObject< bool > >::check(L,1));
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

		osg::TemplateValueObject< bool >* self=(Luna< osg::TemplateValueObject< bool > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< bool >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< bool >",name);
	}

};

osg::TemplateValueObject< bool >* LunaTraits< osg::TemplateValueObject< bool > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< bool >();
}

void LunaTraits< osg::TemplateValueObject< bool > >::_bind_dtor(osg::TemplateValueObject< bool >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< bool > >::className[] = "osg_TemplateValueObject_bool";
const char LunaTraits< osg::TemplateValueObject< bool > >::fullName[] = "osg::TemplateValueObject< bool >";
const char LunaTraits< osg::TemplateValueObject< bool > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< bool > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< bool > >::hash = 18260122;
const int LunaTraits< osg::TemplateValueObject< bool > >::uniqueIDs[] = {18260122,0};

luna_RegType LunaTraits< osg::TemplateValueObject< bool > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_bool::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_bool::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< bool > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< bool > >::enumValues[] = {
	{0,0}
};


