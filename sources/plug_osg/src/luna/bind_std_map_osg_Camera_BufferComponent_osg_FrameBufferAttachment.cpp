#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_map_osg_Camera_BufferComponent_osg_FrameBufferAttachment {
public:
	typedef Luna< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,33736258) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* rhs =(Luna< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::check(L,2));
		std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* self=(Luna< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::check(L,1));
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

		std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* self=(Luna< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >");
		
		return luna_dynamicCast(L,converters,"std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >",name);
	}

};

std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::_bind_ctor(lua_State *L) {
	return new std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >();
}

void LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::_bind_dtor(std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >* obj) {
	delete obj;
}

const char LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::className[] = "std_map_osg_Camera_BufferComponent_osg_FrameBufferAttachment";
const char LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::fullName[] = "std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment >";
const char LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::moduleName[] = "osg";
const char* LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::parents[] = {0};
const int LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::hash = 33736258;
const int LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::uniqueIDs[] = {33736258,0};

luna_RegType LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::methods[] = {
	{"dynCast", &luna_wrapper_std_map_osg_Camera_BufferComponent_osg_FrameBufferAttachment::_bind_dynCast},
	{"__eq", &luna_wrapper_std_map_osg_Camera_BufferComponent_osg_FrameBufferAttachment::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::map< osg::Camera::BufferComponent, osg::FrameBufferAttachment > >::enumValues[] = {
	{0,0}
};


