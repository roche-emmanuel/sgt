#include <plug_common.h>

#include <luna/wrappers/wrapper_CefDictionaryValue.h>

class luna_wrapper_CefDictionaryValue {
public:
	typedef Luna< CefDictionaryValue > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<CefDictionaryValue,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46486223) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CefDictionaryValue*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefDictionaryValue* rhs =(Luna< CefDictionaryValue >::check(L,2));
		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
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

		CefDictionaryValue* self= (CefDictionaryValue*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CefDictionaryValue >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46486223) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CefDictionaryValue >::check(L,1));
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

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CefDictionaryValue");
		
		return luna_dynamicCast(L,converters,"CefDictionaryValue",name);
	}


	// Constructor checkers:

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
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_HasKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetKeys(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,64498953) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDouble(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBinary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDictionary(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBool(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInt(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDouble(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( (lua_type(L,3)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBinary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,LunaTraits< LunaTraits< CefBinaryValue >::parent_t >::hash) ) return false;
		if( !Luna< LunaTraits< CefBinaryValue >::parent_t >::checkSubType< CefBinaryValue >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDictionary(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,LunaTraits< LunaTraits< CefDictionaryValue >::parent_t >::hash) ) return false;
		if( !Luna< LunaTraits< CefDictionaryValue >::parent_t >::checkSubType< CefDictionaryValue >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TSTRING) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,LunaTraits< LunaTraits< CefListValue >::parent_t >::hash) ) return false;
		if( !Luna< LunaTraits< CefListValue >::parent_t >::checkSubType< CefListValue >(L,3) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static CefRefPtr< CefDictionaryValue > CefDictionaryValue::Create()
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static CefRefPtr< CefDictionaryValue > CefDictionaryValue::Create() function, expected prototype:\nstatic CefRefPtr< CefDictionaryValue > CefDictionaryValue::Create()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefRefPtr< CefDictionaryValue > lret = CefDictionaryValue::Create();
		if(lret.get()) { 
	Luna< CefDictionaryValue >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// bool CefDictionaryValue::IsValid()
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::IsValid() function, expected prototype:\nbool CefDictionaryValue::IsValid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::IsValid(). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::IsOwned()
	static int _bind_IsOwned(lua_State *L) {
		if (!_lg_typecheck_IsOwned(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::IsOwned() function, expected prototype:\nbool CefDictionaryValue::IsOwned()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::IsOwned(). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOwned();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::IsReadOnly()
	static int _bind_IsReadOnly(lua_State *L) {
		if (!_lg_typecheck_IsReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::IsReadOnly() function, expected prototype:\nbool CefDictionaryValue::IsReadOnly()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::IsReadOnly(). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// CefRefPtr< CefDictionaryValue > CefDictionaryValue::Copy(bool exclude_empty_children)
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefDictionaryValue > CefDictionaryValue::Copy(bool exclude_empty_children) function, expected prototype:\nCefRefPtr< CefDictionaryValue > CefDictionaryValue::Copy(bool exclude_empty_children)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool exclude_empty_children=(bool)(lua_toboolean(L,2)==1);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefDictionaryValue > CefDictionaryValue::Copy(bool). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefDictionaryValue > lret = self->Copy(exclude_empty_children);
		if(lret.get()) { 
	Luna< CefDictionaryValue >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// size_t CefDictionaryValue::GetSize()
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t CefDictionaryValue::GetSize() function, expected prototype:\nsize_t CefDictionaryValue::GetSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t CefDictionaryValue::GetSize(). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool CefDictionaryValue::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::Clear() function, expected prototype:\nbool CefDictionaryValue::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::Clear(). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Clear();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::HasKey(const CefString & key)
	static int _bind_HasKey(lua_State *L) {
		if (!_lg_typecheck_HasKey(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::HasKey(const CefString & key) function, expected prototype:\nbool CefDictionaryValue::HasKey(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::HasKey(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasKey(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::GetKeys(CefDictionaryValue::KeyList & keys)
	static int _bind_GetKeys(lua_State *L) {
		if (!_lg_typecheck_GetKeys(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::GetKeys(CefDictionaryValue::KeyList & keys) function, expected prototype:\nbool CefDictionaryValue::GetKeys(CefDictionaryValue::KeyList & keys)\nClass arguments details:\narg 1 ID = 39311454\n\n%s",luna_dumpStack(L).c_str());
		}

		CefDictionaryValue::KeyList* keys_ptr=(Luna< std::vector< CefString > >::checkSubType< CefDictionaryValue::KeyList >(L,2));
		if( !keys_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg keys in CefDictionaryValue::GetKeys function");
		}
		CefDictionaryValue::KeyList & keys=*keys_ptr;

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::GetKeys(CefDictionaryValue::KeyList &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetKeys(keys);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::Remove(const CefString & key)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::Remove(const CefString & key) function, expected prototype:\nbool CefDictionaryValue::Remove(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::Remove(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Remove(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// cef_value_type_t CefDictionaryValue::GetType(const CefString & key)
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in cef_value_type_t CefDictionaryValue::GetType(const CefString & key) function, expected prototype:\ncef_value_type_t CefDictionaryValue::GetType(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call cef_value_type_t CefDictionaryValue::GetType(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		cef_value_type_t lret = self->GetType(key);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool CefDictionaryValue::GetBool(const CefString & key)
	static int _bind_GetBool(lua_State *L) {
		if (!_lg_typecheck_GetBool(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::GetBool(const CefString & key) function, expected prototype:\nbool CefDictionaryValue::GetBool(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::GetBool(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetBool(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int CefDictionaryValue::GetInt(const CefString & key)
	static int _bind_GetInt(lua_State *L) {
		if (!_lg_typecheck_GetInt(L)) {
			luaL_error(L, "luna typecheck failed in int CefDictionaryValue::GetInt(const CefString & key) function, expected prototype:\nint CefDictionaryValue::GetInt(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefDictionaryValue::GetInt(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetInt(key);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double CefDictionaryValue::GetDouble(const CefString & key)
	static int _bind_GetDouble(lua_State *L) {
		if (!_lg_typecheck_GetDouble(L)) {
			luaL_error(L, "luna typecheck failed in double CefDictionaryValue::GetDouble(const CefString & key) function, expected prototype:\ndouble CefDictionaryValue::GetDouble(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double CefDictionaryValue::GetDouble(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->GetDouble(key);
		lua_pushnumber(L,lret);

		return 1;
	}

	// CefString CefDictionaryValue::GetString(const CefString & key)
	static int _bind_GetString(lua_State *L) {
		if (!_lg_typecheck_GetString(L)) {
			luaL_error(L, "luna typecheck failed in CefString CefDictionaryValue::GetString(const CefString & key) function, expected prototype:\nCefString CefDictionaryValue::GetString(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString CefDictionaryValue::GetString(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->GetString(key);
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// CefRefPtr< CefBinaryValue > CefDictionaryValue::GetBinary(const CefString & key)
	static int _bind_GetBinary(lua_State *L) {
		if (!_lg_typecheck_GetBinary(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefBinaryValue > CefDictionaryValue::GetBinary(const CefString & key) function, expected prototype:\nCefRefPtr< CefBinaryValue > CefDictionaryValue::GetBinary(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefBinaryValue > CefDictionaryValue::GetBinary(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefBinaryValue > lret = self->GetBinary(key);
		if(lret.get()) { 
	Luna< CefBinaryValue >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// CefRefPtr< CefDictionaryValue > CefDictionaryValue::GetDictionary(const CefString & key)
	static int _bind_GetDictionary(lua_State *L) {
		if (!_lg_typecheck_GetDictionary(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefDictionaryValue > CefDictionaryValue::GetDictionary(const CefString & key) function, expected prototype:\nCefRefPtr< CefDictionaryValue > CefDictionaryValue::GetDictionary(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefDictionaryValue > CefDictionaryValue::GetDictionary(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefDictionaryValue > lret = self->GetDictionary(key);
		if(lret.get()) { 
	Luna< CefDictionaryValue >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// CefRefPtr< CefListValue > CefDictionaryValue::GetList(const CefString & key)
	static int _bind_GetList(lua_State *L) {
		if (!_lg_typecheck_GetList(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefListValue > CefDictionaryValue::GetList(const CefString & key) function, expected prototype:\nCefRefPtr< CefListValue > CefDictionaryValue::GetList(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefListValue > CefDictionaryValue::GetList(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefListValue > lret = self->GetList(key);
		if(lret.get()) { 
	Luna< CefListValue >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// bool CefDictionaryValue::SetNull(const CefString & key)
	static int _bind_SetNull(lua_State *L) {
		if (!_lg_typecheck_SetNull(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetNull(const CefString & key) function, expected prototype:\nbool CefDictionaryValue::SetNull(const CefString & key)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetNull(const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetNull(key);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetBool(const CefString & key, bool value)
	static int _bind_SetBool(lua_State *L) {
		if (!_lg_typecheck_SetBool(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetBool(const CefString & key, bool value) function, expected prototype:\nbool CefDictionaryValue::SetBool(const CefString & key, bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		bool value=(bool)(lua_toboolean(L,3)==1);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetBool(const CefString &, bool). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBool(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetInt(const CefString & key, int value)
	static int _bind_SetInt(lua_State *L) {
		if (!_lg_typecheck_SetInt(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetInt(const CefString & key, int value) function, expected prototype:\nbool CefDictionaryValue::SetInt(const CefString & key, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		int value=(int)lua_tointeger(L,3);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetInt(const CefString &, int). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetInt(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetDouble(const CefString & key, double value)
	static int _bind_SetDouble(lua_State *L) {
		if (!_lg_typecheck_SetDouble(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetDouble(const CefString & key, double value) function, expected prototype:\nbool CefDictionaryValue::SetDouble(const CefString & key, double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		double value=(double)lua_tonumber(L,3);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetDouble(const CefString &, double). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDouble(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetString(const CefString & key, const CefString & value)
	static int _bind_SetString(lua_State *L) {
		if (!_lg_typecheck_SetString(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetString(const CefString & key, const CefString & value) function, expected prototype:\nbool CefDictionaryValue::SetString(const CefString & key, const CefString & value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		CefString value; std::string value_str(lua_tostring(L,3),lua_objlen(L,3));
		value.FromString(value_str);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetString(const CefString &, const CefString &). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetString(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetBinary(const CefString & key, CefRefPtr< CefBinaryValue > value)
	static int _bind_SetBinary(lua_State *L) {
		if (!_lg_typecheck_SetBinary(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetBinary(const CefString & key, CefRefPtr< CefBinaryValue > value) function, expected prototype:\nbool CefDictionaryValue::SetBinary(const CefString & key, CefRefPtr< CefBinaryValue > value)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		CefRefPtr< CefBinaryValue > value = Luna< LunaTraits< CefBinaryValue >::parent_t >::checkSubType< CefBinaryValue >(L,3);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetBinary(const CefString &, CefRefPtr< CefBinaryValue >). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBinary(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetDictionary(const CefString & key, CefRefPtr< CefDictionaryValue > value)
	static int _bind_SetDictionary(lua_State *L) {
		if (!_lg_typecheck_SetDictionary(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetDictionary(const CefString & key, CefRefPtr< CefDictionaryValue > value) function, expected prototype:\nbool CefDictionaryValue::SetDictionary(const CefString & key, CefRefPtr< CefDictionaryValue > value)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		CefRefPtr< CefDictionaryValue > value = Luna< LunaTraits< CefDictionaryValue >::parent_t >::checkSubType< CefDictionaryValue >(L,3);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetDictionary(const CefString &, CefRefPtr< CefDictionaryValue >). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetDictionary(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefDictionaryValue::SetList(const CefString & key, CefRefPtr< CefListValue > value)
	static int _bind_SetList(lua_State *L) {
		if (!_lg_typecheck_SetList(L)) {
			luaL_error(L, "luna typecheck failed in bool CefDictionaryValue::SetList(const CefString & key, CefRefPtr< CefListValue > value) function, expected prototype:\nbool CefDictionaryValue::SetList(const CefString & key, CefRefPtr< CefListValue > value)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString key; std::string key_str(lua_tostring(L,2),lua_objlen(L,2));
		key.FromString(key_str);
		CefRefPtr< CefListValue > value = Luna< LunaTraits< CefListValue >::parent_t >::checkSubType< CefListValue >(L,3);

		CefDictionaryValue* self=(Luna< CefDictionaryValue >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefDictionaryValue::SetList(const CefString &, CefRefPtr< CefListValue >). Got : '%s'\n%s",typeid(Luna< CefDictionaryValue >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetList(key, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

CefDictionaryValue* LunaTraits< CefDictionaryValue >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool CefDictionaryValue::IsValid()
	// bool CefDictionaryValue::IsOwned()
	// bool CefDictionaryValue::IsReadOnly()
	// CefRefPtr< CefDictionaryValue > CefDictionaryValue::Copy(bool exclude_empty_children)
	// size_t CefDictionaryValue::GetSize()
	// bool CefDictionaryValue::Clear()
	// bool CefDictionaryValue::HasKey(const CefString & key)
	// bool CefDictionaryValue::GetKeys(CefDictionaryValue::KeyList & keys)
	// bool CefDictionaryValue::Remove(const CefString & key)
	// cef_value_type_t CefDictionaryValue::GetType(const CefString & key)
	// bool CefDictionaryValue::GetBool(const CefString & key)
	// int CefDictionaryValue::GetInt(const CefString & key)
	// double CefDictionaryValue::GetDouble(const CefString & key)
	// CefString CefDictionaryValue::GetString(const CefString & key)
	// CefRefPtr< CefBinaryValue > CefDictionaryValue::GetBinary(const CefString & key)
	// CefRefPtr< CefDictionaryValue > CefDictionaryValue::GetDictionary(const CefString & key)
	// CefRefPtr< CefListValue > CefDictionaryValue::GetList(const CefString & key)
	// bool CefDictionaryValue::SetNull(const CefString & key)
	// bool CefDictionaryValue::SetBool(const CefString & key, bool value)
	// bool CefDictionaryValue::SetInt(const CefString & key, int value)
	// bool CefDictionaryValue::SetDouble(const CefString & key, double value)
	// bool CefDictionaryValue::SetString(const CefString & key, const CefString & value)
	// bool CefDictionaryValue::SetBinary(const CefString & key, CefRefPtr< CefBinaryValue > value)
	// bool CefDictionaryValue::SetDictionary(const CefString & key, CefRefPtr< CefDictionaryValue > value)
	// bool CefDictionaryValue::SetList(const CefString & key, CefRefPtr< CefListValue > value)
}

void LunaTraits< CefDictionaryValue >::_bind_dtor(CefDictionaryValue* obj) {
	CefRefPtr<CefDictionaryValue> refptr = obj;
}

const char LunaTraits< CefDictionaryValue >::className[] = "CefDictionaryValue";
const char LunaTraits< CefDictionaryValue >::fullName[] = "CefDictionaryValue";
const char LunaTraits< CefDictionaryValue >::moduleName[] = "cef";
const char* LunaTraits< CefDictionaryValue >::parents[] = {0};
const int LunaTraits< CefDictionaryValue >::hash = 46486223;
const int LunaTraits< CefDictionaryValue >::uniqueIDs[] = {46486223,0};

luna_RegType LunaTraits< CefDictionaryValue >::methods[] = {
	{"Create", &luna_wrapper_CefDictionaryValue::_bind_Create},
	{"IsValid", &luna_wrapper_CefDictionaryValue::_bind_IsValid},
	{"IsOwned", &luna_wrapper_CefDictionaryValue::_bind_IsOwned},
	{"IsReadOnly", &luna_wrapper_CefDictionaryValue::_bind_IsReadOnly},
	{"Copy", &luna_wrapper_CefDictionaryValue::_bind_Copy},
	{"GetSize", &luna_wrapper_CefDictionaryValue::_bind_GetSize},
	{"Clear", &luna_wrapper_CefDictionaryValue::_bind_Clear},
	{"HasKey", &luna_wrapper_CefDictionaryValue::_bind_HasKey},
	{"GetKeys", &luna_wrapper_CefDictionaryValue::_bind_GetKeys},
	{"Remove", &luna_wrapper_CefDictionaryValue::_bind_Remove},
	{"GetType", &luna_wrapper_CefDictionaryValue::_bind_GetType},
	{"GetBool", &luna_wrapper_CefDictionaryValue::_bind_GetBool},
	{"GetInt", &luna_wrapper_CefDictionaryValue::_bind_GetInt},
	{"GetDouble", &luna_wrapper_CefDictionaryValue::_bind_GetDouble},
	{"GetString", &luna_wrapper_CefDictionaryValue::_bind_GetString},
	{"GetBinary", &luna_wrapper_CefDictionaryValue::_bind_GetBinary},
	{"GetDictionary", &luna_wrapper_CefDictionaryValue::_bind_GetDictionary},
	{"GetList", &luna_wrapper_CefDictionaryValue::_bind_GetList},
	{"SetNull", &luna_wrapper_CefDictionaryValue::_bind_SetNull},
	{"SetBool", &luna_wrapper_CefDictionaryValue::_bind_SetBool},
	{"SetInt", &luna_wrapper_CefDictionaryValue::_bind_SetInt},
	{"SetDouble", &luna_wrapper_CefDictionaryValue::_bind_SetDouble},
	{"SetString", &luna_wrapper_CefDictionaryValue::_bind_SetString},
	{"SetBinary", &luna_wrapper_CefDictionaryValue::_bind_SetBinary},
	{"SetDictionary", &luna_wrapper_CefDictionaryValue::_bind_SetDictionary},
	{"SetList", &luna_wrapper_CefDictionaryValue::_bind_SetList},
	{"dynCast", &luna_wrapper_CefDictionaryValue::_bind_dynCast},
	{"__eq", &luna_wrapper_CefDictionaryValue::_bind___eq},
	{"fromVoid", &luna_wrapper_CefDictionaryValue::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CefDictionaryValue::_bind_asVoid},
	{"getTable", &luna_wrapper_CefDictionaryValue::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< CefDictionaryValue >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CefDictionaryValue >::enumValues[] = {
	{0,0}
};


