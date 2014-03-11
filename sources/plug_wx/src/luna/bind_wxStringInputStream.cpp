#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStringInputStream.h>

class luna_wrapper_wxStringInputStream {
public:
	typedef Luna< wxStringInputStream > luna_t;

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

		wxStringInputStream* self= (wxStringInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStringInputStream >::push(L,self,false);
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
		//wxStringInputStream* ptr= dynamic_cast< wxStringInputStream* >(Luna< wxObject >::check(L,1));
		wxStringInputStream* ptr= luna_caster< wxObject, wxStringInputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStringInputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
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

	inline static bool _lg_typecheck_base_CanRead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Eof(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LastRead(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Peek(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Read(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SeekI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TellI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStringInputStream::wxStringInputStream(lua_Table * data, const wxString & s)
	static wxStringInputStream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxStringInputStream::wxStringInputStream(lua_Table * data, const wxString & s) function, expected prototype:\nwxStringInputStream::wxStringInputStream(lua_Table * data, const wxString & s)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString s(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxStringInputStream(L,NULL, s);
	}


	// Function binds:
	// wxClassInfo * wxStringInputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxStringInputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxStringInputStream::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxStringInputStream::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxStringInputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxStringInputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxStringInputStream::base_GetLength() const function, expected prototype:\nlong long wxStringInputStream::base_GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxStringInputStream::base_GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxStringInputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxStringInputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStringInputStream::base_GetSize() const function, expected prototype:\nsize_t wxStringInputStream::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStringInputStream::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxStringInputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStringInputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStringInputStream::base_IsOk() const function, expected prototype:\nbool wxStringInputStream::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStringInputStream::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStringInputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStringInputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStringInputStream::base_IsSeekable() const function, expected prototype:\nbool wxStringInputStream::base_IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStringInputStream::base_IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStringInputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStringInputStream::base_CanRead() const
	static int _bind_base_CanRead(lua_State *L) {
		if (!_lg_typecheck_base_CanRead(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStringInputStream::base_CanRead() const function, expected prototype:\nbool wxStringInputStream::base_CanRead() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStringInputStream::base_CanRead() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStringInputStream::CanRead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStringInputStream::base_Eof() const
	static int _bind_base_Eof(lua_State *L) {
		if (!_lg_typecheck_base_Eof(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStringInputStream::base_Eof() const function, expected prototype:\nbool wxStringInputStream::base_Eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStringInputStream::base_Eof() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStringInputStream::Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxStringInputStream::base_LastRead() const
	static int _bind_base_LastRead(lua_State *L) {
		if (!_lg_typecheck_base_LastRead(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStringInputStream::base_LastRead() const function, expected prototype:\nsize_t wxStringInputStream::base_LastRead() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStringInputStream::base_LastRead() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxStringInputStream::LastRead();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char wxStringInputStream::base_Peek()
	static int _bind_base_Peek(lua_State *L) {
		if (!_lg_typecheck_base_Peek(L)) {
			luaL_error(L, "luna typecheck failed in char wxStringInputStream::base_Peek() function, expected prototype:\nchar wxStringInputStream::base_Peek()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call char wxStringInputStream::base_Peek(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->wxStringInputStream::Peek();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream & wxStringInputStream::base_Read(void * buffer, size_t size)
	static int _bind_base_Read(lua_State *L) {
		if (!_lg_typecheck_base_Read(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream & wxStringInputStream::base_Read(void * buffer, size_t size) function, expected prototype:\nwxInputStream & wxStringInputStream::base_Read(void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream & wxStringInputStream::base_Read(void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxInputStream* lret = &self->wxStringInputStream::Read(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// long long wxStringInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekI(lua_State *L) {
		if (!_lg_typecheck_base_SeekI(L)) {
			luaL_error(L, "luna typecheck failed in long long wxStringInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxStringInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxStringInputStream::base_SeekI(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxStringInputStream::SeekI(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxStringInputStream::base_TellI() const
	static int _bind_base_TellI(lua_State *L) {
		if (!_lg_typecheck_base_TellI(L)) {
			luaL_error(L, "luna typecheck failed in long long wxStringInputStream::base_TellI() const function, expected prototype:\nlong long wxStringInputStream::base_TellI() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringInputStream* self=Luna< wxObject >::checkSubType< wxStringInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxStringInputStream::base_TellI() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxStringInputStream::TellI();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxStringInputStream* LunaTraits< wxStringInputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStringInputStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
}

void LunaTraits< wxStringInputStream >::_bind_dtor(wxStringInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxStringInputStream >::className[] = "wxStringInputStream";
const char LunaTraits< wxStringInputStream >::fullName[] = "wxStringInputStream";
const char LunaTraits< wxStringInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxStringInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxStringInputStream >::hash = 38630818;
const int LunaTraits< wxStringInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxStringInputStream >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxStringInputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxStringInputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxStringInputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxStringInputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxStringInputStream::_bind_base_IsSeekable},
	{"base_CanRead", &luna_wrapper_wxStringInputStream::_bind_base_CanRead},
	{"base_Eof", &luna_wrapper_wxStringInputStream::_bind_base_Eof},
	{"base_LastRead", &luna_wrapper_wxStringInputStream::_bind_base_LastRead},
	{"base_Peek", &luna_wrapper_wxStringInputStream::_bind_base_Peek},
	{"base_Read", &luna_wrapper_wxStringInputStream::_bind_base_Read},
	{"base_SeekI", &luna_wrapper_wxStringInputStream::_bind_base_SeekI},
	{"base_TellI", &luna_wrapper_wxStringInputStream::_bind_base_TellI},
	{"fromVoid", &luna_wrapper_wxStringInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStringInputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStringInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStringInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxStringInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStringInputStream >::enumValues[] = {
	{0,0}
};


