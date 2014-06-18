#include <plug_common.h>

class luna_wrapper_D3DTRIPATCH_INFO {
public:
	typedef Luna< D3DTRIPATCH_INFO > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38308937) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DTRIPATCH_INFO*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DTRIPATCH_INFO* rhs =(Luna< D3DTRIPATCH_INFO >::check(L,2));
		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
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

		D3DTRIPATCH_INFO* self= (D3DTRIPATCH_INFO*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DTRIPATCH_INFO >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,38308937) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DTRIPATCH_INFO >::check(L,1));
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

		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DTRIPATCH_INFO");
		
		return luna_dynamicCast(L,converters,"D3DTRIPATCH_INFO",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStartVertexOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumVertices(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBasis(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDegree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStartVertexOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumVertices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBasis(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDegree(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int D3DTRIPATCH_INFO::StartVertexOffset()
	static int _bind_getStartVertexOffset(lua_State *L) {
		if (!_lg_typecheck_getStartVertexOffset(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DTRIPATCH_INFO::StartVertexOffset() function, expected prototype:\nunsigned int D3DTRIPATCH_INFO::StartVertexOffset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DTRIPATCH_INFO::StartVertexOffset(). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->StartVertexOffset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DTRIPATCH_INFO::NumVertices()
	static int _bind_getNumVertices(lua_State *L) {
		if (!_lg_typecheck_getNumVertices(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DTRIPATCH_INFO::NumVertices() function, expected prototype:\nunsigned int D3DTRIPATCH_INFO::NumVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DTRIPATCH_INFO::NumVertices(). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->NumVertices;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DBASISTYPE D3DTRIPATCH_INFO::Basis()
	static int _bind_getBasis(lua_State *L) {
		if (!_lg_typecheck_getBasis(L)) {
			luaL_error(L, "luna typecheck failed in D3DBASISTYPE D3DTRIPATCH_INFO::Basis() function, expected prototype:\nD3DBASISTYPE D3DTRIPATCH_INFO::Basis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DBASISTYPE D3DTRIPATCH_INFO::Basis(). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DBASISTYPE lret = self->Basis;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DDEGREETYPE D3DTRIPATCH_INFO::Degree()
	static int _bind_getDegree(lua_State *L) {
		if (!_lg_typecheck_getDegree(L)) {
			luaL_error(L, "luna typecheck failed in D3DDEGREETYPE D3DTRIPATCH_INFO::Degree() function, expected prototype:\nD3DDEGREETYPE D3DTRIPATCH_INFO::Degree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DDEGREETYPE D3DTRIPATCH_INFO::Degree(). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DDEGREETYPE lret = self->Degree;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DTRIPATCH_INFO::StartVertexOffset(unsigned int value)
	static int _bind_setStartVertexOffset(lua_State *L) {
		if (!_lg_typecheck_setStartVertexOffset(L)) {
			luaL_error(L, "luna typecheck failed in void D3DTRIPATCH_INFO::StartVertexOffset(unsigned int value) function, expected prototype:\nvoid D3DTRIPATCH_INFO::StartVertexOffset(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DTRIPATCH_INFO::StartVertexOffset(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StartVertexOffset = value;

		return 0;
	}

	// void D3DTRIPATCH_INFO::NumVertices(unsigned int value)
	static int _bind_setNumVertices(lua_State *L) {
		if (!_lg_typecheck_setNumVertices(L)) {
			luaL_error(L, "luna typecheck failed in void D3DTRIPATCH_INFO::NumVertices(unsigned int value) function, expected prototype:\nvoid D3DTRIPATCH_INFO::NumVertices(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DTRIPATCH_INFO::NumVertices(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NumVertices = value;

		return 0;
	}

	// void D3DTRIPATCH_INFO::Basis(D3DBASISTYPE value)
	static int _bind_setBasis(lua_State *L) {
		if (!_lg_typecheck_setBasis(L)) {
			luaL_error(L, "luna typecheck failed in void D3DTRIPATCH_INFO::Basis(D3DBASISTYPE value) function, expected prototype:\nvoid D3DTRIPATCH_INFO::Basis(D3DBASISTYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DBASISTYPE value=(D3DBASISTYPE)lua_tointeger(L,2);

		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DTRIPATCH_INFO::Basis(D3DBASISTYPE). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Basis = value;

		return 0;
	}

	// void D3DTRIPATCH_INFO::Degree(D3DDEGREETYPE value)
	static int _bind_setDegree(lua_State *L) {
		if (!_lg_typecheck_setDegree(L)) {
			luaL_error(L, "luna typecheck failed in void D3DTRIPATCH_INFO::Degree(D3DDEGREETYPE value) function, expected prototype:\nvoid D3DTRIPATCH_INFO::Degree(D3DDEGREETYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DDEGREETYPE value=(D3DDEGREETYPE)lua_tointeger(L,2);

		D3DTRIPATCH_INFO* self=(Luna< D3DTRIPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DTRIPATCH_INFO::Degree(D3DDEGREETYPE). Got : '%s'\n%s",typeid(Luna< D3DTRIPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Degree = value;

		return 0;
	}


	// Operator binds:

};

D3DTRIPATCH_INFO* LunaTraits< D3DTRIPATCH_INFO >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DTRIPATCH_INFO >::_bind_dtor(D3DTRIPATCH_INFO* obj) {
	delete obj;
}

const char LunaTraits< D3DTRIPATCH_INFO >::className[] = "D3DTRIPATCH_INFO";
const char LunaTraits< D3DTRIPATCH_INFO >::fullName[] = "D3DTRIPATCH_INFO";
const char LunaTraits< D3DTRIPATCH_INFO >::moduleName[] = "dx9";
const char* LunaTraits< D3DTRIPATCH_INFO >::parents[] = {0};
const int LunaTraits< D3DTRIPATCH_INFO >::hash = 38308937;
const int LunaTraits< D3DTRIPATCH_INFO >::uniqueIDs[] = {38308937,0};

luna_RegType LunaTraits< D3DTRIPATCH_INFO >::methods[] = {
	{"getStartVertexOffset", &luna_wrapper_D3DTRIPATCH_INFO::_bind_getStartVertexOffset},
	{"getNumVertices", &luna_wrapper_D3DTRIPATCH_INFO::_bind_getNumVertices},
	{"getBasis", &luna_wrapper_D3DTRIPATCH_INFO::_bind_getBasis},
	{"getDegree", &luna_wrapper_D3DTRIPATCH_INFO::_bind_getDegree},
	{"setStartVertexOffset", &luna_wrapper_D3DTRIPATCH_INFO::_bind_setStartVertexOffset},
	{"setNumVertices", &luna_wrapper_D3DTRIPATCH_INFO::_bind_setNumVertices},
	{"setBasis", &luna_wrapper_D3DTRIPATCH_INFO::_bind_setBasis},
	{"setDegree", &luna_wrapper_D3DTRIPATCH_INFO::_bind_setDegree},
	{"dynCast", &luna_wrapper_D3DTRIPATCH_INFO::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DTRIPATCH_INFO::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DTRIPATCH_INFO::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DTRIPATCH_INFO::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DTRIPATCH_INFO >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DTRIPATCH_INFO >::enumValues[] = {
	{0,0}
};


