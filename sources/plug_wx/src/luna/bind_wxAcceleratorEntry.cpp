#include <plug_common.h>

class luna_wrapper_wxAcceleratorEntry {
public:
	typedef Luna< wxAcceleratorEntry > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAcceleratorEntry* self= (wxAcceleratorEntry*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAcceleratorEntry >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8554277) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAcceleratorEntry >::check(L,1));
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

		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxAcceleratorEntry");
		
		return luna_dynamicCast(L,converters,"wxAcceleratorEntry",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxMenuItem >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,8554277) ) return false;
		if( (!(Luna< wxAcceleratorEntry >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCommand(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FromString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8554277) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8554277) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,8554277) ) return false;
		return true;
	}


	// Constructor binds:
	// wxAcceleratorEntry::wxAcceleratorEntry(int flags = 0, int keyCode = 0, int cmd = 0, wxMenuItem * item = NULL)
	static wxAcceleratorEntry* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorEntry::wxAcceleratorEntry(int flags = 0, int keyCode = 0, int cmd = 0, wxMenuItem * item = NULL) function, expected prototype:\nwxAcceleratorEntry::wxAcceleratorEntry(int flags = 0, int keyCode = 0, int cmd = 0, wxMenuItem * item = NULL)\nClass arguments details:\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		int keyCode=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int cmd=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		wxMenuItem* item=luatop>3 ? (Luna< wxObject >::checkSubType< wxMenuItem >(L,4)) : (wxMenuItem*)NULL;

		return new wxAcceleratorEntry(flags, keyCode, cmd, item);
	}

	// wxAcceleratorEntry::wxAcceleratorEntry(const wxAcceleratorEntry & entry)
	static wxAcceleratorEntry* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorEntry::wxAcceleratorEntry(const wxAcceleratorEntry & entry) function, expected prototype:\nwxAcceleratorEntry::wxAcceleratorEntry(const wxAcceleratorEntry & entry)\nClass arguments details:\narg 1 ID = 8554277\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorEntry* entry_ptr=(Luna< wxAcceleratorEntry >::check(L,1));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxAcceleratorEntry::wxAcceleratorEntry function");
		}
		const wxAcceleratorEntry & entry=*entry_ptr;

		return new wxAcceleratorEntry(entry);
	}

	// Overload binder for wxAcceleratorEntry::wxAcceleratorEntry
	static wxAcceleratorEntry* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAcceleratorEntry, cannot match any of the overloads for function wxAcceleratorEntry:\n  wxAcceleratorEntry(int, int, int, wxMenuItem *)\n  wxAcceleratorEntry(const wxAcceleratorEntry &)\n");
		return NULL;
	}


	// Function binds:
	// int wxAcceleratorEntry::GetCommand() const
	static int _bind_GetCommand(lua_State *L) {
		if (!_lg_typecheck_GetCommand(L)) {
			luaL_error(L, "luna typecheck failed in int wxAcceleratorEntry::GetCommand() const function, expected prototype:\nint wxAcceleratorEntry::GetCommand() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAcceleratorEntry::GetCommand() const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCommand();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAcceleratorEntry::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxAcceleratorEntry::GetFlags() const function, expected prototype:\nint wxAcceleratorEntry::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAcceleratorEntry::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAcceleratorEntry::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luaL_error(L, "luna typecheck failed in int wxAcceleratorEntry::GetKeyCode() const function, expected prototype:\nint wxAcceleratorEntry::GetKeyCode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAcceleratorEntry::GetKeyCode() const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxMenuItem * wxAcceleratorEntry::GetMenuItem() const
	static int _bind_GetMenuItem(lua_State *L) {
		if (!_lg_typecheck_GetMenuItem(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuItem * wxAcceleratorEntry::GetMenuItem() const function, expected prototype:\nwxMenuItem * wxAcceleratorEntry::GetMenuItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuItem * wxAcceleratorEntry::GetMenuItem() const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuItem * lret = self->GetMenuItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuItem >::push(L,lret,false);

		return 1;
	}

	// void wxAcceleratorEntry::Set(int flags, int keyCode, int cmd, wxMenuItem * item = NULL)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void wxAcceleratorEntry::Set(int flags, int keyCode, int cmd, wxMenuItem * item = NULL) function, expected prototype:\nvoid wxAcceleratorEntry::Set(int flags, int keyCode, int cmd, wxMenuItem * item = NULL)\nClass arguments details:\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=(int)lua_tointeger(L,2);
		int keyCode=(int)lua_tointeger(L,3);
		int cmd=(int)lua_tointeger(L,4);
		wxMenuItem* item=luatop>4 ? (Luna< wxObject >::checkSubType< wxMenuItem >(L,5)) : (wxMenuItem*)NULL;

		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAcceleratorEntry::Set(int, int, int, wxMenuItem *). Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(flags, keyCode, cmd, item);

		return 0;
	}

	// bool wxAcceleratorEntry::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAcceleratorEntry::IsOk() const function, expected prototype:\nbool wxAcceleratorEntry::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAcceleratorEntry::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxAcceleratorEntry::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAcceleratorEntry::ToString() const function, expected prototype:\nwxString wxAcceleratorEntry::ToString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAcceleratorEntry::ToString() const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxAcceleratorEntry::FromString(const wxString & str)
	static int _bind_FromString(lua_State *L) {
		if (!_lg_typecheck_FromString(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAcceleratorEntry::FromString(const wxString & str) function, expected prototype:\nbool wxAcceleratorEntry::FromString(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAcceleratorEntry::FromString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FromString(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// wxAcceleratorEntry & wxAcceleratorEntry::operator=(const wxAcceleratorEntry & entry)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorEntry & wxAcceleratorEntry::operator=(const wxAcceleratorEntry & entry) function, expected prototype:\nwxAcceleratorEntry & wxAcceleratorEntry::operator=(const wxAcceleratorEntry & entry)\nClass arguments details:\narg 1 ID = 8554277\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorEntry* entry_ptr=(Luna< wxAcceleratorEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxAcceleratorEntry::operator= function");
		}
		const wxAcceleratorEntry & entry=*entry_ptr;

		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAcceleratorEntry & wxAcceleratorEntry::operator=(const wxAcceleratorEntry &). Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxAcceleratorEntry* lret = &self->operator=(entry);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAcceleratorEntry >::push(L,lret,false);

		return 1;
	}

	// bool wxAcceleratorEntry::operator==(const wxAcceleratorEntry & entry) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAcceleratorEntry::operator==(const wxAcceleratorEntry & entry) const function, expected prototype:\nbool wxAcceleratorEntry::operator==(const wxAcceleratorEntry & entry) const\nClass arguments details:\narg 1 ID = 8554277\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorEntry* entry_ptr=(Luna< wxAcceleratorEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxAcceleratorEntry::operator== function");
		}
		const wxAcceleratorEntry & entry=*entry_ptr;

		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAcceleratorEntry::operator==(const wxAcceleratorEntry &) const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(entry);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAcceleratorEntry::operator!=(const wxAcceleratorEntry & entry) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAcceleratorEntry::operator!=(const wxAcceleratorEntry & entry) const function, expected prototype:\nbool wxAcceleratorEntry::operator!=(const wxAcceleratorEntry & entry) const\nClass arguments details:\narg 1 ID = 8554277\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorEntry* entry_ptr=(Luna< wxAcceleratorEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxAcceleratorEntry::operator!= function");
		}
		const wxAcceleratorEntry & entry=*entry_ptr;

		wxAcceleratorEntry* self=(Luna< wxAcceleratorEntry >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAcceleratorEntry::operator!=(const wxAcceleratorEntry &) const. Got : '%s'\n%s",typeid(Luna< wxAcceleratorEntry >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(entry);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxAcceleratorEntry* LunaTraits< wxAcceleratorEntry >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAcceleratorEntry::_bind_ctor(L);
}

void LunaTraits< wxAcceleratorEntry >::_bind_dtor(wxAcceleratorEntry* obj) {
	delete obj;
}

const char LunaTraits< wxAcceleratorEntry >::className[] = "wxAcceleratorEntry";
const char LunaTraits< wxAcceleratorEntry >::fullName[] = "wxAcceleratorEntry";
const char LunaTraits< wxAcceleratorEntry >::moduleName[] = "wx";
const char* LunaTraits< wxAcceleratorEntry >::parents[] = {0};
const int LunaTraits< wxAcceleratorEntry >::hash = 8554277;
const int LunaTraits< wxAcceleratorEntry >::uniqueIDs[] = {8554277,0};

luna_RegType LunaTraits< wxAcceleratorEntry >::methods[] = {
	{"GetCommand", &luna_wrapper_wxAcceleratorEntry::_bind_GetCommand},
	{"GetFlags", &luna_wrapper_wxAcceleratorEntry::_bind_GetFlags},
	{"GetKeyCode", &luna_wrapper_wxAcceleratorEntry::_bind_GetKeyCode},
	{"GetMenuItem", &luna_wrapper_wxAcceleratorEntry::_bind_GetMenuItem},
	{"Set", &luna_wrapper_wxAcceleratorEntry::_bind_Set},
	{"IsOk", &luna_wrapper_wxAcceleratorEntry::_bind_IsOk},
	{"ToString", &luna_wrapper_wxAcceleratorEntry::_bind_ToString},
	{"FromString", &luna_wrapper_wxAcceleratorEntry::_bind_FromString},
	{"op_assign", &luna_wrapper_wxAcceleratorEntry::_bind_op_assign},
	{"__eq", &luna_wrapper_wxAcceleratorEntry::_bind___eq},
	{"op_neq", &luna_wrapper_wxAcceleratorEntry::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxAcceleratorEntry::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxAcceleratorEntry::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAcceleratorEntry::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxAcceleratorEntry >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxAcceleratorEntry >::enumValues[] = {
	{0,0}
};


