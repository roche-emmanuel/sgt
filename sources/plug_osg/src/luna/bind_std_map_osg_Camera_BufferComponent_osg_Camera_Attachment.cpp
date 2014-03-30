#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osg_Camera_BufferComponent_osg_Camera_Attachment {
public:
	typedef Luna< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51751322) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* rhs =(Luna< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::check(L,2));
		std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* self=(Luna< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::check(L,1));
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

		std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* self=(Luna< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >");
		
		return luna_dynamicCast(L,converters,"std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >",name);
	}

};

std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::_bind_ctor(lua_State *L) {
	return new std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >();
}

void LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::_bind_dtor(std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >* obj) {
	delete obj;
}

const char LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::className[] = "std_map_osg_Camera_BufferComponent_osg_Camera_Attachment";
const char LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::fullName[] = "std::map< osg::Camera::BufferComponent, osg::Camera::Attachment >";
const char LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::parents[] = {0};
const int LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::hash = 51751322;
const int LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::uniqueIDs[] = {51751322,0};

luna_RegType LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osg_Camera_BufferComponent_osg_Camera_Attachment::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osg_Camera_BufferComponent_osg_Camera_Attachment::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osg::Camera::BufferComponent, osg::Camera::Attachment > >::enumValues[] = {
	{0,0}
};


