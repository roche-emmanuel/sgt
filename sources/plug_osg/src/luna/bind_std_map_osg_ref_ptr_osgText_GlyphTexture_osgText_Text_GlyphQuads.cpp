#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osg_ref_ptr_osgText_GlyphTexture_osgText_Text_GlyphQuads {
public:
	typedef Luna< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,99215215) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* rhs =(Luna< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::check(L,2));
		std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* self=(Luna< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::check(L,1));
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

		std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* self=(Luna< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >");
		
		return luna_dynamicCast(L,converters,"std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >",name);
	}

};

std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::_bind_ctor(lua_State *L) {
	return new std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >();
}

void LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::_bind_dtor(std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >* obj) {
	delete obj;
}

const char LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::className[] = "std_map_osg_ref_ptr_osgText_GlyphTexture_osgText_Text_GlyphQuads";
const char LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::fullName[] = "std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads >";
const char LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::parents[] = {0};
const int LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::hash = 99215215;
const int LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::uniqueIDs[] = {99215215,0};

luna_RegType LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osg_ref_ptr_osgText_GlyphTexture_osgText_Text_GlyphQuads::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osg_ref_ptr_osgText_GlyphTexture_osgText_Text_GlyphQuads::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osg::ref_ptr< osgText::GlyphTexture >, osgText::Text::GlyphQuads > >::enumValues[] = {
	{0,0}
};


