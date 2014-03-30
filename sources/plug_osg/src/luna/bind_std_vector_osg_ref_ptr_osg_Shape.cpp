#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ref_ptr_osg_Shape {
public:
	typedef Luna< std::vector< osg::ref_ptr< osg::Shape > > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37696109) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ref_ptr< osg::Shape > >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ref_ptr< osg::Shape > >* rhs =(Luna< std::vector< osg::ref_ptr< osg::Shape > > >::check(L,2));
		std::vector< osg::ref_ptr< osg::Shape > >* self=(Luna< std::vector< osg::ref_ptr< osg::Shape > > >::check(L,1));
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

		std::vector< osg::ref_ptr< osg::Shape > >* self=(Luna< std::vector< osg::ref_ptr< osg::Shape > > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ref_ptr< osg::Shape > >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ref_ptr< osg::Shape > >",name);
	}

};

std::vector< osg::ref_ptr< osg::Shape > >* LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ref_ptr< osg::Shape > >();
}

void LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::_bind_dtor(std::vector< osg::ref_ptr< osg::Shape > >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::className[] = "std_vector_osg_ref_ptr_osg_Shape";
const char LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::fullName[] = "std::vector< osg::ref_ptr< osg::Shape > >";
const char LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::hash = 37696109;
const int LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::uniqueIDs[] = {37696109,0};

luna_RegType LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ref_ptr_osg_Shape::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ref_ptr_osg_Shape::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ref_ptr< osg::Shape > > >::enumValues[] = {
	{0,0}
};


