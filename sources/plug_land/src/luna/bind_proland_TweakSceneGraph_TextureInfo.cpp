#include <plug_common.h>

class luna_wrapper_proland_TweakSceneGraph_TextureInfo {
public:
	typedef Luna< proland::TweakSceneGraph::TextureInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21281132) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TweakSceneGraph::TextureInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakSceneGraph::TextureInfo* rhs =(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,2));
		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
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

		proland::TweakSceneGraph::TextureInfo* self= (proland::TweakSceneGraph::TextureInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakSceneGraph::TextureInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21281132) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
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

		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TweakSceneGraph::TextureInfo");
		
		return luna_dynamicCast(L,converters,"proland::TweakSceneGraph::TextureInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture >(L,1) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNorm(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getArea(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNorm(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setArea(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151911) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TweakSceneGraph::TextureInfo::TextureInfo(ork::ptr< ork::Texture > t)
	static proland::TweakSceneGraph::TextureInfo* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakSceneGraph::TextureInfo::TextureInfo(ork::ptr< ork::Texture > t) function, expected prototype:\nproland::TweakSceneGraph::TextureInfo::TextureInfo(ork::ptr< ork::Texture > t)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture > t = Luna< ork::Object >::checkSubType< ork::Texture >(L,1);

		return new proland::TweakSceneGraph::TextureInfo(t);
	}


	// Function binds:
	// ork::ptr< ork::Texture > proland::TweakSceneGraph::TextureInfo::tex()
	static int _bind_getTex(lua_State *L) {
		if (!_lg_typecheck_getTex(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture > proland::TweakSceneGraph::TextureInfo::tex() function, expected prototype:\nork::ptr< ork::Texture > proland::TweakSceneGraph::TextureInfo::tex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture > proland::TweakSceneGraph::TextureInfo::tex(). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture > lret = self->tex;
		Luna< ork::Texture >::push(L,lret.get(),false);

		return 1;
	}

	// int proland::TweakSceneGraph::TextureInfo::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TweakSceneGraph::TextureInfo::level() function, expected prototype:\nint proland::TweakSceneGraph::TextureInfo::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TweakSceneGraph::TextureInfo::level(). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::TweakSceneGraph::TextureInfo::mode()
	static int _bind_getMode(lua_State *L) {
		if (!_lg_typecheck_getMode(L)) {
			luaL_error(L, "luna typecheck failed in int proland::TweakSceneGraph::TextureInfo::mode() function, expected prototype:\nint proland::TweakSceneGraph::TextureInfo::mode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::TweakSceneGraph::TextureInfo::mode(). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->mode;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec4f proland::TweakSceneGraph::TextureInfo::norm()
	static int _bind_getNorm(lua_State *L) {
		if (!_lg_typecheck_getNorm(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::TweakSceneGraph::TextureInfo::norm() function, expected prototype:\nork::vec4f proland::TweakSceneGraph::TextureInfo::norm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::TweakSceneGraph::TextureInfo::norm(). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec4f* lret = &self->norm;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,false);

		return 1;
	}

	// ork::box2f proland::TweakSceneGraph::TextureInfo::area()
	static int _bind_getArea(lua_State *L) {
		if (!_lg_typecheck_getArea(L)) {
			luaL_error(L, "luna typecheck failed in ork::box2f proland::TweakSceneGraph::TextureInfo::area() function, expected prototype:\nork::box2f proland::TweakSceneGraph::TextureInfo::area()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::box2f proland::TweakSceneGraph::TextureInfo::area(). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::box2f* lret = &self->area;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::box2f >::push(L,lret,false);

		return 1;
	}

	// void proland::TweakSceneGraph::TextureInfo::tex(ork::ptr< ork::Texture > value)
	static int _bind_setTex(lua_State *L) {
		if (!_lg_typecheck_setTex(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::TextureInfo::tex(ork::ptr< ork::Texture > value) function, expected prototype:\nvoid proland::TweakSceneGraph::TextureInfo::tex(ork::ptr< ork::Texture > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Texture > value = Luna< ork::Object >::checkSubType< ork::Texture >(L,2);

		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::TextureInfo::tex(ork::ptr< ork::Texture >). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tex = value;

		return 0;
	}

	// void proland::TweakSceneGraph::TextureInfo::level(int value)
	static int _bind_setLevel(lua_State *L) {
		if (!_lg_typecheck_setLevel(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::TextureInfo::level(int value) function, expected prototype:\nvoid proland::TweakSceneGraph::TextureInfo::level(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::TextureInfo::level(int). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->level = value;

		return 0;
	}

	// void proland::TweakSceneGraph::TextureInfo::mode(int value)
	static int _bind_setMode(lua_State *L) {
		if (!_lg_typecheck_setMode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::TextureInfo::mode(int value) function, expected prototype:\nvoid proland::TweakSceneGraph::TextureInfo::mode(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::TextureInfo::mode(int). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->mode = value;

		return 0;
	}

	// void proland::TweakSceneGraph::TextureInfo::norm(ork::vec4f value)
	static int _bind_setNorm(lua_State *L) {
		if (!_lg_typecheck_setNorm(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::TextureInfo::norm(ork::vec4f value) function, expected prototype:\nvoid proland::TweakSceneGraph::TextureInfo::norm(ork::vec4f value)\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4f* value_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TweakSceneGraph::TextureInfo::norm function");
		}
		ork::vec4f value=*value_ptr;

		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::TextureInfo::norm(ork::vec4f). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->norm = value;

		return 0;
	}

	// void proland::TweakSceneGraph::TextureInfo::area(ork::box2f value)
	static int _bind_setArea(lua_State *L) {
		if (!_lg_typecheck_setArea(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TweakSceneGraph::TextureInfo::area(ork::box2f value) function, expected prototype:\nvoid proland::TweakSceneGraph::TextureInfo::area(ork::box2f value)\nClass arguments details:\narg 1 ID = 63151911\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::box2f* value_ptr=(Luna< ork::box2f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TweakSceneGraph::TextureInfo::area function");
		}
		ork::box2f value=*value_ptr;

		proland::TweakSceneGraph::TextureInfo* self=(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TweakSceneGraph::TextureInfo::area(ork::box2f). Got : '%s'\n%s",typeid(Luna< proland::TweakSceneGraph::TextureInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->area = value;

		return 0;
	}


	// Operator binds:

};

proland::TweakSceneGraph::TextureInfo* LunaTraits< proland::TweakSceneGraph::TextureInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_ctor(L);
}

void LunaTraits< proland::TweakSceneGraph::TextureInfo >::_bind_dtor(proland::TweakSceneGraph::TextureInfo* obj) {
	delete obj;
}

const char LunaTraits< proland::TweakSceneGraph::TextureInfo >::className[] = "TweakSceneGraph_TextureInfo";
const char LunaTraits< proland::TweakSceneGraph::TextureInfo >::fullName[] = "proland::TweakSceneGraph::TextureInfo";
const char LunaTraits< proland::TweakSceneGraph::TextureInfo >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakSceneGraph::TextureInfo >::parents[] = {0};
const int LunaTraits< proland::TweakSceneGraph::TextureInfo >::hash = 21281132;
const int LunaTraits< proland::TweakSceneGraph::TextureInfo >::uniqueIDs[] = {21281132,0};

luna_RegType LunaTraits< proland::TweakSceneGraph::TextureInfo >::methods[] = {
	{"getTex", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_getTex},
	{"getLevel", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_getLevel},
	{"getMode", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_getMode},
	{"getNorm", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_getNorm},
	{"getArea", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_getArea},
	{"setTex", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_setTex},
	{"setLevel", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_setLevel},
	{"setMode", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_setMode},
	{"setNorm", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_setNorm},
	{"setArea", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_setArea},
	{"dynCast", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakSceneGraph_TextureInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakSceneGraph::TextureInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakSceneGraph::TextureInfo >::enumValues[] = {
	{0,0}
};


