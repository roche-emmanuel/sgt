#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_ref_ptr_osg_Operation {
public:
	typedef Luna< std::list< osg::ref_ptr< osg::Operation > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67665559) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::ref_ptr< osg::Operation > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osg::ref_ptr< osg::Operation > >* rhs =(Luna< std::list< osg::ref_ptr< osg::Operation > > >::check(L,2));
		std::list< osg::ref_ptr< osg::Operation > >* self=(Luna< std::list< osg::ref_ptr< osg::Operation > > >::check(L,1));
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

		std::list< osg::ref_ptr< osg::Operation > >* self=(Luna< std::list< osg::ref_ptr< osg::Operation > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::ref_ptr< osg::Operation > >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::ref_ptr< osg::Operation > >",name);
	}

};

std::list< osg::ref_ptr< osg::Operation > >* LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::_bind_ctor(lua_State *L) {
	return new std::list< osg::ref_ptr< osg::Operation > >();
}

void LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::_bind_dtor(std::list< osg::ref_ptr< osg::Operation > >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::className[] = "std_list_osg_ref_ptr_osg_Operation";
const char LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::fullName[] = "std::list< osg::ref_ptr< osg::Operation > >";
const char LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::parents[] = {0};
const int LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::hash = 67665559;
const int LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::uniqueIDs[] = {67665559,0};

luna_RegType LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_ref_ptr_osg_Operation::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_ref_ptr_osg_Operation::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::ref_ptr< osg::Operation > > >::enumValues[] = {
	{0,0}
};


