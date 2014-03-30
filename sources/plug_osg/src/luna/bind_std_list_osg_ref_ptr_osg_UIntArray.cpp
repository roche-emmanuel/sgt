#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_ref_ptr_osg_UIntArray {
public:
	typedef Luna< std::list< osg::ref_ptr< osg::UIntArray > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,91716752) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::ref_ptr< osg::UIntArray > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osg::ref_ptr< osg::UIntArray > >* rhs =(Luna< std::list< osg::ref_ptr< osg::UIntArray > > >::check(L,2));
		std::list< osg::ref_ptr< osg::UIntArray > >* self=(Luna< std::list< osg::ref_ptr< osg::UIntArray > > >::check(L,1));
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

		std::list< osg::ref_ptr< osg::UIntArray > >* self=(Luna< std::list< osg::ref_ptr< osg::UIntArray > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::ref_ptr< osg::UIntArray > >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::ref_ptr< osg::UIntArray > >",name);
	}

};

std::list< osg::ref_ptr< osg::UIntArray > >* LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::_bind_ctor(lua_State *L) {
	return new std::list< osg::ref_ptr< osg::UIntArray > >();
}

void LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::_bind_dtor(std::list< osg::ref_ptr< osg::UIntArray > >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::className[] = "std_list_osg_ref_ptr_osg_UIntArray";
const char LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::fullName[] = "std::list< osg::ref_ptr< osg::UIntArray > >";
const char LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::parents[] = {0};
const int LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::hash = 91716752;
const int LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::uniqueIDs[] = {91716752,0};

luna_RegType LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_ref_ptr_osg_UIntArray::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_ref_ptr_osg_UIntArray::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::ref_ptr< osg::UIntArray > > >::enumValues[] = {
	{0,0}
};


