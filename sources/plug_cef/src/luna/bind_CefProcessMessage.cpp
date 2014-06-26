#include <plug_common.h>

#include <luna/wrappers/wrapper_CefProcessMessage.h>

class luna_wrapper_CefProcessMessage {
public:
	typedef Luna< CefProcessMessage > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<CefProcessMessage,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11478285) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CefProcessMessage*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefProcessMessage* rhs =(Luna< CefProcessMessage >::check(L,2));
		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
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

		CefProcessMessage* self= (CefProcessMessage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CefProcessMessage >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11478285) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CefProcessMessage >::check(L,1));
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

		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CefProcessMessage");
		
		return luna_dynamicCast(L,converters,"CefProcessMessage",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TSTRING) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
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

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetArgumentList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static CefRefPtr< CefProcessMessage > CefProcessMessage::Create(const CefString & name)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static CefRefPtr< CefProcessMessage > CefProcessMessage::Create(const CefString & name) function, expected prototype:\nstatic CefRefPtr< CefProcessMessage > CefProcessMessage::Create(const CefString & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		CefString name; std::string name_str(lua_tostring(L,1),lua_objlen(L,1));
		name.FromString(name_str);

		CefRefPtr< CefProcessMessage > lret = CefProcessMessage::Create(name);
		if(lret.get()) { 
	Luna< CefProcessMessage >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// bool CefProcessMessage::IsValid()
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool CefProcessMessage::IsValid() function, expected prototype:\nbool CefProcessMessage::IsValid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefProcessMessage::IsValid(). Got : '%s'\n%s",typeid(Luna< CefProcessMessage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool CefProcessMessage::IsReadOnly()
	static int _bind_IsReadOnly(lua_State *L) {
		if (!_lg_typecheck_IsReadOnly(L)) {
			luaL_error(L, "luna typecheck failed in bool CefProcessMessage::IsReadOnly() function, expected prototype:\nbool CefProcessMessage::IsReadOnly()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool CefProcessMessage::IsReadOnly(). Got : '%s'\n%s",typeid(Luna< CefProcessMessage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsReadOnly();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// CefRefPtr< CefProcessMessage > CefProcessMessage::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefProcessMessage > CefProcessMessage::Copy() function, expected prototype:\nCefRefPtr< CefProcessMessage > CefProcessMessage::Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefProcessMessage > CefProcessMessage::Copy(). Got : '%s'\n%s",typeid(Luna< CefProcessMessage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefProcessMessage > lret = self->Copy();
		if(lret.get()) { 
	Luna< CefProcessMessage >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// CefString CefProcessMessage::GetName()
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in CefString CefProcessMessage::GetName() function, expected prototype:\nCefString CefProcessMessage::GetName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefString CefProcessMessage::GetName(). Got : '%s'\n%s",typeid(Luna< CefProcessMessage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefString lret = self->GetName();
		std::string lret_str = lret.ToString();
		lua_pushlstring(L,lret_str.data(),lret_str.size());

		return 1;
	}

	// CefRefPtr< CefListValue > CefProcessMessage::GetArgumentList()
	static int _bind_GetArgumentList(lua_State *L) {
		if (!_lg_typecheck_GetArgumentList(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefListValue > CefProcessMessage::GetArgumentList() function, expected prototype:\nCefRefPtr< CefListValue > CefProcessMessage::GetArgumentList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefProcessMessage* self=(Luna< CefProcessMessage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefListValue > CefProcessMessage::GetArgumentList(). Got : '%s'\n%s",typeid(Luna< CefProcessMessage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefListValue > lret = self->GetArgumentList();
		if(lret.get()) { 
	Luna< CefListValue >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}


	// Operator binds:

};

CefProcessMessage* LunaTraits< CefProcessMessage >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool CefProcessMessage::IsValid()
	// bool CefProcessMessage::IsReadOnly()
	// CefRefPtr< CefProcessMessage > CefProcessMessage::Copy()
	// CefString CefProcessMessage::GetName()
	// CefRefPtr< CefListValue > CefProcessMessage::GetArgumentList()
}

void LunaTraits< CefProcessMessage >::_bind_dtor(CefProcessMessage* obj) {
	CefRefPtr<CefProcessMessage> refptr = obj;
}

const char LunaTraits< CefProcessMessage >::className[] = "CefProcessMessage";
const char LunaTraits< CefProcessMessage >::fullName[] = "CefProcessMessage";
const char LunaTraits< CefProcessMessage >::moduleName[] = "cef";
const char* LunaTraits< CefProcessMessage >::parents[] = {0};
const int LunaTraits< CefProcessMessage >::hash = 11478285;
const int LunaTraits< CefProcessMessage >::uniqueIDs[] = {11478285,0};

luna_RegType LunaTraits< CefProcessMessage >::methods[] = {
	{"Create", &luna_wrapper_CefProcessMessage::_bind_Create},
	{"IsValid", &luna_wrapper_CefProcessMessage::_bind_IsValid},
	{"IsReadOnly", &luna_wrapper_CefProcessMessage::_bind_IsReadOnly},
	{"Copy", &luna_wrapper_CefProcessMessage::_bind_Copy},
	{"GetName", &luna_wrapper_CefProcessMessage::_bind_GetName},
	{"GetArgumentList", &luna_wrapper_CefProcessMessage::_bind_GetArgumentList},
	{"dynCast", &luna_wrapper_CefProcessMessage::_bind_dynCast},
	{"__eq", &luna_wrapper_CefProcessMessage::_bind___eq},
	{"fromVoid", &luna_wrapper_CefProcessMessage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CefProcessMessage::_bind_asVoid},
	{"getTable", &luna_wrapper_CefProcessMessage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< CefProcessMessage >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CefProcessMessage >::enumValues[] = {
	{0,0}
};


