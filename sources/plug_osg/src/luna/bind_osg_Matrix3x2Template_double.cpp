#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_Matrix3x2Template_double {
public:
	typedef Luna< osg::Matrix3x2Template< double > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9703245) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Matrix3x2Template< double >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3x2Template< double >* rhs =(Luna< osg::Matrix3x2Template< double > >::check(L,2));
		osg::Matrix3x2Template< double >* self=(Luna< osg::Matrix3x2Template< double > >::check(L,1));
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

		osg::Matrix3x2Template< double >* self=(Luna< osg::Matrix3x2Template< double > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix3x2Template< double >");
		
		return luna_dynamicCast(L,converters,"osg::Matrix3x2Template< double >",name);
	}

};

osg::Matrix3x2Template< double >* LunaTraits< osg::Matrix3x2Template< double > >::_bind_ctor(lua_State *L) {
	return new osg::Matrix3x2Template< double >();
}

void LunaTraits< osg::Matrix3x2Template< double > >::_bind_dtor(osg::Matrix3x2Template< double >* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix3x2Template< double > >::className[] = "osg_Matrix3x2Template_double";
const char LunaTraits< osg::Matrix3x2Template< double > >::fullName[] = "osg::Matrix3x2Template< double >";
const char LunaTraits< osg::Matrix3x2Template< double > >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix3x2Template< double > >::parents[] = {0};
const int LunaTraits< osg::Matrix3x2Template< double > >::hash = 9703245;
const int LunaTraits< osg::Matrix3x2Template< double > >::uniqueIDs[] = {9703245,0};

luna_RegType LunaTraits< osg::Matrix3x2Template< double > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Matrix3x2Template_double::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Matrix3x2Template_double::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix3x2Template< double > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix3x2Template< double > >::enumValues[] = {
	{0,0}
};


