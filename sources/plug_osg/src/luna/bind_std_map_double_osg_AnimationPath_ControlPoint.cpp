#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_double_osg_AnimationPath_ControlPoint {
public:
	typedef Luna< std::map< double, osg::AnimationPath::ControlPoint > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75051431) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< double, osg::AnimationPath::ControlPoint >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< double, osg::AnimationPath::ControlPoint >* rhs =(Luna< std::map< double, osg::AnimationPath::ControlPoint > >::check(L,2));
		std::map< double, osg::AnimationPath::ControlPoint >* self=(Luna< std::map< double, osg::AnimationPath::ControlPoint > >::check(L,1));
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

		std::map< double, osg::AnimationPath::ControlPoint >* self=(Luna< std::map< double, osg::AnimationPath::ControlPoint > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< double, osg::AnimationPath::ControlPoint >");
		
		return luna_dynamicCast(L,converters,"std::map< double, osg::AnimationPath::ControlPoint >",name);
	}

};

std::map< double, osg::AnimationPath::ControlPoint >* LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::_bind_ctor(lua_State *L) {
	return new std::map< double, osg::AnimationPath::ControlPoint >();
}

void LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::_bind_dtor(std::map< double, osg::AnimationPath::ControlPoint >* obj) {
	delete obj;
}

const char LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::className[] = "std_map_double_osg_AnimationPath_ControlPoint";
const char LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::fullName[] = "std::map< double, osg::AnimationPath::ControlPoint >";
const char LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::moduleName[] = "osg";
const char* LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::parents[] = {0};
const int LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::hash = 75051431;
const int LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::uniqueIDs[] = {75051431,0};

luna_RegType LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_double_osg_AnimationPath_ControlPoint::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_double_osg_AnimationPath_ControlPoint::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< double, osg::AnimationPath::ControlPoint > >::enumValues[] = {
	{0,0}
};


