#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPGCell.h>

class luna_wrapper_wxPGCell {
public:
	typedef Luna< wxPGCell > luna_t;

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

		wxPGCell* self= (wxPGCell*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPGCell >::push(L,self,false);
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
		//wxPGCell* ptr= dynamic_cast< wxPGCell* >(Luna< wxObject >::check(L,1));
		wxPGCell* ptr= luna_caster< wxObject, wxPGCell >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPGCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPGCell >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPGCell >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxBitmap >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>3 && (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>4 && (!(Luna< wxObject >::checkSubType< wxColour >(L,5))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MergeFrom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFgCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBgCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFgCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBgCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetEmptyData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInvalid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPGCell::wxPGCell()
	static wxPGCell* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell::wxPGCell() function, expected prototype:\nwxPGCell::wxPGCell()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPGCell();
	}

	// wxPGCell::wxPGCell(const wxPGCell & other)
	static wxPGCell* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell::wxPGCell(const wxPGCell & other) function, expected prototype:\nwxPGCell::wxPGCell(const wxPGCell & other)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGCell* other_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxPGCell::wxPGCell function");
		}
		const wxPGCell & other=*other_ptr;

		return new wxPGCell(other);
	}

	// wxPGCell::wxPGCell(const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour)
	static wxPGCell* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell::wxPGCell(const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour) function, expected prototype:\nwxPGCell::wxPGCell(const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,1),lua_objlen(L,1));
		const wxBitmap* bitmap_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,2)) : NULL;
		if( luatop>1 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxPGCell::wxPGCell function");
		}
		const wxBitmap & bitmap=luatop>1 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;
		const wxColour* fgCol_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxColour >(L,3)) : NULL;
		if( luatop>2 && !fgCol_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fgCol in wxPGCell::wxPGCell function");
		}
		const wxColour & fgCol=luatop>2 ? *fgCol_ptr : (const wxColour&)wxNullColour;
		const wxColour* bgCol_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxColour >(L,4)) : NULL;
		if( luatop>3 && !bgCol_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bgCol in wxPGCell::wxPGCell function");
		}
		const wxColour & bgCol=luatop>3 ? *bgCol_ptr : (const wxColour&)wxNullColour;

		return new wxPGCell(text, bitmap, fgCol, bgCol);
	}

	// wxPGCell::wxPGCell(lua_Table * data)
	static wxPGCell* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell::wxPGCell(lua_Table * data) function, expected prototype:\nwxPGCell::wxPGCell(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPGCell(L,NULL);
	}

	// wxPGCell::wxPGCell(lua_Table * data, const wxPGCell & other)
	static wxPGCell* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell::wxPGCell(lua_Table * data, const wxPGCell & other) function, expected prototype:\nwxPGCell::wxPGCell(lua_Table * data, const wxPGCell & other)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGCell* other_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxPGCell::wxPGCell function");
		}
		const wxPGCell & other=*other_ptr;

		return new wrapper_wxPGCell(L,NULL, other);
	}

	// wxPGCell::wxPGCell(lua_Table * data, const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour)
	static wxPGCell* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell::wxPGCell(lua_Table * data, const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour) function, expected prototype:\nwxPGCell::wxPGCell(lua_Table * data, const wxString & text, const wxBitmap & bitmap = wxNullBitmap, const wxColour & fgCol = wxNullColour, const wxColour & bgCol = wxNullColour)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bitmap_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,3)) : NULL;
		if( luatop>2 && !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxPGCell::wxPGCell function");
		}
		const wxBitmap & bitmap=luatop>2 ? *bitmap_ptr : (const wxBitmap&)wxNullBitmap;
		const wxColour* fgCol_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxColour >(L,4)) : NULL;
		if( luatop>3 && !fgCol_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg fgCol in wxPGCell::wxPGCell function");
		}
		const wxColour & fgCol=luatop>3 ? *fgCol_ptr : (const wxColour&)wxNullColour;
		const wxColour* bgCol_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxColour >(L,5)) : NULL;
		if( luatop>4 && !bgCol_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bgCol in wxPGCell::wxPGCell function");
		}
		const wxColour & bgCol=luatop>4 ? *bgCol_ptr : (const wxColour&)wxNullColour;

		return new wrapper_wxPGCell(L,NULL, text, bitmap, fgCol, bgCol);
	}

	// Overload binder for wxPGCell::wxPGCell
	static wxPGCell* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxPGCell, cannot match any of the overloads for function wxPGCell:\n  wxPGCell()\n  wxPGCell(const wxPGCell &)\n  wxPGCell(const wxString &, const wxBitmap &, const wxColour &, const wxColour &)\n  wxPGCell(lua_Table *)\n  wxPGCell(lua_Table *, const wxPGCell &)\n  wxPGCell(lua_Table *, const wxString &, const wxBitmap &, const wxColour &, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// const wxPGCellData * wxPGCell::GetData() const
	static int _bind_GetData_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxPGCellData * wxPGCell::GetData() const function, expected prototype:\nconst wxPGCellData * wxPGCell::GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPGCellData * wxPGCell::GetData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGCellData * lret = self->GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCellData >::push(L,lret,false);

		return 1;
	}

	// wxPGCellData * wxPGCell::GetData()
	static int _bind_GetData_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCellData * wxPGCell::GetData() function, expected prototype:\nwxPGCellData * wxPGCell::GetData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGCellData * wxPGCell::GetData(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGCellData * lret = self->GetData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCellData >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPGCell::GetData
	static int _bind_GetData(lua_State *L) {
		if (_lg_typecheck_GetData_overload_1(L)) return _bind_GetData_overload_1(L);
		if (_lg_typecheck_GetData_overload_2(L)) return _bind_GetData_overload_2(L);

		luaL_error(L, "error in function GetData, cannot match any of the overloads for function GetData:\n  GetData()\n  GetData()\n");
		return 0;
	}

	// bool wxPGCell::HasText() const
	static int _bind_HasText(lua_State *L) {
		if (!_lg_typecheck_HasText(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGCell::HasText() const function, expected prototype:\nbool wxPGCell::HasText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGCell::HasText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasText();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPGCell::MergeFrom(const wxPGCell & srcCell)
	static int _bind_MergeFrom(lua_State *L) {
		if (!_lg_typecheck_MergeFrom(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::MergeFrom(const wxPGCell & srcCell) function, expected prototype:\nvoid wxPGCell::MergeFrom(const wxPGCell & srcCell)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGCell* srcCell_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,2));
		if( !srcCell_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg srcCell in wxPGCell::MergeFrom function");
		}
		const wxPGCell & srcCell=*srcCell_ptr;

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::MergeFrom(const wxPGCell &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MergeFrom(srcCell);

		return 0;
	}

	// void wxPGCell::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::SetText(const wxString & text) function, expected prototype:\nvoid wxPGCell::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::SetText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetText(text);

		return 0;
	}

	// void wxPGCell::SetBitmap(const wxBitmap & bitmap)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::SetBitmap(const wxBitmap & bitmap) function, expected prototype:\nvoid wxPGCell::SetBitmap(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxPGCell::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::SetBitmap(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmap(bitmap);

		return 0;
	}

	// void wxPGCell::SetFgCol(const wxColour & col)
	static int _bind_SetFgCol(lua_State *L) {
		if (!_lg_typecheck_SetFgCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::SetFgCol(const wxColour & col) function, expected prototype:\nvoid wxPGCell::SetFgCol(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPGCell::SetFgCol function");
		}
		const wxColour & col=*col_ptr;

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::SetFgCol(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFgCol(col);

		return 0;
	}

	// void wxPGCell::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::SetFont(const wxFont & font) function, expected prototype:\nvoid wxPGCell::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxPGCell::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// void wxPGCell::SetBgCol(const wxColour & col)
	static int _bind_SetBgCol(lua_State *L) {
		if (!_lg_typecheck_SetBgCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::SetBgCol(const wxColour & col) function, expected prototype:\nvoid wxPGCell::SetBgCol(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxPGCell::SetBgCol function");
		}
		const wxColour & col=*col_ptr;

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::SetBgCol(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBgCol(col);

		return 0;
	}

	// const wxString & wxPGCell::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPGCell::GetText() const function, expected prototype:\nconst wxString & wxPGCell::GetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPGCell::GetText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxBitmap & wxPGCell::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxPGCell::GetBitmap() const function, expected prototype:\nconst wxBitmap & wxPGCell::GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBitmap & wxPGCell::GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->GetBitmap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxPGCell::GetFgCol() const
	static int _bind_GetFgCol(lua_State *L) {
		if (!_lg_typecheck_GetFgCol(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxPGCell::GetFgCol() const function, expected prototype:\nconst wxColour & wxPGCell::GetFgCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxPGCell::GetFgCol() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetFgCol();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// const wxFont & wxPGCell::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in const wxFont & wxPGCell::GetFont() const function, expected prototype:\nconst wxFont & wxPGCell::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxFont & wxPGCell::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFont* lret = &self->GetFont();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,false);

		return 1;
	}

	// const wxColour & wxPGCell::GetBgCol() const
	static int _bind_GetBgCol(lua_State *L) {
		if (!_lg_typecheck_GetBgCol(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxPGCell::GetBgCol() const function, expected prototype:\nconst wxColour & wxPGCell::GetBgCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxPGCell::GetBgCol() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetBgCol();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// void wxPGCell::SetEmptyData()
	static int _bind_SetEmptyData(lua_State *L) {
		if (!_lg_typecheck_SetEmptyData(L)) {
			luaL_error(L, "luna typecheck failed in void wxPGCell::SetEmptyData() function, expected prototype:\nvoid wxPGCell::SetEmptyData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPGCell::SetEmptyData(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEmptyData();

		return 0;
	}

	// bool wxPGCell::IsInvalid() const
	static int _bind_IsInvalid(lua_State *L) {
		if (!_lg_typecheck_IsInvalid(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPGCell::IsInvalid() const function, expected prototype:\nbool wxPGCell::IsInvalid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPGCell::IsInvalid() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInvalid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxPGCell::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPGCell::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPGCell::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPGCell::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPGCell::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// wxPGCell & wxPGCell::operator=(const wxPGCell & other)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxPGCell & wxPGCell::operator=(const wxPGCell & other) function, expected prototype:\nwxPGCell & wxPGCell::operator=(const wxPGCell & other)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPGCell* other_ptr=(Luna< wxObject >::checkSubType< wxPGCell >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxPGCell::operator= function");
		}
		const wxPGCell & other=*other_ptr;

		wxPGCell* self=Luna< wxObject >::checkSubType< wxPGCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGCell & wxPGCell::operator=(const wxPGCell &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPGCell* lret = &self->operator=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGCell >::push(L,lret,false);

		return 1;
	}


};

wxPGCell* LunaTraits< wxPGCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPGCell::_bind_ctor(L);
}

void LunaTraits< wxPGCell >::_bind_dtor(wxPGCell* obj) {
	delete obj;
}

const char LunaTraits< wxPGCell >::className[] = "wxPGCell";
const char LunaTraits< wxPGCell >::fullName[] = "wxPGCell";
const char LunaTraits< wxPGCell >::moduleName[] = "wx";
const char* LunaTraits< wxPGCell >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxPGCell >::hash = 59346137;
const int LunaTraits< wxPGCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPGCell >::methods[] = {
	{"GetData", &luna_wrapper_wxPGCell::_bind_GetData},
	{"HasText", &luna_wrapper_wxPGCell::_bind_HasText},
	{"MergeFrom", &luna_wrapper_wxPGCell::_bind_MergeFrom},
	{"SetText", &luna_wrapper_wxPGCell::_bind_SetText},
	{"SetBitmap", &luna_wrapper_wxPGCell::_bind_SetBitmap},
	{"SetFgCol", &luna_wrapper_wxPGCell::_bind_SetFgCol},
	{"SetFont", &luna_wrapper_wxPGCell::_bind_SetFont},
	{"SetBgCol", &luna_wrapper_wxPGCell::_bind_SetBgCol},
	{"GetText", &luna_wrapper_wxPGCell::_bind_GetText},
	{"GetBitmap", &luna_wrapper_wxPGCell::_bind_GetBitmap},
	{"GetFgCol", &luna_wrapper_wxPGCell::_bind_GetFgCol},
	{"GetFont", &luna_wrapper_wxPGCell::_bind_GetFont},
	{"GetBgCol", &luna_wrapper_wxPGCell::_bind_GetBgCol},
	{"SetEmptyData", &luna_wrapper_wxPGCell::_bind_SetEmptyData},
	{"IsInvalid", &luna_wrapper_wxPGCell::_bind_IsInvalid},
	{"base_GetClassInfo", &luna_wrapper_wxPGCell::_bind_base_GetClassInfo},
	{"op_assign", &luna_wrapper_wxPGCell::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxPGCell::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPGCell::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPGCell::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPGCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxPGCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPGCell >::enumValues[] = {
	{0,0}
};


