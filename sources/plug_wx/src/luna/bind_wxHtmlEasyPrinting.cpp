#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlEasyPrinting.h>

class luna_wrapper_wxHtmlEasyPrinting {
public:
	typedef Luna< wxHtmlEasyPrinting > luna_t;

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

		wxHtmlEasyPrinting* self= (wxHtmlEasyPrinting*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlEasyPrinting >::push(L,self,false);
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
		//wxHtmlEasyPrinting* ptr= dynamic_cast< wxHtmlEasyPrinting* >(Luna< wxObject >::check(L,1));
		wxHtmlEasyPrinting* ptr= luna_caster< wxObject, wxHtmlEasyPrinting >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlEasyPrinting >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageSetupData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageSetup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PreviewFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PreviewText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrintFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrintText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStandardFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFooter(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHeader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParentWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlEasyPrinting::wxHtmlEasyPrinting(const wxString & name = "Printing", wxWindow * parentWindow = NULL)
	static wxHtmlEasyPrinting* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlEasyPrinting::wxHtmlEasyPrinting(const wxString & name = \"Printing\", wxWindow * parentWindow = NULL) function, expected prototype:\nwxHtmlEasyPrinting::wxHtmlEasyPrinting(const wxString & name = \"Printing\", wxWindow * parentWindow = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxWindow* parentWindow=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wxHtmlEasyPrinting(name, parentWindow);
	}

	// wxHtmlEasyPrinting::wxHtmlEasyPrinting(lua_Table * data, const wxString & name = "Printing", wxWindow * parentWindow = NULL)
	static wxHtmlEasyPrinting* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlEasyPrinting::wxHtmlEasyPrinting(lua_Table * data, const wxString & name = \"Printing\", wxWindow * parentWindow = NULL) function, expected prototype:\nwxHtmlEasyPrinting::wxHtmlEasyPrinting(lua_Table * data, const wxString & name = \"Printing\", wxWindow * parentWindow = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxWindow* parentWindow=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;

		return new wrapper_wxHtmlEasyPrinting(L,NULL, name, parentWindow);
	}

	// Overload binder for wxHtmlEasyPrinting::wxHtmlEasyPrinting
	static wxHtmlEasyPrinting* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlEasyPrinting, cannot match any of the overloads for function wxHtmlEasyPrinting:\n  wxHtmlEasyPrinting(const wxString &, wxWindow *)\n  wxHtmlEasyPrinting(lua_Table *, const wxString &, wxWindow *)\n");
		return NULL;
	}


	// Function binds:
	// const wxString & wxHtmlEasyPrinting::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxHtmlEasyPrinting::GetName() const function, expected prototype:\nconst wxString & wxHtmlEasyPrinting::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxHtmlEasyPrinting::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPageSetupDialogData * wxHtmlEasyPrinting::GetPageSetupData()
	static int _bind_GetPageSetupData(lua_State *L) {
		if (!_lg_typecheck_GetPageSetupData(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData * wxHtmlEasyPrinting::GetPageSetupData() function, expected prototype:\nwxPageSetupDialogData * wxHtmlEasyPrinting::GetPageSetupData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPageSetupDialogData * wxHtmlEasyPrinting::GetPageSetupData(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPageSetupDialogData * lret = self->GetPageSetupData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPageSetupDialogData >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxHtmlEasyPrinting::GetParentWindow() const
	static int _bind_GetParentWindow(lua_State *L) {
		if (!_lg_typecheck_GetParentWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxHtmlEasyPrinting::GetParentWindow() const function, expected prototype:\nwxWindow * wxHtmlEasyPrinting::GetParentWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxHtmlEasyPrinting::GetParentWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetParentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlEasyPrinting::PageSetup()
	static int _bind_PageSetup(lua_State *L) {
		if (!_lg_typecheck_PageSetup(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::PageSetup() function, expected prototype:\nvoid wxHtmlEasyPrinting::PageSetup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::PageSetup(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PageSetup();

		return 0;
	}

	// bool wxHtmlEasyPrinting::PreviewFile(const wxString & htmlfile)
	static int _bind_PreviewFile(lua_State *L) {
		if (!_lg_typecheck_PreviewFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlEasyPrinting::PreviewFile(const wxString & htmlfile) function, expected prototype:\nbool wxHtmlEasyPrinting::PreviewFile(const wxString & htmlfile)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString htmlfile(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlEasyPrinting::PreviewFile(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PreviewFile(htmlfile);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlEasyPrinting::PreviewText(const wxString & htmltext, const wxString & basepath = wxEmptyString)
	static int _bind_PreviewText(lua_State *L) {
		if (!_lg_typecheck_PreviewText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlEasyPrinting::PreviewText(const wxString & htmltext, const wxString & basepath = wxEmptyString) function, expected prototype:\nbool wxHtmlEasyPrinting::PreviewText(const wxString & htmltext, const wxString & basepath = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString htmltext(lua_tostring(L,2),lua_objlen(L,2));
		wxString basepath(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlEasyPrinting::PreviewText(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PreviewText(htmltext, basepath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlEasyPrinting::PrintFile(const wxString & htmlfile)
	static int _bind_PrintFile(lua_State *L) {
		if (!_lg_typecheck_PrintFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlEasyPrinting::PrintFile(const wxString & htmlfile) function, expected prototype:\nbool wxHtmlEasyPrinting::PrintFile(const wxString & htmlfile)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString htmlfile(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlEasyPrinting::PrintFile(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PrintFile(htmlfile);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlEasyPrinting::PrintText(const wxString & htmltext, const wxString & basepath = wxEmptyString)
	static int _bind_PrintText(lua_State *L) {
		if (!_lg_typecheck_PrintText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlEasyPrinting::PrintText(const wxString & htmltext, const wxString & basepath = wxEmptyString) function, expected prototype:\nbool wxHtmlEasyPrinting::PrintText(const wxString & htmltext, const wxString & basepath = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString htmltext(lua_tostring(L,2),lua_objlen(L,2));
		wxString basepath(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlEasyPrinting::PrintText(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PrintText(htmltext, basepath);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlEasyPrinting::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)
	static int _bind_SetFonts(lua_State *L) {
		if (!_lg_typecheck_SetFonts(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL) function, expected prototype:\nvoid wxHtmlEasyPrinting::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString normal_face(lua_tostring(L,2),lua_objlen(L,2));
		wxString fixed_face(lua_tostring(L,3),lua_objlen(L,3));
		const int* sizes=luatop>3 ? (const int*)Luna< void >::check(L,4) : (const int*)NULL;

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::SetFonts(const wxString &, const wxString &, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFonts(normal_face, fixed_face, sizes);

		return 0;
	}

	// void wxHtmlEasyPrinting::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::SetName(const wxString & name) function, expected prototype:\nvoid wxHtmlEasyPrinting::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxHtmlEasyPrinting::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)
	static int _bind_SetStandardFonts(lua_State *L) {
		if (!_lg_typecheck_SetStandardFonts(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString) function, expected prototype:\nvoid wxHtmlEasyPrinting::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int size=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;
		wxString normal_face(lua_tostring(L,3),lua_objlen(L,3));
		wxString fixed_face(lua_tostring(L,4),lua_objlen(L,4));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::SetStandardFonts(int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStandardFonts(size, normal_face, fixed_face);

		return 0;
	}

	// void wxHtmlEasyPrinting::SetFooter(const wxString & footer, int pg = ::wxPAGE_ALL)
	static int _bind_SetFooter(lua_State *L) {
		if (!_lg_typecheck_SetFooter(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::SetFooter(const wxString & footer, int pg = ::wxPAGE_ALL) function, expected prototype:\nvoid wxHtmlEasyPrinting::SetFooter(const wxString & footer, int pg = ::wxPAGE_ALL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString footer(lua_tostring(L,2),lua_objlen(L,2));
		int pg=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPAGE_ALL;

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::SetFooter(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFooter(footer, pg);

		return 0;
	}

	// void wxHtmlEasyPrinting::SetHeader(const wxString & header, int pg = ::wxPAGE_ALL)
	static int _bind_SetHeader(lua_State *L) {
		if (!_lg_typecheck_SetHeader(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::SetHeader(const wxString & header, int pg = ::wxPAGE_ALL) function, expected prototype:\nvoid wxHtmlEasyPrinting::SetHeader(const wxString & header, int pg = ::wxPAGE_ALL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString header(lua_tostring(L,2),lua_objlen(L,2));
		int pg=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPAGE_ALL;

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::SetHeader(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHeader(header, pg);

		return 0;
	}

	// void wxHtmlEasyPrinting::SetParentWindow(wxWindow * window)
	static int _bind_SetParentWindow(lua_State *L) {
		if (!_lg_typecheck_SetParentWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlEasyPrinting::SetParentWindow(wxWindow * window) function, expected prototype:\nvoid wxHtmlEasyPrinting::SetParentWindow(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlEasyPrinting::SetParentWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParentWindow(window);

		return 0;
	}

	// wxClassInfo * wxHtmlEasyPrinting::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlEasyPrinting::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlEasyPrinting::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlEasyPrinting* self=Luna< wxObject >::checkSubType< wxHtmlEasyPrinting >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlEasyPrinting::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlEasyPrinting::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlEasyPrinting* LunaTraits< wxHtmlEasyPrinting >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlEasyPrinting::_bind_ctor(L);
}

void LunaTraits< wxHtmlEasyPrinting >::_bind_dtor(wxHtmlEasyPrinting* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlEasyPrinting >::className[] = "wxHtmlEasyPrinting";
const char LunaTraits< wxHtmlEasyPrinting >::fullName[] = "wxHtmlEasyPrinting";
const char LunaTraits< wxHtmlEasyPrinting >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlEasyPrinting >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlEasyPrinting >::hash = 26706267;
const int LunaTraits< wxHtmlEasyPrinting >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlEasyPrinting >::methods[] = {
	{"GetName", &luna_wrapper_wxHtmlEasyPrinting::_bind_GetName},
	{"GetPageSetupData", &luna_wrapper_wxHtmlEasyPrinting::_bind_GetPageSetupData},
	{"GetParentWindow", &luna_wrapper_wxHtmlEasyPrinting::_bind_GetParentWindow},
	{"PageSetup", &luna_wrapper_wxHtmlEasyPrinting::_bind_PageSetup},
	{"PreviewFile", &luna_wrapper_wxHtmlEasyPrinting::_bind_PreviewFile},
	{"PreviewText", &luna_wrapper_wxHtmlEasyPrinting::_bind_PreviewText},
	{"PrintFile", &luna_wrapper_wxHtmlEasyPrinting::_bind_PrintFile},
	{"PrintText", &luna_wrapper_wxHtmlEasyPrinting::_bind_PrintText},
	{"SetFonts", &luna_wrapper_wxHtmlEasyPrinting::_bind_SetFonts},
	{"SetName", &luna_wrapper_wxHtmlEasyPrinting::_bind_SetName},
	{"SetStandardFonts", &luna_wrapper_wxHtmlEasyPrinting::_bind_SetStandardFonts},
	{"SetFooter", &luna_wrapper_wxHtmlEasyPrinting::_bind_SetFooter},
	{"SetHeader", &luna_wrapper_wxHtmlEasyPrinting::_bind_SetHeader},
	{"SetParentWindow", &luna_wrapper_wxHtmlEasyPrinting::_bind_SetParentWindow},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlEasyPrinting::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxHtmlEasyPrinting::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlEasyPrinting::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlEasyPrinting::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlEasyPrinting >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlEasyPrinting::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlEasyPrinting >::enumValues[] = {
	{0,0}
};


