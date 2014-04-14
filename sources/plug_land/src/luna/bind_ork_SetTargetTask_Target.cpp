#include <plug_common.h>

class luna_wrapper_ork_SetTargetTask_Target {
public:
	typedef Luna< ork::SetTargetTask::Target > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89018139) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::SetTargetTask::Target*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::SetTargetTask::Target* rhs =(Luna< ork::SetTargetTask::Target >::check(L,2));
		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
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

		ork::SetTargetTask::Target* self= (ork::SetTargetTask::Target*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SetTargetTask::Target >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,89018139) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::SetTargetTask::Target >::check(L,1));
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

		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::SetTargetTask::Target");
		
		return luna_dynamicCast(L,converters,"ork::SetTargetTask::Target",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBuffer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLevel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLayer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// ork::BufferId ork::SetTargetTask::Target::buffer()
	static int _bind_getBuffer(lua_State *L) {
		if (!_lg_typecheck_getBuffer(L)) {
			luaL_error(L, "luna typecheck failed in ork::BufferId ork::SetTargetTask::Target::buffer() function, expected prototype:\nork::BufferId ork::SetTargetTask::Target::buffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::BufferId ork::SetTargetTask::Target::buffer(). Got : '%s'\n%s",typeid(Luna< ork::SetTargetTask::Target >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::BufferId lret = self->buffer;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::SetTargetTask::Target::level()
	static int _bind_getLevel(lua_State *L) {
		if (!_lg_typecheck_getLevel(L)) {
			luaL_error(L, "luna typecheck failed in int ork::SetTargetTask::Target::level() function, expected prototype:\nint ork::SetTargetTask::Target::level()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::SetTargetTask::Target::level(). Got : '%s'\n%s",typeid(Luna< ork::SetTargetTask::Target >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->level;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int ork::SetTargetTask::Target::layer()
	static int _bind_getLayer(lua_State *L) {
		if (!_lg_typecheck_getLayer(L)) {
			luaL_error(L, "luna typecheck failed in int ork::SetTargetTask::Target::layer() function, expected prototype:\nint ork::SetTargetTask::Target::layer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int ork::SetTargetTask::Target::layer(). Got : '%s'\n%s",typeid(Luna< ork::SetTargetTask::Target >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->layer;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void ork::SetTargetTask::Target::buffer(ork::BufferId value)
	static int _bind_setBuffer(lua_State *L) {
		if (!_lg_typecheck_setBuffer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetTargetTask::Target::buffer(ork::BufferId value) function, expected prototype:\nvoid ork::SetTargetTask::Target::buffer(ork::BufferId value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::BufferId value=(ork::BufferId)lua_tointeger(L,2);

		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetTargetTask::Target::buffer(ork::BufferId). Got : '%s'\n%s",typeid(Luna< ork::SetTargetTask::Target >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->buffer = value;

		return 0;
	}

	// void ork::SetTargetTask::Target::level(int value)
	static int _bind_setLevel(lua_State *L) {
		if (!_lg_typecheck_setLevel(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetTargetTask::Target::level(int value) function, expected prototype:\nvoid ork::SetTargetTask::Target::level(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetTargetTask::Target::level(int). Got : '%s'\n%s",typeid(Luna< ork::SetTargetTask::Target >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->level = value;

		return 0;
	}

	// void ork::SetTargetTask::Target::layer(int value)
	static int _bind_setLayer(lua_State *L) {
		if (!_lg_typecheck_setLayer(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SetTargetTask::Target::layer(int value) function, expected prototype:\nvoid ork::SetTargetTask::Target::layer(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		ork::SetTargetTask::Target* self=(Luna< ork::SetTargetTask::Target >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SetTargetTask::Target::layer(int). Got : '%s'\n%s",typeid(Luna< ork::SetTargetTask::Target >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->layer = value;

		return 0;
	}


	// Operator binds:

};

ork::SetTargetTask::Target* LunaTraits< ork::SetTargetTask::Target >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ork::SetTargetTask::Target >::_bind_dtor(ork::SetTargetTask::Target* obj) {
	delete obj;
}

const char LunaTraits< ork::SetTargetTask::Target >::className[] = "SetTargetTask_Target";
const char LunaTraits< ork::SetTargetTask::Target >::fullName[] = "ork::SetTargetTask::Target";
const char LunaTraits< ork::SetTargetTask::Target >::moduleName[] = "ork";
const char* LunaTraits< ork::SetTargetTask::Target >::parents[] = {0};
const int LunaTraits< ork::SetTargetTask::Target >::hash = 89018139;
const int LunaTraits< ork::SetTargetTask::Target >::uniqueIDs[] = {89018139,0};

luna_RegType LunaTraits< ork::SetTargetTask::Target >::methods[] = {
	{"getBuffer", &luna_wrapper_ork_SetTargetTask_Target::_bind_getBuffer},
	{"getLevel", &luna_wrapper_ork_SetTargetTask_Target::_bind_getLevel},
	{"getLayer", &luna_wrapper_ork_SetTargetTask_Target::_bind_getLayer},
	{"setBuffer", &luna_wrapper_ork_SetTargetTask_Target::_bind_setBuffer},
	{"setLevel", &luna_wrapper_ork_SetTargetTask_Target::_bind_setLevel},
	{"setLayer", &luna_wrapper_ork_SetTargetTask_Target::_bind_setLayer},
	{"dynCast", &luna_wrapper_ork_SetTargetTask_Target::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_SetTargetTask_Target::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_SetTargetTask_Target::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SetTargetTask_Target::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SetTargetTask::Target >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SetTargetTask::Target >::enumValues[] = {
	{0,0}
};


