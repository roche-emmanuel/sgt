#include <plug_common.h>

#include <luna/wrappers/wrapper_CefBinaryValue.h>

class luna_wrapper_CefBinaryValue {
public:
	typedef Luna< CefBinaryValue > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefBase* self=(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<CefBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		CefBinaryValue* self= (CefBinaryValue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CefBinaryValue >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50549361) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_CefBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//CefBinaryValue* ptr= dynamic_cast< CefBinaryValue* >(Luna< CefBase >::check(L,1));
		CefBinaryValue* ptr= luna_caster< CefBase, CefBinaryValue >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< CefBinaryValue >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOwned(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// CefBinaryValue::CefBinaryValue(lua_Table * data)
	static CefBinaryValue* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in CefBinaryValue::CefBinaryValue(lua_Table * data) function, expected prototype:\nCefBinaryValue::CefBinaryValue(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_CefBinaryValue(L,NULL);
	}


	// Function binds:
	// static CefRefPtr< CefBinaryValue > CefBinaryValue::Create(const void * data, size_t data_size)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static CefRefPtr< CefBinaryValue > CefBinaryValue::Create(const void * data, size_t data_size) function, expected prototype:\nstatic CefRefPtr< CefBinaryValue > CefBinaryValue::Create(const void * data, size_t data_size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* data=(Luna< void >::check(L,1));
		size_t data_size=(size_t)lua_tointeger(L,2);

		CefRefPtr< CefBinaryValue > lret = CefBinaryValue::Create(data, data_size);
		Luna< CefBinaryValue >::push(L,lret.get(),false);

		return 1;
	}

	// bool CefBinaryValue::IsValid()
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool CefBinaryValue::IsValid() function, expected prototype:\nbool CefBinaryValue::IsValid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBinaryValue* self=Luna< CefBase >::checkSubType< CefBinaryValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefBinaryValue::IsValid(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefBinaryValue::IsOwned()
	static int _bind_IsOwned(lua_State *L) {
		if (!_lg_typecheck_IsOwned(L)) {
			luaL_error(L, "luna typecheck failed in bool CefBinaryValue::IsOwned() function, expected prototype:\nbool CefBinaryValue::IsOwned()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBinaryValue* self=Luna< CefBase >::checkSubType< CefBinaryValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefBinaryValue::IsOwned(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOwned();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// CefRefPtr< CefBinaryValue > CefBinaryValue::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefBinaryValue > CefBinaryValue::Copy() function, expected prototype:\nCefRefPtr< CefBinaryValue > CefBinaryValue::Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBinaryValue* self=Luna< CefBase >::checkSubType< CefBinaryValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefBinaryValue > CefBinaryValue::Copy(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefBinaryValue > lret = self->Copy();
		Luna< CefBinaryValue >::push(L,lret.get(),false);

		return 1;
	}

	// size_t CefBinaryValue::GetSize()
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t CefBinaryValue::GetSize() function, expected prototype:\nsize_t CefBinaryValue::GetSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBinaryValue* self=Luna< CefBase >::checkSubType< CefBinaryValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t CefBinaryValue::GetSize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t CefBinaryValue::GetData(void * buffer, size_t buffer_size, size_t data_offset)
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in size_t CefBinaryValue::GetData(void * buffer, size_t buffer_size, size_t data_offset) function, expected prototype:\nsize_t CefBinaryValue::GetData(void * buffer, size_t buffer_size, size_t data_offset)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t buffer_size=(size_t)lua_tointeger(L,3);
		size_t data_offset=(size_t)lua_tointeger(L,4);

		CefBinaryValue* self=Luna< CefBase >::checkSubType< CefBinaryValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t CefBinaryValue::GetData(void *, size_t, size_t). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetData(buffer, buffer_size, data_offset);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

CefBinaryValue* LunaTraits< CefBinaryValue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_CefBinaryValue::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool CefBinaryValue::IsValid()
	// bool CefBinaryValue::IsOwned()
	// CefRefPtr< CefBinaryValue > CefBinaryValue::Copy()
	// size_t CefBinaryValue::GetSize()
	// size_t CefBinaryValue::GetData(void * buffer, size_t buffer_size, size_t data_offset)
	// int CefBase::AddRef()
	// int CefBase::Release()
	// int CefBase::GetRefCt()
}

void LunaTraits< CefBinaryValue >::_bind_dtor(CefBinaryValue* obj) {
	CefRefPtr<CefBase> refptr = obj;
}

const char LunaTraits< CefBinaryValue >::className[] = "CefBinaryValue";
const char LunaTraits< CefBinaryValue >::fullName[] = "CefBinaryValue";
const char LunaTraits< CefBinaryValue >::moduleName[] = "cef";
const char* LunaTraits< CefBinaryValue >::parents[] = {"cef.CefBase", 0};
const int LunaTraits< CefBinaryValue >::hash = 46328183;
const int LunaTraits< CefBinaryValue >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< CefBinaryValue >::methods[] = {
	{"Create", &luna_wrapper_CefBinaryValue::_bind_Create},
	{"IsValid", &luna_wrapper_CefBinaryValue::_bind_IsValid},
	{"IsOwned", &luna_wrapper_CefBinaryValue::_bind_IsOwned},
	{"Copy", &luna_wrapper_CefBinaryValue::_bind_Copy},
	{"GetSize", &luna_wrapper_CefBinaryValue::_bind_GetSize},
	{"GetData", &luna_wrapper_CefBinaryValue::_bind_GetData},
	{"fromVoid", &luna_wrapper_CefBinaryValue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CefBinaryValue::_bind_asVoid},
	{"getTable", &luna_wrapper_CefBinaryValue::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< CefBinaryValue >::converters[] = {
	{"CefBase", &luna_wrapper_CefBinaryValue::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< CefBinaryValue >::enumValues[] = {
	{0,0}
};


