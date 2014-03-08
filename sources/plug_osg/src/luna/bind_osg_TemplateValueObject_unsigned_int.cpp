#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_unsigned_int {
public:
	typedef Luna< osg::TemplateValueObject< unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84880641) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< unsigned int >* rhs =(Luna< osg::TemplateValueObject< unsigned int > >::check(L,2));
		osg::TemplateValueObject< unsigned int >* self=(Luna< osg::TemplateValueObject< unsigned int > >::check(L,1));
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

		osg::TemplateValueObject< unsigned int >* self=(Luna< osg::TemplateValueObject< unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< unsigned int >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< unsigned int >",name);
	}

};

osg::TemplateValueObject< unsigned int >* LunaTraits< osg::TemplateValueObject< unsigned int > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< unsigned int >();
}

void LunaTraits< osg::TemplateValueObject< unsigned int > >::_bind_dtor(osg::TemplateValueObject< unsigned int >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< unsigned int > >::className[] = "osg_TemplateValueObject_unsigned_int";
const char LunaTraits< osg::TemplateValueObject< unsigned int > >::fullName[] = "osg::TemplateValueObject< unsigned int >";
const char LunaTraits< osg::TemplateValueObject< unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< unsigned int > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< unsigned int > >::hash = 84880641;
const int LunaTraits< osg::TemplateValueObject< unsigned int > >::uniqueIDs[] = {84880641,0};

luna_RegType LunaTraits< osg::TemplateValueObject< unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< unsigned int > >::enumValues[] = {
	{0,0}
};


