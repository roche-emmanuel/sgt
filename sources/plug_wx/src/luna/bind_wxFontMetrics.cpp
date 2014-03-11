#include <plug_common.h>

class luna_wrapper_wxFontMetrics {
public:
	typedef Luna< wxFontMetrics > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63990346) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFontMetrics*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxFontMetrics* rhs =(Luna< wxFontMetrics >::check(L,2));
		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
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

		wxFontMetrics* self= (wxFontMetrics*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFontMetrics >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,63990346) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxFontMetrics >::check(L,1));
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

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFontMetrics");
		
		return luna_dynamicCast(L,converters,"wxFontMetrics",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAscent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getInternalLeading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getExternalLeading(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAverageWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAscent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDescent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setInternalLeading(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExternalLeading(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAverageWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFontMetrics::wxFontMetrics()
	static wxFontMetrics* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxFontMetrics::wxFontMetrics() function, expected prototype:\nwxFontMetrics::wxFontMetrics()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFontMetrics();
	}


	// Function binds:
	// int wxFontMetrics::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxFontMetrics::height() function, expected prototype:\nint wxFontMetrics::height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFontMetrics::height(). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontMetrics::ascent()
	static int _bind_getAscent(lua_State *L) {
		if (!_lg_typecheck_getAscent(L)) {
			luaL_error(L, "luna typecheck failed in int wxFontMetrics::ascent() function, expected prototype:\nint wxFontMetrics::ascent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFontMetrics::ascent(). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ascent;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontMetrics::descent()
	static int _bind_getDescent(lua_State *L) {
		if (!_lg_typecheck_getDescent(L)) {
			luaL_error(L, "luna typecheck failed in int wxFontMetrics::descent() function, expected prototype:\nint wxFontMetrics::descent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFontMetrics::descent(). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->descent;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontMetrics::internalLeading()
	static int _bind_getInternalLeading(lua_State *L) {
		if (!_lg_typecheck_getInternalLeading(L)) {
			luaL_error(L, "luna typecheck failed in int wxFontMetrics::internalLeading() function, expected prototype:\nint wxFontMetrics::internalLeading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFontMetrics::internalLeading(). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->internalLeading;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontMetrics::externalLeading()
	static int _bind_getExternalLeading(lua_State *L) {
		if (!_lg_typecheck_getExternalLeading(L)) {
			luaL_error(L, "luna typecheck failed in int wxFontMetrics::externalLeading() function, expected prototype:\nint wxFontMetrics::externalLeading()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFontMetrics::externalLeading(). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->externalLeading;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFontMetrics::averageWidth()
	static int _bind_getAverageWidth(lua_State *L) {
		if (!_lg_typecheck_getAverageWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxFontMetrics::averageWidth() function, expected prototype:\nint wxFontMetrics::averageWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFontMetrics::averageWidth(). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->averageWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFontMetrics::height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontMetrics::height(int value) function, expected prototype:\nvoid wxFontMetrics::height(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontMetrics::height(int). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->height = value;

		return 0;
	}

	// void wxFontMetrics::ascent(int value)
	static int _bind_setAscent(lua_State *L) {
		if (!_lg_typecheck_setAscent(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontMetrics::ascent(int value) function, expected prototype:\nvoid wxFontMetrics::ascent(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontMetrics::ascent(int). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ascent = value;

		return 0;
	}

	// void wxFontMetrics::descent(int value)
	static int _bind_setDescent(lua_State *L) {
		if (!_lg_typecheck_setDescent(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontMetrics::descent(int value) function, expected prototype:\nvoid wxFontMetrics::descent(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontMetrics::descent(int). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->descent = value;

		return 0;
	}

	// void wxFontMetrics::internalLeading(int value)
	static int _bind_setInternalLeading(lua_State *L) {
		if (!_lg_typecheck_setInternalLeading(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontMetrics::internalLeading(int value) function, expected prototype:\nvoid wxFontMetrics::internalLeading(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontMetrics::internalLeading(int). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->internalLeading = value;

		return 0;
	}

	// void wxFontMetrics::externalLeading(int value)
	static int _bind_setExternalLeading(lua_State *L) {
		if (!_lg_typecheck_setExternalLeading(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontMetrics::externalLeading(int value) function, expected prototype:\nvoid wxFontMetrics::externalLeading(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontMetrics::externalLeading(int). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->externalLeading = value;

		return 0;
	}

	// void wxFontMetrics::averageWidth(int value)
	static int _bind_setAverageWidth(lua_State *L) {
		if (!_lg_typecheck_setAverageWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontMetrics::averageWidth(int value) function, expected prototype:\nvoid wxFontMetrics::averageWidth(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxFontMetrics* self=(Luna< wxFontMetrics >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontMetrics::averageWidth(int). Got : '%s'\n%s",typeid(Luna< wxFontMetrics >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->averageWidth = value;

		return 0;
	}


	// Operator binds:

};

wxFontMetrics* LunaTraits< wxFontMetrics >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontMetrics::_bind_ctor(L);
}

void LunaTraits< wxFontMetrics >::_bind_dtor(wxFontMetrics* obj) {
	delete obj;
}

const char LunaTraits< wxFontMetrics >::className[] = "wxFontMetrics";
const char LunaTraits< wxFontMetrics >::fullName[] = "wxFontMetrics";
const char LunaTraits< wxFontMetrics >::moduleName[] = "wx";
const char* LunaTraits< wxFontMetrics >::parents[] = {0};
const int LunaTraits< wxFontMetrics >::hash = 63990346;
const int LunaTraits< wxFontMetrics >::uniqueIDs[] = {63990346,0};

luna_RegType LunaTraits< wxFontMetrics >::methods[] = {
	{"getHeight", &luna_wrapper_wxFontMetrics::_bind_getHeight},
	{"getAscent", &luna_wrapper_wxFontMetrics::_bind_getAscent},
	{"getDescent", &luna_wrapper_wxFontMetrics::_bind_getDescent},
	{"getInternalLeading", &luna_wrapper_wxFontMetrics::_bind_getInternalLeading},
	{"getExternalLeading", &luna_wrapper_wxFontMetrics::_bind_getExternalLeading},
	{"getAverageWidth", &luna_wrapper_wxFontMetrics::_bind_getAverageWidth},
	{"setHeight", &luna_wrapper_wxFontMetrics::_bind_setHeight},
	{"setAscent", &luna_wrapper_wxFontMetrics::_bind_setAscent},
	{"setDescent", &luna_wrapper_wxFontMetrics::_bind_setDescent},
	{"setInternalLeading", &luna_wrapper_wxFontMetrics::_bind_setInternalLeading},
	{"setExternalLeading", &luna_wrapper_wxFontMetrics::_bind_setExternalLeading},
	{"setAverageWidth", &luna_wrapper_wxFontMetrics::_bind_setAverageWidth},
	{"dynCast", &luna_wrapper_wxFontMetrics::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFontMetrics::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFontMetrics::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFontMetrics::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontMetrics >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontMetrics >::enumValues[] = {
	{0,0}
};


