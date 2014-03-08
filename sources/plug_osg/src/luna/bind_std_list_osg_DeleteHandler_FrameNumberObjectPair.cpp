#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_list_osg_DeleteHandler_FrameNumberObjectPair {
public:
	typedef Luna< std::list< osg::DeleteHandler::FrameNumberObjectPair > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79657515) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::list< osg::DeleteHandler::FrameNumberObjectPair >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::list< osg::DeleteHandler::FrameNumberObjectPair >* rhs =(Luna< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::check(L,2));
		std::list< osg::DeleteHandler::FrameNumberObjectPair >* self=(Luna< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::check(L,1));
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

		std::list< osg::DeleteHandler::FrameNumberObjectPair >* self=(Luna< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::list< osg::DeleteHandler::FrameNumberObjectPair >");
		
		return luna_dynamicCast(L,converters,"std::list< osg::DeleteHandler::FrameNumberObjectPair >",name);
	}

};

std::list< osg::DeleteHandler::FrameNumberObjectPair >* LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::_bind_ctor(lua_State *L) {
	return new std::list< osg::DeleteHandler::FrameNumberObjectPair >();
}

void LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::_bind_dtor(std::list< osg::DeleteHandler::FrameNumberObjectPair >* obj) {
	delete obj;
}

const char LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::className[] = "std_list_osg_DeleteHandler_FrameNumberObjectPair";
const char LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::fullName[] = "std::list< osg::DeleteHandler::FrameNumberObjectPair >";
const char LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::moduleName[] = "osg";
const char* LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::parents[] = {0};
const int LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::hash = 79657515;
const int LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::uniqueIDs[] = {79657515,0};

luna_RegType LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::methods[] = {
	{"dynCast", &luna_wrapper_std_list_osg_DeleteHandler_FrameNumberObjectPair::_bind_dynCast},
	{"__eq", &luna_wrapper_std_list_osg_DeleteHandler_FrameNumberObjectPair::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::list< osg::DeleteHandler::FrameNumberObjectPair > >::enumValues[] = {
	{0,0}
};


