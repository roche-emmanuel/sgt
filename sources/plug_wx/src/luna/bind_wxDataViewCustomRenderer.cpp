#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewCustomRenderer.h>

class luna_wrapper_wxDataViewCustomRenderer {
public:
	typedef Luna< wxDataViewCustomRenderer > luna_t;

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

		wxDataViewCustomRenderer* self= (wxDataViewCustomRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewCustomRenderer >::push(L,self,false);
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
		//wxDataViewCustomRenderer* ptr= dynamic_cast< wxDataViewCustomRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewCustomRenderer* ptr= luna_caster< wxObject, wxDataViewCustomRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewCustomRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ActivateCell(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11709329) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasEditorCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LeftClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Render(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RenderText(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartDrag(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ActivateCell(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11709329) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HasEditorCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LeftClick(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StartDrag(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,66533182)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11709329) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewCustomRenderer::wxDataViewCustomRenderer(lua_Table * data, const wxString & varianttype = "string", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)
	static wxDataViewCustomRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCustomRenderer::wxDataViewCustomRenderer(lua_Table * data, const wxString & varianttype = \"string\", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) function, expected prototype:\nwxDataViewCustomRenderer::wxDataViewCustomRenderer(lua_Table * data, const wxString & varianttype = \"string\", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int align=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxDataViewCustomRenderer(L,NULL, varianttype, mode, align);
	}


	// Function binds:
	// wxSize wxDataViewCustomRenderer::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewCustomRenderer::GetSize() const function, expected prototype:\nwxSize wxDataViewCustomRenderer::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewCustomRenderer::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)
	static int _bind_ActivateCell(lua_State *L) {
		if (!_lg_typecheck_ActivateCell(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent) function, expected prototype:\nbool wxDataViewCustomRenderer::ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 66533182\narg 3 ID = 11709329\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* cell_ptr=(Luna< wxRect >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::ActivateCell function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,3));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::ActivateCell function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,5);
		const wxMouseEvent* mouseEvent=(Luna< wxObject >::checkSubType< wxMouseEvent >(L,6));

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::ActivateCell(const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int, const wxMouseEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ActivateCell(cell, model, item, col, mouseEvent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in const wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const function, expected prototype:\nconst wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxDataViewItemAttr & wxDataViewCustomRenderer::GetAttr() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDataViewItemAttr* lret = &self->GetAttr();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItemAttr >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewCustomRenderer::HasEditorCtrl() const
	static int _bind_HasEditorCtrl(lua_State *L) {
		if (!_lg_typecheck_HasEditorCtrl(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::HasEditorCtrl() const function, expected prototype:\nbool wxDataViewCustomRenderer::HasEditorCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::HasEditorCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasEditorCtrl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_LeftClick(lua_State *L) {
		if (!_lg_typecheck_LeftClick(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewCustomRenderer::LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCustomRenderer::LeftClick function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::LeftClick function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::LeftClick function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::LeftClick(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LeftClick(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	static int _bind_Render(lua_State *L) {
		if (!_lg_typecheck_Render(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state) function, expected prototype:\nbool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect* cell_ptr=(Luna< wxRect >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::Render function");
		}
		wxRect cell=*cell_ptr;
		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		int state=(int)lua_tointeger(L,4);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::Render(wxRect, wxDC *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Render(cell, dc, state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewCustomRenderer::RenderText(const wxString & text, int xoffset, wxRect cell, wxDC * dc, int state)
	static int _bind_RenderText(lua_State *L) {
		if (!_lg_typecheck_RenderText(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCustomRenderer::RenderText(const wxString & text, int xoffset, wxRect cell, wxDC * dc, int state) function, expected prototype:\nvoid wxDataViewCustomRenderer::RenderText(const wxString & text, int xoffset, wxRect cell, wxDC * dc, int state)\nClass arguments details:\narg 1 ID = 88196105\narg 3 ID = 20234418\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int xoffset=(int)lua_tointeger(L,3);
		wxRect* cell_ptr=(Luna< wxRect >::check(L,4));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::RenderText function");
		}
		wxRect cell=*cell_ptr;
		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,5));
		int state=(int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCustomRenderer::RenderText(const wxString &, int, wxRect, wxDC *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RenderText(text, xoffset, cell, dc, state);

		return 0;
	}

	// bool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_StartDrag(lua_State *L) {
		if (!_lg_typecheck_StartDrag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewCustomRenderer::StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCustomRenderer::StartDrag function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::StartDrag function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::StartDrag function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::StartDrag(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->StartDrag(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxDataViewCustomRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewCustomRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewCustomRenderer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewCustomRenderer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDataViewCustomRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewCustomRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewCustomRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewCustomRenderer::base_GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewCustomRenderer::base_GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewCustomRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewCustomRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewCustomRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewCustomRenderer::base_GetMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewCustomRenderer::base_GetMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewCellMode lret = self->wxDataViewCustomRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewCustomRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewCustomRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewCustomRenderer::base_SetAlignment(int align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewCustomRenderer::base_SetAlignment(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewCustomRenderer::SetAlignment(align);

		return 0;
	}

	// bool wxDataViewCustomRenderer::base_ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)
	static int _bind_base_ActivateCell(lua_State *L) {
		if (!_lg_typecheck_base_ActivateCell(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::base_ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent) function, expected prototype:\nbool wxDataViewCustomRenderer::base_ActivateCell(const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col, const wxMouseEvent * mouseEvent)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 66533182\narg 3 ID = 11709329\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* cell_ptr=(Luna< wxRect >::check(L,2));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::base_ActivateCell function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,3));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::base_ActivateCell function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,5);
		const wxMouseEvent* mouseEvent=(Luna< wxObject >::checkSubType< wxMouseEvent >(L,6));

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::base_ActivateCell(const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int, const wxMouseEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCustomRenderer::ActivateCell(cell, model, item, col, mouseEvent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::base_HasEditorCtrl() const
	static int _bind_base_HasEditorCtrl(lua_State *L) {
		if (!_lg_typecheck_base_HasEditorCtrl(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::base_HasEditorCtrl() const function, expected prototype:\nbool wxDataViewCustomRenderer::base_HasEditorCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::base_HasEditorCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCustomRenderer::HasEditorCtrl();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::base_LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_base_LeftClick(lua_State *L) {
		if (!_lg_typecheck_base_LeftClick(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::base_LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewCustomRenderer::base_LeftClick(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCustomRenderer::base_LeftClick function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::base_LeftClick function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::base_LeftClick function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::base_LeftClick(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCustomRenderer::LeftClick(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewCustomRenderer::base_StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)
	static int _bind_base_StartDrag(lua_State *L) {
		if (!_lg_typecheck_base_StartDrag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewCustomRenderer::base_StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewCustomRenderer::base_StartDrag(const wxPoint & cursor, const wxRect & cell, wxDataViewModel * model, const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20234418\narg 3 ID = 66533182\narg 4 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* cursor_ptr=(Luna< wxPoint >::check(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDataViewCustomRenderer::base_StartDrag function");
		}
		const wxPoint & cursor=*cursor_ptr;
		const wxRect* cell_ptr=(Luna< wxRect >::check(L,3));
		if( !cell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cell in wxDataViewCustomRenderer::base_StartDrag function");
		}
		const wxRect & cell=*cell_ptr;
		wxDataViewModel* model=(Luna< wxDataViewModel >::check(L,4));
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,5));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewCustomRenderer::base_StartDrag function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,6);

		wxDataViewCustomRenderer* self=Luna< wxObject >::checkSubType< wxDataViewCustomRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewCustomRenderer::base_StartDrag(const wxPoint &, const wxRect &, wxDataViewModel *, const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewCustomRenderer::StartDrag(cursor, cell, model, item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewCustomRenderer* LunaTraits< wxDataViewCustomRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewCustomRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxSize wxDataViewCustomRenderer::GetSize() const
	// bool wxDataViewCustomRenderer::Render(wxRect cell, wxDC * dc, int state)
	// wxSize wxDataViewRenderer::GetSize() const
	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewCustomRenderer >::_bind_dtor(wxDataViewCustomRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewCustomRenderer >::className[] = "wxDataViewCustomRenderer";
const char LunaTraits< wxDataViewCustomRenderer >::fullName[] = "wxDataViewCustomRenderer";
const char LunaTraits< wxDataViewCustomRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewCustomRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewCustomRenderer >::hash = 1931326;
const int LunaTraits< wxDataViewCustomRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewCustomRenderer >::methods[] = {
	{"GetSize", &luna_wrapper_wxDataViewCustomRenderer::_bind_GetSize},
	{"ActivateCell", &luna_wrapper_wxDataViewCustomRenderer::_bind_ActivateCell},
	{"GetAttr", &luna_wrapper_wxDataViewCustomRenderer::_bind_GetAttr},
	{"HasEditorCtrl", &luna_wrapper_wxDataViewCustomRenderer::_bind_HasEditorCtrl},
	{"LeftClick", &luna_wrapper_wxDataViewCustomRenderer::_bind_LeftClick},
	{"Render", &luna_wrapper_wxDataViewCustomRenderer::_bind_Render},
	{"RenderText", &luna_wrapper_wxDataViewCustomRenderer::_bind_RenderText},
	{"StartDrag", &luna_wrapper_wxDataViewCustomRenderer::_bind_StartDrag},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_SetAlignment},
	{"base_ActivateCell", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_ActivateCell},
	{"base_HasEditorCtrl", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_HasEditorCtrl},
	{"base_LeftClick", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_LeftClick},
	{"base_StartDrag", &luna_wrapper_wxDataViewCustomRenderer::_bind_base_StartDrag},
	{"fromVoid", &luna_wrapper_wxDataViewCustomRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewCustomRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewCustomRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewCustomRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewCustomRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewCustomRenderer >::enumValues[] = {
	{0,0}
};


