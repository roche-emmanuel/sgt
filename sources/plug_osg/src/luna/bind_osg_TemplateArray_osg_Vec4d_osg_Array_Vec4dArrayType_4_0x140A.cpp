#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateArray_osg_Vec4d_osg_Array_Vec4dArrayType_4_0x140A {
public:
	typedef Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21777619) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* rhs =(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::check(L,2));
		osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* self=(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::check(L,1));
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

		osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* self=(Luna< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >",name);
	}

};

osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >();
}

void LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::_bind_dtor(osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::className[] = "osg_TemplateArray_osg_Vec4d_osg_Array_Vec4dArrayType_4_0x140A";
const char LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::fullName[] = "osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A >";
const char LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::parents[] = {0};
const int LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::hash = 21777619;
const int LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::uniqueIDs[] = {21777619,0};

luna_RegType LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateArray_osg_Vec4d_osg_Array_Vec4dArrayType_4_0x140A::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateArray_osg_Vec4d_osg_Array_Vec4dArrayType_4_0x140A::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateArray< osg::Vec4d, osg::Array::Vec4dArrayType, 4, 0x140A > >::enumValues[] = {
	{0,0}
};


