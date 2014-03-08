#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_fast_back_stack_unsigned_int {
public:
	typedef Luna< osg::fast_back_stack< unsigned int > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4254188) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::fast_back_stack< unsigned int >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::fast_back_stack< unsigned int >* rhs =(Luna< osg::fast_back_stack< unsigned int > >::check(L,2));
		osg::fast_back_stack< unsigned int >* self=(Luna< osg::fast_back_stack< unsigned int > >::check(L,1));
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

		osg::fast_back_stack< unsigned int >* self=(Luna< osg::fast_back_stack< unsigned int > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::fast_back_stack< unsigned int >");
		
		return luna_dynamicCast(L,converters,"osg::fast_back_stack< unsigned int >",name);
	}

};

osg::fast_back_stack< unsigned int >* LunaTraits< osg::fast_back_stack< unsigned int > >::_bind_ctor(lua_State *L) {
	return new osg::fast_back_stack< unsigned int >();
}

void LunaTraits< osg::fast_back_stack< unsigned int > >::_bind_dtor(osg::fast_back_stack< unsigned int >* obj) {
	delete obj;
}

const char LunaTraits< osg::fast_back_stack< unsigned int > >::className[] = "osg_fast_back_stack_unsigned_int";
const char LunaTraits< osg::fast_back_stack< unsigned int > >::fullName[] = "osg::fast_back_stack< unsigned int >";
const char LunaTraits< osg::fast_back_stack< unsigned int > >::moduleName[] = "osg";
const char* LunaTraits< osg::fast_back_stack< unsigned int > >::parents[] = {0};
const int LunaTraits< osg::fast_back_stack< unsigned int > >::hash = 4254188;
const int LunaTraits< osg::fast_back_stack< unsigned int > >::uniqueIDs[] = {4254188,0};

luna_RegType LunaTraits< osg::fast_back_stack< unsigned int > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_fast_back_stack_unsigned_int::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_fast_back_stack_unsigned_int::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::fast_back_stack< unsigned int > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::fast_back_stack< unsigned int > >::enumValues[] = {
	{0,0}
};


