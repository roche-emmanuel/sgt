#include <plug_common.h>

class luna_wrapper_osg_Texture_TextureProfile {
public:
	typedef Luna< osg::Texture::TextureProfile > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture::TextureProfile* self= (osg::Texture::TextureProfile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Texture::TextureProfile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69361645) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Texture::TextureProfile >::check(L,1));
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

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Texture::TextureProfile");
		
		return luna_dynamicCast(L,converters,"osg::Texture::TextureProfile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_match(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumMipmapLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInternalFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBorder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,69361645) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Texture::TextureProfile::TextureProfile(unsigned int target)
	static osg::Texture::TextureProfile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureProfile::TextureProfile(unsigned int target) function, expected prototype:\nosg::Texture::TextureProfile::TextureProfile(unsigned int target)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);

		return new osg::Texture::TextureProfile(target);
	}

	// osg::Texture::TextureProfile::TextureProfile(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static osg::Texture::TextureProfile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Texture::TextureProfile::TextureProfile(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nosg::Texture::TextureProfile::TextureProfile(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,1);
		int numMipmapLevels=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);

		return new osg::Texture::TextureProfile(target, numMipmapLevels, internalFormat, width, height, depth, border);
	}

	// Overload binder for osg::Texture::TextureProfile::TextureProfile
	static osg::Texture::TextureProfile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureProfile, cannot match any of the overloads for function TextureProfile:\n  TextureProfile(unsigned int)\n  TextureProfile(unsigned int, int, unsigned int, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Texture::TextureProfile::set(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::set(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nvoid osg::Texture::TextureProfile::set(int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int numMipmapLevels=(int)lua_tointeger(L,2);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int depth=(int)lua_tointeger(L,6);
		int border=(int)lua_tointeger(L,7);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::set(int, unsigned int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(numMipmapLevels, internalFormat, width, height, depth, border);

		return 0;
	}

	// bool osg::Texture::TextureProfile::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)
	static int _bind_match(lua_State *L) {
		if (!_lg_typecheck_match(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureProfile::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border) function, expected prototype:\nbool osg::Texture::TextureProfile::match(unsigned int target, int numMipmapLevels, unsigned int internalFormat, int width, int height, int depth, int border)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int target=(unsigned int)lua_tointeger(L,2);
		int numMipmapLevels=(int)lua_tointeger(L,3);
		unsigned int internalFormat=(unsigned int)lua_tointeger(L,4);
		int width=(int)lua_tointeger(L,5);
		int height=(int)lua_tointeger(L,6);
		int depth=(int)lua_tointeger(L,7);
		int border=(int)lua_tointeger(L,8);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureProfile::match(unsigned int, int, unsigned int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->match(target, numMipmapLevels, internalFormat, width, height, depth, border);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osg::Texture::TextureProfile::computeSize()
	static int _bind_computeSize(lua_State *L) {
		if (!_lg_typecheck_computeSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::computeSize() function, expected prototype:\nvoid osg::Texture::TextureProfile::computeSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::computeSize(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->computeSize();

		return 0;
	}

	// unsigned int osg::Texture::TextureProfile::_target()
	static int _bind_getTarget(lua_State *L) {
		if (!_lg_typecheck_getTarget(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureProfile::_target() function, expected prototype:\nunsigned int osg::Texture::TextureProfile::_target()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureProfile::_target(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_target;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_numMipmapLevels()
	static int _bind_getNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_getNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_numMipmapLevels() function, expected prototype:\nint osg::Texture::TextureProfile::_numMipmapLevels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_numMipmapLevels(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_numMipmapLevels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureProfile::_internalFormat()
	static int _bind_getInternalFormat(lua_State *L) {
		if (!_lg_typecheck_getInternalFormat(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureProfile::_internalFormat() function, expected prototype:\nunsigned int osg::Texture::TextureProfile::_internalFormat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureProfile::_internalFormat(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_internalFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_width() function, expected prototype:\nint osg::Texture::TextureProfile::_width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_width(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_height() function, expected prototype:\nint osg::Texture::TextureProfile::_height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_height(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_depth()
	static int _bind_getDepth(lua_State *L) {
		if (!_lg_typecheck_getDepth(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_depth() function, expected prototype:\nint osg::Texture::TextureProfile::_depth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_depth(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_depth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Texture::TextureProfile::_border()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Texture::TextureProfile::_border() function, expected prototype:\nint osg::Texture::TextureProfile::_border()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Texture::TextureProfile::_border(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_border;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Texture::TextureProfile::_size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Texture::TextureProfile::_size() function, expected prototype:\nunsigned int osg::Texture::TextureProfile::_size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Texture::TextureProfile::_size(). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Texture::TextureProfile::_target(unsigned int value)
	static int _bind_setTarget(lua_State *L) {
		if (!_lg_typecheck_setTarget(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_target(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_target(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_target(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_target = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_numMipmapLevels(int value)
	static int _bind_setNumMipmapLevels(lua_State *L) {
		if (!_lg_typecheck_setNumMipmapLevels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_numMipmapLevels(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_numMipmapLevels(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_numMipmapLevels(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numMipmapLevels = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_internalFormat(unsigned int value)
	static int _bind_setInternalFormat(lua_State *L) {
		if (!_lg_typecheck_setInternalFormat(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_internalFormat(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_internalFormat(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_internalFormat(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_internalFormat = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_width(int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_width(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_width(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_width(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_width = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_height(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_height(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_height(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_height = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_depth(int value)
	static int _bind_setDepth(lua_State *L) {
		if (!_lg_typecheck_setDepth(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_depth(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_depth(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_depth(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_depth = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_border(int value)
	static int _bind_setBorder(lua_State *L) {
		if (!_lg_typecheck_setBorder(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_border(int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_border(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_border(int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_border = value;

		return 0;
	}

	// void osg::Texture::TextureProfile::_size(unsigned int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Texture::TextureProfile::_size(unsigned int value) function, expected prototype:\nvoid osg::Texture::TextureProfile::_size(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Texture::TextureProfile::_size(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:
	// bool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile & rhs) const function, expected prototype:\nbool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile & rhs) const\nClass arguments details:\narg 1 ID = 69361645\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture::TextureProfile* rhs_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture::TextureProfile::operator< function");
		}
		const osg::Texture::TextureProfile & rhs=*rhs_ptr;

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureProfile::operator<(const osg::Texture::TextureProfile &) const. Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile & rhs) const function, expected prototype:\nbool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile & rhs) const\nClass arguments details:\narg 1 ID = 69361645\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Texture::TextureProfile* rhs_ptr=(Luna< osg::Texture::TextureProfile >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Texture::TextureProfile::operator== function");
		}
		const osg::Texture::TextureProfile & rhs=*rhs_ptr;

		osg::Texture::TextureProfile* self=(Luna< osg::Texture::TextureProfile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::Texture::TextureProfile::operator==(const osg::Texture::TextureProfile &) const. Got : '%s'\n%s",typeid(Luna< osg::Texture::TextureProfile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::Texture::TextureProfile* LunaTraits< osg::Texture::TextureProfile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Texture_TextureProfile::_bind_ctor(L);
}

void LunaTraits< osg::Texture::TextureProfile >::_bind_dtor(osg::Texture::TextureProfile* obj) {
	delete obj;
}

const char LunaTraits< osg::Texture::TextureProfile >::className[] = "Texture_TextureProfile";
const char LunaTraits< osg::Texture::TextureProfile >::fullName[] = "osg::Texture::TextureProfile";
const char LunaTraits< osg::Texture::TextureProfile >::moduleName[] = "osg";
const char* LunaTraits< osg::Texture::TextureProfile >::parents[] = {0};
const int LunaTraits< osg::Texture::TextureProfile >::hash = 69361645;
const int LunaTraits< osg::Texture::TextureProfile >::uniqueIDs[] = {69361645,0};

luna_RegType LunaTraits< osg::Texture::TextureProfile >::methods[] = {
	{"set", &luna_wrapper_osg_Texture_TextureProfile::_bind_set},
	{"match", &luna_wrapper_osg_Texture_TextureProfile::_bind_match},
	{"computeSize", &luna_wrapper_osg_Texture_TextureProfile::_bind_computeSize},
	{"getTarget", &luna_wrapper_osg_Texture_TextureProfile::_bind_getTarget},
	{"getNumMipmapLevels", &luna_wrapper_osg_Texture_TextureProfile::_bind_getNumMipmapLevels},
	{"getInternalFormat", &luna_wrapper_osg_Texture_TextureProfile::_bind_getInternalFormat},
	{"getWidth", &luna_wrapper_osg_Texture_TextureProfile::_bind_getWidth},
	{"getHeight", &luna_wrapper_osg_Texture_TextureProfile::_bind_getHeight},
	{"getDepth", &luna_wrapper_osg_Texture_TextureProfile::_bind_getDepth},
	{"getBorder", &luna_wrapper_osg_Texture_TextureProfile::_bind_getBorder},
	{"getSize", &luna_wrapper_osg_Texture_TextureProfile::_bind_getSize},
	{"setTarget", &luna_wrapper_osg_Texture_TextureProfile::_bind_setTarget},
	{"setNumMipmapLevels", &luna_wrapper_osg_Texture_TextureProfile::_bind_setNumMipmapLevels},
	{"setInternalFormat", &luna_wrapper_osg_Texture_TextureProfile::_bind_setInternalFormat},
	{"setWidth", &luna_wrapper_osg_Texture_TextureProfile::_bind_setWidth},
	{"setHeight", &luna_wrapper_osg_Texture_TextureProfile::_bind_setHeight},
	{"setDepth", &luna_wrapper_osg_Texture_TextureProfile::_bind_setDepth},
	{"setBorder", &luna_wrapper_osg_Texture_TextureProfile::_bind_setBorder},
	{"setSize", &luna_wrapper_osg_Texture_TextureProfile::_bind_setSize},
	{"__lt", &luna_wrapper_osg_Texture_TextureProfile::_bind___lt},
	{"__eq", &luna_wrapper_osg_Texture_TextureProfile::_bind___eq},
	{"dynCast", &luna_wrapper_osg_Texture_TextureProfile::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Texture_TextureProfile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Texture_TextureProfile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Texture::TextureProfile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Texture::TextureProfile >::enumValues[] = {
	{0,0}
};


