#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFilterInputStream.h>

class luna_wrapper_wxFilterInputStream {
public:
	typedef Luna< wxFilterInputStream > luna_t;

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

		wxFilterInputStream* self= (wxFilterInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFilterInputStream >::push(L,self,false);
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
		//wxFilterInputStream* ptr= dynamic_cast< wxFilterInputStream* >(Luna< wxObject >::check(L,1));
		wxFilterInputStream* ptr= luna_caster< wxObject, wxFilterInputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFilterInputStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxInputStream >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxInputStream >(L,2)) ) ) return false;
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
	// wxFilterInputStream::wxFilterInputStream(lua_Table * data, wxInputStream & stream)
	static wxFilterInputStream* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFilterInputStream::wxFilterInputStream(lua_Table * data, wxInputStream & stream) function, expected prototype:\nwxFilterInputStream::wxFilterInputStream(lua_Table * data, wxInputStream & stream)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream_ptr=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		if( !stream_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg stream in wxFilterInputStream::wxFilterInputStream function");
		}
		wxInputStream & stream=*stream_ptr;

		return new wrapper_wxFilterInputStream(L,NULL, stream);
	}

	// wxFilterInputStream::wxFilterInputStream(lua_Table * data, wxInputStream * stream)
	static wxFilterInputStream* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFilterInputStream::wxFilterInputStream(lua_Table * data, wxInputStream * stream) function, expected prototype:\nwxFilterInputStream::wxFilterInputStream(lua_Table * data, wxInputStream * stream)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));

		return new wrapper_wxFilterInputStream(L,NULL, stream);
	}

	// Overload binder for wxFilterInputStream::wxFilterInputStream
	static wxFilterInputStream* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFilterInputStream, cannot match any of the overloads for function wxFilterInputStream:\n  wxFilterInputStream(lua_Table *, wxInputStream &)\n  wxFilterInputStream(lua_Table *, wxInputStream *)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxFilterInputStream::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFilterInputStream::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFilterInputStream::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFilterInputStream::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFilterInputStream::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// long long wxFilterInputStream::base_GetLength() const
	static int _bind_base_GetLength(lua_State *L) {
		if (!_lg_typecheck_base_GetLength(L)) {
			luaL_error(L, "luna typecheck failed in long long wxFilterInputStream::base_GetLength() const function, expected prototype:\nlong long wxFilterInputStream::base_GetLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxFilterInputStream::base_GetLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxFilterInputStream::GetLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxFilterInputStream::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFilterInputStream::base_GetSize() const function, expected prototype:\nsize_t wxFilterInputStream::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFilterInputStream::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxFilterInputStream::GetSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFilterInputStream::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFilterInputStream::base_IsOk() const function, expected prototype:\nbool wxFilterInputStream::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFilterInputStream::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFilterInputStream::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFilterInputStream::base_IsSeekable() const
	static int _bind_base_IsSeekable(lua_State *L) {
		if (!_lg_typecheck_base_IsSeekable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFilterInputStream::base_IsSeekable() const function, expected prototype:\nbool wxFilterInputStream::base_IsSeekable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFilterInputStream::base_IsSeekable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFilterInputStream::IsSeekable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFilterInputStream::base_CanRead() const
	static int _bind_base_CanRead(lua_State *L) {
		if (!_lg_typecheck_base_CanRead(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFilterInputStream::base_CanRead() const function, expected prototype:\nbool wxFilterInputStream::base_CanRead() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFilterInputStream::base_CanRead() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFilterInputStream::CanRead();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFilterInputStream::base_Eof() const
	static int _bind_base_Eof(lua_State *L) {
		if (!_lg_typecheck_base_Eof(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFilterInputStream::base_Eof() const function, expected prototype:\nbool wxFilterInputStream::base_Eof() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFilterInputStream::base_Eof() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFilterInputStream::Eof();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxFilterInputStream::base_LastRead() const
	static int _bind_base_LastRead(lua_State *L) {
		if (!_lg_typecheck_base_LastRead(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFilterInputStream::base_LastRead() const function, expected prototype:\nsize_t wxFilterInputStream::base_LastRead() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFilterInputStream::base_LastRead() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxFilterInputStream::LastRead();
		lua_pushnumber(L,lret);

		return 1;
	}

	// char wxFilterInputStream::base_Peek()
	static int _bind_base_Peek(lua_State *L) {
		if (!_lg_typecheck_base_Peek(L)) {
			luaL_error(L, "luna typecheck failed in char wxFilterInputStream::base_Peek() function, expected prototype:\nchar wxFilterInputStream::base_Peek()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call char wxFilterInputStream::base_Peek(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		char lret = self->wxFilterInputStream::Peek();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxInputStream & wxFilterInputStream::base_Read(void * buffer, size_t size)
	static int _bind_base_Read(lua_State *L) {
		if (!_lg_typecheck_base_Read(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream & wxFilterInputStream::base_Read(void * buffer, size_t size) function, expected prototype:\nwxInputStream & wxFilterInputStream::base_Read(void * buffer, size_t size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		size_t size=(size_t)lua_tointeger(L,3);

		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream & wxFilterInputStream::base_Read(void *, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxInputStream* lret = &self->wxFilterInputStream::Read(buffer, size);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// long long wxFilterInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)
	static int _bind_base_SeekI(lua_State *L) {
		if (!_lg_typecheck_base_SeekI(L)) {
			luaL_error(L, "luna typecheck failed in long long wxFilterInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxFilterInputStream::base_SeekI(long long pos, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long pos=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxFilterInputStream::base_SeekI(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxFilterInputStream::SeekI(pos, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxFilterInputStream::base_TellI() const
	static int _bind_base_TellI(lua_State *L) {
		if (!_lg_typecheck_base_TellI(L)) {
			luaL_error(L, "luna typecheck failed in long long wxFilterInputStream::base_TellI() const function, expected prototype:\nlong long wxFilterInputStream::base_TellI() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFilterInputStream* self=Luna< wxObject >::checkSubType< wxFilterInputStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxFilterInputStream::base_TellI() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->wxFilterInputStream::TellI();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFilterInputStream* LunaTraits< wxFilterInputStream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFilterInputStream::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
}

void LunaTraits< wxFilterInputStream >::_bind_dtor(wxFilterInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFilterInputStream >::className[] = "wxFilterInputStream";
const char LunaTraits< wxFilterInputStream >::fullName[] = "wxFilterInputStream";
const char LunaTraits< wxFilterInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFilterInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxFilterInputStream >::hash = 56070844;
const int LunaTraits< wxFilterInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFilterInputStream >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxFilterInputStream::_bind_base_GetClassInfo},
	{"base_GetLength", &luna_wrapper_wxFilterInputStream::_bind_base_GetLength},
	{"base_GetSize", &luna_wrapper_wxFilterInputStream::_bind_base_GetSize},
	{"base_IsOk", &luna_wrapper_wxFilterInputStream::_bind_base_IsOk},
	{"base_IsSeekable", &luna_wrapper_wxFilterInputStream::_bind_base_IsSeekable},
	{"base_CanRead", &luna_wrapper_wxFilterInputStream::_bind_base_CanRead},
	{"base_Eof", &luna_wrapper_wxFilterInputStream::_bind_base_Eof},
	{"base_LastRead", &luna_wrapper_wxFilterInputStream::_bind_base_LastRead},
	{"base_Peek", &luna_wrapper_wxFilterInputStream::_bind_base_Peek},
	{"base_Read", &luna_wrapper_wxFilterInputStream::_bind_base_Read},
	{"base_SeekI", &luna_wrapper_wxFilterInputStream::_bind_base_SeekI},
	{"base_TellI", &luna_wrapper_wxFilterInputStream::_bind_base_TellI},
	{"fromVoid", &luna_wrapper_wxFilterInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFilterInputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFilterInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFilterInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFilterInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFilterInputStream >::enumValues[] = {
	{0,0}
};


