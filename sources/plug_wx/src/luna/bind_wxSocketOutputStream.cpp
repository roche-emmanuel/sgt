#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketOutputStream.h>

class luna_wrapper_wxSocketOutputStream {
public:
	typedef Luna< wxSocketOutputStream > luna_t;

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

		wxSocketOutputStream* self= (wxSocketOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSocketOutputStream >::push(L,self,false);
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
		//wxSocketOutputStream* ptr= dynamic_cast< wxSocketOutputStream* >(Luna< wxObject >::check(L,1));
		wxSocketOutputStream* ptr= luna_caster< wxObject, wxSocketOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSocketBase >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSocketBase >(L,2))) ) return false;
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

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LastWrite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SeekO(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TellO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Write(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s)
	static wxSocketOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s) function, expected prototype:\nwxSocketOutputStream::wxSocketOutputStream(wxSocketBase & s)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSocketBase* s_ptr=(Luna< wxObject >::checkSubType< wxSocketBase >(L,1));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxSocketOutputStream::wxSocketOutputStream function");
		}
		wxSocketBase & s=*s_ptr;

		return new wxSocketOutputStream(s);
	}

	// wxSocketOutputStream::wxSocketOutputStream(lua_Table * data, wxSocketBase & s)
	static wxSocketOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketOutputStream::wxSocketOutputStream(lua_Table * data, wxSocketBase & s) function, expected prototype:\nwxSocketOutputStream::wxSocketOutputStream(lua_Table * data, wxSocketBase & s)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSocketBase* s_ptr=(Luna< wxObject >::checkSubType< wxSocketBase >(L,2));
		if( !s_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg s in wxSocketOutputStream::wxSocketOutputStream function");
		}
		wxSocketBase & s=*s_ptr;

		return new wrapper_wxSocketOutputStream(L,NULL, s);
	}

	// Overload binder for wxSocketOutputStream::wxSocketOutputStream
	static wxSocketOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSocketOutputStream, cannot match any of the overloads for function wxSocketOutputStream:\n  wxSocketOutputStream(wxSocketBase &)\n  wxSocketOutputStream(lua_Table *, wxSocketBase &)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxSocketOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSocketOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSocketOutputStream::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSocketOutputStream::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSocketOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxSocketOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxSocketOutputStream::base_GetLength() const function, expected prototype:\nlong long wxSocketOutputStream::base_GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxSocketOutputStream::base_GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxSocketOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxSocketOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxSocketOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxSocketOutputStream::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxSocketOutputStream::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxSocketOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSocketOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketOutputStream::base_IsOk() const function, expected prototype:\nbool wxSocketOutputStream::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketOutputStream::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxSocketOutputStream::base_IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketOutputStream::base_IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketOutputStream::base_Close() function, expected prototype:\nbool wxSocketOutputStream::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketOutputStream::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxSocketOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxSocketOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxSocketOutputStream::base_LastWrite() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxSocketOutputStream::base_LastWrite() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxSocketOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxSocketOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxSocketOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxSocketOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxSocketOutputStream::base_SeekO(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxSocketOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxSocketOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxSocketOutputStream::base_TellO() const function, expected prototype:\nlong long wxSocketOutputStream::base_TellO() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxSocketOutputStream::base_TellO() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxSocketOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxSocketOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxSocketOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxSocketOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxSocketOutputStream* self=Luna< wxObject >::checkSubType< wxSocketOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream & wxSocketOutputStream::base_Write(const void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxOutputStream* lret = &self->wxSocketOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxSocketOutputStream* LunaTraits< wxSocketOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketOutputStream::_bind_ctor(L);
}

void LunaTraits< wxSocketOutputStream >::_bind_dtor(wxSocketOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxSocketOutputStream >::className[] = "wxSocketOutputStream";
const char LunaTraits< wxSocketOutputStream >::fullName[] = "wxSocketOutputStream";
const char LunaTraits< wxSocketOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxSocketOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxSocketOutputStream >::hash = 46772636;
const int LunaTraits< wxSocketOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketOutputStream >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxSocketOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxSocketOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxSocketOutputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxSocketOutputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxSocketOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxSocketOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxSocketOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxSocketOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxSocketOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxSocketOutputStream::_bind_base_Write},
	{"fromVoid", &luna_wrapper_wxSocketOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSocketOutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSocketOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketOutputStream >::enumValues[] = {
	{0,0}
};


