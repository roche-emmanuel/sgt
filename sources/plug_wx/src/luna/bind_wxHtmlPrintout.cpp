#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlPrintout.h>

class luna_wrapper_wxHtmlPrintout {
public:
	typedef Luna< wxHtmlPrintout > luna_t;

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

		wxHtmlPrintout* self= (wxHtmlPrintout*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlPrintout >::push(L,self,false);
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
		//wxHtmlPrintout* ptr= dynamic_cast< wxHtmlPrintout* >(Luna< wxObject >::check(L,1));
		wxHtmlPrintout* ptr= luna_caster< wxObject, wxHtmlPrintout >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlPrintout >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
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

	inline static bool _lg_typecheck_SetHtmlFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHtmlText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlPrintout::wxHtmlPrintout(lua_Table * data, const wxString & title = "Printout")
	static wxHtmlPrintout* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlPrintout::wxHtmlPrintout(lua_Table * data, const wxString & title = \"Printout\") function, expected prototype:\nwxHtmlPrintout::wxHtmlPrintout(lua_Table * data, const wxString & title = \"Printout\")\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxHtmlPrintout(L,NULL, title);
	}


	// Function binds:
	// void wxHtmlPrintout::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)
	static int _bind_SetFonts(lua_State *L) {
		if (!_lg_typecheck_SetFonts(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlPrintout::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL) function, expected prototype:\nvoid wxHtmlPrintout::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString normal_face(lua_tostring(L,2),lua_objlen(L,2));
		wxString fixed_face(lua_tostring(L,3),lua_objlen(L,3));
		const int* sizes=luatop>3 ? (const int*)Luna< void >::check(L,4) : (const int*)NULL;

		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlPrintout::SetFonts(const wxString &, const wxString &, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFonts(normal_face, fixed_face, sizes);

		return 0;
	}

	// void wxHtmlPrintout::SetFooter(const wxString & footer, int pg = ::wxPAGE_ALL)
	static int _bind_SetFooter(lua_State *L) {
		if (!_lg_typecheck_SetFooter(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlPrintout::SetFooter(const wxString & footer, int pg = ::wxPAGE_ALL) function, expected prototype:\nvoid wxHtmlPrintout::SetFooter(const wxString & footer, int pg = ::wxPAGE_ALL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString footer(lua_tostring(L,2),lua_objlen(L,2));
		int pg=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPAGE_ALL;

		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlPrintout::SetFooter(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFooter(footer, pg);

		return 0;
	}

	// void wxHtmlPrintout::SetHeader(const wxString & header, int pg = ::wxPAGE_ALL)
	static int _bind_SetHeader(lua_State *L) {
		if (!_lg_typecheck_SetHeader(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlPrintout::SetHeader(const wxString & header, int pg = ::wxPAGE_ALL) function, expected prototype:\nvoid wxHtmlPrintout::SetHeader(const wxString & header, int pg = ::wxPAGE_ALL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString header(lua_tostring(L,2),lua_objlen(L,2));
		int pg=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxPAGE_ALL;

		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlPrintout::SetHeader(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHeader(header, pg);

		return 0;
	}

	// void wxHtmlPrintout::SetHtmlFile(const wxString & htmlfile)
	static int _bind_SetHtmlFile(lua_State *L) {
		if (!_lg_typecheck_SetHtmlFile(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlPrintout::SetHtmlFile(const wxString & htmlfile) function, expected prototype:\nvoid wxHtmlPrintout::SetHtmlFile(const wxString & htmlfile)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString htmlfile(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlPrintout::SetHtmlFile(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHtmlFile(htmlfile);

		return 0;
	}

	// void wxHtmlPrintout::SetHtmlText(const wxString & html, const wxString & basepath = wxEmptyString, bool isdir = true)
	static int _bind_SetHtmlText(lua_State *L) {
		if (!_lg_typecheck_SetHtmlText(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlPrintout::SetHtmlText(const wxString & html, const wxString & basepath = wxEmptyString, bool isdir = true) function, expected prototype:\nvoid wxHtmlPrintout::SetHtmlText(const wxString & html, const wxString & basepath = wxEmptyString, bool isdir = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString html(lua_tostring(L,2),lua_objlen(L,2));
		wxString basepath(lua_tostring(L,3),lua_objlen(L,3));
		bool isdir=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlPrintout::SetHtmlText(const wxString &, const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHtmlText(html, basepath, isdir);

		return 0;
	}

	// void wxHtmlPrintout::SetMargins(float top = 25.2, float bottom = 25.2, float left = 25.2, float right = 25.2, float spaces = 5)
	static int _bind_SetMargins(lua_State *L) {
		if (!_lg_typecheck_SetMargins(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlPrintout::SetMargins(float top = 25.2, float bottom = 25.2, float left = 25.2, float right = 25.2, float spaces = 5) function, expected prototype:\nvoid wxHtmlPrintout::SetMargins(float top = 25.2, float bottom = 25.2, float left = 25.2, float right = 25.2, float spaces = 5)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float top=luatop>1 ? (float)lua_tonumber(L,2) : (float)25.2;
		float bottom=luatop>2 ? (float)lua_tonumber(L,3) : (float)25.2;
		float left=luatop>3 ? (float)lua_tonumber(L,4) : (float)25.2;
		float right=luatop>4 ? (float)lua_tonumber(L,5) : (float)25.2;
		float spaces=luatop>5 ? (float)lua_tonumber(L,6) : (float)5;

		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlPrintout::SetMargins(float, float, float, float, float). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMargins(top, bottom, left, right, spaces);

		return 0;
	}

	// static void wxHtmlPrintout::AddFilter(wxHtmlFilter * filter)
	static int _bind_AddFilter(lua_State *L) {
		if (!_lg_typecheck_AddFilter(L)) {
			luaL_error(L, "luna typecheck failed in static void wxHtmlPrintout::AddFilter(wxHtmlFilter * filter) function, expected prototype:\nstatic void wxHtmlPrintout::AddFilter(wxHtmlFilter * filter)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlFilter* filter=(Luna< wxObject >::checkSubType< wxHtmlFilter >(L,1));

		wxHtmlPrintout::AddFilter(filter);

		return 0;
	}

	// wxClassInfo * wxHtmlPrintout::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlPrintout::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlPrintout::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlPrintout* self=Luna< wxObject >::checkSubType< wxHtmlPrintout >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlPrintout::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlPrintout::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlPrintout* LunaTraits< wxHtmlPrintout >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlPrintout::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxPrintout::OnPrintPage(int pageNum)
}

void LunaTraits< wxHtmlPrintout >::_bind_dtor(wxHtmlPrintout* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlPrintout >::className[] = "wxHtmlPrintout";
const char LunaTraits< wxHtmlPrintout >::fullName[] = "wxHtmlPrintout";
const char LunaTraits< wxHtmlPrintout >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlPrintout >::parents[] = {"wx.wxPrintout", 0};
const int LunaTraits< wxHtmlPrintout >::hash = 73572620;
const int LunaTraits< wxHtmlPrintout >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlPrintout >::methods[] = {
	{"SetFonts", &luna_wrapper_wxHtmlPrintout::_bind_SetFonts},
	{"SetFooter", &luna_wrapper_wxHtmlPrintout::_bind_SetFooter},
	{"SetHeader", &luna_wrapper_wxHtmlPrintout::_bind_SetHeader},
	{"SetHtmlFile", &luna_wrapper_wxHtmlPrintout::_bind_SetHtmlFile},
	{"SetHtmlText", &luna_wrapper_wxHtmlPrintout::_bind_SetHtmlText},
	{"SetMargins", &luna_wrapper_wxHtmlPrintout::_bind_SetMargins},
	{"AddFilter", &luna_wrapper_wxHtmlPrintout::_bind_AddFilter},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlPrintout::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxHtmlPrintout::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlPrintout::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlPrintout::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlPrintout >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlPrintout::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlPrintout >::enumValues[] = {
	{0,0}
};


