#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateArray_osg_Matrixf_osg_Array_MatrixArrayType_16_GL_FLOAT {
public:
	typedef Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76760649) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* rhs =(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::check(L,2));
		osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* self=(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::check(L,1));
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

		osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* self=(Luna< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >",name);
	}

};

osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >();
}

void LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::_bind_dtor(osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::className[] = "osg_TemplateArray_osg_Matrixf_osg_Array_MatrixArrayType_16_GL_FLOAT";
const char LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::fullName[] = "osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT >";
const char LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::parents[] = {0};
const int LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::hash = 76760649;
const int LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::uniqueIDs[] = {76760649,0};

luna_RegType LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateArray_osg_Matrixf_osg_Array_MatrixArrayType_16_GL_FLOAT::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateArray_osg_Matrixf_osg_Array_MatrixArrayType_16_GL_FLOAT::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateArray< osg::Matrixf, osg::Array::MatrixArrayType, 16, GL_FLOAT > >::enumValues[] = {
	{0,0}
};


