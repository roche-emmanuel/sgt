#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_int_osg_ref_ptr_osgUtil_RenderBin {
public:
	typedef Luna< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85481090) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< int, osg::ref_ptr< osgUtil::RenderBin > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* rhs =(Luna< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::check(L,2));
		std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* self=(Luna< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::check(L,1));
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

		std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* self=(Luna< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< int, osg::ref_ptr< osgUtil::RenderBin > >");
		
		return luna_dynamicCast(L,converters,"std::map< int, osg::ref_ptr< osgUtil::RenderBin > >",name);
	}

};

std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::_bind_ctor(lua_State *L) {
	return new std::map< int, osg::ref_ptr< osgUtil::RenderBin > >();
}

void LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::_bind_dtor(std::map< int, osg::ref_ptr< osgUtil::RenderBin > >* obj) {
	delete obj;
}

const char LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::className[] = "std_map_int_osg_ref_ptr_osgUtil_RenderBin";
const char LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::fullName[] = "std::map< int, osg::ref_ptr< osgUtil::RenderBin > >";
const char LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::moduleName[] = "osg";
const char* LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::parents[] = {0};
const int LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::hash = 85481090;
const int LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::uniqueIDs[] = {85481090,0};

luna_RegType LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_int_osg_ref_ptr_osgUtil_RenderBin::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_int_osg_ref_ptr_osgUtil_RenderBin::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< int, osg::ref_ptr< osgUtil::RenderBin > > >::enumValues[] = {
	{0,0}
};


