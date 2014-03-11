#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLayoutAlgorithm.h>

class luna_wrapper_wxLayoutAlgorithm {
public:
	typedef Luna< wxLayoutAlgorithm > luna_t;

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

		wxLayoutAlgorithm* self= (wxLayoutAlgorithm*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLayoutAlgorithm >::push(L,self,false);
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
		//wxLayoutAlgorithm* ptr= dynamic_cast< wxLayoutAlgorithm* >(Luna< wxObject >::check(L,1));
		wxLayoutAlgorithm* ptr= luna_caster< wxObject, wxLayoutAlgorithm >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLayoutAlgorithm >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_LayoutFrame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LayoutMDIFrame(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LayoutWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLayoutAlgorithm::wxLayoutAlgorithm()
	static wxLayoutAlgorithm* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutAlgorithm::wxLayoutAlgorithm() function, expected prototype:\nwxLayoutAlgorithm::wxLayoutAlgorithm()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxLayoutAlgorithm();
	}

	// wxLayoutAlgorithm::wxLayoutAlgorithm(lua_Table * data)
	static wxLayoutAlgorithm* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutAlgorithm::wxLayoutAlgorithm(lua_Table * data) function, expected prototype:\nwxLayoutAlgorithm::wxLayoutAlgorithm(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxLayoutAlgorithm(L,NULL);
	}

	// Overload binder for wxLayoutAlgorithm::wxLayoutAlgorithm
	static wxLayoutAlgorithm* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLayoutAlgorithm, cannot match any of the overloads for function wxLayoutAlgorithm:\n  wxLayoutAlgorithm()\n  wxLayoutAlgorithm(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxLayoutAlgorithm::LayoutFrame(wxFrame * frame, wxWindow * mainWindow = NULL)
	static int _bind_LayoutFrame(lua_State *L) {
		if (!_lg_typecheck_LayoutFrame(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLayoutAlgorithm::LayoutFrame(wxFrame * frame, wxWindow * mainWindow = NULL) function, expected prototype:\nbool wxLayoutAlgorithm::LayoutFrame(wxFrame * frame, wxWindow * mainWindow = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));
		wxWindow* mainWindow=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;

		wxLayoutAlgorithm* self=Luna< wxObject >::checkSubType< wxLayoutAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLayoutAlgorithm::LayoutFrame(wxFrame *, wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LayoutFrame(frame, mainWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame * frame, wxRect * rect = NULL)
	static int _bind_LayoutMDIFrame(lua_State *L) {
		if (!_lg_typecheck_LayoutMDIFrame(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame * frame, wxRect * rect = NULL) function, expected prototype:\nbool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame * frame, wxRect * rect = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxMDIParentFrame* frame=(Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,2));
		wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (wxRect*)NULL;

		wxLayoutAlgorithm* self=Luna< wxObject >::checkSubType< wxLayoutAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLayoutAlgorithm::LayoutMDIFrame(wxMDIParentFrame *, wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LayoutMDIFrame(frame, rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLayoutAlgorithm::LayoutWindow(wxWindow * parent, wxWindow * mainWindow = NULL)
	static int _bind_LayoutWindow(lua_State *L) {
		if (!_lg_typecheck_LayoutWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLayoutAlgorithm::LayoutWindow(wxWindow * parent, wxWindow * mainWindow = NULL) function, expected prototype:\nbool wxLayoutAlgorithm::LayoutWindow(wxWindow * parent, wxWindow * mainWindow = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxWindow* mainWindow=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;

		wxLayoutAlgorithm* self=Luna< wxObject >::checkSubType< wxLayoutAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLayoutAlgorithm::LayoutWindow(wxWindow *, wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LayoutWindow(parent, mainWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxLayoutAlgorithm::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxLayoutAlgorithm::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxLayoutAlgorithm::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLayoutAlgorithm* self=Luna< wxObject >::checkSubType< wxLayoutAlgorithm >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxLayoutAlgorithm::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxLayoutAlgorithm::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxLayoutAlgorithm* LunaTraits< wxLayoutAlgorithm >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLayoutAlgorithm::_bind_ctor(L);
}

void LunaTraits< wxLayoutAlgorithm >::_bind_dtor(wxLayoutAlgorithm* obj) {
	delete obj;
}

const char LunaTraits< wxLayoutAlgorithm >::className[] = "wxLayoutAlgorithm";
const char LunaTraits< wxLayoutAlgorithm >::fullName[] = "wxLayoutAlgorithm";
const char LunaTraits< wxLayoutAlgorithm >::moduleName[] = "wx";
const char* LunaTraits< wxLayoutAlgorithm >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxLayoutAlgorithm >::hash = 94873594;
const int LunaTraits< wxLayoutAlgorithm >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxLayoutAlgorithm >::methods[] = {
	{"LayoutFrame", &luna_wrapper_wxLayoutAlgorithm::_bind_LayoutFrame},
	{"LayoutMDIFrame", &luna_wrapper_wxLayoutAlgorithm::_bind_LayoutMDIFrame},
	{"LayoutWindow", &luna_wrapper_wxLayoutAlgorithm::_bind_LayoutWindow},
	{"base_GetClassInfo", &luna_wrapper_wxLayoutAlgorithm::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxLayoutAlgorithm::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLayoutAlgorithm::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLayoutAlgorithm::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLayoutAlgorithm >::converters[] = {
	{"wxObject", &luna_wrapper_wxLayoutAlgorithm::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLayoutAlgorithm >::enumValues[] = {
	{0,0}
};


