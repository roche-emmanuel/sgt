#include <plug_common.h>

class luna_wrapper_osgDB_ImageOptions_PixelWindow {
public:
	typedef Luna< osgDB::ImageOptions::PixelWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68659525) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ImageOptions::PixelWindow*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::PixelWindow* rhs =(Luna< osgDB::ImageOptions::PixelWindow >::check(L,2));
		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
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

		osgDB::ImageOptions::PixelWindow* self= (osgDB::ImageOptions::PixelWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ImageOptions::PixelWindow >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68659525) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
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

		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ImageOptions::PixelWindow");
		
		return luna_dynamicCast(L,converters,"osgDB::ImageOptions::PixelWindow",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWindowX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWindowX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageOptions::PixelWindow::PixelWindow()
	static osgDB::ImageOptions::PixelWindow* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::PixelWindow::PixelWindow() function, expected prototype:\nosgDB::ImageOptions::PixelWindow::PixelWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ImageOptions::PixelWindow();
	}


	// Function binds:
	// void osgDB::ImageOptions::PixelWindow::set(unsigned int x, unsigned int y, unsigned int w, unsigned int h)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::PixelWindow::set(unsigned int x, unsigned int y, unsigned int w, unsigned int h) function, expected prototype:\nvoid osgDB::ImageOptions::PixelWindow::set(unsigned int x, unsigned int y, unsigned int w, unsigned int h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int x=(unsigned int)lua_tointeger(L,2);
		unsigned int y=(unsigned int)lua_tointeger(L,3);
		unsigned int w=(unsigned int)lua_tointeger(L,4);
		unsigned int h=(unsigned int)lua_tointeger(L,5);

		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::PixelWindow::set(unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, w, h);

		return 0;
	}

	// unsigned int osgDB::ImageOptions::PixelWindow::windowX()
	static int _bind_getWindowX(lua_State *L) {
		if (!_lg_typecheck_getWindowX(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ImageOptions::PixelWindow::windowX() function, expected prototype:\nunsigned int osgDB::ImageOptions::PixelWindow::windowX()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ImageOptions::PixelWindow::windowX(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->windowX;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::ImageOptions::PixelWindow::windowY()
	static int _bind_getWindowY(lua_State *L) {
		if (!_lg_typecheck_getWindowY(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ImageOptions::PixelWindow::windowY() function, expected prototype:\nunsigned int osgDB::ImageOptions::PixelWindow::windowY()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ImageOptions::PixelWindow::windowY(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->windowY;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::ImageOptions::PixelWindow::windowWidth()
	static int _bind_getWindowWidth(lua_State *L) {
		if (!_lg_typecheck_getWindowWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ImageOptions::PixelWindow::windowWidth() function, expected prototype:\nunsigned int osgDB::ImageOptions::PixelWindow::windowWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ImageOptions::PixelWindow::windowWidth(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->windowWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::ImageOptions::PixelWindow::windowHeight()
	static int _bind_getWindowHeight(lua_State *L) {
		if (!_lg_typecheck_getWindowHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ImageOptions::PixelWindow::windowHeight() function, expected prototype:\nunsigned int osgDB::ImageOptions::PixelWindow::windowHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ImageOptions::PixelWindow::windowHeight(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->windowHeight;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ImageOptions::PixelWindow::windowX(unsigned int value)
	static int _bind_setWindowX(lua_State *L) {
		if (!_lg_typecheck_setWindowX(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::PixelWindow::windowX(unsigned int value) function, expected prototype:\nvoid osgDB::ImageOptions::PixelWindow::windowX(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::PixelWindow::windowX(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowX = value;

		return 0;
	}

	// void osgDB::ImageOptions::PixelWindow::windowY(unsigned int value)
	static int _bind_setWindowY(lua_State *L) {
		if (!_lg_typecheck_setWindowY(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::PixelWindow::windowY(unsigned int value) function, expected prototype:\nvoid osgDB::ImageOptions::PixelWindow::windowY(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::PixelWindow::windowY(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowY = value;

		return 0;
	}

	// void osgDB::ImageOptions::PixelWindow::windowWidth(unsigned int value)
	static int _bind_setWindowWidth(lua_State *L) {
		if (!_lg_typecheck_setWindowWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::PixelWindow::windowWidth(unsigned int value) function, expected prototype:\nvoid osgDB::ImageOptions::PixelWindow::windowWidth(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::PixelWindow::windowWidth(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowWidth = value;

		return 0;
	}

	// void osgDB::ImageOptions::PixelWindow::windowHeight(unsigned int value)
	static int _bind_setWindowHeight(lua_State *L) {
		if (!_lg_typecheck_setWindowHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::PixelWindow::windowHeight(unsigned int value) function, expected prototype:\nvoid osgDB::ImageOptions::PixelWindow::windowHeight(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ImageOptions::PixelWindow* self=(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::PixelWindow::windowHeight(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::PixelWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowHeight = value;

		return 0;
	}


	// Operator binds:

};

osgDB::ImageOptions::PixelWindow* LunaTraits< osgDB::ImageOptions::PixelWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageOptions::PixelWindow >::_bind_dtor(osgDB::ImageOptions::PixelWindow* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ImageOptions::PixelWindow >::className[] = "ImageOptions_PixelWindow";
const char LunaTraits< osgDB::ImageOptions::PixelWindow >::fullName[] = "osgDB::ImageOptions::PixelWindow";
const char LunaTraits< osgDB::ImageOptions::PixelWindow >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions::PixelWindow >::parents[] = {0};
const int LunaTraits< osgDB::ImageOptions::PixelWindow >::hash = 68659525;
const int LunaTraits< osgDB::ImageOptions::PixelWindow >::uniqueIDs[] = {68659525,0};

luna_RegType LunaTraits< osgDB::ImageOptions::PixelWindow >::methods[] = {
	{"set", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_set},
	{"getWindowX", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_getWindowX},
	{"getWindowY", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_getWindowY},
	{"getWindowWidth", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_getWindowWidth},
	{"getWindowHeight", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_getWindowHeight},
	{"setWindowX", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_setWindowX},
	{"setWindowY", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_setWindowY},
	{"setWindowWidth", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_setWindowWidth},
	{"setWindowHeight", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_setWindowHeight},
	{"dynCast", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ImageOptions_PixelWindow::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions::PixelWindow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions::PixelWindow >::enumValues[] = {
	{0,0}
};


