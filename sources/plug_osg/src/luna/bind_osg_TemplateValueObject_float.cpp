#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateValueObject_float {
public:
	typedef Luna< osg::TemplateValueObject< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29941919) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateValueObject< float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateValueObject< float >* rhs =(Luna< osg::TemplateValueObject< float > >::check(L,2));
		osg::TemplateValueObject< float >* self=(Luna< osg::TemplateValueObject< float > >::check(L,1));
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

		osg::TemplateValueObject< float >* self=(Luna< osg::TemplateValueObject< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateValueObject< float >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateValueObject< float >",name);
	}

};

osg::TemplateValueObject< float >* LunaTraits< osg::TemplateValueObject< float > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateValueObject< float >();
}

void LunaTraits< osg::TemplateValueObject< float > >::_bind_dtor(osg::TemplateValueObject< float >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateValueObject< float > >::className[] = "osg_TemplateValueObject_float";
const char LunaTraits< osg::TemplateValueObject< float > >::fullName[] = "osg::TemplateValueObject< float >";
const char LunaTraits< osg::TemplateValueObject< float > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateValueObject< float > >::parents[] = {0};
const int LunaTraits< osg::TemplateValueObject< float > >::hash = 29941919;
const int LunaTraits< osg::TemplateValueObject< float > >::uniqueIDs[] = {29941919,0};

luna_RegType LunaTraits< osg::TemplateValueObject< float > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateValueObject_float::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateValueObject_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateValueObject< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateValueObject< float > >::enumValues[] = {
	{0,0}
};


