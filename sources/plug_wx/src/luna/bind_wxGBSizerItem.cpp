#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGBSizerItem.h>

class luna_wrapper_wxGBSizerItem {
public:
	typedef Luna< wxGBSizerItem > luna_t;

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

		wxGBSizerItem* self= (wxGBSizerItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGBSizerItem >::push(L,self,false);
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
		//wxGBSizerItem* ptr= dynamic_cast< wxGBSizerItem* >(Luna< wxObject >::check(L,1));
		wxGBSizerItem* ptr= luna_caster< wxObject, wxGBSizerItem >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGBSizerItem >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>3 && (!(Luna< wxGBSpan >::check(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( luatop>2 && (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( luatop>2 && (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,56813631)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !(Luna< wxObject >::check(L,6)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,97553085) ) return false;
		if( luatop>4 && (!(Luna< wxGBSpan >::check(L,5))) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,56813631)) ) return false;
		if( luatop>7 && (lua_isnil(L,8)==0 && !(Luna< wxObject >::check(L,8)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>3 && (!(Luna< wxGBSpan >::check(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSizer >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,97553085) ) return false;
		if( luatop>3 && (!(Luna< wxGBSpan >::check(L,4))) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::check(L,7)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetEndPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPos_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPos_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSpan_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSpan_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Intersects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		if( (!(Luna< wxGBPosition >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,97553085) ) return false;
		if( (!(Luna< wxGBSpan >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSpan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97553085) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGBSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGBSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CalcMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeleteWindows(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDimension(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGBSizerItem::wxGBSizerItem(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 3 ID = 3425779\narg 4 ID = 97553085\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		return new wxGBSizerItem(width, height, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>2 ? (Luna< wxGBSpan >::check(L,3)) : NULL;
		if( luatop>2 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>2 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wxGBSizerItem(window, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 3425779\narg 3 ID = 97553085\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,1));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>2 ? (Luna< wxGBSpan >::check(L,3)) : NULL;
		if( luatop>2 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>2 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int border=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxObject* userData=luatop>5 ? (Luna< wxObject >::check(L,6)) : (wxObject*)NULL;

		return new wxGBSizerItem(sizer, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(lua_Table * data, int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(lua_Table * data, int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(lua_Table * data, int width, int height, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 4 ID = 3425779\narg 5 ID = 97553085\narg 8 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>4 ? (Luna< wxGBSpan >::check(L,5)) : NULL;
		if( luatop>4 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>4 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		int border=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;
		wxObject* userData=luatop>7 ? (Luna< wxObject >::check(L,8)) : (wxObject*)NULL;

		return new wrapper_wxGBSizerItem(L,NULL, width, height, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(lua_Table * data, wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(lua_Table * data, wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(lua_Table * data, wxWindow * window, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 3425779\narg 4 ID = 97553085\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		return new wrapper_wxGBSizerItem(L,NULL, window, pos, span, flag, border, userData);
	}

	// wxGBSizerItem::wxGBSizerItem(lua_Table * data, wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)
	static wxGBSizerItem* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSizerItem::wxGBSizerItem(lua_Table * data, wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL) function, expected prototype:\nwxGBSizerItem::wxGBSizerItem(lua_Table * data, wxSizer * sizer, const wxGBPosition & pos, const wxGBSpan & span = wxDefaultSpan, int flag = 0, int border = 0, wxObject * userData = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 3425779\narg 4 ID = 97553085\narg 7 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=luatop>3 ? (Luna< wxGBSpan >::check(L,4)) : NULL;
		if( luatop>3 && !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::wxGBSizerItem function");
		}
		const wxGBSpan & span=luatop>3 ? *span_ptr : (const wxGBSpan&)wxDefaultSpan;
		int flag=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		int border=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		wxObject* userData=luatop>6 ? (Luna< wxObject >::check(L,7)) : (wxObject*)NULL;

		return new wrapper_wxGBSizerItem(L,NULL, sizer, pos, span, flag, border, userData);
	}

	// Overload binder for wxGBSizerItem::wxGBSizerItem
	static wxGBSizerItem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxGBSizerItem, cannot match any of the overloads for function wxGBSizerItem:\n  wxGBSizerItem(int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(lua_Table *, int, int, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(lua_Table *, wxWindow *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n  wxGBSizerItem(lua_Table *, wxSizer *, const wxGBPosition &, const wxGBSpan &, int, int, wxObject *)\n");
		return NULL;
	}


	// Function binds:
	// void wxGBSizerItem::GetEndPos(int & row, int & col)
	static int _bind_GetEndPos(lua_State *L) {
		if (!_lg_typecheck_GetEndPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::GetEndPos(int & row, int & col) function, expected prototype:\nvoid wxGBSizerItem::GetEndPos(int & row, int & col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::GetEndPos(int &, int &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetEndPos(row, col);

		lua_pushnumber(L,row);
		lua_pushnumber(L,col);
		return 2;
	}

	// wxGBPosition wxGBSizerItem::GetPos() const
	static int _bind_GetPos_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPos_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBPosition wxGBSizerItem::GetPos() const function, expected prototype:\nwxGBPosition wxGBSizerItem::GetPos() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBPosition wxGBSizerItem::GetPos() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBPosition stack_lret = self->GetPos();
		wxGBPosition* lret = new wxGBPosition(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBPosition >::push(L,lret,true);

		return 1;
	}

	// void wxGBSizerItem::GetPos(int & row, int & col) const
	static int _bind_GetPos_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPos_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::GetPos(int & row, int & col) const function, expected prototype:\nvoid wxGBSizerItem::GetPos(int & row, int & col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::GetPos(int &, int &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetPos(row, col);

		lua_pushnumber(L,row);
		lua_pushnumber(L,col);
		return 2;
	}

	// Overload binder for wxGBSizerItem::GetPos
	static int _bind_GetPos(lua_State *L) {
		if (_lg_typecheck_GetPos_overload_1(L)) return _bind_GetPos_overload_1(L);
		if (_lg_typecheck_GetPos_overload_2(L)) return _bind_GetPos_overload_2(L);

		luaL_error(L, "error in function GetPos, cannot match any of the overloads for function GetPos:\n  GetPos()\n  GetPos(int &, int &)\n");
		return 0;
	}

	// wxGBSpan wxGBSizerItem::GetSpan() const
	static int _bind_GetSpan_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSpan_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSpan wxGBSizerItem::GetSpan() const function, expected prototype:\nwxGBSpan wxGBSizerItem::GetSpan() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGBSpan wxGBSizerItem::GetSpan() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGBSpan stack_lret = self->GetSpan();
		wxGBSpan* lret = new wxGBSpan(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGBSpan >::push(L,lret,true);

		return 1;
	}

	// void wxGBSizerItem::GetSpan(int & rowspan, int & colspan) const
	static int _bind_GetSpan_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSpan_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::GetSpan(int & rowspan, int & colspan) const function, expected prototype:\nvoid wxGBSizerItem::GetSpan(int & rowspan, int & colspan) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rowspan=(int)lua_tointeger(L,2);
		int colspan=(int)lua_tointeger(L,3);

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::GetSpan(int &, int &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetSpan(rowspan, colspan);

		lua_pushnumber(L,rowspan);
		lua_pushnumber(L,colspan);
		return 2;
	}

	// Overload binder for wxGBSizerItem::GetSpan
	static int _bind_GetSpan(lua_State *L) {
		if (_lg_typecheck_GetSpan_overload_1(L)) return _bind_GetSpan_overload_1(L);
		if (_lg_typecheck_GetSpan_overload_2(L)) return _bind_GetSpan_overload_2(L);

		luaL_error(L, "error in function GetSpan, cannot match any of the overloads for function GetSpan:\n  GetSpan()\n  GetSpan(int &, int &)\n");
		return 0;
	}

	// bool wxGBSizerItem::Intersects(const wxGBSizerItem & other)
	static int _bind_Intersects_overload_1(lua_State *L) {
		if (!_lg_typecheck_Intersects_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::Intersects(const wxGBSizerItem & other) function, expected prototype:\nbool wxGBSizerItem::Intersects(const wxGBSizerItem & other)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBSizerItem* other_ptr=(Luna< wxObject >::checkSubType< wxGBSizerItem >(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxGBSizerItem::Intersects function");
		}
		const wxGBSizerItem & other=*other_ptr;

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::Intersects(const wxGBSizerItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Intersects(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGBSizerItem::Intersects(const wxGBPosition & pos, const wxGBSpan & span)
	static int _bind_Intersects_overload_2(lua_State *L) {
		if (!_lg_typecheck_Intersects_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::Intersects(const wxGBPosition & pos, const wxGBSpan & span) function, expected prototype:\nbool wxGBSizerItem::Intersects(const wxGBPosition & pos, const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 3425779\narg 2 ID = 97553085\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::Intersects function");
		}
		const wxGBPosition & pos=*pos_ptr;
		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,3));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::Intersects function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::Intersects(const wxGBPosition &, const wxGBSpan &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Intersects(pos, span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxGBSizerItem::Intersects
	static int _bind_Intersects(lua_State *L) {
		if (_lg_typecheck_Intersects_overload_1(L)) return _bind_Intersects_overload_1(L);
		if (_lg_typecheck_Intersects_overload_2(L)) return _bind_Intersects_overload_2(L);

		luaL_error(L, "error in function Intersects, cannot match any of the overloads for function Intersects:\n  Intersects(const wxGBSizerItem &)\n  Intersects(const wxGBPosition &, const wxGBSpan &)\n");
		return 0;
	}

	// bool wxGBSizerItem::SetPos(const wxGBPosition & pos)
	static int _bind_SetPos(lua_State *L) {
		if (!_lg_typecheck_SetPos(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::SetPos(const wxGBPosition & pos) function, expected prototype:\nbool wxGBSizerItem::SetPos(const wxGBPosition & pos)\nClass arguments details:\narg 1 ID = 3425779\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBPosition* pos_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::SetPos function");
		}
		const wxGBPosition & pos=*pos_ptr;

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::SetPos(const wxGBPosition &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPos(pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGBSizerItem::SetSpan(const wxGBSpan & span)
	static int _bind_SetSpan(lua_State *L) {
		if (!_lg_typecheck_SetSpan(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGBSizerItem::SetSpan(const wxGBSpan & span) function, expected prototype:\nbool wxGBSizerItem::SetSpan(const wxGBSpan & span)\nClass arguments details:\narg 1 ID = 97553085\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBSpan* span_ptr=(Luna< wxGBSpan >::check(L,2));
		if( !span_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg span in wxGBSizerItem::SetSpan function");
		}
		const wxGBSpan & span=*span_ptr;

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGBSizerItem::SetSpan(const wxGBSpan &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetSpan(span);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxGridBagSizer * wxGBSizerItem::GetGBSizer() const
	static int _bind_GetGBSizer(lua_State *L) {
		if (!_lg_typecheck_GetGBSizer(L)) {
			luaL_error(L, "luna typecheck failed in wxGridBagSizer * wxGBSizerItem::GetGBSizer() const function, expected prototype:\nwxGridBagSizer * wxGBSizerItem::GetGBSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridBagSizer * wxGBSizerItem::GetGBSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridBagSizer * lret = self->GetGBSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridBagSizer >::push(L,lret,false);

		return 1;
	}

	// void wxGBSizerItem::SetGBSizer(wxGridBagSizer * sizer)
	static int _bind_SetGBSizer(lua_State *L) {
		if (!_lg_typecheck_SetGBSizer(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::SetGBSizer(wxGridBagSizer * sizer) function, expected prototype:\nvoid wxGBSizerItem::SetGBSizer(wxGridBagSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridBagSizer* sizer=(Luna< wxObject >::checkSubType< wxGridBagSizer >(L,2));

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::SetGBSizer(wxGridBagSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGBSizer(sizer);

		return 0;
	}

	// wxClassInfo * wxGBSizerItem::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGBSizerItem::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGBSizerItem::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGBSizerItem::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGBSizerItem::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxSize wxGBSizerItem::base_CalcMin()
	static int _bind_base_CalcMin(lua_State *L) {
		if (!_lg_typecheck_base_CalcMin(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGBSizerItem::base_CalcMin() function, expected prototype:\nwxSize wxGBSizerItem::base_CalcMin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGBSizerItem::base_CalcMin(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGBSizerItem::CalcMin();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGBSizerItem::base_DeleteWindows()
	static int _bind_base_DeleteWindows(lua_State *L) {
		if (!_lg_typecheck_base_DeleteWindows(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::base_DeleteWindows() function, expected prototype:\nvoid wxGBSizerItem::base_DeleteWindows()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::base_DeleteWindows(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGBSizerItem::DeleteWindows();

		return 0;
	}

	// wxRect wxGBSizerItem::base_GetRect()
	static int _bind_base_GetRect(lua_State *L) {
		if (!_lg_typecheck_base_GetRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxGBSizerItem::base_GetRect() function, expected prototype:\nwxRect wxGBSizerItem::base_GetRect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxGBSizerItem::base_GetRect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->wxGBSizerItem::GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGBSizerItem::base_GetSize() const
	static int _bind_base_GetSize(lua_State *L) {
		if (!_lg_typecheck_base_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGBSizerItem::base_GetSize() const function, expected prototype:\nwxSize wxGBSizerItem::base_GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGBSizerItem::base_GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGBSizerItem::GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGBSizerItem::base_SetDimension(const wxPoint & pos, const wxSize & size)
	static int _bind_base_SetDimension(lua_State *L) {
		if (!_lg_typecheck_base_SetDimension(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSizerItem::base_SetDimension(const wxPoint & pos, const wxSize & size) function, expected prototype:\nvoid wxGBSizerItem::base_SetDimension(const wxPoint & pos, const wxSize & size)\nClass arguments details:\narg 1 ID = 25723480\narg 2 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGBSizerItem::base_SetDimension function");
		}
		const wxPoint & pos=*pos_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,3));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGBSizerItem::base_SetDimension function");
		}
		const wxSize & size=*size_ptr;

		wxGBSizerItem* self=Luna< wxObject >::checkSubType< wxGBSizerItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSizerItem::base_SetDimension(const wxPoint &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGBSizerItem::SetDimension(pos, size);

		return 0;
	}


	// Operator binds:

};

wxGBSizerItem* LunaTraits< wxGBSizerItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGBSizerItem::_bind_ctor(L);
}

void LunaTraits< wxGBSizerItem >::_bind_dtor(wxGBSizerItem* obj) {
	delete obj;
}

const char LunaTraits< wxGBSizerItem >::className[] = "wxGBSizerItem";
const char LunaTraits< wxGBSizerItem >::fullName[] = "wxGBSizerItem";
const char LunaTraits< wxGBSizerItem >::moduleName[] = "wx";
const char* LunaTraits< wxGBSizerItem >::parents[] = {"wx.wxSizerItem", 0};
const int LunaTraits< wxGBSizerItem >::hash = 98606099;
const int LunaTraits< wxGBSizerItem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGBSizerItem >::methods[] = {
	{"GetEndPos", &luna_wrapper_wxGBSizerItem::_bind_GetEndPos},
	{"GetPos", &luna_wrapper_wxGBSizerItem::_bind_GetPos},
	{"GetSpan", &luna_wrapper_wxGBSizerItem::_bind_GetSpan},
	{"Intersects", &luna_wrapper_wxGBSizerItem::_bind_Intersects},
	{"SetPos", &luna_wrapper_wxGBSizerItem::_bind_SetPos},
	{"SetSpan", &luna_wrapper_wxGBSizerItem::_bind_SetSpan},
	{"GetGBSizer", &luna_wrapper_wxGBSizerItem::_bind_GetGBSizer},
	{"SetGBSizer", &luna_wrapper_wxGBSizerItem::_bind_SetGBSizer},
	{"base_GetClassInfo", &luna_wrapper_wxGBSizerItem::_bind_base_GetClassInfo},
	{"base_CalcMin", &luna_wrapper_wxGBSizerItem::_bind_base_CalcMin},
	{"base_DeleteWindows", &luna_wrapper_wxGBSizerItem::_bind_base_DeleteWindows},
	{"base_GetRect", &luna_wrapper_wxGBSizerItem::_bind_base_GetRect},
	{"base_GetSize", &luna_wrapper_wxGBSizerItem::_bind_base_GetSize},
	{"base_SetDimension", &luna_wrapper_wxGBSizerItem::_bind_base_SetDimension},
	{"fromVoid", &luna_wrapper_wxGBSizerItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGBSizerItem::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGBSizerItem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGBSizerItem >::converters[] = {
	{"wxObject", &luna_wrapper_wxGBSizerItem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGBSizerItem >::enumValues[] = {
	{0,0}
};


