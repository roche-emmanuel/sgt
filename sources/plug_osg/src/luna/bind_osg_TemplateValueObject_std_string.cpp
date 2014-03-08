#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_std_string {
public:
	typedef Luna< osg::TemplateValueObject< std::string > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,80514588) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< std::string >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< std::string >* rhs =(Luna< osg::TemplateValueObject< std::string > >::check(L,2));
		osg::TemplateValueObject< std::string >* self=(Luna< osg::TemplateValueObject< std::string > >::check(L,1));
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

		osg::TemplateValueObject< std::string >* self=(Luna< osg::TemplateValueObject< std::string > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< std::string >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< std::string >",name);
	}

};

osg::TemplateValueObject< std::string >* LunaTraits< osg::TemplateValueObject< std::string > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< std::string >();
}

void LunaTraits< osg::TemplateValueObject< std::string > >::_bind_dtor(osg::TemplateValueObject< std::string >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< std::string > >::className[] = "osg_TemplateValueObject_std_string";
const char LunaTraits< osg::TemplateValueObject< std::string > >::fullName[] = "osg::TemplateValueObject< std::string >";
const char LunaTraits< osg::TemplateValueObject< std::string > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< std::string > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< std::string > >::hash = 80514588;
const int LunaTraits< osg::TemplateValueObject< std::string > >::uniqueIDs[] = {80514588,0};

luna_RegType LunaTraits< osg::TemplateValueObject< std::string > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_std_string::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_std_string::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< std::string > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< std::string > >::enumValues[] = {
	{0,0}
};


