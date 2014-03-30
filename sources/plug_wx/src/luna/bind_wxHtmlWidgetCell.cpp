#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlWidgetCell.h>

class luna_wrapper_wxHtmlWidgetCell {
public:
	typedef Luna< wxHtmlWidgetCell > luna_t;

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

		wxHtmlWidgetCell* self= (wxHtmlWidgetCell*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlWidgetCell >::push(L,self,false);
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
		//wxHtmlWidgetCell* ptr= dynamic_cast< wxHtmlWidgetCell* >(Luna< wxObject >::check(L,1));
		wxHtmlWidgetCell* ptr= luna_caster< wxObject, wxHtmlWidgetCell >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlWidgetCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AdjustPagebreak(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Draw(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,10696080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawInvisible(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,10696080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Find(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLink(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlWidgetCell::wxHtmlWidgetCell(wxWindow * wnd, int w = 0)
	static wxHtmlWidgetCell* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlWidgetCell::wxHtmlWidgetCell(wxWindow * wnd, int w = 0) function, expected prototype:\nwxHtmlWidgetCell::wxHtmlWidgetCell(wxWindow * wnd, int w = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int w=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxHtmlWidgetCell(wnd, w);
	}

	// wxHtmlWidgetCell::wxHtmlWidgetCell(lua_Table * data, wxWindow * wnd, int w = 0)
	static wxHtmlWidgetCell* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlWidgetCell::wxHtmlWidgetCell(lua_Table * data, wxWindow * wnd, int w = 0) function, expected prototype:\nwxHtmlWidgetCell::wxHtmlWidgetCell(lua_Table * data, wxWindow * wnd, int w = 0)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int w=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxHtmlWidgetCell(L,NULL, wnd, w);
	}

	// Overload binder for wxHtmlWidgetCell::wxHtmlWidgetCell
	static wxHtmlWidgetCell* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlWidgetCell, cannot match any of the overloads for function wxHtmlWidgetCell:\n  wxHtmlWidgetCell(wxWindow *, int)\n  wxHtmlWidgetCell(lua_Table *, wxWindow *, int)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxHtmlWidgetCell::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlWidgetCell::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlWidgetCell::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlWidgetCell::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlWidgetCell::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlWidgetCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	static int _bind_base_AdjustPagebreak(lua_State *L) {
		if (!_lg_typecheck_base_AdjustPagebreak(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWidgetCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const function, expected prototype:\nbool wxHtmlWidgetCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const\nClass arguments details:\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int* pagebreak=(int*)Luna< void >::check(L,2);
		wxArrayInt* known_pagebreaks_ptr=(Luna< wxArrayInt >::check(L,3));
		if( !known_pagebreaks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg known_pagebreaks in wxHtmlWidgetCell::base_AdjustPagebreak function");
		}
		wxArrayInt & known_pagebreaks=*known_pagebreaks_ptr;

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWidgetCell::base_AdjustPagebreak(int *, wxArrayInt &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWidgetCell::AdjustPagebreak(pagebreak, known_pagebreaks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWidgetCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	static int _bind_base_Draw(lua_State *L) {
		if (!_lg_typecheck_base_Draw(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWidgetCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlWidgetCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlWidgetCell::base_Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int view_y1=(int)lua_tointeger(L,5);
		int view_y2=(int)lua_tointeger(L,6);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,7));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlWidgetCell::base_Draw function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWidgetCell::base_Draw(wxDC &, int, int, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWidgetCell::Draw(dc, x, y, view_y1, view_y2, info);

		return 0;
	}

	// void wxHtmlWidgetCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	static int _bind_base_DrawInvisible(lua_State *L) {
		if (!_lg_typecheck_base_DrawInvisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWidgetCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlWidgetCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlWidgetCell::base_DrawInvisible function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,5));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlWidgetCell::base_DrawInvisible function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWidgetCell::base_DrawInvisible(wxDC &, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWidgetCell::DrawInvisible(dc, x, y, info);

		return 0;
	}

	// const wxHtmlCell * wxHtmlWidgetCell::base_Find(int condition, const void * param) const
	static int _bind_base_Find(lua_State *L) {
		if (!_lg_typecheck_base_Find(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlCell * wxHtmlWidgetCell::base_Find(int condition, const void * param) const function, expected prototype:\nconst wxHtmlCell * wxHtmlWidgetCell::base_Find(int condition, const void * param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int condition=(int)lua_tointeger(L,2);
		const void* param=(Luna< void >::check(L,3));

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlCell * wxHtmlWidgetCell::base_Find(int, const void *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlCell * lret = self->wxHtmlWidgetCell::Find(condition, param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlCell * wxHtmlWidgetCell::base_GetFirstChild() const
	static int _bind_base_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_base_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlWidgetCell::base_GetFirstChild() const function, expected prototype:\nwxHtmlCell * wxHtmlWidgetCell::base_GetFirstChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlWidgetCell::base_GetFirstChild() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlCell * lret = self->wxHtmlWidgetCell::GetFirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlLinkInfo * wxHtmlWidgetCell::base_GetLink(int x = 0, int y = 0) const
	static int _bind_base_GetLink(lua_State *L) {
		if (!_lg_typecheck_base_GetLink(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo * wxHtmlWidgetCell::base_GetLink(int x = 0, int y = 0) const function, expected prototype:\nwxHtmlLinkInfo * wxHtmlWidgetCell::base_GetLink(int x = 0, int y = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int y=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlLinkInfo * wxHtmlWidgetCell::base_GetLink(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlLinkInfo * lret = self->wxHtmlWidgetCell::GetLink(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlWidgetCell::base_Layout(int w)
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWidgetCell::base_Layout(int w) function, expected prototype:\nvoid wxHtmlWidgetCell::base_Layout(int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWidgetCell::base_Layout(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWidgetCell::Layout(w);

		return 0;
	}

	// void wxHtmlWidgetCell::base_SetPos(int x, int y)
	static int _bind_base_SetPos(lua_State *L) {
		if (!_lg_typecheck_base_SetPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWidgetCell::base_SetPos(int x, int y) function, expected prototype:\nvoid wxHtmlWidgetCell::base_SetPos(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlWidgetCell* self=Luna< wxObject >::checkSubType< wxHtmlWidgetCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWidgetCell::base_SetPos(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWidgetCell::SetPos(x, y);

		return 0;
	}


	// Operator binds:

};

wxHtmlWidgetCell* LunaTraits< wxHtmlWidgetCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlWidgetCell::_bind_ctor(L);
}

void LunaTraits< wxHtmlWidgetCell >::_bind_dtor(wxHtmlWidgetCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWidgetCell >::className[] = "wxHtmlWidgetCell";
const char LunaTraits< wxHtmlWidgetCell >::fullName[] = "wxHtmlWidgetCell";
const char LunaTraits< wxHtmlWidgetCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWidgetCell >::parents[] = {"wx.wxHtmlCell", 0};
const int LunaTraits< wxHtmlWidgetCell >::hash = 15937627;
const int LunaTraits< wxHtmlWidgetCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlWidgetCell >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxHtmlWidgetCell::_bind_base_GetClassInfo},
	{"base_AdjustPagebreak", &luna_wrapper_wxHtmlWidgetCell::_bind_base_AdjustPagebreak},
	{"base_Draw", &luna_wrapper_wxHtmlWidgetCell::_bind_base_Draw},
	{"base_DrawInvisible", &luna_wrapper_wxHtmlWidgetCell::_bind_base_DrawInvisible},
	{"base_Find", &luna_wrapper_wxHtmlWidgetCell::_bind_base_Find},
	{"base_GetFirstChild", &luna_wrapper_wxHtmlWidgetCell::_bind_base_GetFirstChild},
	{"base_GetLink", &luna_wrapper_wxHtmlWidgetCell::_bind_base_GetLink},
	{"base_Layout", &luna_wrapper_wxHtmlWidgetCell::_bind_base_Layout},
	{"base_SetPos", &luna_wrapper_wxHtmlWidgetCell::_bind_base_SetPos},
	{"fromVoid", &luna_wrapper_wxHtmlWidgetCell::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlWidgetCell::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlWidgetCell::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWidgetCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlWidgetCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWidgetCell >::enumValues[] = {
	{0,0}
};


