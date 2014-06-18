#include <plug_common.h>

class luna_wrapper_D3DRECTPATCH_INFO {
public:
	typedef Luna< D3DRECTPATCH_INFO > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68363046) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DRECTPATCH_INFO*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DRECTPATCH_INFO* rhs =(Luna< D3DRECTPATCH_INFO >::check(L,2));
		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
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

		D3DRECTPATCH_INFO* self= (D3DRECTPATCH_INFO*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DRECTPATCH_INFO >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,68363046) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DRECTPATCH_INFO >::check(L,1));
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

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DRECTPATCH_INFO");
		
		return luna_dynamicCast(L,converters,"D3DRECTPATCH_INFO",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStartVertexOffsetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStartVertexOffsetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStride(lua_State *L) {
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

	inline static bool _lg_typecheck_setStartVertexOffsetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStartVertexOffsetHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStride(lua_State *L) {
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
	// unsigned int D3DRECTPATCH_INFO::StartVertexOffsetWidth()
	static int _bind_getStartVertexOffsetWidth(lua_State *L) {
		if (!_lg_typecheck_getStartVertexOffsetWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DRECTPATCH_INFO::StartVertexOffsetWidth() function, expected prototype:\nunsigned int D3DRECTPATCH_INFO::StartVertexOffsetWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DRECTPATCH_INFO::StartVertexOffsetWidth(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->StartVertexOffsetWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DRECTPATCH_INFO::StartVertexOffsetHeight()
	static int _bind_getStartVertexOffsetHeight(lua_State *L) {
		if (!_lg_typecheck_getStartVertexOffsetHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DRECTPATCH_INFO::StartVertexOffsetHeight() function, expected prototype:\nunsigned int D3DRECTPATCH_INFO::StartVertexOffsetHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DRECTPATCH_INFO::StartVertexOffsetHeight(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->StartVertexOffsetHeight;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DRECTPATCH_INFO::Width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DRECTPATCH_INFO::Width() function, expected prototype:\nunsigned int D3DRECTPATCH_INFO::Width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DRECTPATCH_INFO::Width(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DRECTPATCH_INFO::Height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DRECTPATCH_INFO::Height() function, expected prototype:\nunsigned int D3DRECTPATCH_INFO::Height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DRECTPATCH_INFO::Height(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DRECTPATCH_INFO::Stride()
	static int _bind_getStride(lua_State *L) {
		if (!_lg_typecheck_getStride(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DRECTPATCH_INFO::Stride() function, expected prototype:\nunsigned int D3DRECTPATCH_INFO::Stride()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DRECTPATCH_INFO::Stride(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Stride;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DBASISTYPE D3DRECTPATCH_INFO::Basis()
	static int _bind_getBasis(lua_State *L) {
		if (!_lg_typecheck_getBasis(L)) {
			luaL_error(L, "luna typecheck failed in D3DBASISTYPE D3DRECTPATCH_INFO::Basis() function, expected prototype:\nD3DBASISTYPE D3DRECTPATCH_INFO::Basis()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DBASISTYPE D3DRECTPATCH_INFO::Basis(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DBASISTYPE lret = self->Basis;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DDEGREETYPE D3DRECTPATCH_INFO::Degree()
	static int _bind_getDegree(lua_State *L) {
		if (!_lg_typecheck_getDegree(L)) {
			luaL_error(L, "luna typecheck failed in D3DDEGREETYPE D3DRECTPATCH_INFO::Degree() function, expected prototype:\nD3DDEGREETYPE D3DRECTPATCH_INFO::Degree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DDEGREETYPE D3DRECTPATCH_INFO::Degree(). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DDEGREETYPE lret = self->Degree;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DRECTPATCH_INFO::StartVertexOffsetWidth(unsigned int value)
	static int _bind_setStartVertexOffsetWidth(lua_State *L) {
		if (!_lg_typecheck_setStartVertexOffsetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::StartVertexOffsetWidth(unsigned int value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::StartVertexOffsetWidth(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::StartVertexOffsetWidth(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StartVertexOffsetWidth = value;

		return 0;
	}

	// void D3DRECTPATCH_INFO::StartVertexOffsetHeight(unsigned int value)
	static int _bind_setStartVertexOffsetHeight(lua_State *L) {
		if (!_lg_typecheck_setStartVertexOffsetHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::StartVertexOffsetHeight(unsigned int value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::StartVertexOffsetHeight(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::StartVertexOffsetHeight(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StartVertexOffsetHeight = value;

		return 0;
	}

	// void D3DRECTPATCH_INFO::Width(unsigned int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::Width(unsigned int value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::Width(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::Width(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Width = value;

		return 0;
	}

	// void D3DRECTPATCH_INFO::Height(unsigned int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::Height(unsigned int value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::Height(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::Height(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Height = value;

		return 0;
	}

	// void D3DRECTPATCH_INFO::Stride(unsigned int value)
	static int _bind_setStride(lua_State *L) {
		if (!_lg_typecheck_setStride(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::Stride(unsigned int value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::Stride(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::Stride(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Stride = value;

		return 0;
	}

	// void D3DRECTPATCH_INFO::Basis(D3DBASISTYPE value)
	static int _bind_setBasis(lua_State *L) {
		if (!_lg_typecheck_setBasis(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::Basis(D3DBASISTYPE value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::Basis(D3DBASISTYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DBASISTYPE value=(D3DBASISTYPE)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::Basis(D3DBASISTYPE). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Basis = value;

		return 0;
	}

	// void D3DRECTPATCH_INFO::Degree(D3DDEGREETYPE value)
	static int _bind_setDegree(lua_State *L) {
		if (!_lg_typecheck_setDegree(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECTPATCH_INFO::Degree(D3DDEGREETYPE value) function, expected prototype:\nvoid D3DRECTPATCH_INFO::Degree(D3DDEGREETYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DDEGREETYPE value=(D3DDEGREETYPE)lua_tointeger(L,2);

		D3DRECTPATCH_INFO* self=(Luna< D3DRECTPATCH_INFO >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECTPATCH_INFO::Degree(D3DDEGREETYPE). Got : '%s'\n%s",typeid(Luna< D3DRECTPATCH_INFO >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Degree = value;

		return 0;
	}


	// Operator binds:

};

D3DRECTPATCH_INFO* LunaTraits< D3DRECTPATCH_INFO >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DRECTPATCH_INFO >::_bind_dtor(D3DRECTPATCH_INFO* obj) {
	delete obj;
}

const char LunaTraits< D3DRECTPATCH_INFO >::className[] = "D3DRECTPATCH_INFO";
const char LunaTraits< D3DRECTPATCH_INFO >::fullName[] = "D3DRECTPATCH_INFO";
const char LunaTraits< D3DRECTPATCH_INFO >::moduleName[] = "dx9";
const char* LunaTraits< D3DRECTPATCH_INFO >::parents[] = {0};
const int LunaTraits< D3DRECTPATCH_INFO >::hash = 68363046;
const int LunaTraits< D3DRECTPATCH_INFO >::uniqueIDs[] = {68363046,0};

luna_RegType LunaTraits< D3DRECTPATCH_INFO >::methods[] = {
	{"getStartVertexOffsetWidth", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getStartVertexOffsetWidth},
	{"getStartVertexOffsetHeight", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getStartVertexOffsetHeight},
	{"getWidth", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getWidth},
	{"getHeight", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getHeight},
	{"getStride", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getStride},
	{"getBasis", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getBasis},
	{"getDegree", &luna_wrapper_D3DRECTPATCH_INFO::_bind_getDegree},
	{"setStartVertexOffsetWidth", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setStartVertexOffsetWidth},
	{"setStartVertexOffsetHeight", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setStartVertexOffsetHeight},
	{"setWidth", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setWidth},
	{"setHeight", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setHeight},
	{"setStride", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setStride},
	{"setBasis", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setBasis},
	{"setDegree", &luna_wrapper_D3DRECTPATCH_INFO::_bind_setDegree},
	{"dynCast", &luna_wrapper_D3DRECTPATCH_INFO::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DRECTPATCH_INFO::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DRECTPATCH_INFO::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DRECTPATCH_INFO::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DRECTPATCH_INFO >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DRECTPATCH_INFO >::enumValues[] = {
	{0,0}
};


