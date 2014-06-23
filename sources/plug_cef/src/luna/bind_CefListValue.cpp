#include <plug_common.h>

#include <luna/wrappers/wrapper_CefListValue.h>

class luna_wrapper_CefListValue {
public:
	typedef Luna< CefListValue > luna_t;

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

		CefListValue* self= (CefListValue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CefListValue >::push(L,self,false);
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
		//CefListValue* ptr= dynamic_cast< CefListValue* >(Luna< CefBase >::check(L,1));
		CefListValue* ptr= luna_caster< CefBase, CefListValue >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< CefListValue >::push(L,ptr,false);
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
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_IsReadOnly(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBinary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDictionary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInt(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBinary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50549361) ) return false;
		if( !Luna< CefBase >::checkSubType< CefBinaryValue >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDictionary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50549361) ) return false;
		if( !Luna< CefBase >::checkSubType< CefDictionaryValue >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50549361) ) return false;
		if( !Luna< CefBase >::checkSubType< CefListValue >(L,3) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// CefListValue::CefListValue(lua_Table * data)
	static CefListValue* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in CefListValue::CefListValue(lua_Table * data) function, expected prototype:\nCefListValue::CefListValue(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_CefListValue(L,NULL);
	}


	// Function binds:
	// static CefRefPtr< CefListValue > CefListValue::Create()
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static CefRefPtr< CefListValue > CefListValue::Create() function, expected prototype:\nstatic CefRefPtr< CefListValue > CefListValue::Create()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefRefPtr< CefListValue > lret = CefListValue::Create();
		Luna< CefListValue >::push(L,lret.get(),false);

		return 1;
	}

	// bool CefListValue::IsValid()
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::IsValid() function, expected prototype:\nbool CefListValue::IsValid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::IsValid(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::IsOwned()
	static int _bind_IsOwned(lua_State *L) {
		if (!_lg_typecheck_IsOwned(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::IsOwned() function, expected prototype:\nbool CefListValue::IsOwned()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::IsOwned(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOwned();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::IsReadOnly()
	static int _bind_IsReadOnly(lua_State *L) {
		if (!_lg_typecheck_IsReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::IsReadOnly() function, expected prototype:\nbool CefListValue::IsReadOnly()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::IsReadOnly(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// CefRefPtr< CefListValue > CefListValue::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefListValue > CefListValue::Copy() function, expected prototype:\nCefRefPtr< CefListValue > CefListValue::Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefListValue > CefListValue::Copy(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefListValue > lret = self->Copy();
		Luna< CefListValue >::push(L,lret.get(),false);

		return 1;
	}

	// bool CefListValue::SetSize(size_t size)
	static int _bind_SetSize(lua_State *L) {
		if (!_lg_typecheck_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetSize(size_t size) function, expected prototype:\nbool CefListValue::SetSize(size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetSize(size_t). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetSize(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t CefListValue::GetSize()
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t CefListValue::GetSize() function, expected prototype:\nsize_t CefListValue::GetSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t CefListValue::GetSize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool CefListValue::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::Clear() function, expected prototype:\nbool CefListValue::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::Clear(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Clear();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::Remove(int index)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::Remove(int index) function, expected prototype:\nbool CefListValue::Remove(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::Remove(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Remove(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// cef_value_type_t CefListValue::GetType(int index)
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in cef_value_type_t CefListValue::GetType(int index) function, expected prototype:\ncef_value_type_t CefListValue::GetType(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call cef_value_type_t CefListValue::GetType(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		cef_value_type_t lret = self->GetType(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool CefListValue::GetBool(int index)
	static int _bind_GetBool(lua_State *L) {
		if (!_lg_typecheck_GetBool(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::GetBool(int index) function, expected prototype:\nbool CefListValue::GetBool(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::GetBool(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetBool(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int CefListValue::GetInt(int index)
	static int _bind_GetInt(lua_State *L) {
		if (!_lg_typecheck_GetInt(L)) {
			luaL_error(L, "luna typecheck failed in int CefListValue::GetInt(int index) function, expected prototype:\nint CefListValue::GetInt(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefListValue::GetInt(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetInt(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double CefListValue::GetDouble(int index)
	static int _bind_GetDouble(lua_State *L) {
		if (!_lg_typecheck_GetDouble(L)) {
			luaL_error(L, "luna typecheck failed in double CefListValue::GetDouble(int index) function, expected prototype:\ndouble CefListValue::GetDouble(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double CefListValue::GetDouble(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetDouble(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// CefString CefListValue::GetString(int index)
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luaL_error(L, "luna typecheck failed in CefString CefListValue::GetString(int index) function, expected prototype:\nCefString CefListValue::GetString(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString CefListValue::GetString(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->GetString(index);
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// CefRefPtr< CefBinaryValue > CefListValue::GetBinary(int index)
	static int _bind_GetBinary(lua_State *L) {
		if (!_lg_typecheck_GetBinary(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefBinaryValue > CefListValue::GetBinary(int index) function, expected prototype:\nCefRefPtr< CefBinaryValue > CefListValue::GetBinary(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefBinaryValue > CefListValue::GetBinary(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefBinaryValue > lret = self->GetBinary(index);
		Luna< CefBinaryValue >::push(L,lret.get(),false);

		return 1;
	}

	// CefRefPtr< CefDictionaryValue > CefListValue::GetDictionary(int index)
	static int _bind_GetDictionary(lua_State *L) {
		if (!_lg_typecheck_GetDictionary(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefDictionaryValue > CefListValue::GetDictionary(int index) function, expected prototype:\nCefRefPtr< CefDictionaryValue > CefListValue::GetDictionary(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefDictionaryValue > CefListValue::GetDictionary(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefDictionaryValue > lret = self->GetDictionary(index);
		Luna< CefDictionaryValue >::push(L,lret.get(),false);

		return 1;
	}

	// CefRefPtr< CefListValue > CefListValue::GetList(int index)
	static int _bind_GetList(lua_State *L) {
		if (!_lg_typecheck_GetList(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefListValue > CefListValue::GetList(int index) function, expected prototype:\nCefRefPtr< CefListValue > CefListValue::GetList(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefListValue > CefListValue::GetList(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefListValue > lret = self->GetList(index);
		Luna< CefListValue >::push(L,lret.get(),false);

		return 1;
	}

	// bool CefListValue::SetNull(int index)
	static int _bind_SetNull(lua_State *L) {
		if (!_lg_typecheck_SetNull(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetNull(int index) function, expected prototype:\nbool CefListValue::SetNull(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetNull(int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetNull(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetBool(int index, bool value)
	static int _bind_SetBool(lua_State *L) {
		if (!_lg_typecheck_SetBool(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetBool(int index, bool value) function, expected prototype:\nbool CefListValue::SetBool(int index, bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		bool value=(bool)(lua_toboolean(L,3)==1);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetBool(int, bool). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBool(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetInt(int index, int value)
	static int _bind_SetInt(lua_State *L) {
		if (!_lg_typecheck_SetInt(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetInt(int index, int value) function, expected prototype:\nbool CefListValue::SetInt(int index, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		int value=(int)lua_tointeger(L,3);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetInt(int, int). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetInt(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetDouble(int index, double value)
	static int _bind_SetDouble(lua_State *L) {
		if (!_lg_typecheck_SetDouble(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetDouble(int index, double value) function, expected prototype:\nbool CefListValue::SetDouble(int index, double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		double value=(double)lua_tonumber(L,3);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetDouble(int, double). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDouble(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetString(int index, const CefString & value)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetString(int index, const CefString & value) function, expected prototype:\nbool CefListValue::SetString(int index, const CefString & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		CefString value; std::string value_str(lua_tostring(L,3),lua_objlen(L,3));
		value.FromString(value_str);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetString(int, const CefString &). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetString(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetBinary(int index, CefRefPtr< CefBinaryValue > value)
	static int _bind_SetBinary(lua_State *L) {
		if (!_lg_typecheck_SetBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetBinary(int index, CefRefPtr< CefBinaryValue > value) function, expected prototype:\nbool CefListValue::SetBinary(int index, CefRefPtr< CefBinaryValue > value)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		CefRefPtr< CefBinaryValue > value = Luna< CefBase >::checkSubType< CefBinaryValue >(L,3);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetBinary(int, CefRefPtr< CefBinaryValue >). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBinary(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetDictionary(int index, CefRefPtr< CefDictionaryValue > value)
	static int _bind_SetDictionary(lua_State *L) {
		if (!_lg_typecheck_SetDictionary(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetDictionary(int index, CefRefPtr< CefDictionaryValue > value) function, expected prototype:\nbool CefListValue::SetDictionary(int index, CefRefPtr< CefDictionaryValue > value)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		CefRefPtr< CefDictionaryValue > value = Luna< CefBase >::checkSubType< CefDictionaryValue >(L,3);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetDictionary(int, CefRefPtr< CefDictionaryValue >). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDictionary(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefListValue::SetList(int index, CefRefPtr< CefListValue > value)
	static int _bind_SetList(lua_State *L) {
		if (!_lg_typecheck_SetList(L)) {
			luaL_error(L, "luna typecheck failed in bool CefListValue::SetList(int index, CefRefPtr< CefListValue > value) function, expected prototype:\nbool CefListValue::SetList(int index, CefRefPtr< CefListValue > value)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);
		CefRefPtr< CefListValue > value = Luna< CefBase >::checkSubType< CefListValue >(L,3);

		CefListValue* self=Luna< CefBase >::checkSubType< CefListValue >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefListValue::SetList(int, CefRefPtr< CefListValue >). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetList(index, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

CefListValue* LunaTraits< CefListValue >::_bind_ctor(lua_State *L) {
	return luna_wrapper_CefListValue::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool CefListValue::IsValid()
	// bool CefListValue::IsOwned()
	// bool CefListValue::IsReadOnly()
	// CefRefPtr< CefListValue > CefListValue::Copy()
	// bool CefListValue::SetSize(size_t size)
	// size_t CefListValue::GetSize()
	// bool CefListValue::Clear()
	// bool CefListValue::Remove(int index)
	// cef_value_type_t CefListValue::GetType(int index)
	// bool CefListValue::GetBool(int index)
	// int CefListValue::GetInt(int index)
	// double CefListValue::GetDouble(int index)
	// CefString CefListValue::GetString(int index)
	// CefRefPtr< CefBinaryValue > CefListValue::GetBinary(int index)
	// CefRefPtr< CefDictionaryValue > CefListValue::GetDictionary(int index)
	// CefRefPtr< CefListValue > CefListValue::GetList(int index)
	// bool CefListValue::SetNull(int index)
	// bool CefListValue::SetBool(int index, bool value)
	// bool CefListValue::SetInt(int index, int value)
	// bool CefListValue::SetDouble(int index, double value)
	// bool CefListValue::SetString(int index, const CefString & value)
	// bool CefListValue::SetBinary(int index, CefRefPtr< CefBinaryValue > value)
	// bool CefListValue::SetDictionary(int index, CefRefPtr< CefDictionaryValue > value)
	// bool CefListValue::SetList(int index, CefRefPtr< CefListValue > value)
	// int CefBase::AddRef()
	// int CefBase::Release()
	// int CefBase::GetRefCt()
}

void LunaTraits< CefListValue >::_bind_dtor(CefListValue* obj) {
	CefRefPtr<CefBase> refptr = obj;
}

const char LunaTraits< CefListValue >::className[] = "CefListValue";
const char LunaTraits< CefListValue >::fullName[] = "CefListValue";
const char LunaTraits< CefListValue >::moduleName[] = "cef";
const char* LunaTraits< CefListValue >::parents[] = {"cef.CefBase", 0};
const int LunaTraits< CefListValue >::hash = 94964280;
const int LunaTraits< CefListValue >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< CefListValue >::methods[] = {
	{"Create", &luna_wrapper_CefListValue::_bind_Create},
	{"IsValid", &luna_wrapper_CefListValue::_bind_IsValid},
	{"IsOwned", &luna_wrapper_CefListValue::_bind_IsOwned},
	{"IsReadOnly", &luna_wrapper_CefListValue::_bind_IsReadOnly},
	{"Copy", &luna_wrapper_CefListValue::_bind_Copy},
	{"SetSize", &luna_wrapper_CefListValue::_bind_SetSize},
	{"GetSize", &luna_wrapper_CefListValue::_bind_GetSize},
	{"Clear", &luna_wrapper_CefListValue::_bind_Clear},
	{"Remove", &luna_wrapper_CefListValue::_bind_Remove},
	{"GetType", &luna_wrapper_CefListValue::_bind_GetType},
	{"GetBool", &luna_wrapper_CefListValue::_bind_GetBool},
	{"GetInt", &luna_wrapper_CefListValue::_bind_GetInt},
	{"GetDouble", &luna_wrapper_CefListValue::_bind_GetDouble},
	{"GetString", &luna_wrapper_CefListValue::_bind_GetString},
	{"GetBinary", &luna_wrapper_CefListValue::_bind_GetBinary},
	{"GetDictionary", &luna_wrapper_CefListValue::_bind_GetDictionary},
	{"GetList", &luna_wrapper_CefListValue::_bind_GetList},
	{"SetNull", &luna_wrapper_CefListValue::_bind_SetNull},
	{"SetBool", &luna_wrapper_CefListValue::_bind_SetBool},
	{"SetInt", &luna_wrapper_CefListValue::_bind_SetInt},
	{"SetDouble", &luna_wrapper_CefListValue::_bind_SetDouble},
	{"SetString", &luna_wrapper_CefListValue::_bind_SetString},
	{"SetBinary", &luna_wrapper_CefListValue::_bind_SetBinary},
	{"SetDictionary", &luna_wrapper_CefListValue::_bind_SetDictionary},
	{"SetList", &luna_wrapper_CefListValue::_bind_SetList},
	{"fromVoid", &luna_wrapper_CefListValue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CefListValue::_bind_asVoid},
	{"getTable", &luna_wrapper_CefListValue::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< CefListValue >::converters[] = {
	{"CefBase", &luna_wrapper_CefListValue::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< CefListValue >::enumValues[] = {
	{0,0}
};


