#include <plug_common.h>

class luna_wrapper_proland_MaskOrthoLayer_BlendParams {
public:
	typedef Luna< proland::MaskOrthoLayer::BlendParams > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50727209) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::MaskOrthoLayer::BlendParams*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::MaskOrthoLayer::BlendParams* rhs =(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,2));
		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
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

		proland::MaskOrthoLayer::BlendParams* self= (proland::MaskOrthoLayer::BlendParams*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::MaskOrthoLayer::BlendParams >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50727209) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
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

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::MaskOrthoLayer::BlendParams");
		
		return luna_dynamicCast(L,converters,"proland::MaskOrthoLayer::BlendParams",name);
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

	inline static bool _lg_typecheck_getEnable(lua_State *L) {
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

	inline static bool _lg_typecheck_setEnable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// proland::MaskOrthoLayer::BlendParams::BlendParams()
	static proland::MaskOrthoLayer::BlendParams* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::MaskOrthoLayer::BlendParams::BlendParams() function, expected prototype:\nproland::MaskOrthoLayer::BlendParams::BlendParams()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::MaskOrthoLayer::BlendParams();
	}


	// Function binds:
	// ork::BufferId proland::MaskOrthoLayer::BlendParams::buffer()
	static int _bind_getBuffer(lua_State *L) {
		if (!_lg_typecheck_getBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::BufferId proland::MaskOrthoLayer::BlendParams::buffer() function, expected prototype:\nork::BufferId proland::MaskOrthoLayer::BlendParams::buffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BufferId proland::MaskOrthoLayer::BlendParams::buffer(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BufferId lret = self->buffer;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::MaskOrthoLayer::BlendParams::enable()
	static int _bind_getEnable(lua_State *L) {
		if (!_lg_typecheck_getEnable(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MaskOrthoLayer::BlendParams::enable() function, expected prototype:\nbool proland::MaskOrthoLayer::BlendParams::enable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MaskOrthoLayer::BlendParams::enable(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enable;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::BlendEquation proland::MaskOrthoLayer::BlendParams::rgb()
	static int _bind_getRgb(lua_State *L) {
		if (!_lg_typecheck_getRgb(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendEquation proland::MaskOrthoLayer::BlendParams::rgb() function, expected prototype:\nork::BlendEquation proland::MaskOrthoLayer::BlendParams::rgb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendEquation proland::MaskOrthoLayer::BlendParams::rgb(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendEquation lret = self->rgb;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::MaskOrthoLayer::BlendParams::srgb()
	static int _bind_getSrgb(lua_State *L) {
		if (!_lg_typecheck_getSrgb(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::MaskOrthoLayer::BlendParams::srgb() function, expected prototype:\nork::BlendArgument proland::MaskOrthoLayer::BlendParams::srgb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::MaskOrthoLayer::BlendParams::srgb(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->srgb;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::MaskOrthoLayer::BlendParams::drgb()
	static int _bind_getDrgb(lua_State *L) {
		if (!_lg_typecheck_getDrgb(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::MaskOrthoLayer::BlendParams::drgb() function, expected prototype:\nork::BlendArgument proland::MaskOrthoLayer::BlendParams::drgb()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::MaskOrthoLayer::BlendParams::drgb(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->drgb;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendEquation proland::MaskOrthoLayer::BlendParams::alpha()
	static int _bind_getAlpha(lua_State *L) {
		if (!_lg_typecheck_getAlpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendEquation proland::MaskOrthoLayer::BlendParams::alpha() function, expected prototype:\nork::BlendEquation proland::MaskOrthoLayer::BlendParams::alpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendEquation proland::MaskOrthoLayer::BlendParams::alpha(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendEquation lret = self->alpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::MaskOrthoLayer::BlendParams::salpha()
	static int _bind_getSalpha(lua_State *L) {
		if (!_lg_typecheck_getSalpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::MaskOrthoLayer::BlendParams::salpha() function, expected prototype:\nork::BlendArgument proland::MaskOrthoLayer::BlendParams::salpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::MaskOrthoLayer::BlendParams::salpha(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->salpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::BlendArgument proland::MaskOrthoLayer::BlendParams::dalpha()
	static int _bind_getDalpha(lua_State *L) {
		if (!_lg_typecheck_getDalpha(L)) {
			luaL_error(L, "luna typecheck failed in ork::BlendArgument proland::MaskOrthoLayer::BlendParams::dalpha() function, expected prototype:\nork::BlendArgument proland::MaskOrthoLayer::BlendParams::dalpha()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BlendArgument proland::MaskOrthoLayer::BlendParams::dalpha(). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BlendArgument lret = self->dalpha;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::MaskOrthoLayer::BlendParams::buffer(ork::BufferId value)
	static int _bind_setBuffer(lua_State *L) {
		if (!_lg_typecheck_setBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::buffer(ork::BufferId value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::buffer(ork::BufferId value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId value=(ork::BufferId)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::buffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buffer = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::enable(bool value)
	static int _bind_setEnable(lua_State *L) {
		if (!_lg_typecheck_setEnable(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::enable(bool value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::enable(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::enable(bool). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->enable = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::rgb(ork::BlendEquation value)
	static int _bind_setRgb(lua_State *L) {
		if (!_lg_typecheck_setRgb(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::rgb(ork::BlendEquation value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::rgb(ork::BlendEquation value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendEquation value=(ork::BlendEquation)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::rgb(ork::BlendEquation). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->rgb = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::srgb(ork::BlendArgument value)
	static int _bind_setSrgb(lua_State *L) {
		if (!_lg_typecheck_setSrgb(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::srgb(ork::BlendArgument value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::srgb(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::srgb(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->srgb = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::drgb(ork::BlendArgument value)
	static int _bind_setDrgb(lua_State *L) {
		if (!_lg_typecheck_setDrgb(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::drgb(ork::BlendArgument value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::drgb(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::drgb(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drgb = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::alpha(ork::BlendEquation value)
	static int _bind_setAlpha(lua_State *L) {
		if (!_lg_typecheck_setAlpha(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::alpha(ork::BlendEquation value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::alpha(ork::BlendEquation value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendEquation value=(ork::BlendEquation)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::alpha(ork::BlendEquation). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->alpha = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::salpha(ork::BlendArgument value)
	static int _bind_setSalpha(lua_State *L) {
		if (!_lg_typecheck_setSalpha(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::salpha(ork::BlendArgument value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::salpha(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::salpha(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->salpha = value;

		return 0;
	}

	// void proland::MaskOrthoLayer::BlendParams::dalpha(ork::BlendArgument value)
	static int _bind_setDalpha(lua_State *L) {
		if (!_lg_typecheck_setDalpha(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::BlendParams::dalpha(ork::BlendArgument value) function, expected prototype:\nvoid proland::MaskOrthoLayer::BlendParams::dalpha(ork::BlendArgument value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BlendArgument value=(ork::BlendArgument)lua_tointeger(L,2);

		proland::MaskOrthoLayer::BlendParams* self=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::BlendParams::dalpha(ork::BlendArgument). Got : '%s'\n%s",typeid(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->dalpha = value;

		return 0;
	}


	// Operator binds:

};

proland::MaskOrthoLayer::BlendParams* LunaTraits< proland::MaskOrthoLayer::BlendParams >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_ctor(L);
}

void LunaTraits< proland::MaskOrthoLayer::BlendParams >::_bind_dtor(proland::MaskOrthoLayer::BlendParams* obj) {
	delete obj;
}

const char LunaTraits< proland::MaskOrthoLayer::BlendParams >::className[] = "MaskOrthoLayer_BlendParams";
const char LunaTraits< proland::MaskOrthoLayer::BlendParams >::fullName[] = "proland::MaskOrthoLayer::BlendParams";
const char LunaTraits< proland::MaskOrthoLayer::BlendParams >::moduleName[] = "proland";
const char* LunaTraits< proland::MaskOrthoLayer::BlendParams >::parents[] = {0};
const int LunaTraits< proland::MaskOrthoLayer::BlendParams >::hash = 50727209;
const int LunaTraits< proland::MaskOrthoLayer::BlendParams >::uniqueIDs[] = {50727209,0};

luna_RegType LunaTraits< proland::MaskOrthoLayer::BlendParams >::methods[] = {
	{"getBuffer", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getBuffer},
	{"getEnable", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getEnable},
	{"getRgb", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getRgb},
	{"getSrgb", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getSrgb},
	{"getDrgb", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getDrgb},
	{"getAlpha", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getAlpha},
	{"getSalpha", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getSalpha},
	{"getDalpha", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_getDalpha},
	{"setBuffer", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setBuffer},
	{"setEnable", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setEnable},
	{"setRgb", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setRgb},
	{"setSrgb", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setSrgb},
	{"setDrgb", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setDrgb},
	{"setAlpha", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setAlpha},
	{"setSalpha", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setSalpha},
	{"setDalpha", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_setDalpha},
	{"dynCast", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_MaskOrthoLayer_BlendParams::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::MaskOrthoLayer::BlendParams >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::MaskOrthoLayer::BlendParams >::enumValues[] = {
	{0,0}
};


