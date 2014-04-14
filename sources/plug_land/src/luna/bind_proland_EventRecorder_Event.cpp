#include <plug_common.h>

class luna_wrapper_proland_EventRecorder_Event {
public:
	typedef Luna< proland::EventRecorder::Event > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52737574) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::EventRecorder::Event*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::EventRecorder::Event* rhs =(Luna< proland::EventRecorder::Event >::check(L,2));
		proland::EventRecorder::Event* self=(Luna< proland::EventRecorder::Event >::check(L,1));
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

		proland::EventRecorder::Event* self= (proland::EventRecorder::Event*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EventRecorder::Event >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52737574) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::EventRecorder::Event >::check(L,1));
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

		proland::EventRecorder::Event* self=(Luna< proland::EventRecorder::Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::EventRecorder::Event");
		
		return luna_dynamicCast(L,converters,"proland::EventRecorder::Event",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setKind(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EventRecorder::Event::Event()
	static proland::EventRecorder::Event* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EventRecorder::Event::Event() function, expected prototype:\nproland::EventRecorder::Event::Event()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::EventRecorder::Event();
	}

	// proland::EventRecorder::Event::Event(double t, double dt, float groundHeight)
	static proland::EventRecorder::Event* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EventRecorder::Event::Event(double t, double dt, float groundHeight) function, expected prototype:\nproland::EventRecorder::Event::Event(double t, double dt, float groundHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,1);
		double dt=(double)lua_tonumber(L,2);
		float groundHeight=(float)lua_tonumber(L,3);

		return new proland::EventRecorder::Event(t, dt, groundHeight);
	}

	// proland::EventRecorder::Event::Event(proland::EventRecorder::Event::EventType kind, int m, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0)
	static proland::EventRecorder::Event* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in proland::EventRecorder::Event::Event(proland::EventRecorder::Event::EventType kind, int m, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0) function, expected prototype:\nproland::EventRecorder::Event::Event(proland::EventRecorder::Event::EventType kind, int m, int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		proland::EventRecorder::Event::EventType kind=(proland::EventRecorder::Event::EventType)lua_tointeger(L,1);
		int m=(int)lua_tointeger(L,2);
		int arg1=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int arg2=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int arg3=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int arg4=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

		return new proland::EventRecorder::Event(kind, m, arg1, arg2, arg3, arg4);
	}

	// Overload binder for proland::EventRecorder::Event::Event
	static proland::EventRecorder::Event* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function Event, cannot match any of the overloads for function Event:\n  Event()\n  Event(double, double, float)\n  Event(proland::EventRecorder::Event::EventType, int, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// proland::EventRecorder::Event::EventType proland::EventRecorder::Event::kind()
	static int _bind_getKind(lua_State *L) {
		if (!_lg_typecheck_getKind(L)) {
			luaL_error(L, "luna typecheck failed in proland::EventRecorder::Event::EventType proland::EventRecorder::Event::kind() function, expected prototype:\nproland::EventRecorder::Event::EventType proland::EventRecorder::Event::kind()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EventRecorder::Event* self=(Luna< proland::EventRecorder::Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::EventRecorder::Event::EventType proland::EventRecorder::Event::kind(). Got : '%s'\n%s",typeid(Luna< proland::EventRecorder::Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::EventRecorder::Event::EventType lret = self->kind;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::EventRecorder::Event::kind(proland::EventRecorder::Event::EventType value)
	static int _bind_setKind(lua_State *L) {
		if (!_lg_typecheck_setKind(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EventRecorder::Event::kind(proland::EventRecorder::Event::EventType value) function, expected prototype:\nvoid proland::EventRecorder::Event::kind(proland::EventRecorder::Event::EventType value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::EventRecorder::Event::EventType value=(proland::EventRecorder::Event::EventType)lua_tointeger(L,2);

		proland::EventRecorder::Event* self=(Luna< proland::EventRecorder::Event >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EventRecorder::Event::kind(proland::EventRecorder::Event::EventType). Got : '%s'\n%s",typeid(Luna< proland::EventRecorder::Event >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->kind = value;

		return 0;
	}


	// Operator binds:

};

proland::EventRecorder::Event* LunaTraits< proland::EventRecorder::Event >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EventRecorder_Event::_bind_ctor(L);
}

void LunaTraits< proland::EventRecorder::Event >::_bind_dtor(proland::EventRecorder::Event* obj) {
	delete obj;
}

const char LunaTraits< proland::EventRecorder::Event >::className[] = "EventRecorder_Event";
const char LunaTraits< proland::EventRecorder::Event >::fullName[] = "proland::EventRecorder::Event";
const char LunaTraits< proland::EventRecorder::Event >::moduleName[] = "proland";
const char* LunaTraits< proland::EventRecorder::Event >::parents[] = {0};
const int LunaTraits< proland::EventRecorder::Event >::hash = 52737574;
const int LunaTraits< proland::EventRecorder::Event >::uniqueIDs[] = {52737574,0};

luna_RegType LunaTraits< proland::EventRecorder::Event >::methods[] = {
	{"getKind", &luna_wrapper_proland_EventRecorder_Event::_bind_getKind},
	{"setKind", &luna_wrapper_proland_EventRecorder_Event::_bind_setKind},
	{"dynCast", &luna_wrapper_proland_EventRecorder_Event::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_EventRecorder_Event::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_EventRecorder_Event::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EventRecorder_Event::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EventRecorder::Event >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EventRecorder::Event >::enumValues[] = {
	{"DISPLAY", proland::EventRecorder::Event::DISPLAY},
	{"MOUSE", proland::EventRecorder::Event::MOUSE},
	{"MOTION", proland::EventRecorder::Event::MOTION},
	{"PASSIVEMOTION", proland::EventRecorder::Event::PASSIVEMOTION},
	{"WHEEL", proland::EventRecorder::Event::WHEEL},
	{"KEYBOARD", proland::EventRecorder::Event::KEYBOARD},
	{"SPECIAL", proland::EventRecorder::Event::SPECIAL},
	{0,0}
};


