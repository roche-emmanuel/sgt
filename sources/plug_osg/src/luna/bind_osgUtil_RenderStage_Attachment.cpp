#include <plug_common.h>

class luna_wrapper_osgUtil_RenderStage_Attachment {
public:
	typedef Luna< osgUtil::RenderStage::Attachment > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25782964) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::RenderStage::Attachment*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderStage::Attachment* rhs =(Luna< osgUtil::RenderStage::Attachment >::check(L,2));
		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::RenderStage::Attachment* self= (osgUtil::RenderStage::Attachment*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::RenderStage::Attachment >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25782964) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
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

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::RenderStage::Attachment");
		
		return luna_dynamicCast(L,converters,"osgUtil::RenderStage::Attachment",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageReadPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImageReadPixelDataType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,15557275) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImageReadPixelFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setImageReadPixelDataType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// osg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image()
	static int _bind_getImage(lua_State *L) {
		if (!_lg_typecheck_getImage(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image() function, expected prototype:\nosg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Image > osgUtil::RenderStage::Attachment::_image(). Got : '%s'\n%s",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Image > lret = self->_image;
		Luna< osg::Image >::push(L,lret.get(),false);

		return 1;
	}

	// unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat()
	static int _bind_getImageReadPixelFormat(lua_State *L) {
		if (!_lg_typecheck_getImageReadPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat() function, expected prototype:\nunsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelFormat(). Got : '%s'\n%s",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_imageReadPixelFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType()
	static int _bind_getImageReadPixelDataType(lua_State *L) {
		if (!_lg_typecheck_getImageReadPixelDataType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType() function, expected prototype:\nunsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::RenderStage::Attachment::_imageReadPixelDataType(). Got : '%s'\n%s",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_imageReadPixelDataType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image > value)
	static int _bind_setImage(lua_State *L) {
		if (!_lg_typecheck_setImage(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image > value) function, expected prototype:\nvoid osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Image > value = dynamic_cast< osg::Image* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::Attachment::_image(osg::ref_ptr< osg::Image >). Got : '%s'\n%s",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_image = value;

		return 0;
	}

	// void osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int value)
	static int _bind_setImageReadPixelFormat(lua_State *L) {
		if (!_lg_typecheck_setImageReadPixelFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int value) function, expected prototype:\nvoid osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::Attachment::_imageReadPixelFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_imageReadPixelFormat = value;

		return 0;
	}

	// void osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int value)
	static int _bind_setImageReadPixelDataType(lua_State *L) {
		if (!_lg_typecheck_setImageReadPixelDataType(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int value) function, expected prototype:\nvoid osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::RenderStage::Attachment* self=(Luna< osgUtil::RenderStage::Attachment >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::RenderStage::Attachment::_imageReadPixelDataType(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::RenderStage::Attachment >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_imageReadPixelDataType = value;

		return 0;
	}


	// Operator binds:

};

osgUtil::RenderStage::Attachment* LunaTraits< osgUtil::RenderStage::Attachment >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::RenderStage::Attachment >::_bind_dtor(osgUtil::RenderStage::Attachment* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::RenderStage::Attachment >::className[] = "RenderStage_Attachment";
const char LunaTraits< osgUtil::RenderStage::Attachment >::fullName[] = "osgUtil::RenderStage::Attachment";
const char LunaTraits< osgUtil::RenderStage::Attachment >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::RenderStage::Attachment >::parents[] = {0};
const int LunaTraits< osgUtil::RenderStage::Attachment >::hash = 25782964;
const int LunaTraits< osgUtil::RenderStage::Attachment >::uniqueIDs[] = {25782964,0};

luna_RegType LunaTraits< osgUtil::RenderStage::Attachment >::methods[] = {
	{"getImage", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_getImage},
	{"getImageReadPixelFormat", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_getImageReadPixelFormat},
	{"getImageReadPixelDataType", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_getImageReadPixelDataType},
	{"setImage", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_setImage},
	{"setImageReadPixelFormat", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_setImageReadPixelFormat},
	{"setImageReadPixelDataType", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_setImageReadPixelDataType},
	{"dynCast", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_RenderStage_Attachment::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::RenderStage::Attachment >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::RenderStage::Attachment >::enumValues[] = {
	{0,0}
};


