#include <plug_common.h>

class luna_wrapper_ID3DXBuffer {
public:
	typedef Luna< ID3DXBuffer > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41307641) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ID3DXBuffer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ID3DXBuffer* rhs =(Luna< ID3DXBuffer >::check(L,2));
		ID3DXBuffer* self=(Luna< ID3DXBuffer >::check(L,1));
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

		ID3DXBuffer* self= (ID3DXBuffer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ID3DXBuffer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41307641) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ID3DXBuffer >::check(L,1));
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

		ID3DXBuffer* self=(Luna< ID3DXBuffer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ID3DXBuffer");
		
		return luna_dynamicCast(L,converters,"ID3DXBuffer",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long ID3DXBuffer::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long ID3DXBuffer::AddRef() function, expected prototype:\nunsigned long ID3DXBuffer::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ID3DXBuffer* self=(Luna< ID3DXBuffer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long ID3DXBuffer::AddRef(). Got : '%s'\n%s",typeid(Luna< ID3DXBuffer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long ID3DXBuffer::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long ID3DXBuffer::Release() function, expected prototype:\nunsigned long ID3DXBuffer::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ID3DXBuffer* self=(Luna< ID3DXBuffer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long ID3DXBuffer::Release(). Got : '%s'\n%s",typeid(Luna< ID3DXBuffer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

ID3DXBuffer* LunaTraits< ID3DXBuffer >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< ID3DXBuffer >::_bind_dtor(ID3DXBuffer* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< ID3DXBuffer >::className[] = "ID3DXBuffer";
const char LunaTraits< ID3DXBuffer >::fullName[] = "ID3DXBuffer";
const char LunaTraits< ID3DXBuffer >::moduleName[] = "dx9";
const char* LunaTraits< ID3DXBuffer >::parents[] = {0};
const int LunaTraits< ID3DXBuffer >::hash = 41307641;
const int LunaTraits< ID3DXBuffer >::uniqueIDs[] = {41307641,0};

luna_RegType LunaTraits< ID3DXBuffer >::methods[] = {
	{"AddRef", &luna_wrapper_ID3DXBuffer::_bind_AddRef},
	{"Release", &luna_wrapper_ID3DXBuffer::_bind_Release},
	{"dynCast", &luna_wrapper_ID3DXBuffer::_bind_dynCast},
	{"__eq", &luna_wrapper_ID3DXBuffer::_bind___eq},
	{"fromVoid", &luna_wrapper_ID3DXBuffer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ID3DXBuffer::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ID3DXBuffer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ID3DXBuffer >::enumValues[] = {
	{0,0}
};


