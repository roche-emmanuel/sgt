#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osg_GraphicsContext_ptr_osgUtil_IncrementalCompileOperation_CompileList {
public:
	typedef Luna< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4029618) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* rhs =(Luna< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::check(L,2));
		std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* self=(Luna< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::check(L,1));
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

		std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* self=(Luna< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >");
		
		return luna_dynamicCast(L,converters,"std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >",name);
	}

};

std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::_bind_ctor(lua_State *L) {
	return new std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >();
}

void LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::_bind_dtor(std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >* obj) {
	delete obj;
}

const char LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::className[] = "std_map_osg_GraphicsContext_ptr_osgUtil_IncrementalCompileOperation_CompileList";
const char LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::fullName[] = "std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList >";
const char LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::parents[] = {0};
const int LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::hash = 4029618;
const int LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::uniqueIDs[] = {4029618,0};

luna_RegType LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osg_GraphicsContext_ptr_osgUtil_IncrementalCompileOperation_CompileList::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osg_GraphicsContext_ptr_osgUtil_IncrementalCompileOperation_CompileList::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osg::GraphicsContext *, osgUtil::IncrementalCompileOperation::CompileList > >::enumValues[] = {
	{0,0}
};


