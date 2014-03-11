#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewIconText.h>

class luna_wrapper_wxDataViewIconText {
public:
	typedef Luna< wxDataViewIconText > luna_t;

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

		wxDataViewIconText* self= (wxDataViewIconText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewIconText >::push(L,self,false);
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
		//wxDataViewIconText* ptr= dynamic_cast< wxDataViewIconText* >(Luna< wxObject >::check(L,1));
		wxDataViewIconText* ptr= luna_caster< wxObject, wxDataViewIconText >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewIconText >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxIcon >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDataViewIconText >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
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
	// wxDataViewIconText::wxDataViewIconText(const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon)
	static wxDataViewIconText* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewIconText::wxDataViewIconText(const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon) function, expected prototype:\nwxDataViewIconText::wxDataViewIconText(const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,1),lua_objlen(L,1));
		const wxIcon* icon_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxIcon >(L,2)) : NULL;
		if( luatop>1 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewIconText::wxDataViewIconText function");
		}
		const wxIcon & icon=luatop>1 ? *icon_ptr : (const wxIcon&)wxNullIcon;

		return new wxDataViewIconText(text, icon);
	}

	// wxDataViewIconText::wxDataViewIconText(const wxDataViewIconText & other)
	static wxDataViewIconText* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewIconText::wxDataViewIconText(const wxDataViewIconText & other) function, expected prototype:\nwxDataViewIconText::wxDataViewIconText(const wxDataViewIconText & other)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewIconText* other_ptr=(Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDataViewIconText::wxDataViewIconText function");
		}
		const wxDataViewIconText & other=*other_ptr;

		return new wxDataViewIconText(other);
	}

	// wxDataViewIconText::wxDataViewIconText(lua_Table * data, const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon)
	static wxDataViewIconText* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewIconText::wxDataViewIconText(lua_Table * data, const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon) function, expected prototype:\nwxDataViewIconText::wxDataViewIconText(lua_Table * data, const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxIcon* icon_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxIcon >(L,3)) : NULL;
		if( luatop>2 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewIconText::wxDataViewIconText function");
		}
		const wxIcon & icon=luatop>2 ? *icon_ptr : (const wxIcon&)wxNullIcon;

		return new wrapper_wxDataViewIconText(L,NULL, text, icon);
	}

	// wxDataViewIconText::wxDataViewIconText(lua_Table * data, const wxDataViewIconText & other)
	static wxDataViewIconText* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewIconText::wxDataViewIconText(lua_Table * data, const wxDataViewIconText & other) function, expected prototype:\nwxDataViewIconText::wxDataViewIconText(lua_Table * data, const wxDataViewIconText & other)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewIconText* other_ptr=(Luna< wxObject >::checkSubType< wxDataViewIconText >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxDataViewIconText::wxDataViewIconText function");
		}
		const wxDataViewIconText & other=*other_ptr;

		return new wrapper_wxDataViewIconText(L,NULL, other);
	}

	// Overload binder for wxDataViewIconText::wxDataViewIconText
	static wxDataViewIconText* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxDataViewIconText, cannot match any of the overloads for function wxDataViewIconText:\n  wxDataViewIconText(const wxString &, const wxIcon &)\n  wxDataViewIconText(const wxDataViewIconText &)\n  wxDataViewIconText(lua_Table *, const wxString &, const wxIcon &)\n  wxDataViewIconText(lua_Table *, const wxDataViewIconText &)\n");
		return NULL;
	}


	// Function binds:
	// const wxIcon & wxDataViewIconText::GetIcon() const
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewIconText::GetIcon() const function, expected prototype:\nconst wxIcon & wxDataViewIconText::GetIcon() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewIconText* self=Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewIconText::GetIcon() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIcon* lret = &self->GetIcon();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewIconText::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewIconText::GetText() const function, expected prototype:\nwxString wxDataViewIconText::GetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewIconText* self=Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewIconText::GetText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewIconText::SetIcon(const wxIcon & icon)
	static int _bind_SetIcon(lua_State *L) {
		if (!_lg_typecheck_SetIcon(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewIconText::SetIcon(const wxIcon & icon) function, expected prototype:\nvoid wxDataViewIconText::SetIcon(const wxIcon & icon)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewIconText::SetIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewIconText* self=Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewIconText::SetIcon(const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIcon(icon);

		return 0;
	}

	// void wxDataViewIconText::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewIconText::SetText(const wxString & text) function, expected prototype:\nvoid wxDataViewIconText::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewIconText* self=Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewIconText::SetText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetText(text);

		return 0;
	}

	// wxClassInfo * wxDataViewIconText::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewIconText::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewIconText::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewIconText* self=Luna< wxObject >::checkSubType< wxDataViewIconText >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewIconText::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDataViewIconText::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDataViewIconText* LunaTraits< wxDataViewIconText >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewIconText::_bind_ctor(L);
}

void LunaTraits< wxDataViewIconText >::_bind_dtor(wxDataViewIconText* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewIconText >::className[] = "wxDataViewIconText";
const char LunaTraits< wxDataViewIconText >::fullName[] = "wxDataViewIconText";
const char LunaTraits< wxDataViewIconText >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewIconText >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDataViewIconText >::hash = 11844362;
const int LunaTraits< wxDataViewIconText >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewIconText >::methods[] = {
	{"GetIcon", &luna_wrapper_wxDataViewIconText::_bind_GetIcon},
	{"GetText", &luna_wrapper_wxDataViewIconText::_bind_GetText},
	{"SetIcon", &luna_wrapper_wxDataViewIconText::_bind_SetIcon},
	{"SetText", &luna_wrapper_wxDataViewIconText::_bind_SetText},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewIconText::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxDataViewIconText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewIconText::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewIconText::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewIconText >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewIconText::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewIconText >::enumValues[] = {
	{0,0}
};


