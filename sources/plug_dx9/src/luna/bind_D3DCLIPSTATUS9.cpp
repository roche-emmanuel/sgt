#include <plug_common.h>

class luna_wrapper_D3DCLIPSTATUS9 {
public:
	typedef Luna< D3DCLIPSTATUS9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69300229) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DCLIPSTATUS9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DCLIPSTATUS9* rhs =(Luna< D3DCLIPSTATUS9 >::check(L,2));
		D3DCLIPSTATUS9* self=(Luna< D3DCLIPSTATUS9 >::check(L,1));
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

		D3DCLIPSTATUS9* self= (D3DCLIPSTATUS9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DCLIPSTATUS9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,69300229) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DCLIPSTATUS9 >::check(L,1));
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

		D3DCLIPSTATUS9* self=(Luna< D3DCLIPSTATUS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DCLIPSTATUS9");
		
		return luna_dynamicCast(L,converters,"D3DCLIPSTATUS9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getClipUnion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getClipIntersection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setClipUnion(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setClipIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long D3DCLIPSTATUS9::ClipUnion()
	static int _bind_getClipUnion(lua_State *L) {
		if (!_lg_typecheck_getClipUnion(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCLIPSTATUS9::ClipUnion() function, expected prototype:\nunsigned long D3DCLIPSTATUS9::ClipUnion()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCLIPSTATUS9* self=(Luna< D3DCLIPSTATUS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCLIPSTATUS9::ClipUnion(). Got : '%s'\n%s",typeid(Luna< D3DCLIPSTATUS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->ClipUnion;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DCLIPSTATUS9::ClipIntersection()
	static int _bind_getClipIntersection(lua_State *L) {
		if (!_lg_typecheck_getClipIntersection(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DCLIPSTATUS9::ClipIntersection() function, expected prototype:\nunsigned long D3DCLIPSTATUS9::ClipIntersection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DCLIPSTATUS9* self=(Luna< D3DCLIPSTATUS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DCLIPSTATUS9::ClipIntersection(). Got : '%s'\n%s",typeid(Luna< D3DCLIPSTATUS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->ClipIntersection;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DCLIPSTATUS9::ClipUnion(unsigned long value)
	static int _bind_setClipUnion(lua_State *L) {
		if (!_lg_typecheck_setClipUnion(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCLIPSTATUS9::ClipUnion(unsigned long value) function, expected prototype:\nvoid D3DCLIPSTATUS9::ClipUnion(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCLIPSTATUS9* self=(Luna< D3DCLIPSTATUS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCLIPSTATUS9::ClipUnion(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCLIPSTATUS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipUnion = value;

		return 0;
	}

	// void D3DCLIPSTATUS9::ClipIntersection(unsigned long value)
	static int _bind_setClipIntersection(lua_State *L) {
		if (!_lg_typecheck_setClipIntersection(L)) {
			luaL_error(L, "luna typecheck failed in void D3DCLIPSTATUS9::ClipIntersection(unsigned long value) function, expected prototype:\nvoid D3DCLIPSTATUS9::ClipIntersection(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DCLIPSTATUS9* self=(Luna< D3DCLIPSTATUS9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DCLIPSTATUS9::ClipIntersection(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DCLIPSTATUS9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClipIntersection = value;

		return 0;
	}


	// Operator binds:

};

D3DCLIPSTATUS9* LunaTraits< D3DCLIPSTATUS9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DCLIPSTATUS9 >::_bind_dtor(D3DCLIPSTATUS9* obj) {
	delete obj;
}

const char LunaTraits< D3DCLIPSTATUS9 >::className[] = "D3DCLIPSTATUS9";
const char LunaTraits< D3DCLIPSTATUS9 >::fullName[] = "D3DCLIPSTATUS9";
const char LunaTraits< D3DCLIPSTATUS9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DCLIPSTATUS9 >::parents[] = {0};
const int LunaTraits< D3DCLIPSTATUS9 >::hash = 69300229;
const int LunaTraits< D3DCLIPSTATUS9 >::uniqueIDs[] = {69300229,0};

luna_RegType LunaTraits< D3DCLIPSTATUS9 >::methods[] = {
	{"getClipUnion", &luna_wrapper_D3DCLIPSTATUS9::_bind_getClipUnion},
	{"getClipIntersection", &luna_wrapper_D3DCLIPSTATUS9::_bind_getClipIntersection},
	{"setClipUnion", &luna_wrapper_D3DCLIPSTATUS9::_bind_setClipUnion},
	{"setClipIntersection", &luna_wrapper_D3DCLIPSTATUS9::_bind_setClipIntersection},
	{"dynCast", &luna_wrapper_D3DCLIPSTATUS9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DCLIPSTATUS9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DCLIPSTATUS9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DCLIPSTATUS9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DCLIPSTATUS9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DCLIPSTATUS9 >::enumValues[] = {
	{0,0}
};


