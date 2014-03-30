#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osgUtil_PlaneIntersector_Intersection {
public:
	typedef Luna< std::vector< osgUtil::PlaneIntersector::Intersection > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,22531800) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osgUtil::PlaneIntersector::Intersection >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osgUtil::PlaneIntersector::Intersection >* rhs =(Luna< std::vector< osgUtil::PlaneIntersector::Intersection > >::check(L,2));
		std::vector< osgUtil::PlaneIntersector::Intersection >* self=(Luna< std::vector< osgUtil::PlaneIntersector::Intersection > >::check(L,1));
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

		std::vector< osgUtil::PlaneIntersector::Intersection >* self=(Luna< std::vector< osgUtil::PlaneIntersector::Intersection > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osgUtil::PlaneIntersector::Intersection >");
		
		return luna_dynamicCast(L,converters,"std::vector< osgUtil::PlaneIntersector::Intersection >",name);
	}

};

std::vector< osgUtil::PlaneIntersector::Intersection >* LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::_bind_ctor(lua_State *L) {
	return new std::vector< osgUtil::PlaneIntersector::Intersection >();
}

void LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::_bind_dtor(std::vector< osgUtil::PlaneIntersector::Intersection >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::className[] = "std_vector_osgUtil_PlaneIntersector_Intersection";
const char LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::fullName[] = "std::vector< osgUtil::PlaneIntersector::Intersection >";
const char LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::parents[] = {0};
const int LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::hash = 22531800;
const int LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::uniqueIDs[] = {22531800,0};

luna_RegType LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osgUtil_PlaneIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osgUtil_PlaneIntersector_Intersection::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osgUtil::PlaneIntersector::Intersection > >::enumValues[] = {
	{0,0}
};


