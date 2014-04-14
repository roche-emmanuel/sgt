#include <plug_common.h>

class luna_wrapper_proland_TextureLayer_BlendParams {
public:
	typedef Luna< proland::TextureLayer::BlendParams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11252811) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TextureLayer::BlendParams*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TextureLayer::BlendParams* rhs =(Luna< proland::TextureLayer::BlendParams >::check(L,2));
		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
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

		proland::TextureLayer::BlendParams* self= (proland::TextureLayer::BlendParams*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TextureLayer::BlendParams >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11252811) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TextureLayer::BlendParams >::check(L,1));
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

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TextureLayer::BlendParams");
		
		return luna_dynamicCast(L,converters,"proland::TextureLayer::BlendParams",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRgb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSrgb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrgb(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAlpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSalpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDalpha(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRgb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSrgb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrgb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAlpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSalpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDalpha(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TextureLayer::BlendParams::BlendParams()
	static proland::TextureLayer::BlendParams* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TextureLayer::BlendParams::BlendParams() function, expected prototype:\nproland::TextureLayer::BlendParams::BlendParams()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::TextureLayer::BlendParams();
	}


	// Function binds:
	// ork::BufferId proland::TextureLayer::BlendParams::buffer()
	static int _bind_getBuffer(lua_State *L) {
		if (!_lg_typecheck_getBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::BufferId proland::TextureLayer::BlendParams::buffer() function, expected prototype:\nork::BufferId proland::TextureLayer::BlendParams::buffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BufferId proland::TextureLayer::BlendParams::buffer(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BufferId lret = self->buffer;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendEquation proland::TextureLayer::BlendParams::rgb()
	static int _bind_getRgb(lua_State *L) {
		if (!_lg_typecheck_getRgb(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendEquation proland::TextureLayer::BlendParams::rgb() function, expected prototype:\nork::BlendEquation proland::TextureLayer::BlendParams::rgb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendEquation proland::TextureLayer::BlendParams::rgb(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendEquation lret = self->rgb;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::TextureLayer::BlendParams::srgb()
	static int _bind_getSrgb(lua_State *L) {
		if (!_lg_typecheck_getSrgb(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::TextureLayer::BlendParams::srgb() function, expected prototype:\nork::BlendArgument proland::TextureLayer::BlendParams::srgb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::TextureLayer::BlendParams::srgb(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->srgb;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::TextureLayer::BlendParams::drgb()
	static int _bind_getDrgb(lua_State *L) {
		if (!_lg_typecheck_getDrgb(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::TextureLayer::BlendParams::drgb() function, expected prototype:\nork::BlendArgument proland::TextureLayer::BlendParams::drgb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::TextureLayer::BlendParams::drgb(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->drgb;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendEquation proland::TextureLayer::BlendParams::alpha()
	static int _bind_getAlpha(lua_State *L) {
		if (!_lg_typecheck_getAlpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendEquation proland::TextureLayer::BlendParams::alpha() function, expected prototype:\nork::BlendEquation proland::TextureLayer::BlendParams::alpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendEquation proland::TextureLayer::BlendParams::alpha(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendEquation lret = self->alpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::TextureLayer::BlendParams::salpha()
	static int _bind_getSalpha(lua_State *L) {
		if (!_lg_typecheck_getSalpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::TextureLayer::BlendParams::salpha() function, expected prototype:\nork::BlendArgument proland::TextureLayer::BlendParams::salpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::TextureLayer::BlendParams::salpha(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->salpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::TextureLayer::BlendParams::dalpha()
	static int _bind_getDalpha(lua_State *L) {
		if (!_lg_typecheck_getDalpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::TextureLayer::BlendParams::dalpha() function, expected prototype:\nork::BlendArgument proland::TextureLayer::BlendParams::dalpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::TextureLayer::BlendParams::dalpha(). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->dalpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TextureLayer::BlendParams::buffer(ork::BufferId value)
	static int _bind_setBuffer(lua_State *L) {
		if (!_lg_typecheck_setBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::buffer(ork::BufferId value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::buffer(ork::BufferId value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId value=(ork::BufferId)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::buffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buffer = value;

		return 0;
	}

	// void proland::TextureLayer::BlendParams::rgb(ork::BlendEquation value)
	static int _bind_setRgb(lua_State *L) {
		if (!_lg_typecheck_setRgb(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::rgb(ork::BlendEquation value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::rgb(ork::BlendEquation value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendEquation value=(ork::BlendEquation)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::rgb(ork::BlendEquation). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rgb = value;

		return 0;
	}

	// void proland::TextureLayer::BlendParams::srgb(ork::BlendArgument value)
	static int _bind_setSrgb(lua_State *L) {
		if (!_lg_typecheck_setSrgb(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::srgb(ork::BlendArgument value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::srgb(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::srgb(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->srgb = value;

		return 0;
	}

	// void proland::TextureLayer::BlendParams::drgb(ork::BlendArgument value)
	static int _bind_setDrgb(lua_State *L) {
		if (!_lg_typecheck_setDrgb(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::drgb(ork::BlendArgument value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::drgb(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::drgb(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drgb = value;

		return 0;
	}

	// void proland::TextureLayer::BlendParams::alpha(ork::BlendEquation value)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::alpha(ork::BlendEquation value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::alpha(ork::BlendEquation value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendEquation value=(ork::BlendEquation)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::alpha(ork::BlendEquation). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->alpha = value;

		return 0;
	}

	// void proland::TextureLayer::BlendParams::salpha(ork::BlendArgument value)
	static int _bind_setSalpha(lua_State *L) {
		if (!_lg_typecheck_setSalpha(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::salpha(ork::BlendArgument value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::salpha(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::salpha(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->salpha = value;

		return 0;
	}

	// void proland::TextureLayer::BlendParams::dalpha(ork::BlendArgument value)
	static int _bind_setDalpha(lua_State *L) {
		if (!_lg_typecheck_setDalpha(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::BlendParams::dalpha(ork::BlendArgument value) function, expected prototype:\nvoid proland::TextureLayer::BlendParams::dalpha(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::TextureLayer::BlendParams* self=(Luna< proland::TextureLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::BlendParams::dalpha(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::TextureLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dalpha = value;

		return 0;
	}


	// Operator binds:

};

proland::TextureLayer::BlendParams* LunaTraits< proland::TextureLayer::BlendParams >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TextureLayer_BlendParams::_bind_ctor(L);
}

void LunaTraits< proland::TextureLayer::BlendParams >::_bind_dtor(proland::TextureLayer::BlendParams* obj) {
	delete obj;
}

const char LunaTraits< proland::TextureLayer::BlendParams >::className[] = "TextureLayer_BlendParams";
const char LunaTraits< proland::TextureLayer::BlendParams >::fullName[] = "proland::TextureLayer::BlendParams";
const char LunaTraits< proland::TextureLayer::BlendParams >::moduleName[] = "proland";
const char* LunaTraits< proland::TextureLayer::BlendParams >::parents[] = {0};
const int LunaTraits< proland::TextureLayer::BlendParams >::hash = 11252811;
const int LunaTraits< proland::TextureLayer::BlendParams >::uniqueIDs[] = {11252811,0};

luna_RegType LunaTraits< proland::TextureLayer::BlendParams >::methods[] = {
	{"getBuffer", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getBuffer},
	{"getRgb", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getRgb},
	{"getSrgb", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getSrgb},
	{"getDrgb", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getDrgb},
	{"getAlpha", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getAlpha},
	{"getSalpha", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getSalpha},
	{"getDalpha", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_getDalpha},
	{"setBuffer", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setBuffer},
	{"setRgb", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setRgb},
	{"setSrgb", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setSrgb},
	{"setDrgb", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setDrgb},
	{"setAlpha", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setAlpha},
	{"setSalpha", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setSalpha},
	{"setDalpha", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_setDalpha},
	{"dynCast", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TextureLayer_BlendParams::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TextureLayer_BlendParams::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TextureLayer::BlendParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TextureLayer::BlendParams >::enumValues[] = {
	{0,0}
};


