#include <plug_common.h>

class luna_wrapper_wxImage_HSVValue {
public:
	typedef Luna< wxImage::HSVValue > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41631892) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxImage::HSVValue*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxImage::HSVValue* rhs =(Luna< wxImage::HSVValue >::check(L,2));
		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
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

		wxImage::HSVValue* self= (wxImage::HSVValue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxImage::HSVValue >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41631892) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxImage::HSVValue >::check(L,1));
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

		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxImage::HSVValue");
		
		return luna_dynamicCast(L,converters,"wxImage::HSVValue",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSaturation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setHue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSaturation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxImage::HSVValue::HSVValue(double h = 0.0, double s = 0.0, double v = 0.0)
	static wxImage::HSVValue* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxImage::HSVValue::HSVValue(double h = 0.0, double s = 0.0, double v = 0.0) function, expected prototype:\nwxImage::HSVValue::HSVValue(double h = 0.0, double s = 0.0, double v = 0.0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double h=luatop>0 ? (double)lua_tonumber(L,1) : (double)0.0;
		double s=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.0;
		double v=luatop>2 ? (double)lua_tonumber(L,3) : (double)0.0;

		return new wxImage::HSVValue(h, s, v);
	}


	// Function binds:
	// double wxImage::HSVValue::hue()
	static int _bind_getHue(lua_State *L) {
		if (!_lg_typecheck_getHue(L)) {
			luaL_error(L, "luna typecheck failed in double wxImage::HSVValue::hue() function, expected prototype:\ndouble wxImage::HSVValue::hue()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxImage::HSVValue::hue(). Got : '%s'\n%s",typeid(Luna< wxImage::HSVValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->hue;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxImage::HSVValue::saturation()
	static int _bind_getSaturation(lua_State *L) {
		if (!_lg_typecheck_getSaturation(L)) {
			luaL_error(L, "luna typecheck failed in double wxImage::HSVValue::saturation() function, expected prototype:\ndouble wxImage::HSVValue::saturation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxImage::HSVValue::saturation(). Got : '%s'\n%s",typeid(Luna< wxImage::HSVValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->saturation;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double wxImage::HSVValue::value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in double wxImage::HSVValue::value() function, expected prototype:\ndouble wxImage::HSVValue::value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double wxImage::HSVValue::value(). Got : '%s'\n%s",typeid(Luna< wxImage::HSVValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxImage::HSVValue::hue(double value)
	static int _bind_setHue(lua_State *L) {
		if (!_lg_typecheck_setHue(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::HSVValue::hue(double value) function, expected prototype:\nvoid wxImage::HSVValue::hue(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::HSVValue::hue(double). Got : '%s'\n%s",typeid(Luna< wxImage::HSVValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hue = value;

		return 0;
	}

	// void wxImage::HSVValue::saturation(double value)
	static int _bind_setSaturation(lua_State *L) {
		if (!_lg_typecheck_setSaturation(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::HSVValue::saturation(double value) function, expected prototype:\nvoid wxImage::HSVValue::saturation(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::HSVValue::saturation(double). Got : '%s'\n%s",typeid(Luna< wxImage::HSVValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->saturation = value;

		return 0;
	}

	// void wxImage::HSVValue::value(double value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxImage::HSVValue::value(double value) function, expected prototype:\nvoid wxImage::HSVValue::value(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		wxImage::HSVValue* self=(Luna< wxImage::HSVValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxImage::HSVValue::value(double). Got : '%s'\n%s",typeid(Luna< wxImage::HSVValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->value = value;

		return 0;
	}


	// Operator binds:

};

wxImage::HSVValue* LunaTraits< wxImage::HSVValue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxImage_HSVValue::_bind_ctor(L);
}

void LunaTraits< wxImage::HSVValue >::_bind_dtor(wxImage::HSVValue* obj) {
	delete obj;
}

const char LunaTraits< wxImage::HSVValue >::className[] = "wxImage_HSVValue";
const char LunaTraits< wxImage::HSVValue >::fullName[] = "wxImage::HSVValue";
const char LunaTraits< wxImage::HSVValue >::moduleName[] = "wx";
const char* LunaTraits< wxImage::HSVValue >::parents[] = {0};
const int LunaTraits< wxImage::HSVValue >::hash = 41631892;
const int LunaTraits< wxImage::HSVValue >::uniqueIDs[] = {41631892,0};

luna_RegType LunaTraits< wxImage::HSVValue >::methods[] = {
	{"getHue", &luna_wrapper_wxImage_HSVValue::_bind_getHue},
	{"getSaturation", &luna_wrapper_wxImage_HSVValue::_bind_getSaturation},
	{"getValue", &luna_wrapper_wxImage_HSVValue::_bind_getValue},
	{"setHue", &luna_wrapper_wxImage_HSVValue::_bind_setHue},
	{"setSaturation", &luna_wrapper_wxImage_HSVValue::_bind_setSaturation},
	{"setValue", &luna_wrapper_wxImage_HSVValue::_bind_setValue},
	{"dynCast", &luna_wrapper_wxImage_HSVValue::_bind_dynCast},
	{"__eq", &luna_wrapper_wxImage_HSVValue::_bind___eq},
	{"fromVoid", &luna_wrapper_wxImage_HSVValue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxImage_HSVValue::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxImage::HSVValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxImage::HSVValue >::enumValues[] = {
	{0,0}
};


