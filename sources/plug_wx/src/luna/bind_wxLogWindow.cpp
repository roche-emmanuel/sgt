#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogWindow.h>

class luna_wrapper_wxLogWindow {
public:
	typedef Luna< wxLogWindow > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxLog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxLogWindow* self= (wxLogWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLogWindow >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLogWindow* ptr= dynamic_cast< wxLogWindow* >(Luna< wxLog >::check(L,1));
		wxLogWindow* ptr= luna_caster< wxLog, wxLogWindow >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnFrameClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFrameCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnFrameClose(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnFrameCreate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnFrameDelete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogWindow::wxLogWindow(wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true)
	static wxLogWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxLogWindow::wxLogWindow(wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true) function, expected prototype:\nwxLogWindow::wxLogWindow(wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* pParent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxString szTitle(lua_tostring(L,2),lua_objlen(L,2));
		bool show=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;
		bool passToOld=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		return new wxLogWindow(pParent, szTitle, show, passToOld);
	}

	// wxLogWindow::wxLogWindow(lua_Table * data, wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true)
	static wxLogWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxLogWindow::wxLogWindow(lua_Table * data, wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true) function, expected prototype:\nwxLogWindow::wxLogWindow(lua_Table * data, wxWindow * pParent, const wxString & szTitle, bool show = true, bool passToOld = true)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* pParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString szTitle(lua_tostring(L,3),lua_objlen(L,3));
		bool show=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		bool passToOld=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		return new wrapper_wxLogWindow(L,NULL, pParent, szTitle, show, passToOld);
	}

	// Overload binder for wxLogWindow::wxLogWindow
	static wxLogWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogWindow, cannot match any of the overloads for function wxLogWindow:\n  wxLogWindow(wxWindow *, const wxString &, bool, bool)\n  wxLogWindow(lua_Table *, wxWindow *, const wxString &, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// wxFrame * wxLogWindow::GetFrame() const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luaL_error(L, "luna typecheck failed in wxFrame * wxLogWindow::GetFrame() const function, expected prototype:\nwxFrame * wxLogWindow::GetFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFrame * wxLogWindow::GetFrame() const. Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFrame * lret = self->GetFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxLogWindow::OnFrameClose(wxFrame * frame)
	static int _bind_OnFrameClose(lua_State *L) {
		if (!_lg_typecheck_OnFrameClose(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLogWindow::OnFrameClose(wxFrame * frame) function, expected prototype:\nbool wxLogWindow::OnFrameClose(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLogWindow::OnFrameClose(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnFrameClose(frame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxLogWindow::OnFrameCreate(wxFrame * frame)
	static int _bind_OnFrameCreate(lua_State *L) {
		if (!_lg_typecheck_OnFrameCreate(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogWindow::OnFrameCreate(wxFrame * frame) function, expected prototype:\nvoid wxLogWindow::OnFrameCreate(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogWindow::OnFrameCreate(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFrameCreate(frame);

		return 0;
	}

	// void wxLogWindow::OnFrameDelete(wxFrame * frame)
	static int _bind_OnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_OnFrameDelete(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogWindow::OnFrameDelete(wxFrame * frame) function, expected prototype:\nvoid wxLogWindow::OnFrameDelete(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogWindow::OnFrameDelete(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnFrameDelete(frame);

		return 0;
	}

	// void wxLogWindow::Show(bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogWindow::Show(bool show = true) function, expected prototype:\nvoid wxLogWindow::Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogWindow::Show(bool). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Show(show);

		return 0;
	}

	// void wxLogWindow::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogWindow::base_Flush() function, expected prototype:\nvoid wxLogWindow::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogWindow::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogWindow::Flush();

		return 0;
	}

	// bool wxLogWindow::base_OnFrameClose(wxFrame * frame)
	static int _bind_base_OnFrameClose(lua_State *L) {
		if (!_lg_typecheck_base_OnFrameClose(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLogWindow::base_OnFrameClose(wxFrame * frame) function, expected prototype:\nbool wxLogWindow::base_OnFrameClose(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLogWindow::base_OnFrameClose(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxLogWindow::OnFrameClose(frame);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxLogWindow::base_OnFrameCreate(wxFrame * frame)
	static int _bind_base_OnFrameCreate(lua_State *L) {
		if (!_lg_typecheck_base_OnFrameCreate(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogWindow::base_OnFrameCreate(wxFrame * frame) function, expected prototype:\nvoid wxLogWindow::base_OnFrameCreate(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogWindow::base_OnFrameCreate(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogWindow::OnFrameCreate(frame);

		return 0;
	}

	// void wxLogWindow::base_OnFrameDelete(wxFrame * frame)
	static int _bind_base_OnFrameDelete(lua_State *L) {
		if (!_lg_typecheck_base_OnFrameDelete(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogWindow::base_OnFrameDelete(wxFrame * frame) function, expected prototype:\nvoid wxLogWindow::base_OnFrameDelete(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxLogWindow* self=Luna< wxLog >::checkSubType< wxLogWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogWindow::base_OnFrameDelete(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogWindow::OnFrameDelete(frame);

		return 0;
	}


	// Operator binds:

};

wxLogWindow* LunaTraits< wxLogWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogWindow::_bind_ctor(L);
}

void LunaTraits< wxLogWindow >::_bind_dtor(wxLogWindow* obj) {
	delete obj;
}

const char LunaTraits< wxLogWindow >::className[] = "wxLogWindow";
const char LunaTraits< wxLogWindow >::fullName[] = "wxLogWindow";
const char LunaTraits< wxLogWindow >::moduleName[] = "wx";
const char* LunaTraits< wxLogWindow >::parents[] = {"wx.wxLogInterposer", 0};
const int LunaTraits< wxLogWindow >::hash = 67910697;
const int LunaTraits< wxLogWindow >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogWindow >::methods[] = {
	{"GetFrame", &luna_wrapper_wxLogWindow::_bind_GetFrame},
	{"OnFrameClose", &luna_wrapper_wxLogWindow::_bind_OnFrameClose},
	{"OnFrameCreate", &luna_wrapper_wxLogWindow::_bind_OnFrameCreate},
	{"OnFrameDelete", &luna_wrapper_wxLogWindow::_bind_OnFrameDelete},
	{"Show", &luna_wrapper_wxLogWindow::_bind_Show},
	{"base_Flush", &luna_wrapper_wxLogWindow::_bind_base_Flush},
	{"base_OnFrameClose", &luna_wrapper_wxLogWindow::_bind_base_OnFrameClose},
	{"base_OnFrameCreate", &luna_wrapper_wxLogWindow::_bind_base_OnFrameCreate},
	{"base_OnFrameDelete", &luna_wrapper_wxLogWindow::_bind_base_OnFrameDelete},
	{"fromVoid", &luna_wrapper_wxLogWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLogWindow::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLogWindow::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogWindow >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogWindow::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogWindow >::enumValues[] = {
	{0,0}
};


