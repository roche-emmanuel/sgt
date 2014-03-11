#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellChoiceEditor.h>

class luna_wrapper_wxGridCellChoiceEditor {
public:
	typedef Luna< wxGridCellChoiceEditor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellEditor* self=(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxGridCellEditor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxGridCellChoiceEditor* self= (wxGridCellChoiceEditor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellChoiceEditor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,53399133) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGridCellEditor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxGridCellEditor(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridCellChoiceEditor* ptr= dynamic_cast< wxGridCellChoiceEditor* >(Luna< wxGridCellEditor >::check(L,1));
		wxGridCellChoiceEditor* ptr= luna_caster< wxGridCellEditor, wxGridCellChoiceEditor >::cast(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellChoiceEditor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HandleReturn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_PaintBackground(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25758569)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartingClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_StartingKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellChoiceEditor::wxGridCellChoiceEditor(lua_Table * data, const wxArrayString & choices, bool allowOthers = false)
	static wxGridCellChoiceEditor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellChoiceEditor::wxGridCellChoiceEditor(lua_Table * data, const wxArrayString & choices, bool allowOthers = false) function, expected prototype:\nwxGridCellChoiceEditor::wxGridCellChoiceEditor(lua_Table * data, const wxArrayString & choices, bool allowOthers = false)\nClass arguments details:\narg 2 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxArrayString* choices_ptr=(Luna< wxArrayString >::check(L,2));
		if( !choices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg choices in wxGridCellChoiceEditor::wxGridCellChoiceEditor function");
		}
		const wxArrayString & choices=*choices_ptr;
		bool allowOthers=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_wxGridCellChoiceEditor(L,NULL, choices, allowOthers);
	}


	// Function binds:
	// void wxGridCellChoiceEditor::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellChoiceEditor::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::SetParameters(const wxString &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParameters(params);

		return 0;
	}

	// void wxGridCellChoiceEditor::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_Destroy() function, expected prototype:\nvoid wxGridCellChoiceEditor::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::Destroy();

		return 0;
	}

	// void wxGridCellChoiceEditor::base_HandleReturn(wxKeyEvent & event)
	static int _bind_base_HandleReturn(lua_State *L) {
		if (!_lg_typecheck_base_HandleReturn(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_HandleReturn(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellChoiceEditor::base_HandleReturn(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellChoiceEditor::base_HandleReturn function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_HandleReturn(wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::HandleReturn(event);

		return 0;
	}

	// void wxGridCellChoiceEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	static int _bind_base_PaintBackground(lua_State *L) {
		if (!_lg_typecheck_base_PaintBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGridCellChoiceEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rectCell_ptr=(Luna< wxRect >::check(L,2));
		if( !rectCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectCell in wxGridCellChoiceEditor::base_PaintBackground function");
		}
		const wxRect & rectCell=*rectCell_ptr;
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_PaintBackground(const wxRect &, wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::PaintBackground(rectCell, attr);

		return 0;
	}

	// void wxGridCellChoiceEditor::base_SetSize(const wxRect & rect)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_SetSize(const wxRect & rect) function, expected prototype:\nvoid wxGridCellChoiceEditor::base_SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellChoiceEditor::base_SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_SetSize(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::SetSize(rect);

		return 0;
	}

	// void wxGridCellChoiceEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_Show(bool show, wxGridCellAttr * attr = NULL) function, expected prototype:\nvoid wxGridCellChoiceEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)\nClass arguments details:\narg 2 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		wxGridCellAttr* attr=luatop>2 ? (Luna< wxGridCellAttr >::check(L,3)) : (wxGridCellAttr*)NULL;

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_Show(bool, wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::Show(show, attr);

		return 0;
	}

	// void wxGridCellChoiceEditor::base_StartingClick()
	static int _bind_base_StartingClick(lua_State *L) {
		if (!_lg_typecheck_base_StartingClick(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_StartingClick() function, expected prototype:\nvoid wxGridCellChoiceEditor::base_StartingClick()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_StartingClick(). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::StartingClick();

		return 0;
	}

	// void wxGridCellChoiceEditor::base_StartingKey(wxKeyEvent & event)
	static int _bind_base_StartingKey(lua_State *L) {
		if (!_lg_typecheck_base_StartingKey(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_StartingKey(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellChoiceEditor::base_StartingKey(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellChoiceEditor::base_StartingKey function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_StartingKey(wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::StartingKey(event);

		return 0;
	}

	// void wxGridCellChoiceEditor::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellChoiceEditor::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellChoiceEditor::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellChoiceEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellChoiceEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellChoiceEditor::base_SetParameters(const wxString &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellChoiceEditor::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellChoiceEditor* LunaTraits< wxGridCellChoiceEditor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellChoiceEditor::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxGridCellEditor::GetValue() const
	// void wxGridCellEditor::BeginEdit(int row, int col, wxGrid * grid)
	// wxGridCellEditor * wxGridCellEditor::Clone() const
	// void wxGridCellEditor::Create(wxWindow * parent, int id, wxEvtHandler * evtHandler)
	// bool wxGridCellEditor::EndEdit(int row, int col, const wxGrid * grid, const wxString & oldval, wxString * newval)
	// void wxGridCellEditor::ApplyEdit(int row, int col, wxGrid * grid)
	// void wxGridCellEditor::Reset()
}

void LunaTraits< wxGridCellChoiceEditor >::_bind_dtor(wxGridCellChoiceEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellChoiceEditor >::className[] = "wxGridCellChoiceEditor";
const char LunaTraits< wxGridCellChoiceEditor >::fullName[] = "wxGridCellChoiceEditor";
const char LunaTraits< wxGridCellChoiceEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellChoiceEditor >::parents[] = {"wx.wxGridCellEditor", 0};
const int LunaTraits< wxGridCellChoiceEditor >::hash = 67983166;
const int LunaTraits< wxGridCellChoiceEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellChoiceEditor >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellChoiceEditor::_bind_SetParameters},
	{"base_Destroy", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_Destroy},
	{"base_HandleReturn", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_HandleReturn},
	{"base_PaintBackground", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_PaintBackground},
	{"base_SetSize", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_SetSize},
	{"base_Show", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_Show},
	{"base_StartingClick", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_StartingClick},
	{"base_StartingKey", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_StartingKey},
	{"base_SetParameters", &luna_wrapper_wxGridCellChoiceEditor::_bind_base_SetParameters},
	{"fromVoid", &luna_wrapper_wxGridCellChoiceEditor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellChoiceEditor::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCellChoiceEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellChoiceEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellChoiceEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellChoiceEditor >::enumValues[] = {
	{0,0}
};


