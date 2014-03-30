#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateIndexArray_signed_char_osg_Array_ByteArrayType_1_GL_BYTE {
public:
	typedef Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46527738) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* rhs =(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::check(L,2));
		osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* self=(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::check(L,1));
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

		osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* self=(Luna< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >",name);
	}

};

osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >();
}

void LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::_bind_dtor(osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::className[] = "osg_TemplateIndexArray_signed_char_osg_Array_ByteArrayType_1_GL_BYTE";
const char LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::fullName[] = "osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE >";
const char LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::parents[] = {0};
const int LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::hash = 46527738;
const int LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::uniqueIDs[] = {46527738,0};

luna_RegType LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateIndexArray_signed_char_osg_Array_ByteArrayType_1_GL_BYTE::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateIndexArray_signed_char_osg_Array_ByteArrayType_1_GL_BYTE::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateIndexArray< signed char, osg::Array::ByteArrayType, 1, GL_BYTE > >::enumValues[] = {
	{0,0}
};


