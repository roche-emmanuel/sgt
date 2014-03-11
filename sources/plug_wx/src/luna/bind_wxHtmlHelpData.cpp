#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlHelpData.h>

class luna_wrapper_wxHtmlHelpData {
public:
	typedef Luna< wxHtmlHelpData > luna_t;

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

		wxHtmlHelpData* self= (wxHtmlHelpData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlHelpData >::push(L,self,false);
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
		//wxHtmlHelpData* ptr= dynamic_cast< wxHtmlHelpData* >(Luna< wxObject >::check(L,1));
		wxHtmlHelpData* ptr= luna_caster< wxObject, wxHtmlHelpData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlHelpData >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_AddBook(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindPageById(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindPageByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBookRecArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetContentsArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndexArray(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTempDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpData::wxHtmlHelpData()
	static wxHtmlHelpData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpData::wxHtmlHelpData() function, expected prototype:\nwxHtmlHelpData::wxHtmlHelpData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxHtmlHelpData();
	}

	// wxHtmlHelpData::wxHtmlHelpData(lua_Table * data)
	static wxHtmlHelpData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpData::wxHtmlHelpData(lua_Table * data) function, expected prototype:\nwxHtmlHelpData::wxHtmlHelpData(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxHtmlHelpData(L,NULL);
	}

	// Overload binder for wxHtmlHelpData::wxHtmlHelpData
	static wxHtmlHelpData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlHelpData, cannot match any of the overloads for function wxHtmlHelpData:\n  wxHtmlHelpData()\n  wxHtmlHelpData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlHelpData::AddBook(const wxString & book_url)
	static int _bind_AddBook(lua_State *L) {
		if (!_lg_typecheck_AddBook(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpData::AddBook(const wxString & book_url) function, expected prototype:\nbool wxHtmlHelpData::AddBook(const wxString & book_url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString book_url(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpData::AddBook(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddBook(book_url);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlHelpData::FindPageById(int id)
	static int _bind_FindPageById(lua_State *L) {
		if (!_lg_typecheck_FindPageById(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpData::FindPageById(int id) function, expected prototype:\nwxString wxHtmlHelpData::FindPageById(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpData::FindPageById(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindPageById(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlHelpData::FindPageByName(const wxString & page)
	static int _bind_FindPageByName(lua_State *L) {
		if (!_lg_typecheck_FindPageByName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlHelpData::FindPageByName(const wxString & page) function, expected prototype:\nwxString wxHtmlHelpData::FindPageByName(const wxString & page)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString page(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlHelpData::FindPageByName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindPageByName(page);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const
	static int _bind_GetBookRecArray(lua_State *L) {
		if (!_lg_typecheck_GetBookRecArray(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const function, expected prototype:\nconst wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlBookRecArray & wxHtmlHelpData::GetBookRecArray() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlBookRecArray* lret = &self->GetBookRecArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlBookRecArray >::push(L,lret,false);

		return 1;
	}

	// const wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const
	static int _bind_GetContentsArray(lua_State *L) {
		if (!_lg_typecheck_GetContentsArray(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const function, expected prototype:\nconst wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlHelpDataItems & wxHtmlHelpData::GetContentsArray() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlHelpDataItems* lret = &self->GetContentsArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlHelpDataItems >::push(L,lret,false);

		return 1;
	}

	// const wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const
	static int _bind_GetIndexArray(lua_State *L) {
		if (!_lg_typecheck_GetIndexArray(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const function, expected prototype:\nconst wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlHelpDataItems & wxHtmlHelpData::GetIndexArray() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlHelpDataItems* lret = &self->GetIndexArray();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlHelpDataItems >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlHelpData::SetTempDir(const wxString & path)
	static int _bind_SetTempDir(lua_State *L) {
		if (!_lg_typecheck_SetTempDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpData::SetTempDir(const wxString & path) function, expected prototype:\nvoid wxHtmlHelpData::SetTempDir(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpData::SetTempDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTempDir(path);

		return 0;
	}

	// wxClassInfo * wxHtmlHelpData::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlHelpData::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlHelpData::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpData* self=Luna< wxObject >::checkSubType< wxHtmlHelpData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlHelpData::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlHelpData::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlHelpData* LunaTraits< wxHtmlHelpData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpData::_bind_ctor(L);
}

void LunaTraits< wxHtmlHelpData >::_bind_dtor(wxHtmlHelpData* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpData >::className[] = "wxHtmlHelpData";
const char LunaTraits< wxHtmlHelpData >::fullName[] = "wxHtmlHelpData";
const char LunaTraits< wxHtmlHelpData >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlHelpData >::hash = 21431065;
const int LunaTraits< wxHtmlHelpData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlHelpData >::methods[] = {
	{"AddBook", &luna_wrapper_wxHtmlHelpData::_bind_AddBook},
	{"FindPageById", &luna_wrapper_wxHtmlHelpData::_bind_FindPageById},
	{"FindPageByName", &luna_wrapper_wxHtmlHelpData::_bind_FindPageByName},
	{"GetBookRecArray", &luna_wrapper_wxHtmlHelpData::_bind_GetBookRecArray},
	{"GetContentsArray", &luna_wrapper_wxHtmlHelpData::_bind_GetContentsArray},
	{"GetIndexArray", &luna_wrapper_wxHtmlHelpData::_bind_GetIndexArray},
	{"SetTempDir", &luna_wrapper_wxHtmlHelpData::_bind_SetTempDir},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlHelpData::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxHtmlHelpData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlHelpData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlHelpData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpData >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlHelpData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpData >::enumValues[] = {
	{0,0}
};


