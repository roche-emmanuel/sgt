#include <plug_common.h>

class luna_wrapper_ork_FrameBuffer_Parameters {
public:
	typedef Luna< ork::FrameBuffer::Parameters > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72789067) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::FrameBuffer::Parameters*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::FrameBuffer::Parameters* rhs =(Luna< ork::FrameBuffer::Parameters >::check(L,2));
		ork::FrameBuffer::Parameters* self=(Luna< ork::FrameBuffer::Parameters >::check(L,1));
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

		ork::FrameBuffer::Parameters* self= (ork::FrameBuffer::Parameters*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::FrameBuffer::Parameters >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72789067) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::FrameBuffer::Parameters >::check(L,1));
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

		ork::FrameBuffer::Parameters* self=(Luna< ork::FrameBuffer::Parameters >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::FrameBuffer::Parameters");
		
		return luna_dynamicCast(L,converters,"ork::FrameBuffer::Parameters",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::FrameBuffer::Parameters::Parameters()
	static ork::FrameBuffer::Parameters* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::FrameBuffer::Parameters::Parameters() function, expected prototype:\nork::FrameBuffer::Parameters::Parameters()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::FrameBuffer::Parameters();
	}


	// Function binds:

	// Operator binds:

};

ork::FrameBuffer::Parameters* LunaTraits< ork::FrameBuffer::Parameters >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_FrameBuffer_Parameters::_bind_ctor(L);
}

void LunaTraits< ork::FrameBuffer::Parameters >::_bind_dtor(ork::FrameBuffer::Parameters* obj) {
	delete obj;
}

const char LunaTraits< ork::FrameBuffer::Parameters >::className[] = "FrameBuffer_Parameters";
const char LunaTraits< ork::FrameBuffer::Parameters >::fullName[] = "ork::FrameBuffer::Parameters";
const char LunaTraits< ork::FrameBuffer::Parameters >::moduleName[] = "ork";
const char* LunaTraits< ork::FrameBuffer::Parameters >::parents[] = {0};
const int LunaTraits< ork::FrameBuffer::Parameters >::hash = 72789067;
const int LunaTraits< ork::FrameBuffer::Parameters >::uniqueIDs[] = {72789067,0};

luna_RegType LunaTraits< ork::FrameBuffer::Parameters >::methods[] = {
	{"dynCast", &luna_wrapper_ork_FrameBuffer_Parameters::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_FrameBuffer_Parameters::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_FrameBuffer_Parameters::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_FrameBuffer_Parameters::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::FrameBuffer::Parameters >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::FrameBuffer::Parameters >::enumValues[] = {
	{0,0}
};


