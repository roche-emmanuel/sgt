#include <plug_common.h>

class luna_wrapper_osgDB_ImageOptions_RatioWindow {
public:
	typedef Luna< osgDB::ImageOptions::RatioWindow > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44466488) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ImageOptions::RatioWindow*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImageOptions::RatioWindow* rhs =(Luna< osgDB::ImageOptions::RatioWindow >::check(L,2));
		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
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

		osgDB::ImageOptions::RatioWindow* self= (osgDB::ImageOptions::RatioWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ImageOptions::RatioWindow >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44466488) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
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

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ImageOptions::RatioWindow");
		
		return luna_dynamicCast(L,converters,"osgDB::ImageOptions::RatioWindow",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
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

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ImageOptions::RatioWindow::RatioWindow()
	static osgDB::ImageOptions::RatioWindow* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImageOptions::RatioWindow::RatioWindow() function, expected prototype:\nosgDB::ImageOptions::RatioWindow::RatioWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ImageOptions::RatioWindow();
	}


	// Function binds:
	// void osgDB::ImageOptions::RatioWindow::set(double x, double y, double w, double h)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::RatioWindow::set(double x, double y, double w, double h) function, expected prototype:\nvoid osgDB::ImageOptions::RatioWindow::set(double x, double y, double w, double h)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		double w=(double)lua_tonumber(L,4);
		double h=(double)lua_tonumber(L,5);

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::RatioWindow::set(double, double, double, double). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(x, y, w, h);

		return 0;
	}

	// double osgDB::ImageOptions::RatioWindow::windowX()
	static int _bind_getWindowX(lua_State *L) {
		if (!_lg_typecheck_getWindowX(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::RatioWindow::windowX() function, expected prototype:\ndouble osgDB::ImageOptions::RatioWindow::windowX()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::RatioWindow::windowX(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->windowX;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::ImageOptions::RatioWindow::windowY()
	static int _bind_getWindowY(lua_State *L) {
		if (!_lg_typecheck_getWindowY(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::RatioWindow::windowY() function, expected prototype:\ndouble osgDB::ImageOptions::RatioWindow::windowY()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::RatioWindow::windowY(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->windowY;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::ImageOptions::RatioWindow::windowWidth()
	static int _bind_getWindowWidth(lua_State *L) {
		if (!_lg_typecheck_getWindowWidth(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::RatioWindow::windowWidth() function, expected prototype:\ndouble osgDB::ImageOptions::RatioWindow::windowWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::RatioWindow::windowWidth(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->windowWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osgDB::ImageOptions::RatioWindow::windowHeight()
	static int _bind_getWindowHeight(lua_State *L) {
		if (!_lg_typecheck_getWindowHeight(L)) {
			luaL_error(L, "luna typecheck failed in double osgDB::ImageOptions::RatioWindow::windowHeight() function, expected prototype:\ndouble osgDB::ImageOptions::RatioWindow::windowHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgDB::ImageOptions::RatioWindow::windowHeight(). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->windowHeight;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ImageOptions::RatioWindow::windowX(double value)
	static int _bind_setWindowX(lua_State *L) {
		if (!_lg_typecheck_setWindowX(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::RatioWindow::windowX(double value) function, expected prototype:\nvoid osgDB::ImageOptions::RatioWindow::windowX(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::RatioWindow::windowX(double). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowX = value;

		return 0;
	}

	// void osgDB::ImageOptions::RatioWindow::windowY(double value)
	static int _bind_setWindowY(lua_State *L) {
		if (!_lg_typecheck_setWindowY(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::RatioWindow::windowY(double value) function, expected prototype:\nvoid osgDB::ImageOptions::RatioWindow::windowY(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::RatioWindow::windowY(double). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowY = value;

		return 0;
	}

	// void osgDB::ImageOptions::RatioWindow::windowWidth(double value)
	static int _bind_setWindowWidth(lua_State *L) {
		if (!_lg_typecheck_setWindowWidth(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::RatioWindow::windowWidth(double value) function, expected prototype:\nvoid osgDB::ImageOptions::RatioWindow::windowWidth(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::RatioWindow::windowWidth(double). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowWidth = value;

		return 0;
	}

	// void osgDB::ImageOptions::RatioWindow::windowHeight(double value)
	static int _bind_setWindowHeight(lua_State *L) {
		if (!_lg_typecheck_setWindowHeight(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ImageOptions::RatioWindow::windowHeight(double value) function, expected prototype:\nvoid osgDB::ImageOptions::RatioWindow::windowHeight(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osgDB::ImageOptions::RatioWindow* self=(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ImageOptions::RatioWindow::windowHeight(double). Got : '%s'\n%s",typeid(Luna< osgDB::ImageOptions::RatioWindow >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->windowHeight = value;

		return 0;
	}


	// Operator binds:

};

osgDB::ImageOptions::RatioWindow* LunaTraits< osgDB::ImageOptions::RatioWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_ctor(L);
}

void LunaTraits< osgDB::ImageOptions::RatioWindow >::_bind_dtor(osgDB::ImageOptions::RatioWindow* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ImageOptions::RatioWindow >::className[] = "ImageOptions_RatioWindow";
const char LunaTraits< osgDB::ImageOptions::RatioWindow >::fullName[] = "osgDB::ImageOptions::RatioWindow";
const char LunaTraits< osgDB::ImageOptions::RatioWindow >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ImageOptions::RatioWindow >::parents[] = {0};
const int LunaTraits< osgDB::ImageOptions::RatioWindow >::hash = 44466488;
const int LunaTraits< osgDB::ImageOptions::RatioWindow >::uniqueIDs[] = {44466488,0};

luna_RegType LunaTraits< osgDB::ImageOptions::RatioWindow >::methods[] = {
	{"set", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_set},
	{"getWindowX", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_getWindowX},
	{"getWindowY", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_getWindowY},
	{"getWindowWidth", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_getWindowWidth},
	{"getWindowHeight", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_getWindowHeight},
	{"setWindowX", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_setWindowX},
	{"setWindowY", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_setWindowY},
	{"setWindowWidth", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_setWindowWidth},
	{"setWindowHeight", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_setWindowHeight},
	{"dynCast", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ImageOptions_RatioWindow::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ImageOptions::RatioWindow >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ImageOptions::RatioWindow >::enumValues[] = {
	{0,0}
};


