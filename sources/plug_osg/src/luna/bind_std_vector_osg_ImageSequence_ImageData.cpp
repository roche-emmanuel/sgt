#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_osg_ImageSequence_ImageData {
public:
	typedef Luna< std::vector< osg::ImageSequence::ImageData > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72499659) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< osg::ImageSequence::ImageData >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< osg::ImageSequence::ImageData >* rhs =(Luna< std::vector< osg::ImageSequence::ImageData > >::check(L,2));
		std::vector< osg::ImageSequence::ImageData >* self=(Luna< std::vector< osg::ImageSequence::ImageData > >::check(L,1));
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

		std::vector< osg::ImageSequence::ImageData >* self=(Luna< std::vector< osg::ImageSequence::ImageData > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< osg::ImageSequence::ImageData >");
		
		return luna_dynamicCast(L,converters,"std::vector< osg::ImageSequence::ImageData >",name);
	}

};

std::vector< osg::ImageSequence::ImageData >* LunaTraits< std::vector< osg::ImageSequence::ImageData > >::_bind_ctor(lua_State *L) {
	return new std::vector< osg::ImageSequence::ImageData >();
}

void LunaTraits< std::vector< osg::ImageSequence::ImageData > >::_bind_dtor(std::vector< osg::ImageSequence::ImageData >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< osg::ImageSequence::ImageData > >::className[] = "std_vector_osg_ImageSequence_ImageData";
const char LunaTraits< std::vector< osg::ImageSequence::ImageData > >::fullName[] = "std::vector< osg::ImageSequence::ImageData >";
const char LunaTraits< std::vector< osg::ImageSequence::ImageData > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< osg::ImageSequence::ImageData > >::parents[] = {0};
const int LunaTraits< std::vector< osg::ImageSequence::ImageData > >::hash = 72499659;
const int LunaTraits< std::vector< osg::ImageSequence::ImageData > >::uniqueIDs[] = {72499659,0};

luna_RegType LunaTraits< std::vector< osg::ImageSequence::ImageData > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_osg_ImageSequence_ImageData::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_osg_ImageSequence_ImageData::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< osg::ImageSequence::ImageData > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< osg::ImageSequence::ImageData > >::enumValues[] = {
	{0,0}
};


