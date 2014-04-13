#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_osg_BoundingBox {
public:
	typedef Luna< osg::BoundingBox > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51056292) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::BoundingBox*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::BoundingBox* rhs =(Luna< osg::BoundingBox >::check(L,2));
		osg::BoundingBox* self=(Luna< osg::BoundingBox >::check(L,1));
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

		osg::BoundingBox* self=(Luna< osg::BoundingBox >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::BoundingBox");
		
		return luna_dynamicCast(L,converters,"osg::BoundingBox",name);
	}

};

osg::BoundingBox* LunaTraits< osg::BoundingBox >::_bind_ctor(lua_State *L) {
	return new osg::BoundingBox();
}

void LunaTraits< osg::BoundingBox >::_bind_dtor(osg::BoundingBox* obj) {
	delete obj;
}

const char LunaTraits< osg::BoundingBox >::className[] = "osg_BoundingBox";
const char LunaTraits< osg::BoundingBox >::fullName[] = "osg::BoundingBox";
const char LunaTraits< osg::BoundingBox >::moduleName[] = "land";
const char* LunaTraits< osg::BoundingBox >::parents[] = {0};
const int LunaTraits< osg::BoundingBox >::hash = 51056292;
const int LunaTraits< osg::BoundingBox >::uniqueIDs[] = {51056292,0};

luna_RegType LunaTraits< osg::BoundingBox >::methods[] = {
	{"dynCast", &luna_wrapper_osg_BoundingBox::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_BoundingBox::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< osg::BoundingBox >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::BoundingBox >::enumValues[] = {
	{0,0}
};


