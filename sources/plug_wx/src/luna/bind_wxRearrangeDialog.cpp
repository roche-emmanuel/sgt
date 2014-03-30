#include <plug_common.h>

class luna_wrapper_wxRearrangeDialog {
public:
	typedef Luna< wxRearrangeDialog > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49400246) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRearrangeDialog*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRearrangeDialog* rhs =(Luna< wxRearrangeDialog >::check(L,2));
		wxRearrangeDialog* self=(Luna< wxRearrangeDialog >::check(L,1));
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

		wxRearrangeDialog* self= (wxRearrangeDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRearrangeDialog >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49400246) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRearrangeDialog >::check(L,1));
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

		wxRearrangeDialog* self=(Luna< wxRearrangeDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRearrangeDialog");
		
		return luna_dynamicCast(L,converters,"wxRearrangeDialog",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,47342076) ) return false;
		if( (!(Luna< wxArrayInt >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,59507769) ) return false;
		if( (!(Luna< wxArrayString >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!(Luna< wxPoint >::check(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,47342076) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,59507769) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddExtraControls(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRearrangeDialog::wxRearrangeDialog()
	static wxRearrangeDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRearrangeDialog::wxRearrangeDialog() function, expected prototype:\nwxRearrangeDialog::wxRearrangeDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxRearrangeDialog();
	}

	// wxRearrangeDialog::wxRearrangeDialog(wxWindow * parent, const wxString & message, const wxString & title, const wxArrayInt & order, const wxArrayString & items, const wxPoint & pos = wxDefaultPosition, const wxString & name = wxRearrangeDialogNameStr)
	static wxRearrangeDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRearrangeDialog::wxRearrangeDialog(wxWindow * parent, const wxString & message, const wxString & title, const wxArrayInt & order, const wxArrayString & items, const wxPoint & pos = wxDefaultPosition, const wxString & name = wxRearrangeDialogNameStr) function, expected prototype:\nwxRearrangeDialog::wxRearrangeDialog(wxWindow * parent, const wxString & message, const wxString & title, const wxArrayInt & order, const wxArrayString & items, const wxPoint & pos = wxDefaultPosition, const wxString & name = wxRearrangeDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 47342076\narg 5 ID = 59507769\narg 6 ID = 25723480\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,4));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeDialog::wxRearrangeDialog function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,5));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeDialog::wxRearrangeDialog function");
		}
		const wxArrayString & items=*items_ptr;
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeDialog::wxRearrangeDialog function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxRearrangeDialog(parent, message, title, order, items, pos, name);
	}

	// Overload binder for wxRearrangeDialog::wxRearrangeDialog
	static wxRearrangeDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRearrangeDialog, cannot match any of the overloads for function wxRearrangeDialog:\n  wxRearrangeDialog()\n  wxRearrangeDialog(wxWindow *, const wxString &, const wxString &, const wxArrayInt &, const wxArrayString &, const wxPoint &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRearrangeDialog::Create(wxWindow * parent, const wxString & message, const wxString & title, const wxArrayInt & order, const wxArrayString & items, const wxPoint & pos = wxDefaultPosition, const wxString & name = wxRearrangeDialogNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRearrangeDialog::Create(wxWindow * parent, const wxString & message, const wxString & title, const wxArrayInt & order, const wxArrayString & items, const wxPoint & pos = wxDefaultPosition, const wxString & name = wxRearrangeDialogNameStr) function, expected prototype:\nbool wxRearrangeDialog::Create(wxWindow * parent, const wxString & message, const wxString & title, const wxArrayInt & order, const wxArrayString & items, const wxPoint & pos = wxDefaultPosition, const wxString & name = wxRearrangeDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 47342076\narg 5 ID = 59507769\narg 6 ID = 25723480\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxArrayInt* order_ptr=(Luna< wxArrayInt >::check(L,5));
		if( !order_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg order in wxRearrangeDialog::Create function");
		}
		const wxArrayInt & order=*order_ptr;
		const wxArrayString* items_ptr=(Luna< wxArrayString >::check(L,6));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxRearrangeDialog::Create function");
		}
		const wxArrayString & items=*items_ptr;
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxRearrangeDialog::Create function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxRearrangeDialog* self=(Luna< wxRearrangeDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRearrangeDialog::Create(wxWindow *, const wxString &, const wxString &, const wxArrayInt &, const wxArrayString &, const wxPoint &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxRearrangeDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, message, title, order, items, pos, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxRearrangeDialog::AddExtraControls(wxWindow * win)
	static int _bind_AddExtraControls(lua_State *L) {
		if (!_lg_typecheck_AddExtraControls(L)) {
			luaL_error(L, "luna typecheck failed in void wxRearrangeDialog::AddExtraControls(wxWindow * win) function, expected prototype:\nvoid wxRearrangeDialog::AddExtraControls(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxRearrangeDialog* self=(Luna< wxRearrangeDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRearrangeDialog::AddExtraControls(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRearrangeDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddExtraControls(win);

		return 0;
	}

	// wxRearrangeList * wxRearrangeDialog::GetList() const
	static int _bind_GetList(lua_State *L) {
		if (!_lg_typecheck_GetList(L)) {
			luaL_error(L, "luna typecheck failed in wxRearrangeList * wxRearrangeDialog::GetList() const function, expected prototype:\nwxRearrangeList * wxRearrangeDialog::GetList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRearrangeDialog* self=(Luna< wxRearrangeDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRearrangeList * wxRearrangeDialog::GetList() const. Got : '%s'\n%s",typeid(Luna< wxRearrangeDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRearrangeList * lret = self->GetList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRearrangeList >::push(L,lret,false);

		return 1;
	}

	// wxArrayInt wxRearrangeDialog::GetOrder() const
	static int _bind_GetOrder(lua_State *L) {
		if (!_lg_typecheck_GetOrder(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayInt wxRearrangeDialog::GetOrder() const function, expected prototype:\nwxArrayInt wxRearrangeDialog::GetOrder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRearrangeDialog* self=(Luna< wxRearrangeDialog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayInt wxRearrangeDialog::GetOrder() const. Got : '%s'\n%s",typeid(Luna< wxRearrangeDialog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayInt stack_lret = self->GetOrder();
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxRearrangeDialog* LunaTraits< wxRearrangeDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRearrangeDialog::_bind_ctor(L);
}

void LunaTraits< wxRearrangeDialog >::_bind_dtor(wxRearrangeDialog* obj) {
	delete obj;
}

const char LunaTraits< wxRearrangeDialog >::className[] = "wxRearrangeDialog";
const char LunaTraits< wxRearrangeDialog >::fullName[] = "wxRearrangeDialog";
const char LunaTraits< wxRearrangeDialog >::moduleName[] = "wx";
const char* LunaTraits< wxRearrangeDialog >::parents[] = {0};
const int LunaTraits< wxRearrangeDialog >::hash = 49400246;
const int LunaTraits< wxRearrangeDialog >::uniqueIDs[] = {49400246,0};

luna_RegType LunaTraits< wxRearrangeDialog >::methods[] = {
	{"Create", &luna_wrapper_wxRearrangeDialog::_bind_Create},
	{"AddExtraControls", &luna_wrapper_wxRearrangeDialog::_bind_AddExtraControls},
	{"GetList", &luna_wrapper_wxRearrangeDialog::_bind_GetList},
	{"GetOrder", &luna_wrapper_wxRearrangeDialog::_bind_GetOrder},
	{"dynCast", &luna_wrapper_wxRearrangeDialog::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRearrangeDialog::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRearrangeDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRearrangeDialog::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRearrangeDialog >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRearrangeDialog >::enumValues[] = {
	{0,0}
};


