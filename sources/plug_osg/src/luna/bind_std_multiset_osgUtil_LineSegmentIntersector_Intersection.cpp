#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_multiset_osgUtil_LineSegmentIntersector_Intersection {
public:
	typedef Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9645394) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::multiset< osgUtil::LineSegmentIntersector::Intersection >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::multiset< osgUtil::LineSegmentIntersector::Intersection >* rhs =(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::check(L,2));
		std::multiset< osgUtil::LineSegmentIntersector::Intersection >* self=(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::check(L,1));
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

		std::multiset< osgUtil::LineSegmentIntersector::Intersection >* self=(Luna< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::multiset< osgUtil::LineSegmentIntersector::Intersection >");
		
		return luna_dynamicCast(L,converters,"std::multiset< osgUtil::LineSegmentIntersector::Intersection >",name);
	}

};

std::multiset< osgUtil::LineSegmentIntersector::Intersection >* LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::_bind_ctor(lua_State *L) {
	return new std::multiset< osgUtil::LineSegmentIntersector::Intersection >();
}

void LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::_bind_dtor(std::multiset< osgUtil::LineSegmentIntersector::Intersection >* obj) {
	delete obj;
}

const char LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::className[] = "std_multiset_osgUtil_LineSegmentIntersector_Intersection";
const char LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::fullName[] = "std::multiset< osgUtil::LineSegmentIntersector::Intersection >";
const char LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::moduleName[] = "osg";
const char* LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::parents[] = {0};
const int LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::hash = 9645394;
const int LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::uniqueIDs[] = {9645394,0};

luna_RegType LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::methods[] = {
	{"dynCast", &luna_wrapper_std_multiset_osgUtil_LineSegmentIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_std_multiset_osgUtil_LineSegmentIntersector_Intersection::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::multiset< osgUtil::LineSegmentIntersector::Intersection > >::enumValues[] = {
	{0,0}
};


