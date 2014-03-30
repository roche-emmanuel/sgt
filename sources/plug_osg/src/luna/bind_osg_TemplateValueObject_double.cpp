#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_double {
public:
	typedef Luna< osg::TemplateValueObject< double > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38023804) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< double >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< double >* rhs =(Luna< osg::TemplateValueObject< double > >::check(L,2));
		osg::TemplateValueObject< double >* self=(Luna< osg::TemplateValueObject< double > >::check(L,1));
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

		osg::TemplateValueObject< double >* self=(Luna< osg::TemplateValueObject< double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< double >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< double >",name);
	}

};

osg::TemplateValueObject< double >* LunaTraits< osg::TemplateValueObject< double > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< double >();
}

void LunaTraits< osg::TemplateValueObject< double > >::_bind_dtor(osg::TemplateValueObject< double >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< double > >::className[] = "osg_TemplateValueObject_double";
const char LunaTraits< osg::TemplateValueObject< double > >::fullName[] = "osg::TemplateValueObject< double >";
const char LunaTraits< osg::TemplateValueObject< double > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< double > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< double > >::hash = 38023804;
const int LunaTraits< osg::TemplateValueObject< double > >::uniqueIDs[] = {38023804,0};

luna_RegType LunaTraits< osg::TemplateValueObject< double > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_double::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_double::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< double > >::enumValues[] = {
	{0,0}
};


