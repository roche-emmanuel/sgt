#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_std_string_osg_Program_ActiveVarInfo {
public:
	typedef Luna< std::map< std::string, osg::Program::ActiveVarInfo > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32685379) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< std::string, osg::Program::ActiveVarInfo >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< std::string, osg::Program::ActiveVarInfo >* rhs =(Luna< std::map< std::string, osg::Program::ActiveVarInfo > >::check(L,2));
		std::map< std::string, osg::Program::ActiveVarInfo >* self=(Luna< std::map< std::string, osg::Program::ActiveVarInfo > >::check(L,1));
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

		std::map< std::string, osg::Program::ActiveVarInfo >* self=(Luna< std::map< std::string, osg::Program::ActiveVarInfo > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< std::string, osg::Program::ActiveVarInfo >");
		
		return luna_dynamicCast(L,converters,"std::map< std::string, osg::Program::ActiveVarInfo >",name);
	}

};

std::map< std::string, osg::Program::ActiveVarInfo >* LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::_bind_ctor(lua_State *L) {
	return new std::map< std::string, osg::Program::ActiveVarInfo >();
}

void LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::_bind_dtor(std::map< std::string, osg::Program::ActiveVarInfo >* obj) {
	delete obj;
}

const char LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::className[] = "std_map_std_string_osg_Program_ActiveVarInfo";
const char LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::fullName[] = "std::map< std::string, osg::Program::ActiveVarInfo >";
const char LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::moduleName[] = "osg";
const char* LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::parents[] = {0};
const int LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::hash = 32685379;
const int LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::uniqueIDs[] = {32685379,0};

luna_RegType LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_std_string_osg_Program_ActiveVarInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_std_string_osg_Program_ActiveVarInfo::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< std::string, osg::Program::ActiveVarInfo > >::enumValues[] = {
	{0,0}
};


