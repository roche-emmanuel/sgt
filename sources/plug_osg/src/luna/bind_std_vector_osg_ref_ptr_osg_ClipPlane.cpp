#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_osg_ClipPlane {
public:
	typedef Luna< std::vector< osg::ref_ptr< osg::ClipPlane > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53517213) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< osg::ClipPlane > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ref_ptr< osg::ClipPlane > >* rhs =(Luna< std::vector< osg::ref_ptr< osg::ClipPlane > > >::check(L,2));
		std::vector< osg::ref_ptr< osg::ClipPlane > >* self=(Luna< std::vector< osg::ref_ptr< osg::ClipPlane > > >::check(L,1));
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

		std::vector< osg::ref_ptr< osg::ClipPlane > >* self=(Luna< std::vector< osg::ref_ptr< osg::ClipPlane > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< osg::ClipPlane > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< osg::ClipPlane > >",name);
	}

};

std::vector< osg::ref_ptr< osg::ClipPlane > >* LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< osg::ClipPlane > >();
}

void LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::_bind_dtor(std::vector< osg::ref_ptr< osg::ClipPlane > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::className[] = "std_vector_osg_ref_ptr_osg_ClipPlane";
const char LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::fullName[] = "std::vector< osg::ref_ptr< osg::ClipPlane > >";
const char LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::hash = 53517213;
const int LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::uniqueIDs[] = {53517213,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_osg_ClipPlane::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_osg_ClipPlane::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< osg::ClipPlane > > >::enumValues[] = {
	{0,0}
};


