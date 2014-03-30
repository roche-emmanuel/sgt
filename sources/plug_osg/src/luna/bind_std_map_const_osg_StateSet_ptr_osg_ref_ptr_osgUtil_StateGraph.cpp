#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_const_osg_StateSet_ptr_osg_ref_ptr_osgUtil_StateGraph {
public:
	typedef Luna< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4476781) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* rhs =(Luna< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::check(L,2));
		std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* self=(Luna< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::check(L,1));
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

		std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* self=(Luna< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >");
		
		return luna_dynamicCast(L,converters,"std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >",name);
	}

};

std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::_bind_ctor(lua_State *L) {
	return new std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >();
}

void LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::_bind_dtor(std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >* obj) {
	delete obj;
}

const char LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::className[] = "std_map_const_osg_StateSet_ptr_osg_ref_ptr_osgUtil_StateGraph";
const char LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::fullName[] = "std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > >";
const char LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::moduleName[] = "osg";
const char* LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::parents[] = {0};
const int LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::hash = 4476781;
const int LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::uniqueIDs[] = {4476781,0};

luna_RegType LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_const_osg_StateSet_ptr_osg_ref_ptr_osgUtil_StateGraph::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_const_osg_StateSet_ptr_osg_ref_ptr_osgUtil_StateGraph::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< const osg::StateSet *, osg::ref_ptr< osgUtil::StateGraph > > >::enumValues[] = {
	{0,0}
};


