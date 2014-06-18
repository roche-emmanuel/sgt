#include <plug_common.h>

class luna_wrapper_D3DLOCKED_RECT {
public:
	typedef Luna< D3DLOCKED_RECT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94018592) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DLOCKED_RECT*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DLOCKED_RECT* rhs =(Luna< D3DLOCKED_RECT >::check(L,2));
		D3DLOCKED_RECT* self=(Luna< D3DLOCKED_RECT >::check(L,1));
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

		D3DLOCKED_RECT* self= (D3DLOCKED_RECT*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DLOCKED_RECT >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94018592) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DLOCKED_RECT >::check(L,1));
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

		D3DLOCKED_RECT* self=(Luna< D3DLOCKED_RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DLOCKED_RECT");
		
		return luna_dynamicCast(L,converters,"D3DLOCKED_RECT",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getPitch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPBits(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPitch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPBits(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int D3DLOCKED_RECT::Pitch()
	static int _bind_getPitch(lua_State *L) {
		if (!_lg_typecheck_getPitch(L)) {
			luaL_error(L, "luna typecheck failed in int D3DLOCKED_RECT::Pitch() function, expected prototype:\nint D3DLOCKED_RECT::Pitch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLOCKED_RECT* self=(Luna< D3DLOCKED_RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DLOCKED_RECT::Pitch(). Got : '%s'\n%s",typeid(Luna< D3DLOCKED_RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Pitch;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void * D3DLOCKED_RECT::pBits()
	static int _bind_getPBits(lua_State *L) {
		if (!_lg_typecheck_getPBits(L)) {
			luaL_error(L, "luna typecheck failed in void * D3DLOCKED_RECT::pBits() function, expected prototype:\nvoid * D3DLOCKED_RECT::pBits()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DLOCKED_RECT* self=(Luna< D3DLOCKED_RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * D3DLOCKED_RECT::pBits(). Got : '%s'\n%s",typeid(Luna< D3DLOCKED_RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->pBits;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void D3DLOCKED_RECT::Pitch(int value)
	static int _bind_setPitch(lua_State *L) {
		if (!_lg_typecheck_setPitch(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLOCKED_RECT::Pitch(int value) function, expected prototype:\nvoid D3DLOCKED_RECT::Pitch(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DLOCKED_RECT* self=(Luna< D3DLOCKED_RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLOCKED_RECT::Pitch(int). Got : '%s'\n%s",typeid(Luna< D3DLOCKED_RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Pitch = value;

		return 0;
	}

	// void D3DLOCKED_RECT::pBits(void * value)
	static int _bind_setPBits(lua_State *L) {
		if (!_lg_typecheck_setPBits(L)) {
			luaL_error(L, "luna typecheck failed in void D3DLOCKED_RECT::pBits(void * value) function, expected prototype:\nvoid D3DLOCKED_RECT::pBits(void * value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* value=(Luna< void >::check(L,2));

		D3DLOCKED_RECT* self=(Luna< D3DLOCKED_RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DLOCKED_RECT::pBits(void *). Got : '%s'\n%s",typeid(Luna< D3DLOCKED_RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pBits = value;

		return 0;
	}


	// Operator binds:

};

D3DLOCKED_RECT* LunaTraits< D3DLOCKED_RECT >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DLOCKED_RECT >::_bind_dtor(D3DLOCKED_RECT* obj) {
	delete obj;
}

const char LunaTraits< D3DLOCKED_RECT >::className[] = "D3DLOCKED_RECT";
const char LunaTraits< D3DLOCKED_RECT >::fullName[] = "D3DLOCKED_RECT";
const char LunaTraits< D3DLOCKED_RECT >::moduleName[] = "dx9";
const char* LunaTraits< D3DLOCKED_RECT >::parents[] = {0};
const int LunaTraits< D3DLOCKED_RECT >::hash = 94018592;
const int LunaTraits< D3DLOCKED_RECT >::uniqueIDs[] = {94018592,0};

luna_RegType LunaTraits< D3DLOCKED_RECT >::methods[] = {
	{"getPitch", &luna_wrapper_D3DLOCKED_RECT::_bind_getPitch},
	{"getPBits", &luna_wrapper_D3DLOCKED_RECT::_bind_getPBits},
	{"setPitch", &luna_wrapper_D3DLOCKED_RECT::_bind_setPitch},
	{"setPBits", &luna_wrapper_D3DLOCKED_RECT::_bind_setPBits},
	{"dynCast", &luna_wrapper_D3DLOCKED_RECT::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DLOCKED_RECT::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DLOCKED_RECT::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DLOCKED_RECT::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DLOCKED_RECT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DLOCKED_RECT >::enumValues[] = {
	{0,0}
};


