#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_BoundingSphereImpl_osg_Vec3f {
public:
	typedef Luna< osg::BoundingSphereImpl< osg::Vec3f > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65872657) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::BoundingSphereImpl< osg::Vec3f >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::BoundingSphereImpl< osg::Vec3f >* rhs =(Luna< osg::BoundingSphereImpl< osg::Vec3f > >::check(L,2));
		osg::BoundingSphereImpl< osg::Vec3f >* self=(Luna< osg::BoundingSphereImpl< osg::Vec3f > >::check(L,1));
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

		osg::BoundingSphereImpl< osg::Vec3f >* self=(Luna< osg::BoundingSphereImpl< osg::Vec3f > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoundingSphereImpl< osg::Vec3f >");
		
		return luna_dynamicCast(L,converters,"osg::BoundingSphereImpl< osg::Vec3f >",name);
	}

};

osg::BoundingSphereImpl< osg::Vec3f >* LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::_bind_ctor(lua_State *L) {
	return new osg::BoundingSphereImpl< osg::Vec3f >();
}

void LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::_bind_dtor(osg::BoundingSphereImpl< osg::Vec3f >* obj) {
	delete obj;
}

const char LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::className[] = "osg_BoundingSphereImpl_osg_Vec3f";
const char LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::fullName[] = "osg::BoundingSphereImpl< osg::Vec3f >";
const char LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::moduleName[] = "osg";
const char* LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::parents[] = {0};
const int LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::hash = 65872657;
const int LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::uniqueIDs[] = {65872657,0};

luna_RegType LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoundingSphereImpl_osg_Vec3f::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_BoundingSphereImpl_osg_Vec3f::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoundingSphereImpl< osg::Vec3f > >::enumValues[] = {
	{0,0}
};


