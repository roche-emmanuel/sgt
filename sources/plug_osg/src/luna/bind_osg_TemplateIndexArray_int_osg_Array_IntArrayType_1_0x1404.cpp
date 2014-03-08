#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_TemplateIndexArray_int_osg_Array_IntArrayType_1_0x1404 {
public:
	typedef Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77568465) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* rhs =(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::check(L,2));
		osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* self=(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::check(L,1));
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

		osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* self=(Luna< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >");
		
		return luna_dynamicCast(L,converters,"osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >",name);
	}

};

osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::_bind_ctor(lua_State *L) {
	return new osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >();
}

void LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::_bind_dtor(osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >* obj) {
	//Type destructor explicitly removed.
}

const char LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::className[] = "osg_TemplateIndexArray_int_osg_Array_IntArrayType_1_0x1404";
const char LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::fullName[] = "osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 >";
const char LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::moduleName[] = "osg";
const char* LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::parents[] = {0};
const int LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::hash = 77568465;
const int LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::uniqueIDs[] = {77568465,0};

luna_RegType LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_TemplateIndexArray_int_osg_Array_IntArrayType_1_0x1404::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_TemplateIndexArray_int_osg_Array_IntArrayType_1_0x1404::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::TemplateIndexArray< int, osg::Array::IntArrayType, 1, 0x1404 > >::enumValues[] = {
	{0,0}
};


