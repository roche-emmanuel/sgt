#include <plug_common.h>

#include <luna/wrappers/wrapper_wxConnectionBase.h>

class luna_wrapper_wxConnectionBase {
public:
	typedef Luna< wxConnectionBase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxConnectionBase* self= (wxConnectionBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxConnectionBase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxConnectionBase* ptr= dynamic_cast< wxConnectionBase* >(Luna< wxObject >::check(L,1));
		wxConnectionBase* ptr= luna_caster< wxObject, wxConnectionBase >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxConnectionBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Request(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartAdvise(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StopAdvise(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Disconnect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const void * wxConnectionBase::Request(const wxString & arg1, size_t * arg2, wxIPCFormat arg3)
	static int _bind_Request(lua_State *L) {
		if (!_lg_typecheck_Request(L)) {
			luaL_error(L, "luna typecheck failed in const void * wxConnectionBase::Request(const wxString & arg1, size_t * arg2, wxIPCFormat arg3) function, expected prototype:\nconst void * wxConnectionBase::Request(const wxString & arg1, size_t * arg2, wxIPCFormat arg3)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString _arg1(lua_tostring(L,2),lua_objlen(L,2));
		size_t* _arg2=(size_t*)Luna< void >::check(L,3);
		wxIPCFormat _arg3=(wxIPCFormat)lua_tointeger(L,4);

		wxConnectionBase* self=Luna< wxObject >::checkSubType< wxConnectionBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const void * wxConnectionBase::Request(const wxString &, size_t *, wxIPCFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const void * lret = self->Request(_arg1, _arg2, _arg3);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxConnectionBase::StartAdvise(const wxString & arg1)
	static int _bind_StartAdvise(lua_State *L) {
		if (!_lg_typecheck_StartAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnectionBase::StartAdvise(const wxString & arg1) function, expected prototype:\nbool wxConnectionBase::StartAdvise(const wxString & arg1)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString _arg1(lua_tostring(L,2),lua_objlen(L,2));

		wxConnectionBase* self=Luna< wxObject >::checkSubType< wxConnectionBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnectionBase::StartAdvise(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StartAdvise(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnectionBase::StopAdvise(const wxString & arg1)
	static int _bind_StopAdvise(lua_State *L) {
		if (!_lg_typecheck_StopAdvise(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnectionBase::StopAdvise(const wxString & arg1) function, expected prototype:\nbool wxConnectionBase::StopAdvise(const wxString & arg1)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString _arg1(lua_tostring(L,2),lua_objlen(L,2));

		wxConnectionBase* self=Luna< wxObject >::checkSubType< wxConnectionBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnectionBase::StopAdvise(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StopAdvise(_arg1);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxConnectionBase::Disconnect()
	static int _bind_Disconnect(lua_State *L) {
		if (!_lg_typecheck_Disconnect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxConnectionBase::Disconnect() function, expected prototype:\nbool wxConnectionBase::Disconnect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConnectionBase* self=Luna< wxObject >::checkSubType< wxConnectionBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxConnectionBase::Disconnect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Disconnect();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxConnectionBase::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxConnectionBase::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxConnectionBase::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConnectionBase* self=Luna< wxObject >::checkSubType< wxConnectionBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxConnectionBase::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxConnectionBase::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxConnectionBase* LunaTraits< wxConnectionBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const void * wxConnectionBase::Request(const wxString & arg1, size_t * arg2, wxIPCFormat arg3)
	// bool wxConnectionBase::StartAdvise(const wxString & arg1)
	// bool wxConnectionBase::StopAdvise(const wxString & arg1)
	// bool wxConnectionBase::Disconnect()
	// bool wxConnectionBase::DoExecute(const void * arg1, size_t arg2, wxIPCFormat arg3)
	// bool wxConnectionBase::DoPoke(const wxString & arg1, const void * arg2, size_t arg3, wxIPCFormat arg4)
	// bool wxConnectionBase::DoAdvise(const wxString & arg1, const void * arg2, size_t arg3, wxIPCFormat arg4)
}

void LunaTraits< wxConnectionBase >::_bind_dtor(wxConnectionBase* obj) {
	delete obj;
}

const char LunaTraits< wxConnectionBase >::className[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::fullName[] = "wxConnectionBase";
const char LunaTraits< wxConnectionBase >::moduleName[] = "wx";
const char* LunaTraits< wxConnectionBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxConnectionBase >::hash = 67238063;
const int LunaTraits< wxConnectionBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxConnectionBase >::methods[] = {
	{"Request", &luna_wrapper_wxConnectionBase::_bind_Request},
	{"StartAdvise", &luna_wrapper_wxConnectionBase::_bind_StartAdvise},
	{"StopAdvise", &luna_wrapper_wxConnectionBase::_bind_StopAdvise},
	{"Disconnect", &luna_wrapper_wxConnectionBase::_bind_Disconnect},
	{"base_GetClassInfo", &luna_wrapper_wxConnectionBase::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxConnectionBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxConnectionBase::_bind_asVoid},
	{"getTable", &luna_wrapper_wxConnectionBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxConnectionBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxConnectionBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxConnectionBase >::enumValues[] = {
	{0,0}
};


