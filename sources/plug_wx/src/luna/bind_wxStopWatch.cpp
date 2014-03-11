#include <plug_common.h>

class luna_wrapper_wxStopWatch {
public:
	typedef Luna< wxStopWatch > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66515423) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStopWatch*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStopWatch* rhs =(Luna< wxStopWatch >::check(L,2));
		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
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

		wxStopWatch* self= (wxStopWatch*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStopWatch >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66515423) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxStopWatch >::check(L,1));
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

		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStopWatch");
		
		return luna_dynamicCast(L,converters,"wxStopWatch",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Pause(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Resume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Start(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Time(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TimeInMicro(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStopWatch::wxStopWatch()
	static wxStopWatch* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxStopWatch::wxStopWatch() function, expected prototype:\nwxStopWatch::wxStopWatch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxStopWatch();
	}


	// Function binds:
	// void wxStopWatch::Pause()
	static int _bind_Pause(lua_State *L) {
		if (!_lg_typecheck_Pause(L)) {
			luaL_error(L, "luna typecheck failed in void wxStopWatch::Pause() function, expected prototype:\nvoid wxStopWatch::Pause()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStopWatch::Pause(). Got : '%s'\n%s",typeid(Luna< wxStopWatch >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Pause();

		return 0;
	}

	// void wxStopWatch::Resume()
	static int _bind_Resume(lua_State *L) {
		if (!_lg_typecheck_Resume(L)) {
			luaL_error(L, "luna typecheck failed in void wxStopWatch::Resume() function, expected prototype:\nvoid wxStopWatch::Resume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStopWatch::Resume(). Got : '%s'\n%s",typeid(Luna< wxStopWatch >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Resume();

		return 0;
	}

	// void wxStopWatch::Start(long milliseconds = 0)
	static int _bind_Start(lua_State *L) {
		if (!_lg_typecheck_Start(L)) {
			luaL_error(L, "luna typecheck failed in void wxStopWatch::Start(long milliseconds = 0) function, expected prototype:\nvoid wxStopWatch::Start(long milliseconds = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long milliseconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)0;

		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStopWatch::Start(long). Got : '%s'\n%s",typeid(Luna< wxStopWatch >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Start(milliseconds);

		return 0;
	}

	// long wxStopWatch::Time() const
	static int _bind_Time(lua_State *L) {
		if (!_lg_typecheck_Time(L)) {
			luaL_error(L, "luna typecheck failed in long wxStopWatch::Time() const function, expected prototype:\nlong wxStopWatch::Time() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxStopWatch::Time() const. Got : '%s'\n%s",typeid(Luna< wxStopWatch >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->Time();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLongLong wxStopWatch::TimeInMicro() const
	static int _bind_TimeInMicro(lua_State *L) {
		if (!_lg_typecheck_TimeInMicro(L)) {
			luaL_error(L, "luna typecheck failed in wxLongLong wxStopWatch::TimeInMicro() const function, expected prototype:\nwxLongLong wxStopWatch::TimeInMicro() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStopWatch* self=(Luna< wxStopWatch >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLongLong wxStopWatch::TimeInMicro() const. Got : '%s'\n%s",typeid(Luna< wxStopWatch >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLongLong stack_lret = self->TimeInMicro();
		wxLongLong* lret = new wxLongLong(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLongLong >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxStopWatch* LunaTraits< wxStopWatch >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStopWatch::_bind_ctor(L);
}

void LunaTraits< wxStopWatch >::_bind_dtor(wxStopWatch* obj) {
	delete obj;
}

const char LunaTraits< wxStopWatch >::className[] = "wxStopWatch";
const char LunaTraits< wxStopWatch >::fullName[] = "wxStopWatch";
const char LunaTraits< wxStopWatch >::moduleName[] = "wx";
const char* LunaTraits< wxStopWatch >::parents[] = {0};
const int LunaTraits< wxStopWatch >::hash = 66515423;
const int LunaTraits< wxStopWatch >::uniqueIDs[] = {66515423,0};

luna_RegType LunaTraits< wxStopWatch >::methods[] = {
	{"Pause", &luna_wrapper_wxStopWatch::_bind_Pause},
	{"Resume", &luna_wrapper_wxStopWatch::_bind_Resume},
	{"Start", &luna_wrapper_wxStopWatch::_bind_Start},
	{"Time", &luna_wrapper_wxStopWatch::_bind_Time},
	{"TimeInMicro", &luna_wrapper_wxStopWatch::_bind_TimeInMicro},
	{"dynCast", &luna_wrapper_wxStopWatch::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStopWatch::_bind___eq},
	{"fromVoid", &luna_wrapper_wxStopWatch::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStopWatch::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxStopWatch >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStopWatch >::enumValues[] = {
	{0,0}
};


