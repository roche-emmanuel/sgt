#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileOutputStream.h>

class luna_wrapper_wxFileOutputStream {
public:
	typedef Luna< wxFileOutputStream > luna_t;

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

		wxFileOutputStream* self= (wxFileOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileOutputStream >::push(L,self,false);
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
		//wxFileOutputStream* ptr= dynamic_cast< wxFileOutputStream* >(Luna< wxObject >::check(L,1));
		wxFileOutputStream* ptr= luna_caster< wxObject, wxFileOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileOutputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19881034) ) return false;
		if( (!(Luna< wxFile >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,19881034) ) return false;
		if( (!(Luna< wxFile >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileOutputStream::wxFileOutputStream(const wxString & ofileName)
	static wxFileOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(const wxString & ofileName) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(const wxString & ofileName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString ofileName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxFileOutputStream(ofileName);
	}

	// wxFileOutputStream::wxFileOutputStream(wxFile & file)
	static wxFileOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(wxFile & file) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(wxFile & file)\nClass arguments details:\narg 1 ID = 19881034\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFile* file_ptr=(Luna< wxFile >::check(L,1));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxFileOutputStream::wxFileOutputStream function");
		}
		wxFile & file=*file_ptr;

		return new wxFileOutputStream(file);
	}

	// wxFileOutputStream::wxFileOutputStream(int fd)
	static wxFileOutputStream* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(int fd) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(int fd)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int fd=(int)lua_tointeger(L,1);

		return new wxFileOutputStream(fd);
	}

	// wxFileOutputStream::wxFileOutputStream(lua_Table * data, const wxString & ofileName)
	static wxFileOutputStream* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(lua_Table * data, const wxString & ofileName) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(lua_Table * data, const wxString & ofileName)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString ofileName(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxFileOutputStream(L,NULL, ofileName);
	}

	// wxFileOutputStream::wxFileOutputStream(lua_Table * data, wxFile & file)
	static wxFileOutputStream* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(lua_Table * data, wxFile & file) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(lua_Table * data, wxFile & file)\nClass arguments details:\narg 2 ID = 19881034\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFile* file_ptr=(Luna< wxFile >::check(L,2));
		if( !file_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg file in wxFileOutputStream::wxFileOutputStream function");
		}
		wxFile & file=*file_ptr;

		return new wrapper_wxFileOutputStream(L,NULL, file);
	}

	// wxFileOutputStream::wxFileOutputStream(lua_Table * data, int fd)
	static wxFileOutputStream* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxFileOutputStream::wxFileOutputStream(lua_Table * data, int fd) function, expected prototype:\nwxFileOutputStream::wxFileOutputStream(lua_Table * data, int fd)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int fd=(int)lua_tointeger(L,2);

		return new wrapper_wxFileOutputStream(L,NULL, fd);
	}

	// Overload binder for wxFileOutputStream::wxFileOutputStream
	static wxFileOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxFileOutputStream, cannot match any of the overloads for function wxFileOutputStream:\n  wxFileOutputStream(const wxString &)\n  wxFileOutputStream(wxFile &)\n  wxFileOutputStream(int)\n  wxFileOutputStream(lua_Table *, const wxString &)\n  wxFileOutputStream(lua_Table *, wxFile &)\n  wxFileOutputStream(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxFileOutputStream::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileOutputStream::IsOk() const function, expected prototype:\nbool wxFileOutputStream::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileOutputStream::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxFileOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileOutputStream::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileOutputStream::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxFileOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxFileOutputStream::base_GetLength() const function, expected prototype:\nlong long wxFileOutputStream::base_GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxFileOutputStream::base_GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxFileOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFileOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFileOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxFileOutputStream::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFileOutputStream::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxFileOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFileOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxFileOutputStream::base_IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileOutputStream::base_IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileOutputStream::base_Close() function, expected prototype:\nbool wxFileOutputStream::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileOutputStream::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxFileOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFileOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxFileOutputStream::base_LastWrite() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFileOutputStream::base_LastWrite() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxFileOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxFileOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxFileOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxFileOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxFileOutputStream::base_SeekO(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxFileOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxFileOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxFileOutputStream::base_TellO() const function, expected prototype:\nlong long wxFileOutputStream::base_TellO() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxFileOutputStream::base_TellO() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxFileOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxFileOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxFileOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxFileOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream & wxFileOutputStream::base_Write(const void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxOutputStream* lret = &self->wxFileOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// bool wxFileOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileOutputStream::base_IsOk() const function, expected prototype:\nbool wxFileOutputStream::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileOutputStream* self=Luna< wxObject >::checkSubType< wxFileOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileOutputStream::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFileOutputStream* LunaTraits< wxFileOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileOutputStream::_bind_ctor(L);
}

void LunaTraits< wxFileOutputStream >::_bind_dtor(wxFileOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFileOutputStream >::className[] = "wxFileOutputStream";
const char LunaTraits< wxFileOutputStream >::fullName[] = "wxFileOutputStream";
const char LunaTraits< wxFileOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFileOutputStream >::parents[] = {"wx.wxOutputStream", 0};
const int LunaTraits< wxFileOutputStream >::hash = 45450289;
const int LunaTraits< wxFileOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFileOutputStream >::methods[] = {
	{"IsOk", &luna_wrapper_wxFileOutputStream::_bind_IsOk},
	{"base_GetClassInfo", &luna_wrapper_wxFileOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxFileOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxFileOutputStream::_bind_base_GetSize},
	{"base_IsSeekable", &luna_wrapper_wxFileOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxFileOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxFileOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxFileOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxFileOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxFileOutputStream::_bind_base_Write},
	{"base_IsOk", &luna_wrapper_wxFileOutputStream::_bind_base_IsOk},
	{"fromVoid", &luna_wrapper_wxFileOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileOutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileOutputStream >::enumValues[] = {
	{0,0}
};


