#include <plug_common.h>

#include <luna/wrappers/wrapper_OpenThreads_ReentrantMutex.h>

class luna_wrapper_OpenThreads_ReentrantMutex {
public:
	typedef Luna< OpenThreads::ReentrantMutex > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::Mutex,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		OpenThreads::ReentrantMutex* self= (OpenThreads::ReentrantMutex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::ReentrantMutex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3168391) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::Mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Mutex(lua_State *L) {
		// all checked are already performed before reaching this point.
		//OpenThreads::ReentrantMutex* ptr= dynamic_cast< OpenThreads::ReentrantMutex* >(Luna< OpenThreads::Mutex >::check(L,1));
		OpenThreads::ReentrantMutex* ptr= luna_caster< OpenThreads::Mutex, OpenThreads::ReentrantMutex >::cast(Luna< OpenThreads::Mutex >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< OpenThreads::ReentrantMutex >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

OpenThreads::ReentrantMutex* LunaTraits< OpenThreads::ReentrantMutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OpenThreads::ReentrantMutex >::_bind_dtor(OpenThreads::ReentrantMutex* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::ReentrantMutex >::className[] = "ReentrantMutex";
const char LunaTraits< OpenThreads::ReentrantMutex >::fullName[] = "OpenThreads::ReentrantMutex";
const char LunaTraits< OpenThreads::ReentrantMutex >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::ReentrantMutex >::parents[] = {"OpenThreads.Mutex", 0};
const int LunaTraits< OpenThreads::ReentrantMutex >::hash = 12462362;
const int LunaTraits< OpenThreads::ReentrantMutex >::uniqueIDs[] = {3168391,0};

luna_RegType LunaTraits< OpenThreads::ReentrantMutex >::methods[] = {
	{"fromVoid", &luna_wrapper_OpenThreads_ReentrantMutex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_ReentrantMutex::_bind_asVoid},
	{"getTable", &luna_wrapper_OpenThreads_ReentrantMutex::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::ReentrantMutex >::converters[] = {
	{"OpenThreads::Mutex", &luna_wrapper_OpenThreads_ReentrantMutex::_cast_from_Mutex},
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::ReentrantMutex >::enumValues[] = {
	{0,0}
};


