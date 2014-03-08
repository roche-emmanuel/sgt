#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_osg_Program_UniformBlockInfo {
public:
	typedef Luna< std::map< std::string, osg::Program::UniformBlockInfo > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8358127) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, osg::Program::UniformBlockInfo >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< std::string, osg::Program::UniformBlockInfo >* rhs =(Luna< std::map< std::string, osg::Program::UniformBlockInfo > >::check(L,2));
		std::map< std::string, osg::Program::UniformBlockInfo >* self=(Luna< std::map< std::string, osg::Program::UniformBlockInfo > >::check(L,1));
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

		std::map< std::string, osg::Program::UniformBlockInfo >* self=(Luna< std::map< std::string, osg::Program::UniformBlockInfo > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, osg::Program::UniformBlockInfo >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, osg::Program::UniformBlockInfo >",name);
	}

};

std::map< std::string, osg::Program::UniformBlockInfo >* LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::_bind_ctor(lua_State *L) {
	return new std::map< std::string, osg::Program::UniformBlockInfo >();
}

void LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::_bind_dtor(std::map< std::string, osg::Program::UniformBlockInfo >* obj) {
	delete obj;
}

const char LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::className[] = "std_map_std_string_osg_Program_UniformBlockInfo";
const char LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::fullName[] = "std::map< std::string, osg::Program::UniformBlockInfo >";
const char LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::moduleName[] = "osg";
const char* LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::parents[] = {0};
const int LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::hash = 8358127;
const int LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::uniqueIDs[] = {8358127,0};

luna_RegType LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_osg_Program_UniformBlockInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_osg_Program_UniformBlockInfo::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, osg::Program::UniformBlockInfo > >::enumValues[] = {
	{0,0}
};


