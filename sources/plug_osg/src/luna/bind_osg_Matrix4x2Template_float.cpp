#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_Matrix4x2Template_float {
public:
	typedef Luna< osg::Matrix4x2Template< float > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,67198576) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Matrix4x2Template< float >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix4x2Template< float >* rhs =(Luna< osg::Matrix4x2Template< float > >::check(L,2));
		osg::Matrix4x2Template< float >* self=(Luna< osg::Matrix4x2Template< float > >::check(L,1));
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

		osg::Matrix4x2Template< float >* self=(Luna< osg::Matrix4x2Template< float > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix4x2Template< float >");
		
		return luna_dynamicCast(L,converters,"osg::Matrix4x2Template< float >",name);
	}

};

osg::Matrix4x2Template< float >* LunaTraits< osg::Matrix4x2Template< float > >::_bind_ctor(lua_State *L) {
	return new osg::Matrix4x2Template< float >();
}

void LunaTraits< osg::Matrix4x2Template< float > >::_bind_dtor(osg::Matrix4x2Template< float >* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix4x2Template< float > >::className[] = "osg_Matrix4x2Template_float";
const char LunaTraits< osg::Matrix4x2Template< float > >::fullName[] = "osg::Matrix4x2Template< float >";
const char LunaTraits< osg::Matrix4x2Template< float > >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix4x2Template< float > >::parents[] = {0};
const int LunaTraits< osg::Matrix4x2Template< float > >::hash = 67198576;
const int LunaTraits< osg::Matrix4x2Template< float > >::uniqueIDs[] = {67198576,0};

luna_RegType LunaTraits< osg::Matrix4x2Template< float > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_Matrix4x2Template_float::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Matrix4x2Template_float::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix4x2Template< float > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix4x2Template< float > >::enumValues[] = {
	{0,0}
};


