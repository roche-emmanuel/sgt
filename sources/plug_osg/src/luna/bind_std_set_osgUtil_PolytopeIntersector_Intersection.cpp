#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_set_osgUtil_PolytopeIntersector_Intersection {
public:
	typedef Luna< std::set< osgUtil::PolytopeIntersector::Intersection > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94863276) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::set< osgUtil::PolytopeIntersector::Intersection >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::set< osgUtil::PolytopeIntersector::Intersection >* rhs =(Luna< std::set< osgUtil::PolytopeIntersector::Intersection > >::check(L,2));
		std::set< osgUtil::PolytopeIntersector::Intersection >* self=(Luna< std::set< osgUtil::PolytopeIntersector::Intersection > >::check(L,1));
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

		std::set< osgUtil::PolytopeIntersector::Intersection >* self=(Luna< std::set< osgUtil::PolytopeIntersector::Intersection > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::set< osgUtil::PolytopeIntersector::Intersection >");
		
		return luna_dynamicCast(L,converters,"std::set< osgUtil::PolytopeIntersector::Intersection >",name);
	}

};

std::set< osgUtil::PolytopeIntersector::Intersection >* LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::_bind_ctor(lua_State *L) {
	return new std::set< osgUtil::PolytopeIntersector::Intersection >();
}

void LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::_bind_dtor(std::set< osgUtil::PolytopeIntersector::Intersection >* obj) {
	delete obj;
}

const char LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::className[] = "std_set_osgUtil_PolytopeIntersector_Intersection";
const char LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::fullName[] = "std::set< osgUtil::PolytopeIntersector::Intersection >";
const char LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::moduleName[] = "osg";
const char* LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::parents[] = {0};
const int LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::hash = 94863276;
const int LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::uniqueIDs[] = {94863276,0};

luna_RegType LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::methods[] = {
	{"dynCast", &luna_wrapper_std_set_osgUtil_PolytopeIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_std_set_osgUtil_PolytopeIntersector_Intersection::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::set< osgUtil::PolytopeIntersector::Intersection > >::enumValues[] = {
	{0,0}
};


