#include <plug_common.h>

#include <luna/wrappers/wrapper_wxOutputStream.h>

class luna_wrapper_wxOutputStream {
public:
	typedef Luna< wxOutputStream > luna_t;

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

		wxOutputStream* self= (wxOutputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxOutputStream >::push(L,self,false);
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
		//wxOutputStream* ptr= dynamic_cast< wxOutputStream* >(Luna< wxObject >::check(L,1));
		wxOutputStream* ptr= luna_caster< wxObject, wxOutputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxOutputStream >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastWrite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PutC(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SeekO(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TellO(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Write_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
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
	// wxOutputStream::wxOutputStream()
	static wxOutputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream::wxOutputStream() function, expected prototype:\nwxOutputStream::wxOutputStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxOutputStream();
	}

	// wxOutputStream::wxOutputStream(lua_Table * data)
	static wxOutputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream::wxOutputStream(lua_Table * data) function, expected prototype:\nwxOutputStream::wxOutputStream(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxOutputStream(L,NULL);
	}

	// Overload binder for wxOutputStream::wxOutputStream
	static wxOutputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxOutputStream, cannot match any of the overloads for function wxOutputStream:\n  wxOutputStream()\n  wxOutputStream(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxOutputStream::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxOutputStream::Close() function, expected prototype:\nbool wxOutputStream::Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxOutputStream::Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxOutputStream::LastWrite() const
	static int _bind_LastWrite(lua_State *L) {
		if (!_lg_typecheck_LastWrite(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxOutputStream::LastWrite() const function, expected prototype:\nsize_t wxOutputStream::LastWrite() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxOutputStream::LastWrite() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxOutputStream::PutC(char c)
	static int _bind_PutC(lua_State *L) {
		if (!_lg_typecheck_PutC(L)) {
			luaL_error(L, "luna typecheck failed in void wxOutputStream::PutC(char c) function, expected prototype:\nvoid wxOutputStream::PutC(char c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		char c=(char)lua_tointeger(L,2);

		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxOutputStream::PutC(char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PutC(c);

		return 0;
	}

	// long long wxOutputStream::SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_SeekO(lua_State *L) {
		if (!_lg_typecheck_SeekO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxOutputStream::SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxOutputStream::SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxOutputStream::SeekO(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxOutputStream::TellO() const
	static int _bind_TellO(lua_State *L) {
		if (!_lg_typecheck_TellO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxOutputStream::TellO() const function, expected prototype:\nlong long wxOutputStream::TellO() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxOutputStream::TellO() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)
	static int _bind_Write_overload_1(lua_State *L) {
		if (!_lg_typecheck_Write_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxOutputStream::Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxOutputStream::Write(const void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream & wxOutputStream::Write(const void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxOutputStream* lret = &self->Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// wxOutputStream & wxOutputStream::Write(wxInputStream & stream_in)
	static int _bind_Write_overload_2(lua_State *L) {
		if (!_lg_typecheck_Write_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxOutputStream::Write(wxInputStream & stream_in) function, expected prototype:\nwxOutputStream & wxOutputStream::Write(wxInputStream & stream_in)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_in_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_in_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream_in in wxOutputStream::Write function");
		}
		wxInputStream & stream_in=*stream_in_ptr;

		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream & wxOutputStream::Write(wxInputStream &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxOutputStream* lret = &self->Write(stream_in);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxOutputStream::Write
	static int _bind_Write(lua_State *L) {
		if (_lg_typecheck_Write_overload_1(L)) return _bind_Write_overload_1(L);
		if (_lg_typecheck_Write_overload_2(L)) return _bind_Write_overload_2(L);

		luaL_error(L, "error in function Write, cannot match any of the overloads for function Write:\n  Write(const void *, size_t)\n  Write(wxInputStream &)\n");
		return 0;
	}

	// wxClassInfo * wxOutputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxOutputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxOutputStream::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxOutputStream::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxOutputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxOutputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxOutputStream::base_GetLength() const function, expected prototype:\nlong long wxOutputStream::base_GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxOutputStream::base_GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxOutputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxOutputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxOutputStream::base_GetSize() const function, expected prototype:\nsize_t wxOutputStream::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxOutputStream::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxOutputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxOutputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxOutputStream::base_IsOk() const function, expected prototype:\nbool wxOutputStream::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxOutputStream::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxOutputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxOutputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxOutputStream::base_IsSeekable() const function, expected prototype:\nbool wxOutputStream::base_IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxOutputStream::base_IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxOutputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxOutputStream::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxOutputStream::base_Close() function, expected prototype:\nbool wxOutputStream::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxOutputStream::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxOutputStream::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxOutputStream::base_LastWrite() const
	static int _bind_base_LastWrite(lua_State *L) {
		if (!_lg_typecheck_base_LastWrite(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxOutputStream::base_LastWrite() const function, expected prototype:\nsize_t wxOutputStream::base_LastWrite() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxOutputStream::base_LastWrite() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxOutputStream::LastWrite();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekO(lua_State *L) {
		if (!_lg_typecheck_base_SeekO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxOutputStream::base_SeekO(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxOutputStream::base_SeekO(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxOutputStream::SeekO(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxOutputStream::base_TellO() const
	static int _bind_base_TellO(lua_State *L) {
		if (!_lg_typecheck_base_TellO(L)) {
			luaL_error(L, "luna typecheck failed in long long wxOutputStream::base_TellO() const function, expected prototype:\nlong long wxOutputStream::base_TellO() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxOutputStream::base_TellO() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxOutputStream::TellO();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxOutputStream & wxOutputStream::base_Write(const void * buffer, size_t size)
	static int _bind_base_Write(lua_State *L) {
		if (!_lg_typecheck_base_Write(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream & wxOutputStream::base_Write(const void * buffer, size_t size) function, expected prototype:\nwxOutputStream & wxOutputStream::base_Write(const void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxOutputStream* self=Luna< wxObject >::checkSubType< wxOutputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream & wxOutputStream::base_Write(const void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxOutputStream* lret = &self->wxOutputStream::Write(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxOutputStream* LunaTraits< wxOutputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxOutputStream::_bind_ctor(L);
}

void LunaTraits< wxOutputStream >::_bind_dtor(wxOutputStream* obj) {
	delete obj;
}

const char LunaTraits< wxOutputStream >::className[] = "wxOutputStream";
const char LunaTraits< wxOutputStream >::fullName[] = "wxOutputStream";
const char LunaTraits< wxOutputStream >::moduleName[] = "wx";
const char* LunaTraits< wxOutputStream >::parents[] = {"wx.wxStreamBase", 0};
const int LunaTraits< wxOutputStream >::hash = 63992062;
const int LunaTraits< wxOutputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxOutputStream >::methods[] = {
	{"Close", &luna_wrapper_wxOutputStream::_bind_Close},
	{"LastWrite", &luna_wrapper_wxOutputStream::_bind_LastWrite},
	{"PutC", &luna_wrapper_wxOutputStream::_bind_PutC},
	{"SeekO", &luna_wrapper_wxOutputStream::_bind_SeekO},
	{"TellO", &luna_wrapper_wxOutputStream::_bind_TellO},
	{"Write", &luna_wrapper_wxOutputStream::_bind_Write},
	{"base_GetClassInfo", &luna_wrapper_wxOutputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxOutputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxOutputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxOutputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxOutputStream::_bind_base_IsSeekable},
	{"base_Close", &luna_wrapper_wxOutputStream::_bind_base_Close},
	{"base_LastWrite", &luna_wrapper_wxOutputStream::_bind_base_LastWrite},
	{"base_SeekO", &luna_wrapper_wxOutputStream::_bind_base_SeekO},
	{"base_TellO", &luna_wrapper_wxOutputStream::_bind_base_TellO},
	{"base_Write", &luna_wrapper_wxOutputStream::_bind_base_Write},
	{"fromVoid", &luna_wrapper_wxOutputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxOutputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxOutputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxOutputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxOutputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxOutputStream >::enumValues[] = {
	{0,0}
};


