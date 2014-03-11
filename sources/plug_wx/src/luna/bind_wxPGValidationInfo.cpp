#include <plug_common.h>

class luna_wrapper_wxPGValidationInfo {
public:
	typedef Luna< wxPGValidationInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78254748) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPGValidationInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPGValidationInfo* rhs =(Luna< wxPGValidationInfo >::check(L,2));
		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
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

		wxPGValidationInfo* self= (wxPGValidationInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGValidationInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78254748) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPGValidationInfo >::check(L,1));
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

		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPGValidationInfo");
		
		return luna_dynamicCast(L,converters,"wxPGValidationInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFailureMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFailureBehavior(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFailureMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned char wxPGValidationInfo::GetFailureBehavior()
	static int _bind_GetFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_GetFailureBehavior(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char wxPGValidationInfo::GetFailureBehavior() function, expected prototype:\nunsigned char wxPGValidationInfo::GetFailureBehavior()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char wxPGValidationInfo::GetFailureBehavior(). Got : '%s'\n%s",typeid(Luna< wxPGValidationInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->GetFailureBehavior();
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// const wxString & wxPGValidationInfo::GetFailureMessage() const
	static int _bind_GetFailureMessage(lua_State *L) {
		if (!_lg_typecheck_GetFailureMessage(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPGValidationInfo::GetFailureMessage() const function, expected prototype:\nconst wxString & wxPGValidationInfo::GetFailureMessage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPGValidationInfo::GetFailureMessage() const. Got : '%s'\n%s",typeid(Luna< wxPGValidationInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetFailureMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPGValidationInfo::SetFailureBehavior(unsigned char failureBehavior)
	static int _bind_SetFailureBehavior(lua_State *L) {
		if (!_lg_typecheck_SetFailureBehavior(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGValidationInfo::SetFailureBehavior(unsigned char failureBehavior) function, expected prototype:\nvoid wxPGValidationInfo::SetFailureBehavior(unsigned char failureBehavior)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char failureBehavior = (unsigned char)(lua_tointeger(L,2));

		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGValidationInfo::SetFailureBehavior(unsigned char). Got : '%s'\n%s",typeid(Luna< wxPGValidationInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFailureBehavior(failureBehavior);

		return 0;
	}

	// void wxPGValidationInfo::SetFailureMessage(const wxString & message)
	static int _bind_SetFailureMessage(lua_State *L) {
		if (!_lg_typecheck_SetFailureMessage(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGValidationInfo::SetFailureMessage(const wxString & message) function, expected prototype:\nvoid wxPGValidationInfo::SetFailureMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxPGValidationInfo* self=(Luna< wxPGValidationInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGValidationInfo::SetFailureMessage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxPGValidationInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFailureMessage(message);

		return 0;
	}


	// Operator binds:

};

wxPGValidationInfo* LunaTraits< wxPGValidationInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPGValidationInfo >::_bind_dtor(wxPGValidationInfo* obj) {
	delete obj;
}

const char LunaTraits< wxPGValidationInfo >::className[] = "wxPGValidationInfo";
const char LunaTraits< wxPGValidationInfo >::fullName[] = "wxPGValidationInfo";
const char LunaTraits< wxPGValidationInfo >::moduleName[] = "wx";
const char* LunaTraits< wxPGValidationInfo >::parents[] = {0};
const int LunaTraits< wxPGValidationInfo >::hash = 78254748;
const int LunaTraits< wxPGValidationInfo >::uniqueIDs[] = {78254748,0};

luna_RegType LunaTraits< wxPGValidationInfo >::methods[] = {
	{"GetFailureBehavior", &luna_wrapper_wxPGValidationInfo::_bind_GetFailureBehavior},
	{"GetFailureMessage", &luna_wrapper_wxPGValidationInfo::_bind_GetFailureMessage},
	{"SetFailureBehavior", &luna_wrapper_wxPGValidationInfo::_bind_SetFailureBehavior},
	{"SetFailureMessage", &luna_wrapper_wxPGValidationInfo::_bind_SetFailureMessage},
	{"dynCast", &luna_wrapper_wxPGValidationInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPGValidationInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPGValidationInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGValidationInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGValidationInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGValidationInfo >::enumValues[] = {
	{0,0}
};


