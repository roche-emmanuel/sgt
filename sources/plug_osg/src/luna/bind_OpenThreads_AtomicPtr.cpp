#include <plug_common.h>

class luna_wrapper_OpenThreads_AtomicPtr {
public:
	typedef Luna< OpenThreads::AtomicPtr > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51707784) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::AtomicPtr*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::AtomicPtr* rhs =(Luna< OpenThreads::AtomicPtr >::check(L,2));
		OpenThreads::AtomicPtr* self=(Luna< OpenThreads::AtomicPtr >::check(L,1));
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

		OpenThreads::AtomicPtr* self= (OpenThreads::AtomicPtr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::AtomicPtr >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,51707784) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::AtomicPtr >::check(L,1));
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

		OpenThreads::AtomicPtr* self=(Luna< OpenThreads::AtomicPtr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::AtomicPtr");
		
		return luna_dynamicCast(L,converters,"OpenThreads::AtomicPtr",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_assign(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// OpenThreads::AtomicPtr::AtomicPtr(void * ptr = 0)
	static OpenThreads::AtomicPtr* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in OpenThreads::AtomicPtr::AtomicPtr(void * ptr = 0) function, expected prototype:\nOpenThreads::AtomicPtr::AtomicPtr(void * ptr = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		void* ptr=luatop>0 ? (Luna< void >::check(L,1)) : (void*)0;

		return new OpenThreads::AtomicPtr(ptr);
	}


	// Function binds:
	// bool OpenThreads::AtomicPtr::assign(void * ptrNew, const void *const ptrOld)
	static int _bind_assign(lua_State *L) {
		if (!_lg_typecheck_assign(L)) {
			luaL_error(L, "luna typecheck failed in bool OpenThreads::AtomicPtr::assign(void * ptrNew, const void *const ptrOld) function, expected prototype:\nbool OpenThreads::AtomicPtr::assign(void * ptrNew, const void *const ptrOld)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* ptrNew=(Luna< void >::check(L,2));
		const void* ptrOld=(Luna< void >::check(L,3));

		OpenThreads::AtomicPtr* self=(Luna< OpenThreads::AtomicPtr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool OpenThreads::AtomicPtr::assign(void *, const void *const). Got : '%s'\n%s",typeid(Luna< OpenThreads::AtomicPtr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->assign(ptrNew, ptrOld);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void * OpenThreads::AtomicPtr::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in void * OpenThreads::AtomicPtr::get() const function, expected prototype:\nvoid * OpenThreads::AtomicPtr::get() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		OpenThreads::AtomicPtr* self=(Luna< OpenThreads::AtomicPtr >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * OpenThreads::AtomicPtr::get() const. Got : '%s'\n%s",typeid(Luna< OpenThreads::AtomicPtr >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

OpenThreads::AtomicPtr* LunaTraits< OpenThreads::AtomicPtr >::_bind_ctor(lua_State *L) {
	return luna_wrapper_OpenThreads_AtomicPtr::_bind_ctor(L);
}

void LunaTraits< OpenThreads::AtomicPtr >::_bind_dtor(OpenThreads::AtomicPtr* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::AtomicPtr >::className[] = "AtomicPtr";
const char LunaTraits< OpenThreads::AtomicPtr >::fullName[] = "OpenThreads::AtomicPtr";
const char LunaTraits< OpenThreads::AtomicPtr >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::AtomicPtr >::parents[] = {0};
const int LunaTraits< OpenThreads::AtomicPtr >::hash = 51707784;
const int LunaTraits< OpenThreads::AtomicPtr >::uniqueIDs[] = {51707784,0};

luna_RegType LunaTraits< OpenThreads::AtomicPtr >::methods[] = {
	{"assign", &luna_wrapper_OpenThreads_AtomicPtr::_bind_assign},
	{"get", &luna_wrapper_OpenThreads_AtomicPtr::_bind_get},
	{"dynCast", &luna_wrapper_OpenThreads_AtomicPtr::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_AtomicPtr::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_AtomicPtr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_AtomicPtr::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::AtomicPtr >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::AtomicPtr >::enumValues[] = {
	{0,0}
};


