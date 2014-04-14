#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SetStateTask_Runnable.h>

class luna_wrapper_ork_SetStateTask_Runnable {
public:
	typedef Luna< ork::SetStateTask::Runnable > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::SetStateTask::Runnable* self=(Luna< ork::SetStateTask::Runnable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::SetStateTask::Runnable,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52646128) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::SetStateTask::Runnable*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::SetStateTask::Runnable* rhs =(Luna< ork::SetStateTask::Runnable >::check(L,2));
		ork::SetStateTask::Runnable* self=(Luna< ork::SetStateTask::Runnable >::check(L,1));
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

		ork::SetStateTask::Runnable* self= (ork::SetStateTask::Runnable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SetStateTask::Runnable >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52646128) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::SetStateTask::Runnable >::check(L,1));
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

		ork::SetStateTask::Runnable* self=(Luna< ork::SetStateTask::Runnable >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::SetStateTask::Runnable");
		
		return luna_dynamicCast(L,converters,"ork::SetStateTask::Runnable",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::SetStateTask::Runnable::Runnable(lua_Table * data)
	static ork::SetStateTask::Runnable* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::SetStateTask::Runnable::Runnable(lua_Table * data) function, expected prototype:\nork::SetStateTask::Runnable::Runnable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_SetStateTask_Runnable(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

ork::SetStateTask::Runnable* LunaTraits< ork::SetStateTask::Runnable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_SetStateTask_Runnable::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void ork::SetStateTask::Runnable::run(ork::ptr< ork::FrameBuffer > fb)
}

void LunaTraits< ork::SetStateTask::Runnable >::_bind_dtor(ork::SetStateTask::Runnable* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< ork::SetStateTask::Runnable >::className[] = "SetStateTask_Runnable";
const char LunaTraits< ork::SetStateTask::Runnable >::fullName[] = "ork::SetStateTask::Runnable";
const char LunaTraits< ork::SetStateTask::Runnable >::moduleName[] = "ork";
const char* LunaTraits< ork::SetStateTask::Runnable >::parents[] = {0};
const int LunaTraits< ork::SetStateTask::Runnable >::hash = 52646128;
const int LunaTraits< ork::SetStateTask::Runnable >::uniqueIDs[] = {52646128,0};

luna_RegType LunaTraits< ork::SetStateTask::Runnable >::methods[] = {
	{"dynCast", &luna_wrapper_ork_SetStateTask_Runnable::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_SetStateTask_Runnable::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_SetStateTask_Runnable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SetStateTask_Runnable::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SetStateTask_Runnable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SetStateTask::Runnable >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SetStateTask::Runnable >::enumValues[] = {
	{0,0}
};


