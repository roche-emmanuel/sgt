#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateIndexArray_unsigned_int_osg_Array_UIntArrayType_1_0x1405 {
public:
	typedef Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14674410) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* rhs =(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::check(L,2));
		osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* self=(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::check(L,1));
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

		osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* self=(Luna< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >",name);
	}

};

osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >();
}

void LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::_bind_dtor(osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::className[] = "osg_TemplateIndexArray_unsigned_int_osg_Array_UIntArrayType_1_0x1405";
const char LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::fullName[] = "osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 >";
const char LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::parents[] = {0};
const int LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::hash = 14674410;
const int LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::uniqueIDs[] = {14674410,0};

luna_RegType LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateIndexArray_unsigned_int_osg_Array_UIntArrayType_1_0x1405::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateIndexArray_unsigned_int_osg_Array_UIntArrayType_1_0x1405::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateIndexArray< unsigned int, osg::Array::UIntArrayType, 1, 0x1405 > >::enumValues[] = {
	{0,0}
};


