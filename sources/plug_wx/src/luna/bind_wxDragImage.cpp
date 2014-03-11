#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDragImage.h>

class luna_wrapper_wxDragImage {
public:
	typedef Luna< wxDragImage > luna_t;

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

		wxDragImage* self= (wxDragImage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDragImage >::push(L,self,false);
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
		//wxDragImage* ptr= dynamic_cast< wxDragImage* >(Luna< wxObject >::check(L,1));
		wxDragImage* ptr= luna_caster< wxObject, wxDragImage >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDragImage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxCursor >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxCursor >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>1 && (!(Luna< wxObject >::checkSubType< wxCursor >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (!(Luna< wxTreeItemId >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxListCtrl >(L,1))) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_7(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_8(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxCursor >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_9(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxIcon >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxCursor >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_10(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>2 && (!(Luna< wxObject >::checkSubType< wxCursor >(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_11(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		if( (!(Luna< wxTreeItemId >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_12(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxListCtrl >(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BeginDrag_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,20234418)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxRect >::check(L,5)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BeginDrag_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndDrag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Move(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDragImage::wxDragImage()
	static wxDragImage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage() function, expected prototype:\nwxDragImage::wxDragImage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDragImage();
	}

	// wxDragImage::wxDragImage(const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))
	static wxDragImage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) function, expected prototype:\nwxDragImage::wxDragImage(const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* image_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxDragImage::wxDragImage function");
		}
		const wxBitmap & image=*image_ptr;
		const wxCursor* cursor_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxCursor >(L,2)) : NULL;
		if( luatop>1 && !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDragImage::wxDragImage function");
		}
		const wxCursor & cursor=luatop>1 ? *cursor_ptr : (const wxCursor&)wxNullCursor;
		const wxPoint* cursorHotspot_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !cursorHotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursorHotspot in wxDragImage::wxDragImage function");
		}
		const wxPoint & cursorHotspot=luatop>2 ? *cursorHotspot_ptr : (const wxPoint&)wxPoint (0, 0);

		return new wxDragImage(image, cursor, cursorHotspot);
	}

	// wxDragImage::wxDragImage(const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))
	static wxDragImage* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) function, expected prototype:\nwxDragImage::wxDragImage(const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxIcon* image_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,1));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxDragImage::wxDragImage function");
		}
		const wxIcon & image=*image_ptr;
		const wxCursor* cursor_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxCursor >(L,2)) : NULL;
		if( luatop>1 && !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDragImage::wxDragImage function");
		}
		const wxCursor & cursor=luatop>1 ? *cursor_ptr : (const wxCursor&)wxNullCursor;
		const wxPoint* cursorHotspot_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !cursorHotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursorHotspot in wxDragImage::wxDragImage function");
		}
		const wxPoint & cursorHotspot=luatop>2 ? *cursorHotspot_ptr : (const wxPoint&)wxPoint (0, 0);

		return new wxDragImage(image, cursor, cursorHotspot);
	}

	// wxDragImage::wxDragImage(const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))
	static wxDragImage* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) function, expected prototype:\nwxDragImage::wxDragImage(const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,1),lua_objlen(L,1));
		const wxCursor* cursor_ptr=luatop>1 ? (Luna< wxObject >::checkSubType< wxCursor >(L,2)) : NULL;
		if( luatop>1 && !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDragImage::wxDragImage function");
		}
		const wxCursor & cursor=luatop>1 ? *cursor_ptr : (const wxCursor&)wxNullCursor;
		const wxPoint* cursorHotspot_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !cursorHotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursorHotspot in wxDragImage::wxDragImage function");
		}
		const wxPoint & cursorHotspot=luatop>2 ? *cursorHotspot_ptr : (const wxPoint&)wxPoint (0, 0);

		return new wxDragImage(text, cursor, cursorHotspot);
	}

	// wxDragImage::wxDragImage(const wxTreeCtrl & treeCtrl, wxTreeItemId & id)
	static wxDragImage* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(const wxTreeCtrl & treeCtrl, wxTreeItemId & id) function, expected prototype:\nwxDragImage::wxDragImage(const wxTreeCtrl & treeCtrl, wxTreeItemId & id)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeCtrl* treeCtrl_ptr=(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1));
		if( !treeCtrl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg treeCtrl in wxDragImage::wxDragImage function");
		}
		const wxTreeCtrl & treeCtrl=*treeCtrl_ptr;
		wxTreeItemId* id_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in wxDragImage::wxDragImage function");
		}
		wxTreeItemId & id=*id_ptr;

		return new wxDragImage(treeCtrl, id);
	}

	// wxDragImage::wxDragImage(const wxListCtrl & listCtrl, long id)
	static wxDragImage* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(const wxListCtrl & listCtrl, long id) function, expected prototype:\nwxDragImage::wxDragImage(const wxListCtrl & listCtrl, long id)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxListCtrl* listCtrl_ptr=(Luna< wxObject >::checkSubType< wxListCtrl >(L,1));
		if( !listCtrl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg listCtrl in wxDragImage::wxDragImage function");
		}
		const wxListCtrl & listCtrl=*listCtrl_ptr;
		long id=(long)lua_tonumber(L,2);

		return new wxDragImage(listCtrl, id);
	}

	// wxDragImage::wxDragImage(lua_Table * data)
	static wxDragImage* _bind_ctor_overload_7(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(lua_Table * data) function, expected prototype:\nwxDragImage::wxDragImage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDragImage(L,NULL);
	}

	// wxDragImage::wxDragImage(lua_Table * data, const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))
	static wxDragImage* _bind_ctor_overload_8(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(lua_Table * data, const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) function, expected prototype:\nwxDragImage::wxDragImage(lua_Table * data, const wxBitmap & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* image_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxDragImage::wxDragImage function");
		}
		const wxBitmap & image=*image_ptr;
		const wxCursor* cursor_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxCursor >(L,3)) : NULL;
		if( luatop>2 && !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDragImage::wxDragImage function");
		}
		const wxCursor & cursor=luatop>2 ? *cursor_ptr : (const wxCursor&)wxNullCursor;
		const wxPoint* cursorHotspot_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !cursorHotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursorHotspot in wxDragImage::wxDragImage function");
		}
		const wxPoint & cursorHotspot=luatop>3 ? *cursorHotspot_ptr : (const wxPoint&)wxPoint (0, 0);

		return new wrapper_wxDragImage(L,NULL, image, cursor, cursorHotspot);
	}

	// wxDragImage::wxDragImage(lua_Table * data, const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))
	static wxDragImage* _bind_ctor_overload_9(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(lua_Table * data, const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) function, expected prototype:\nwxDragImage::wxDragImage(lua_Table * data, const wxIcon & image, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxIcon* image_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,2));
		if( !image_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg image in wxDragImage::wxDragImage function");
		}
		const wxIcon & image=*image_ptr;
		const wxCursor* cursor_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxCursor >(L,3)) : NULL;
		if( luatop>2 && !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDragImage::wxDragImage function");
		}
		const wxCursor & cursor=luatop>2 ? *cursor_ptr : (const wxCursor&)wxNullCursor;
		const wxPoint* cursorHotspot_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !cursorHotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursorHotspot in wxDragImage::wxDragImage function");
		}
		const wxPoint & cursorHotspot=luatop>3 ? *cursorHotspot_ptr : (const wxPoint&)wxPoint (0, 0);

		return new wrapper_wxDragImage(L,NULL, image, cursor, cursorHotspot);
	}

	// wxDragImage::wxDragImage(lua_Table * data, const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))
	static wxDragImage* _bind_ctor_overload_10(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(lua_Table * data, const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0)) function, expected prototype:\nwxDragImage::wxDragImage(lua_Table * data, const wxString & text, const wxCursor & cursor = wxNullCursor, const wxPoint & cursorHotspot = wxPoint (0, 0))\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		const wxCursor* cursor_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxCursor >(L,3)) : NULL;
		if( luatop>2 && !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxDragImage::wxDragImage function");
		}
		const wxCursor & cursor=luatop>2 ? *cursor_ptr : (const wxCursor&)wxNullCursor;
		const wxPoint* cursorHotspot_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !cursorHotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursorHotspot in wxDragImage::wxDragImage function");
		}
		const wxPoint & cursorHotspot=luatop>3 ? *cursorHotspot_ptr : (const wxPoint&)wxPoint (0, 0);

		return new wrapper_wxDragImage(L,NULL, text, cursor, cursorHotspot);
	}

	// wxDragImage::wxDragImage(lua_Table * data, const wxTreeCtrl & treeCtrl, wxTreeItemId & id)
	static wxDragImage* _bind_ctor_overload_11(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_11(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(lua_Table * data, const wxTreeCtrl & treeCtrl, wxTreeItemId & id) function, expected prototype:\nwxDragImage::wxDragImage(lua_Table * data, const wxTreeCtrl & treeCtrl, wxTreeItemId & id)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeCtrl* treeCtrl_ptr=(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,2));
		if( !treeCtrl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg treeCtrl in wxDragImage::wxDragImage function");
		}
		const wxTreeCtrl & treeCtrl=*treeCtrl_ptr;
		wxTreeItemId* id_ptr=(Luna< wxTreeItemId >::check(L,3));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in wxDragImage::wxDragImage function");
		}
		wxTreeItemId & id=*id_ptr;

		return new wrapper_wxDragImage(L,NULL, treeCtrl, id);
	}

	// wxDragImage::wxDragImage(lua_Table * data, const wxListCtrl & listCtrl, long id)
	static wxDragImage* _bind_ctor_overload_12(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_12(L)) {
			luaL_error(L, "luna typecheck failed in wxDragImage::wxDragImage(lua_Table * data, const wxListCtrl & listCtrl, long id) function, expected prototype:\nwxDragImage::wxDragImage(lua_Table * data, const wxListCtrl & listCtrl, long id)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxListCtrl* listCtrl_ptr=(Luna< wxObject >::checkSubType< wxListCtrl >(L,2));
		if( !listCtrl_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg listCtrl in wxDragImage::wxDragImage function");
		}
		const wxListCtrl & listCtrl=*listCtrl_ptr;
		long id=(long)lua_tonumber(L,3);

		return new wrapper_wxDragImage(L,NULL, listCtrl, id);
	}

	// Overload binder for wxDragImage::wxDragImage
	static wxDragImage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);
		if (_lg_typecheck_ctor_overload_7(L)) return _bind_ctor_overload_7(L);
		if (_lg_typecheck_ctor_overload_8(L)) return _bind_ctor_overload_8(L);
		if (_lg_typecheck_ctor_overload_9(L)) return _bind_ctor_overload_9(L);
		if (_lg_typecheck_ctor_overload_10(L)) return _bind_ctor_overload_10(L);
		if (_lg_typecheck_ctor_overload_11(L)) return _bind_ctor_overload_11(L);
		if (_lg_typecheck_ctor_overload_12(L)) return _bind_ctor_overload_12(L);

		luaL_error(L, "error in function wxDragImage, cannot match any of the overloads for function wxDragImage:\n  wxDragImage()\n  wxDragImage(const wxBitmap &, const wxCursor &, const wxPoint &)\n  wxDragImage(const wxIcon &, const wxCursor &, const wxPoint &)\n  wxDragImage(const wxString &, const wxCursor &, const wxPoint &)\n  wxDragImage(const wxTreeCtrl &, wxTreeItemId &)\n  wxDragImage(const wxListCtrl &, long)\n  wxDragImage(lua_Table *)\n  wxDragImage(lua_Table *, const wxBitmap &, const wxCursor &, const wxPoint &)\n  wxDragImage(lua_Table *, const wxIcon &, const wxCursor &, const wxPoint &)\n  wxDragImage(lua_Table *, const wxString &, const wxCursor &, const wxPoint &)\n  wxDragImage(lua_Table *, const wxTreeCtrl &, wxTreeItemId &)\n  wxDragImage(lua_Table *, const wxListCtrl &, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxDragImage::BeginDrag(const wxPoint & hotspot, wxWindow * window, bool fullScreen = false, wxRect * rect = NULL)
	static int _bind_BeginDrag_overload_1(lua_State *L) {
		if (!_lg_typecheck_BeginDrag_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDragImage::BeginDrag(const wxPoint & hotspot, wxWindow * window, bool fullScreen = false, wxRect * rect = NULL) function, expected prototype:\nbool wxDragImage::BeginDrag(const wxPoint & hotspot, wxWindow * window, bool fullScreen = false, wxRect * rect = NULL)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 56813631\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* hotspot_ptr=(Luna< wxPoint >::check(L,2));
		if( !hotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hotspot in wxDragImage::BeginDrag function");
		}
		const wxPoint & hotspot=*hotspot_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		bool fullScreen=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;
		wxRect* rect=luatop>4 ? (Luna< wxRect >::check(L,5)) : (wxRect*)NULL;

		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDragImage::BeginDrag(const wxPoint &, wxWindow *, bool, wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BeginDrag(hotspot, window, fullScreen, rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDragImage::BeginDrag(const wxPoint & hotspot, wxWindow * window, wxWindow * boundingWindow)
	static int _bind_BeginDrag_overload_2(lua_State *L) {
		if (!_lg_typecheck_BeginDrag_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDragImage::BeginDrag(const wxPoint & hotspot, wxWindow * window, wxWindow * boundingWindow) function, expected prototype:\nbool wxDragImage::BeginDrag(const wxPoint & hotspot, wxWindow * window, wxWindow * boundingWindow)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* hotspot_ptr=(Luna< wxPoint >::check(L,2));
		if( !hotspot_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg hotspot in wxDragImage::BeginDrag function");
		}
		const wxPoint & hotspot=*hotspot_ptr;
		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		wxWindow* boundingWindow=(Luna< wxObject >::checkSubType< wxWindow >(L,4));

		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDragImage::BeginDrag(const wxPoint &, wxWindow *, wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BeginDrag(hotspot, window, boundingWindow);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxDragImage::BeginDrag
	static int _bind_BeginDrag(lua_State *L) {
		if (_lg_typecheck_BeginDrag_overload_1(L)) return _bind_BeginDrag_overload_1(L);
		if (_lg_typecheck_BeginDrag_overload_2(L)) return _bind_BeginDrag_overload_2(L);

		luaL_error(L, "error in function BeginDrag, cannot match any of the overloads for function BeginDrag:\n  BeginDrag(const wxPoint &, wxWindow *, bool, wxRect *)\n  BeginDrag(const wxPoint &, wxWindow *, wxWindow *)\n");
		return 0;
	}

	// bool wxDragImage::EndDrag()
	static int _bind_EndDrag(lua_State *L) {
		if (!_lg_typecheck_EndDrag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDragImage::EndDrag() function, expected prototype:\nbool wxDragImage::EndDrag()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDragImage::EndDrag(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EndDrag();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDragImage::Hide()
	static int _bind_Hide(lua_State *L) {
		if (!_lg_typecheck_Hide(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDragImage::Hide() function, expected prototype:\nbool wxDragImage::Hide()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDragImage::Hide(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hide();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDragImage::Move(const wxPoint & pt)
	static int _bind_Move(lua_State *L) {
		if (!_lg_typecheck_Move(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDragImage::Move(const wxPoint & pt) function, expected prototype:\nbool wxDragImage::Move(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDragImage::Move function");
		}
		const wxPoint & pt=*pt_ptr;

		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDragImage::Move(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Move(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDragImage::Show()
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDragImage::Show() function, expected prototype:\nbool wxDragImage::Show()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDragImage::Show(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Show();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxDragImage::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDragImage::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDragImage::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDragImage* self=Luna< wxObject >::checkSubType< wxDragImage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDragImage::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDragImage::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDragImage* LunaTraits< wxDragImage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDragImage::_bind_ctor(L);
}

void LunaTraits< wxDragImage >::_bind_dtor(wxDragImage* obj) {
	delete obj;
}

const char LunaTraits< wxDragImage >::className[] = "wxDragImage";
const char LunaTraits< wxDragImage >::fullName[] = "wxDragImage";
const char LunaTraits< wxDragImage >::moduleName[] = "wx";
const char* LunaTraits< wxDragImage >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDragImage >::hash = 81459948;
const int LunaTraits< wxDragImage >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDragImage >::methods[] = {
	{"BeginDrag", &luna_wrapper_wxDragImage::_bind_BeginDrag},
	{"EndDrag", &luna_wrapper_wxDragImage::_bind_EndDrag},
	{"Hide", &luna_wrapper_wxDragImage::_bind_Hide},
	{"Move", &luna_wrapper_wxDragImage::_bind_Move},
	{"Show", &luna_wrapper_wxDragImage::_bind_Show},
	{"base_GetClassInfo", &luna_wrapper_wxDragImage::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxDragImage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDragImage::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDragImage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDragImage >::converters[] = {
	{"wxObject", &luna_wrapper_wxDragImage::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDragImage >::enumValues[] = {
	{0,0}
};


