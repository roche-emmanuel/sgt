#include <plug_common.h>

class luna_wrapper_wxSemaphore {
public:
	typedef Luna< wxSemaphore > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96188030) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxSemaphore*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxSemaphore* rhs =(Luna< wxSemaphore >::check(L,2));
		wxSemaphore* self=(Luna< wxSemaphore >::check(L,1));
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

		wxSemaphore* self= (wxSemaphore*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSemaphore >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96188030) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxSemaphore >::check(L,1));
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

		wxSemaphore* self=(Luna< wxSemaphore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxSemaphore");
		
		return luna_dynamicCast(L,converters,"wxSemaphore",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Post(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TryWait(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Wait(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WaitTimeout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSemaphore::wxSemaphore(int initialcount = 0, int maxcount = 0)
	static wxSemaphore* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxSemaphore::wxSemaphore(int initialcount = 0, int maxcount = 0) function, expected prototype:\nwxSemaphore::wxSemaphore(int initialcount = 0, int maxcount = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int initialcount=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int maxcount=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxSemaphore(initialcount, maxcount);
	}


	// Function binds:
	// wxSemaError wxSemaphore::Post()
	static int _bind_Post(lua_State *L) {
		if (!_lg_typecheck_Post(L)) {
			luaL_error(L, "luna typecheck failed in wxSemaError wxSemaphore::Post() function, expected prototype:\nwxSemaError wxSemaphore::Post()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSemaphore* self=(Luna< wxSemaphore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSemaError wxSemaphore::Post(). Got : '%s'\n%s",typeid(Luna< wxSemaphore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSemaError lret = self->Post();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSemaError wxSemaphore::TryWait()
	static int _bind_TryWait(lua_State *L) {
		if (!_lg_typecheck_TryWait(L)) {
			luaL_error(L, "luna typecheck failed in wxSemaError wxSemaphore::TryWait() function, expected prototype:\nwxSemaError wxSemaphore::TryWait()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSemaphore* self=(Luna< wxSemaphore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSemaError wxSemaphore::TryWait(). Got : '%s'\n%s",typeid(Luna< wxSemaphore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSemaError lret = self->TryWait();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSemaError wxSemaphore::Wait()
	static int _bind_Wait(lua_State *L) {
		if (!_lg_typecheck_Wait(L)) {
			luaL_error(L, "luna typecheck failed in wxSemaError wxSemaphore::Wait() function, expected prototype:\nwxSemaError wxSemaphore::Wait()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSemaphore* self=(Luna< wxSemaphore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSemaError wxSemaphore::Wait(). Got : '%s'\n%s",typeid(Luna< wxSemaphore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSemaError lret = self->Wait();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSemaError wxSemaphore::WaitTimeout(unsigned long timeout_millis)
	static int _bind_WaitTimeout(lua_State *L) {
		if (!_lg_typecheck_WaitTimeout(L)) {
			luaL_error(L, "luna typecheck failed in wxSemaError wxSemaphore::WaitTimeout(unsigned long timeout_millis) function, expected prototype:\nwxSemaError wxSemaphore::WaitTimeout(unsigned long timeout_millis)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long timeout_millis=(unsigned long)lua_tonumber(L,2);

		wxSemaphore* self=(Luna< wxSemaphore >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSemaError wxSemaphore::WaitTimeout(unsigned long). Got : '%s'\n%s",typeid(Luna< wxSemaphore >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSemaError lret = self->WaitTimeout(timeout_millis);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSemaphore* LunaTraits< wxSemaphore >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSemaphore::_bind_ctor(L);
}

void LunaTraits< wxSemaphore >::_bind_dtor(wxSemaphore* obj) {
	delete obj;
}

const char LunaTraits< wxSemaphore >::className[] = "wxSemaphore";
const char LunaTraits< wxSemaphore >::fullName[] = "wxSemaphore";
const char LunaTraits< wxSemaphore >::moduleName[] = "wx";
const char* LunaTraits< wxSemaphore >::parents[] = {0};
const int LunaTraits< wxSemaphore >::hash = 96188030;
const int LunaTraits< wxSemaphore >::uniqueIDs[] = {96188030,0};

luna_RegType LunaTraits< wxSemaphore >::methods[] = {
	{"Post", &luna_wrapper_wxSemaphore::_bind_Post},
	{"TryWait", &luna_wrapper_wxSemaphore::_bind_TryWait},
	{"Wait", &luna_wrapper_wxSemaphore::_bind_Wait},
	{"WaitTimeout", &luna_wrapper_wxSemaphore::_bind_WaitTimeout},
	{"dynCast", &luna_wrapper_wxSemaphore::_bind_dynCast},
	{"__eq", &luna_wrapper_wxSemaphore::_bind___eq},
	{"fromVoid", &luna_wrapper_wxSemaphore::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSemaphore::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxSemaphore >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxSemaphore >::enumValues[] = {
	{0,0}
};


