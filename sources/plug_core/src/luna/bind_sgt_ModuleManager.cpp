#include <plug_common.h>

class luna_wrapper_sgt_ModuleManager {
public:
	typedef Luna< sgt::ModuleManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37264461) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(sgt::ModuleManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		sgt::ModuleManager* rhs =(Luna< sgt::ModuleManager >::check(L,2));
		sgt::ModuleManager* self=(Luna< sgt::ModuleManager >::check(L,1));
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

		sgt::ModuleManager* self= (sgt::ModuleManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::ModuleManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37264461) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< sgt::ModuleManager >::check(L,1));
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

		sgt::ModuleManager* self=(Luna< sgt::ModuleManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("sgt::ModuleManager");
		
		return luna_dynamicCast(L,converters,"sgt::ModuleManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_instance(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_destroy(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isInstanciated(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static sgt::ModuleProvider & sgt::ModuleManager::instance()
	static int _bind_instance(lua_State *L) {
		if (!_lg_typecheck_instance(L)) {
			luaL_error(L, "luna typecheck failed in static sgt::ModuleProvider & sgt::ModuleManager::instance() function, expected prototype:\nstatic sgt::ModuleProvider & sgt::ModuleManager::instance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const sgt::ModuleProvider* lret = &sgt::ModuleManager::instance();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< sgt::ModuleProvider >::push(L,lret,false);

		return 1;
	}

	// static void sgt::ModuleManager::destroy()
	static int _bind_destroy(lua_State *L) {
		if (!_lg_typecheck_destroy(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::ModuleManager::destroy() function, expected prototype:\nstatic void sgt::ModuleManager::destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::ModuleManager::destroy();

		return 0;
	}

	// static bool sgt::ModuleManager::isInstanciated()
	static int _bind_isInstanciated(lua_State *L) {
		if (!_lg_typecheck_isInstanciated(L)) {
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleManager::isInstanciated() function, expected prototype:\nstatic bool sgt::ModuleManager::isInstanciated()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = sgt::ModuleManager::isInstanciated();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

sgt::ModuleManager* LunaTraits< sgt::ModuleManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< sgt::ModuleManager >::_bind_dtor(sgt::ModuleManager* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< sgt::ModuleManager >::className[] = "ModuleManager";
const char LunaTraits< sgt::ModuleManager >::fullName[] = "sgt::ModuleManager";
const char LunaTraits< sgt::ModuleManager >::moduleName[] = "sgt";
const char* LunaTraits< sgt::ModuleManager >::parents[] = {0};
const int LunaTraits< sgt::ModuleManager >::hash = 37264461;
const int LunaTraits< sgt::ModuleManager >::uniqueIDs[] = {37264461,0};

luna_RegType LunaTraits< sgt::ModuleManager >::methods[] = {
	{"instance", &luna_wrapper_sgt_ModuleManager::_bind_instance},
	{"destroy", &luna_wrapper_sgt_ModuleManager::_bind_destroy},
	{"isInstanciated", &luna_wrapper_sgt_ModuleManager::_bind_isInstanciated},
	{"dynCast", &luna_wrapper_sgt_ModuleManager::_bind_dynCast},
	{"__eq", &luna_wrapper_sgt_ModuleManager::_bind___eq},
	{"fromVoid", &luna_wrapper_sgt_ModuleManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_ModuleManager::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::ModuleManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::ModuleManager >::enumValues[] = {
	{0,0}
};


