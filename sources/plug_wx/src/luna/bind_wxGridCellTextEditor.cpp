#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellTextEditor.h>

class luna_wrapper_wxGridCellTextEditor {
public:
	typedef Luna< wxGridCellTextEditor > luna_t;

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

		wxGridCellTextEditor* self= (wxGridCellTextEditor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellTextEditor >::push(L,self,false);
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
		//wxGridCellTextEditor* ptr= dynamic_cast< wxGridCellTextEditor* >(Luna< wxGridCellEditor >::check(L,1));
		wxGridCellTextEditor* ptr= luna_caster< wxGridCellEditor, wxGridCellTextEditor >::cast(Luna< wxGridCellEditor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellTextEditor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
	// wxGridCellTextEditor::wxGridCellTextEditor(lua_Table * data)
	static wxGridCellTextEditor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellTextEditor::wxGridCellTextEditor(lua_Table * data) function, expected prototype:\nwxGridCellTextEditor::wxGridCellTextEditor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridCellTextEditor(L,NULL);
	}


	// Function binds:
	// void wxGridCellTextEditor::SetParameters(const wxString & params)
	static int _bind_SetParameters(lua_State *L) {
		if (!_lg_typecheck_SetParameters(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellTextEditor::SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::SetParameters(const wxString &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParameters(params);

		return 0;
	}

	// void wxGridCellTextEditor::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_Destroy() function, expected prototype:\nvoid wxGridCellTextEditor::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::Destroy();

		return 0;
	}

	// void wxGridCellTextEditor::base_HandleReturn(wxKeyEvent & event)
	static int _bind_base_HandleReturn(lua_State *L) {
		if (!_lg_typecheck_base_HandleReturn(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_HandleReturn(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellTextEditor::base_HandleReturn(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellTextEditor::base_HandleReturn function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_HandleReturn(wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::HandleReturn(event);

		return 0;
	}

	// void wxGridCellTextEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)
	static int _bind_base_PaintBackground(lua_State *L) {
		if (!_lg_typecheck_base_PaintBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr) function, expected prototype:\nvoid wxGridCellTextEditor::base_PaintBackground(const wxRect & rectCell, wxGridCellAttr * attr)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rectCell_ptr=(Luna< wxRect >::check(L,2));
		if( !rectCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rectCell in wxGridCellTextEditor::base_PaintBackground function");
		}
		const wxRect & rectCell=*rectCell_ptr;
		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,3));

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_PaintBackground(const wxRect &, wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::PaintBackground(rectCell, attr);

		return 0;
	}

	// void wxGridCellTextEditor::base_SetSize(const wxRect & rect)
	static int _bind_base_SetSize(lua_State *L) {
		if (!_lg_typecheck_base_SetSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_SetSize(const wxRect & rect) function, expected prototype:\nvoid wxGridCellTextEditor::base_SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxGridCellTextEditor::base_SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_SetSize(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::SetSize(rect);

		return 0;
	}

	// void wxGridCellTextEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_Show(bool show, wxGridCellAttr * attr = NULL) function, expected prototype:\nvoid wxGridCellTextEditor::base_Show(bool show, wxGridCellAttr * attr = NULL)\nClass arguments details:\narg 2 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		wxGridCellAttr* attr=luatop>2 ? (Luna< wxGridCellAttr >::check(L,3)) : (wxGridCellAttr*)NULL;

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_Show(bool, wxGridCellAttr *). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::Show(show, attr);

		return 0;
	}

	// void wxGridCellTextEditor::base_StartingClick()
	static int _bind_base_StartingClick(lua_State *L) {
		if (!_lg_typecheck_base_StartingClick(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_StartingClick() function, expected prototype:\nvoid wxGridCellTextEditor::base_StartingClick()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_StartingClick(). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::StartingClick();

		return 0;
	}

	// void wxGridCellTextEditor::base_StartingKey(wxKeyEvent & event)
	static int _bind_base_StartingKey(lua_State *L) {
		if (!_lg_typecheck_base_StartingKey(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_StartingKey(wxKeyEvent & event) function, expected prototype:\nvoid wxGridCellTextEditor::base_StartingKey(wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGridCellTextEditor::base_StartingKey function");
		}
		wxKeyEvent & event=*event_ptr;

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_StartingKey(wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::StartingKey(event);

		return 0;
	}

	// void wxGridCellTextEditor::base_SetParameters(const wxString & params)
	static int _bind_base_SetParameters(lua_State *L) {
		if (!_lg_typecheck_base_SetParameters(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellTextEditor::base_SetParameters(const wxString & params) function, expected prototype:\nvoid wxGridCellTextEditor::base_SetParameters(const wxString & params)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString params(lua_tostring(L,2),lua_objlen(L,2));

		wxGridCellTextEditor* self=Luna< wxGridCellEditor >::checkSubType< wxGridCellTextEditor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellTextEditor::base_SetParameters(const wxString &). Got : '%s'\n%s",typeid(Luna< wxGridCellEditor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellTextEditor::SetParameters(params);

		return 0;
	}


	// Operator binds:

};

wxGridCellTextEditor* LunaTraits< wxGridCellTextEditor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellTextEditor::_bind_ctor(L);
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

void LunaTraits< wxGridCellTextEditor >::_bind_dtor(wxGridCellTextEditor* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellTextEditor >::className[] = "wxGridCellTextEditor";
const char LunaTraits< wxGridCellTextEditor >::fullName[] = "wxGridCellTextEditor";
const char LunaTraits< wxGridCellTextEditor >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellTextEditor >::parents[] = {"wx.wxGridCellEditor", 0};
const int LunaTraits< wxGridCellTextEditor >::hash = 48927140;
const int LunaTraits< wxGridCellTextEditor >::uniqueIDs[] = {53399133,0};

luna_RegType LunaTraits< wxGridCellTextEditor >::methods[] = {
	{"SetParameters", &luna_wrapper_wxGridCellTextEditor::_bind_SetParameters},
	{"base_Destroy", &luna_wrapper_wxGridCellTextEditor::_bind_base_Destroy},
	{"base_HandleReturn", &luna_wrapper_wxGridCellTextEditor::_bind_base_HandleReturn},
	{"base_PaintBackground", &luna_wrapper_wxGridCellTextEditor::_bind_base_PaintBackground},
	{"base_SetSize", &luna_wrapper_wxGridCellTextEditor::_bind_base_SetSize},
	{"base_Show", &luna_wrapper_wxGridCellTextEditor::_bind_base_Show},
	{"base_StartingClick", &luna_wrapper_wxGridCellTextEditor::_bind_base_StartingClick},
	{"base_StartingKey", &luna_wrapper_wxGridCellTextEditor::_bind_base_StartingKey},
	{"base_SetParameters", &luna_wrapper_wxGridCellTextEditor::_bind_base_SetParameters},
	{"fromVoid", &luna_wrapper_wxGridCellTextEditor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellTextEditor::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCellTextEditor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellTextEditor >::converters[] = {
	{"wxGridCellEditor", &luna_wrapper_wxGridCellTextEditor::_cast_from_wxGridCellEditor},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellTextEditor >::enumValues[] = {
	{0,0}
};


