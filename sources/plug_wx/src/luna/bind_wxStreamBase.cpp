#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStreamBase.h>

class luna_wrapper_wxStreamBase {
public:
	typedef Luna< wxStreamBase > luna_t;

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

		wxStreamBase* self= (wxStreamBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStreamBase >::push(L,self,false);
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
		//wxStreamBase* ptr= dynamic_cast< wxStreamBase* >(Luna< wxObject >::check(L,1));
		wxStreamBase* ptr= luna_caster< wxObject, wxStreamBase >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStreamBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetLastError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsSeekable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsSeekable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStreamBase::wxStreamBase()
	static wxStreamBase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxStreamBase::wxStreamBase() function, expected prototype:\nwxStreamBase::wxStreamBase()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxStreamBase();
	}

	// wxStreamBase::wxStreamBase(lua_Table * data)
	static wxStreamBase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxStreamBase::wxStreamBase(lua_Table * data) function, expected prototype:\nwxStreamBase::wxStreamBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxStreamBase(L,NULL);
	}

	// Overload binder for wxStreamBase::wxStreamBase
	static wxStreamBase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStreamBase, cannot match any of the overloads for function wxStreamBase:\n  wxStreamBase()\n  wxStreamBase(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxStreamError wxStreamBase::GetLastError() const
	static int _bind_GetLastError(lua_State *L) {
		if (!_lg_typecheck_GetLastError(L)) {
			luaL_error(L, "luna typecheck failed in wxStreamError wxStreamBase::GetLastError() const function, expected prototype:\nwxStreamError wxStreamBase::GetLastError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStreamError wxStreamBase::GetLastError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxStreamError lret = self->GetLastError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxStreamBase::GetLength() const
	static int _bind_GetLength(lua_State *L) {
		if (!_lg_typecheck_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxStreamBase::GetLength() const function, expected prototype:\nlong long wxStreamBase::GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxStreamBase::GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxStreamBase::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStreamBase::GetSize() const function, expected prototype:\nsize_t wxStreamBase::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStreamBase::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStreamBase::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStreamBase::IsOk() const function, expected prototype:\nbool wxStreamBase::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStreamBase::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStreamBase::IsSeekable() const
	static int _bind_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStreamBase::IsSeekable() const function, expected prototype:\nbool wxStreamBase::IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStreamBase::IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStreamBase::Reset(wxStreamError error = ::wxSTREAM_NO_ERROR)
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in void wxStreamBase::Reset(wxStreamError error = ::wxSTREAM_NO_ERROR) function, expected prototype:\nvoid wxStreamBase::Reset(wxStreamError error = ::wxSTREAM_NO_ERROR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxStreamError error=luatop>1 ? (wxStreamError)lua_tointeger(L,2) : (wxStreamError)::wxSTREAM_NO_ERROR;

		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStreamBase::Reset(wxStreamError). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reset(error);

		return 0;
	}

	// wxClassInfo * wxStreamBase::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxStreamBase::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxStreamBase::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxStreamBase::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxStreamBase::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxStreamBase::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxStreamBase::base_GetLength() const function, expected prototype:\nlong long wxStreamBase::base_GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxStreamBase::base_GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxStreamBase::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxStreamBase::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStreamBase::base_GetSize() const function, expected prototype:\nsize_t wxStreamBase::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStreamBase::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxStreamBase::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStreamBase::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStreamBase::base_IsOk() const function, expected prototype:\nbool wxStreamBase::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStreamBase::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStreamBase::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStreamBase::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStreamBase::base_IsSeekable() const function, expected prototype:\nbool wxStreamBase::base_IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStreamBase* self=Luna< wxObject >::checkSubType< wxStreamBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStreamBase::base_IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStreamBase::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxStreamBase* LunaTraits< wxStreamBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStreamBase::_bind_ctor(L);
}

void LunaTraits< wxStreamBase >::_bind_dtor(wxStreamBase* obj) {
	delete obj;
}

const char LunaTraits< wxStreamBase >::className[] = "wxStreamBase";
const char LunaTraits< wxStreamBase >::fullName[] = "wxStreamBase";
const char LunaTraits< wxStreamBase >::moduleName[] = "wx";
const char* LunaTraits< wxStreamBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxStreamBase >::hash = 33155380;
const int LunaTraits< wxStreamBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStreamBase >::methods[] = {
	{"GetLastError", &luna_wrapper_wxStreamBase::_bind_GetLastError},
	{"GetLength", &luna_wrapper_wxStreamBase::_bind_GetLength},
	{"GetSize", &luna_wrapper_wxStreamBase::_bind_GetSize},
	{"IsOk", &luna_wrapper_wxStreamBase::_bind_IsOk},
	{"IsSeekable", &luna_wrapper_wxStreamBase::_bind_IsSeekable},
	{"Reset", &luna_wrapper_wxStreamBase::_bind_Reset},
	{"base_GetClassInfo", &luna_wrapper_wxStreamBase::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxStreamBase::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxStreamBase::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxStreamBase::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxStreamBase::_bind_base_IsSeekable},
	{"fromVoid", &luna_wrapper_wxStreamBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStreamBase::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStreamBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStreamBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxStreamBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStreamBase >::enumValues[] = {
	{0,0}
};


