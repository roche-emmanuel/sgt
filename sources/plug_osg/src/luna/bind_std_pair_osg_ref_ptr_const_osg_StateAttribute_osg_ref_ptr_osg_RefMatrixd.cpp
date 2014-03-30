#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_pair_osg_ref_ptr_const_osg_StateAttribute_osg_ref_ptr_osg_RefMatrixd {
public:
	typedef Luna< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59166565) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* rhs =(Luna< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::check(L,2));
		std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* self=(Luna< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::check(L,1));
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

		std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* self=(Luna< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >");
		
		return luna_dynamicCast(L,converters,"std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >",name);
	}

};

std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::_bind_ctor(lua_State *L) {
	return new std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >();
}

void LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::_bind_dtor(std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >* obj) {
	delete obj;
}

const char LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::className[] = "std_pair_osg_ref_ptr_const_osg_StateAttribute_osg_ref_ptr_osg_RefMatrixd";
const char LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::fullName[] = "std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > >";
const char LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::moduleName[] = "osg";
const char* LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::parents[] = {0};
const int LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::hash = 59166565;
const int LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::uniqueIDs[] = {59166565,0};

luna_RegType LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_pair_osg_ref_ptr_const_osg_StateAttribute_osg_ref_ptr_osg_RefMatrixd::_bind_dynCast},
	{"__eq", &luna_wrapper_std_pair_osg_ref_ptr_const_osg_StateAttribute_osg_ref_ptr_osg_RefMatrixd::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::pair< osg::ref_ptr< const osg::StateAttribute >, osg::ref_ptr< osg::RefMatrixd > > >::enumValues[] = {
	{0,0}
};


