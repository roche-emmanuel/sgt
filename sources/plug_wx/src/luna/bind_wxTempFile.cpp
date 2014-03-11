#include <plug_common.h>

class luna_wrapper_wxTempFile {
public:
	typedef Luna< wxTempFile > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18640466) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTempFile*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTempFile* rhs =(Luna< wxTempFile >::check(L,2));
		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
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

		wxTempFile* self= (wxTempFile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTempFile >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18640466) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTempFile >::check(L,1));
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

		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTempFile");
		
		return luna_dynamicCast(L,converters,"wxTempFile",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Commit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Discard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Seek(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTempFile::wxTempFile(const wxString & strName)
	static wxTempFile* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTempFile::wxTempFile(const wxString & strName) function, expected prototype:\nwxTempFile::wxTempFile(const wxString & strName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString strName(lua_tostring(L,1),lua_objlen(L,1));

		return new wxTempFile(strName);
	}


	// Function binds:
	// bool wxTempFile::Commit()
	static int _bind_Commit(lua_State *L) {
		if (!_lg_typecheck_Commit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTempFile::Commit() function, expected prototype:\nbool wxTempFile::Commit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTempFile::Commit(). Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Commit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTempFile::Discard()
	static int _bind_Discard(lua_State *L) {
		if (!_lg_typecheck_Discard(L)) {
			luaL_error(L, "luna typecheck failed in void wxTempFile::Discard() function, expected prototype:\nvoid wxTempFile::Discard()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTempFile::Discard(). Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Discard();

		return 0;
	}

	// bool wxTempFile::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTempFile::Flush() function, expected prototype:\nbool wxTempFile::Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTempFile::Flush(). Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Flush();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTempFile::IsOpened() const
	static int _bind_IsOpened(lua_State *L) {
		if (!_lg_typecheck_IsOpened(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTempFile::IsOpened() const function, expected prototype:\nbool wxTempFile::IsOpened() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTempFile::IsOpened() const. Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long long wxTempFile::Length() const
	static int _bind_Length(lua_State *L) {
		if (!_lg_typecheck_Length(L)) {
			luaL_error(L, "luna typecheck failed in long long wxTempFile::Length() const function, expected prototype:\nlong long wxTempFile::Length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxTempFile::Length() const. Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->Length();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTempFile::Open(const wxString & strName)
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTempFile::Open(const wxString & strName) function, expected prototype:\nbool wxTempFile::Open(const wxString & strName)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString strName(lua_tostring(L,2),lua_objlen(L,2));

		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTempFile::Open(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Open(strName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long long wxTempFile::Seek(long long ofs, wxSeekMode mode = ::wxFromStart)
	static int _bind_Seek(lua_State *L) {
		if (!_lg_typecheck_Seek(L)) {
			luaL_error(L, "luna typecheck failed in long long wxTempFile::Seek(long long ofs, wxSeekMode mode = ::wxFromStart) function, expected prototype:\nlong long wxTempFile::Seek(long long ofs, wxSeekMode mode = ::wxFromStart)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long long ofs=(long long)lua_tonumber(L,2);
		wxSeekMode mode=luatop>2 ? (wxSeekMode)lua_tointeger(L,3) : (wxSeekMode)::wxFromStart;

		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxTempFile::Seek(long long, wxSeekMode). Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->Seek(ofs, mode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long long wxTempFile::Tell() const
	static int _bind_Tell(lua_State *L) {
		if (!_lg_typecheck_Tell(L)) {
			luaL_error(L, "luna typecheck failed in long long wxTempFile::Tell() const function, expected prototype:\nlong long wxTempFile::Tell() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTempFile* self=(Luna< wxTempFile >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long long wxTempFile::Tell() const. Got : '%s'\n%s",typeid(Luna< wxTempFile >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long long lret = self->Tell();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTempFile* LunaTraits< wxTempFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTempFile::_bind_ctor(L);
}

void LunaTraits< wxTempFile >::_bind_dtor(wxTempFile* obj) {
	delete obj;
}

const char LunaTraits< wxTempFile >::className[] = "wxTempFile";
const char LunaTraits< wxTempFile >::fullName[] = "wxTempFile";
const char LunaTraits< wxTempFile >::moduleName[] = "wx";
const char* LunaTraits< wxTempFile >::parents[] = {0};
const int LunaTraits< wxTempFile >::hash = 18640466;
const int LunaTraits< wxTempFile >::uniqueIDs[] = {18640466,0};

luna_RegType LunaTraits< wxTempFile >::methods[] = {
	{"Commit", &luna_wrapper_wxTempFile::_bind_Commit},
	{"Discard", &luna_wrapper_wxTempFile::_bind_Discard},
	{"Flush", &luna_wrapper_wxTempFile::_bind_Flush},
	{"IsOpened", &luna_wrapper_wxTempFile::_bind_IsOpened},
	{"Length", &luna_wrapper_wxTempFile::_bind_Length},
	{"Open", &luna_wrapper_wxTempFile::_bind_Open},
	{"Seek", &luna_wrapper_wxTempFile::_bind_Seek},
	{"Tell", &luna_wrapper_wxTempFile::_bind_Tell},
	{"dynCast", &luna_wrapper_wxTempFile::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTempFile::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTempFile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTempFile::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTempFile >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTempFile >::enumValues[] = {
	{0,0}
};


