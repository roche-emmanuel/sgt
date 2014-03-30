#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFSFile.h>

class luna_wrapper_wxFSFile {
public:
	typedef Luna< wxFSFile > luna_t;

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

		wxFSFile* self= (wxFSFile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFSFile >::push(L,self,false);
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
		//wxFSFile* ptr= dynamic_cast< wxFSFile* >(Luna< wxObject >::check(L,1));
		wxFSFile* ptr= luna_caster< wxObject, wxFSFile >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFSFile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxInputStream >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,57497519) ) return false;
		if( (!(Luna< wxDateTime >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxInputStream >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,6,57497519) ) return false;
		if( (!(Luna< wxDateTime >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DetachStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMimeType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModificationTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStream(lua_State *L) {
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
	// wxFSFile::wxFSFile(wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif)
	static wxFSFile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFSFile::wxFSFile(wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif) function, expected prototype:\nwxFSFile::wxFSFile(wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream=(Luna< wxObject >::checkSubType< wxInputStream >(L,1));
		wxString location(lua_tostring(L,2),lua_objlen(L,2));
		wxString mimetype(lua_tostring(L,3),lua_objlen(L,3));
		wxString anchor(lua_tostring(L,4),lua_objlen(L,4));
		wxDateTime* modif_ptr=(Luna< wxDateTime >::check(L,5));
		if( !modif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modif in wxFSFile::wxFSFile function");
		}
		wxDateTime modif=*modif_ptr;

		return new wxFSFile(stream, location, mimetype, anchor, modif);
	}

	// wxFSFile::wxFSFile(lua_Table * data, wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif)
	static wxFSFile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFSFile::wxFSFile(lua_Table * data, wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif) function, expected prototype:\nwxFSFile::wxFSFile(lua_Table * data, wxInputStream * stream, const wxString & location, const wxString & mimetype, const wxString & anchor, wxDateTime modif)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		wxInputStream* stream=(Luna< wxObject >::checkSubType< wxInputStream >(L,2));
		wxString location(lua_tostring(L,3),lua_objlen(L,3));
		wxString mimetype(lua_tostring(L,4),lua_objlen(L,4));
		wxString anchor(lua_tostring(L,5),lua_objlen(L,5));
		wxDateTime* modif_ptr=(Luna< wxDateTime >::check(L,6));
		if( !modif_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg modif in wxFSFile::wxFSFile function");
		}
		wxDateTime modif=*modif_ptr;

		return new wrapper_wxFSFile(L,NULL, stream, location, mimetype, anchor, modif);
	}

	// Overload binder for wxFSFile::wxFSFile
	static wxFSFile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFSFile, cannot match any of the overloads for function wxFSFile:\n  wxFSFile(wxInputStream *, const wxString &, const wxString &, const wxString &, wxDateTime)\n  wxFSFile(lua_Table *, wxInputStream *, const wxString &, const wxString &, const wxString &, wxDateTime)\n");
		return NULL;
	}


	// Function binds:
	// wxInputStream * wxFSFile::DetachStream()
	static int _bind_DetachStream(lua_State *L) {
		if (!_lg_typecheck_DetachStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxFSFile::DetachStream() function, expected prototype:\nwxInputStream * wxFSFile::DetachStream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxFSFile::DetachStream(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->DetachStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxFSFile::GetAnchor() const
	static int _bind_GetAnchor(lua_State *L) {
		if (!_lg_typecheck_GetAnchor(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxFSFile::GetAnchor() const function, expected prototype:\nconst wxString & wxFSFile::GetAnchor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxFSFile::GetAnchor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetAnchor();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxFSFile::GetLocation() const
	static int _bind_GetLocation(lua_State *L) {
		if (!_lg_typecheck_GetLocation(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxFSFile::GetLocation() const function, expected prototype:\nconst wxString & wxFSFile::GetLocation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxFSFile::GetLocation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetLocation();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxFSFile::GetMimeType() const
	static int _bind_GetMimeType(lua_State *L) {
		if (!_lg_typecheck_GetMimeType(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxFSFile::GetMimeType() const function, expected prototype:\nconst wxString & wxFSFile::GetMimeType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxFSFile::GetMimeType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetMimeType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDateTime wxFSFile::GetModificationTime() const
	static int _bind_GetModificationTime(lua_State *L) {
		if (!_lg_typecheck_GetModificationTime(L)) {
			luaL_error(L, "luna typecheck failed in wxDateTime wxFSFile::GetModificationTime() const function, expected prototype:\nwxDateTime wxFSFile::GetModificationTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDateTime wxFSFile::GetModificationTime() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDateTime stack_lret = self->GetModificationTime();
		wxDateTime* lret = new wxDateTime(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDateTime >::push(L,lret,true);

		return 1;
	}

	// wxInputStream * wxFSFile::GetStream() const
	static int _bind_GetStream(lua_State *L) {
		if (!_lg_typecheck_GetStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxFSFile::GetStream() const function, expected prototype:\nwxInputStream * wxFSFile::GetStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxFSFile::GetStream() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->GetStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxFSFile::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFSFile::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFSFile::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFSFile* self=Luna< wxObject >::checkSubType< wxFSFile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFSFile::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFSFile::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxFSFile* LunaTraits< wxFSFile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFSFile::_bind_ctor(L);
}

void LunaTraits< wxFSFile >::_bind_dtor(wxFSFile* obj) {
	delete obj;
}

const char LunaTraits< wxFSFile >::className[] = "wxFSFile";
const char LunaTraits< wxFSFile >::fullName[] = "wxFSFile";
const char LunaTraits< wxFSFile >::moduleName[] = "wx";
const char* LunaTraits< wxFSFile >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFSFile >::hash = 84230113;
const int LunaTraits< wxFSFile >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFSFile >::methods[] = {
	{"DetachStream", &luna_wrapper_wxFSFile::_bind_DetachStream},
	{"GetAnchor", &luna_wrapper_wxFSFile::_bind_GetAnchor},
	{"GetLocation", &luna_wrapper_wxFSFile::_bind_GetLocation},
	{"GetMimeType", &luna_wrapper_wxFSFile::_bind_GetMimeType},
	{"GetModificationTime", &luna_wrapper_wxFSFile::_bind_GetModificationTime},
	{"GetStream", &luna_wrapper_wxFSFile::_bind_GetStream},
	{"base_GetClassInfo", &luna_wrapper_wxFSFile::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxFSFile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFSFile::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFSFile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFSFile >::converters[] = {
	{"wxObject", &luna_wrapper_wxFSFile::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFSFile >::enumValues[] = {
	{0,0}
};


