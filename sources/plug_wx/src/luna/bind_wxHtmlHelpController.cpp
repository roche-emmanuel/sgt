#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlHelpController.h>

class luna_wrapper_wxHtmlHelpController {
public:
	typedef Luna< wxHtmlHelpController > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxHtmlHelpController,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14199711) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlHelpController*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlHelpController* rhs =(Luna< wxHtmlHelpController >::check(L,2));
		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
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

		wxHtmlHelpController* self= (wxHtmlHelpController*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlHelpController >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14199711) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHtmlHelpController >::check(L,1));
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

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlHelpController");
		
		return luna_dynamicCast(L,converters,"wxHtmlHelpController",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddBook_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		if( (!(Luna< wxFileName >::check(L,2))) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddBook_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Display_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Display_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisplayContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisplayIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_KeywordSearch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShouldPreventAppExit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTempDir(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTitleFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UseConfig(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DisplayContents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_KeywordSearch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ReadCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WriteCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlHelpController::wxHtmlHelpController(int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL)
	static wxHtmlHelpController* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpController::wxHtmlHelpController(int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL) function, expected prototype:\nwxHtmlHelpController::wxHtmlHelpController(int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int style=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxHF_DEFAULT_STYLE;
		wxWindow* parentWindow=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wxHtmlHelpController(style, parentWindow);
	}

	// wxHtmlHelpController::wxHtmlHelpController(lua_Table * data, int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL)
	static wxHtmlHelpController* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlHelpController::wxHtmlHelpController(lua_Table * data, int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL) function, expected prototype:\nwxHtmlHelpController::wxHtmlHelpController(lua_Table * data, int style = wxHF_DEFAULT_STYLE, wxWindow * parentWindow = NULL)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int style=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxHF_DEFAULT_STYLE;
		wxWindow* parentWindow=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;

		return new wrapper_wxHtmlHelpController(L,NULL, style, parentWindow);
	}

	// Overload binder for wxHtmlHelpController::wxHtmlHelpController
	static wxHtmlHelpController* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlHelpController, cannot match any of the overloads for function wxHtmlHelpController:\n  wxHtmlHelpController(int, wxWindow *)\n  wxHtmlHelpController(lua_Table *, int, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlHelpController::AddBook(const wxFileName & bookFile, bool showWaitMsg = false)
	static int _bind_AddBook_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddBook_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::AddBook(const wxFileName & bookFile, bool showWaitMsg = false) function, expected prototype:\nbool wxHtmlHelpController::AddBook(const wxFileName & bookFile, bool showWaitMsg = false)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxFileName* bookFile_ptr=(Luna< wxFileName >::check(L,2));
		if( !bookFile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bookFile in wxHtmlHelpController::AddBook function");
		}
		const wxFileName & bookFile=*bookFile_ptr;
		bool showWaitMsg=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::AddBook(const wxFileName &, bool). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddBook(bookFile, showWaitMsg);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpController::AddBook(const wxString & bookUrl, bool showWaitMsg = false)
	static int _bind_AddBook_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddBook_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::AddBook(const wxString & bookUrl, bool showWaitMsg = false) function, expected prototype:\nbool wxHtmlHelpController::AddBook(const wxString & bookUrl, bool showWaitMsg = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString bookUrl(lua_tostring(L,2),lua_objlen(L,2));
		bool showWaitMsg=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::AddBook(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddBook(bookUrl, showWaitMsg);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHtmlHelpController::AddBook
	static int _bind_AddBook(lua_State *L) {
		if (_lg_typecheck_AddBook_overload_1(L)) return _bind_AddBook_overload_1(L);
		if (_lg_typecheck_AddBook_overload_2(L)) return _bind_AddBook_overload_2(L);

		luaL_error(L, "error in function AddBook, cannot match any of the overloads for function AddBook:\n  AddBook(const wxFileName &, bool)\n  AddBook(const wxString &, bool)\n");
		return 0;
	}

	// bool wxHtmlHelpController::Display(const wxString & x)
	static int _bind_Display_overload_1(lua_State *L) {
		if (!_lg_typecheck_Display_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::Display(const wxString & x) function, expected prototype:\nbool wxHtmlHelpController::Display(const wxString & x)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString x(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::Display(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Display(x);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpController::Display(int id)
	static int _bind_Display_overload_2(lua_State *L) {
		if (!_lg_typecheck_Display_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::Display(int id) function, expected prototype:\nbool wxHtmlHelpController::Display(int id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::Display(int). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Display(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxHtmlHelpController::Display
	static int _bind_Display(lua_State *L) {
		if (_lg_typecheck_Display_overload_1(L)) return _bind_Display_overload_1(L);
		if (_lg_typecheck_Display_overload_2(L)) return _bind_Display_overload_2(L);

		luaL_error(L, "error in function Display, cannot match any of the overloads for function Display:\n  Display(const wxString &)\n  Display(int)\n");
		return 0;
	}

	// bool wxHtmlHelpController::DisplayContents()
	static int _bind_DisplayContents(lua_State *L) {
		if (!_lg_typecheck_DisplayContents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::DisplayContents() function, expected prototype:\nbool wxHtmlHelpController::DisplayContents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::DisplayContents(). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DisplayContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpController::DisplayIndex()
	static int _bind_DisplayIndex(lua_State *L) {
		if (!_lg_typecheck_DisplayIndex(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::DisplayIndex() function, expected prototype:\nbool wxHtmlHelpController::DisplayIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::DisplayIndex(). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DisplayIndex();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpController::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)
	static int _bind_KeywordSearch(lua_State *L) {
		if (!_lg_typecheck_KeywordSearch(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL) function, expected prototype:\nbool wxHtmlHelpController::KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString keyword(lua_tostring(L,2),lua_objlen(L,2));
		wxHelpSearchMode mode=luatop>2 ? (wxHelpSearchMode)lua_tointeger(L,3) : (wxHelpSearchMode)::wxHELP_SEARCH_ALL;

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::KeywordSearch(const wxString &, wxHelpSearchMode). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->KeywordSearch(keyword, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpController::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	static int _bind_ReadCustomization(lua_State *L) {
		if (!_lg_typecheck_ReadCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpController::ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::ReadCustomization(wxConfigBase *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReadCustomization(cfg, path);

		return 0;
	}

	// void wxHtmlHelpController::SetShouldPreventAppExit(bool enable)
	static int _bind_SetShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_SetShouldPreventAppExit(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::SetShouldPreventAppExit(bool enable) function, expected prototype:\nvoid wxHtmlHelpController::SetShouldPreventAppExit(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::SetShouldPreventAppExit(bool). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetShouldPreventAppExit(enable);

		return 0;
	}

	// void wxHtmlHelpController::SetTempDir(const wxString & path)
	static int _bind_SetTempDir(lua_State *L) {
		if (!_lg_typecheck_SetTempDir(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::SetTempDir(const wxString & path) function, expected prototype:\nvoid wxHtmlHelpController::SetTempDir(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::SetTempDir(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTempDir(path);

		return 0;
	}

	// void wxHtmlHelpController::SetTitleFormat(const wxString & format)
	static int _bind_SetTitleFormat(lua_State *L) {
		if (!_lg_typecheck_SetTitleFormat(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::SetTitleFormat(const wxString & format) function, expected prototype:\nvoid wxHtmlHelpController::SetTitleFormat(const wxString & format)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString format(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::SetTitleFormat(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTitleFormat(format);

		return 0;
	}

	// void wxHtmlHelpController::UseConfig(wxConfigBase * config, const wxString & rootpath = wxEmptyString)
	static int _bind_UseConfig(lua_State *L) {
		if (!_lg_typecheck_UseConfig(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::UseConfig(wxConfigBase * config, const wxString & rootpath = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpController::UseConfig(wxConfigBase * config, const wxString & rootpath = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* config=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString rootpath(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::UseConfig(wxConfigBase *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UseConfig(config, rootpath);

		return 0;
	}

	// void wxHtmlHelpController::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	static int _bind_WriteCustomization(lua_State *L) {
		if (!_lg_typecheck_WriteCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpController::WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::WriteCustomization(wxConfigBase *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteCustomization(cfg, path);

		return 0;
	}

	// bool wxHtmlHelpController::base_DisplayContents()
	static int _bind_base_DisplayContents(lua_State *L) {
		if (!_lg_typecheck_base_DisplayContents(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::base_DisplayContents() function, expected prototype:\nbool wxHtmlHelpController::base_DisplayContents()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::base_DisplayContents(). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlHelpController::DisplayContents();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlHelpController::base_KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)
	static int _bind_base_KeywordSearch(lua_State *L) {
		if (!_lg_typecheck_base_KeywordSearch(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlHelpController::base_KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL) function, expected prototype:\nbool wxHtmlHelpController::base_KeywordSearch(const wxString & keyword, wxHelpSearchMode mode = ::wxHELP_SEARCH_ALL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString keyword(lua_tostring(L,2),lua_objlen(L,2));
		wxHelpSearchMode mode=luatop>2 ? (wxHelpSearchMode)lua_tointeger(L,3) : (wxHelpSearchMode)::wxHELP_SEARCH_ALL;

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlHelpController::base_KeywordSearch(const wxString &, wxHelpSearchMode). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlHelpController::KeywordSearch(keyword, mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlHelpController::base_ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	static int _bind_base_ReadCustomization(lua_State *L) {
		if (!_lg_typecheck_base_ReadCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::base_ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpController::base_ReadCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::base_ReadCustomization(wxConfigBase *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlHelpController::ReadCustomization(cfg, path);

		return 0;
	}

	// void wxHtmlHelpController::base_WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)
	static int _bind_base_WriteCustomization(lua_State *L) {
		if (!_lg_typecheck_base_WriteCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlHelpController::base_WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString) function, expected prototype:\nvoid wxHtmlHelpController::base_WriteCustomization(wxConfigBase * cfg, const wxString & path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlHelpController* self=(Luna< wxHtmlHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlHelpController::base_WriteCustomization(wxConfigBase *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlHelpController >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlHelpController::WriteCustomization(cfg, path);

		return 0;
	}


	// Operator binds:

};

wxHtmlHelpController* LunaTraits< wxHtmlHelpController >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlHelpController::_bind_ctor(L);
}

void LunaTraits< wxHtmlHelpController >::_bind_dtor(wxHtmlHelpController* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlHelpController >::className[] = "wxHtmlHelpController";
const char LunaTraits< wxHtmlHelpController >::fullName[] = "wxHtmlHelpController";
const char LunaTraits< wxHtmlHelpController >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlHelpController >::parents[] = {0};
const int LunaTraits< wxHtmlHelpController >::hash = 14199711;
const int LunaTraits< wxHtmlHelpController >::uniqueIDs[] = {14199711,0};

luna_RegType LunaTraits< wxHtmlHelpController >::methods[] = {
	{"AddBook", &luna_wrapper_wxHtmlHelpController::_bind_AddBook},
	{"Display", &luna_wrapper_wxHtmlHelpController::_bind_Display},
	{"DisplayContents", &luna_wrapper_wxHtmlHelpController::_bind_DisplayContents},
	{"DisplayIndex", &luna_wrapper_wxHtmlHelpController::_bind_DisplayIndex},
	{"KeywordSearch", &luna_wrapper_wxHtmlHelpController::_bind_KeywordSearch},
	{"ReadCustomization", &luna_wrapper_wxHtmlHelpController::_bind_ReadCustomization},
	{"SetShouldPreventAppExit", &luna_wrapper_wxHtmlHelpController::_bind_SetShouldPreventAppExit},
	{"SetTempDir", &luna_wrapper_wxHtmlHelpController::_bind_SetTempDir},
	{"SetTitleFormat", &luna_wrapper_wxHtmlHelpController::_bind_SetTitleFormat},
	{"UseConfig", &luna_wrapper_wxHtmlHelpController::_bind_UseConfig},
	{"WriteCustomization", &luna_wrapper_wxHtmlHelpController::_bind_WriteCustomization},
	{"base_DisplayContents", &luna_wrapper_wxHtmlHelpController::_bind_base_DisplayContents},
	{"base_KeywordSearch", &luna_wrapper_wxHtmlHelpController::_bind_base_KeywordSearch},
	{"base_ReadCustomization", &luna_wrapper_wxHtmlHelpController::_bind_base_ReadCustomization},
	{"base_WriteCustomization", &luna_wrapper_wxHtmlHelpController::_bind_base_WriteCustomization},
	{"dynCast", &luna_wrapper_wxHtmlHelpController::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlHelpController::_bind___eq},
	{"fromVoid", &luna_wrapper_wxHtmlHelpController::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlHelpController::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlHelpController::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlHelpController >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlHelpController >::enumValues[] = {
	{0,0}
};


