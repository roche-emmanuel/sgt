#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlColourCell.h>

class luna_wrapper_wxHtmlColourCell {
public:
	typedef Luna< wxHtmlColourCell > luna_t;

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

		wxHtmlColourCell* self= (wxHtmlColourCell*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlColourCell >::push(L,self,false);
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
		//wxHtmlColourCell* ptr= dynamic_cast< wxHtmlColourCell* >(Luna< wxObject >::check(L,1));
		wxHtmlColourCell* ptr= luna_caster< wxObject, wxHtmlColourCell >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlColourCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
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
	// wxHtmlColourCell::wxHtmlColourCell(const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND)
	static wxHtmlColourCell* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlColourCell::wxHtmlColourCell(const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND) function, expected prototype:\nwxHtmlColourCell::wxHtmlColourCell(const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* clr_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,1));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlColourCell::wxHtmlColourCell function");
		}
		const wxColour & clr=*clr_ptr;
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxHTML_CLR_FOREGROUND;

		return new wxHtmlColourCell(clr, flags);
	}

	// wxHtmlColourCell::wxHtmlColourCell(lua_Table * data, const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND)
	static wxHtmlColourCell* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlColourCell::wxHtmlColourCell(lua_Table * data, const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND) function, expected prototype:\nwxHtmlColourCell::wxHtmlColourCell(lua_Table * data, const wxColour & clr, int flags = wxHTML_CLR_FOREGROUND)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* clr_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !clr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clr in wxHtmlColourCell::wxHtmlColourCell function");
		}
		const wxColour & clr=*clr_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxHTML_CLR_FOREGROUND;

		return new wrapper_wxHtmlColourCell(L,NULL, clr, flags);
	}

	// Overload binder for wxHtmlColourCell::wxHtmlColourCell
	static wxHtmlColourCell* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlColourCell, cannot match any of the overloads for function wxHtmlColourCell:\n  wxHtmlColourCell(const wxColour &, int)\n  wxHtmlColourCell(lua_Table *, const wxColour &, int)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxHtmlColourCell::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlColourCell::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlColourCell::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlColourCell::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlColourCell::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlColourCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	static int _bind_base_AdjustPagebreak(lua_State *L) {
		if (!_lg_typecheck_base_AdjustPagebreak(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlColourCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const function, expected prototype:\nbool wxHtmlColourCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const\nClass arguments details:\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int* pagebreak=(int*)Luna< void >::check(L,2);
		wxArrayInt* known_pagebreaks_ptr=(Luna< wxArrayInt >::check(L,3));
		if( !known_pagebreaks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg known_pagebreaks in wxHtmlColourCell::base_AdjustPagebreak function");
		}
		wxArrayInt & known_pagebreaks=*known_pagebreaks_ptr;

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlColourCell::base_AdjustPagebreak(int *, wxArrayInt &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlColourCell::AdjustPagebreak(pagebreak, known_pagebreaks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlColourCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	static int _bind_base_Draw(lua_State *L) {
		if (!_lg_typecheck_base_Draw(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlColourCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlColourCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlColourCell::base_Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int view_y1=(int)lua_tointeger(L,5);
		int view_y2=(int)lua_tointeger(L,6);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,7));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlColourCell::base_Draw function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlColourCell::base_Draw(wxDC &, int, int, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlColourCell::Draw(dc, x, y, view_y1, view_y2, info);

		return 0;
	}

	// void wxHtmlColourCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	static int _bind_base_DrawInvisible(lua_State *L) {
		if (!_lg_typecheck_base_DrawInvisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlColourCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlColourCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlColourCell::base_DrawInvisible function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,5));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlColourCell::base_DrawInvisible function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlColourCell::base_DrawInvisible(wxDC &, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlColourCell::DrawInvisible(dc, x, y, info);

		return 0;
	}

	// const wxHtmlCell * wxHtmlColourCell::base_Find(int condition, const void * param) const
	static int _bind_base_Find(lua_State *L) {
		if (!_lg_typecheck_base_Find(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlCell * wxHtmlColourCell::base_Find(int condition, const void * param) const function, expected prototype:\nconst wxHtmlCell * wxHtmlColourCell::base_Find(int condition, const void * param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int condition=(int)lua_tointeger(L,2);
		const void* param=(Luna< void >::check(L,3));

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlCell * wxHtmlColourCell::base_Find(int, const void *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlCell * lret = self->wxHtmlColourCell::Find(condition, param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlCell * wxHtmlColourCell::base_GetFirstChild() const
	static int _bind_base_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_base_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlColourCell::base_GetFirstChild() const function, expected prototype:\nwxHtmlCell * wxHtmlColourCell::base_GetFirstChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlColourCell::base_GetFirstChild() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlCell * lret = self->wxHtmlColourCell::GetFirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlLinkInfo * wxHtmlColourCell::base_GetLink(int x = 0, int y = 0) const
	static int _bind_base_GetLink(lua_State *L) {
		if (!_lg_typecheck_base_GetLink(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo * wxHtmlColourCell::base_GetLink(int x = 0, int y = 0) const function, expected prototype:\nwxHtmlLinkInfo * wxHtmlColourCell::base_GetLink(int x = 0, int y = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int y=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlLinkInfo * wxHtmlColourCell::base_GetLink(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlLinkInfo * lret = self->wxHtmlColourCell::GetLink(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlColourCell::base_Layout(int w)
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlColourCell::base_Layout(int w) function, expected prototype:\nvoid wxHtmlColourCell::base_Layout(int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlColourCell::base_Layout(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlColourCell::Layout(w);

		return 0;
	}

	// void wxHtmlColourCell::base_SetPos(int x, int y)
	static int _bind_base_SetPos(lua_State *L) {
		if (!_lg_typecheck_base_SetPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlColourCell::base_SetPos(int x, int y) function, expected prototype:\nvoid wxHtmlColourCell::base_SetPos(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlColourCell* self=Luna< wxObject >::checkSubType< wxHtmlColourCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlColourCell::base_SetPos(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlColourCell::SetPos(x, y);

		return 0;
	}


	// Operator binds:

};

wxHtmlColourCell* LunaTraits< wxHtmlColourCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlColourCell::_bind_ctor(L);
}

void LunaTraits< wxHtmlColourCell >::_bind_dtor(wxHtmlColourCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlColourCell >::className[] = "wxHtmlColourCell";
const char LunaTraits< wxHtmlColourCell >::fullName[] = "wxHtmlColourCell";
const char LunaTraits< wxHtmlColourCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlColourCell >::parents[] = {"wx.wxHtmlCell", 0};
const int LunaTraits< wxHtmlColourCell >::hash = 39562076;
const int LunaTraits< wxHtmlColourCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlColourCell >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxHtmlColourCell::_bind_base_GetClassInfo},
	{"base_AdjustPagebreak", &luna_wrapper_wxHtmlColourCell::_bind_base_AdjustPagebreak},
	{"base_Draw", &luna_wrapper_wxHtmlColourCell::_bind_base_Draw},
	{"base_DrawInvisible", &luna_wrapper_wxHtmlColourCell::_bind_base_DrawInvisible},
	{"base_Find", &luna_wrapper_wxHtmlColourCell::_bind_base_Find},
	{"base_GetFirstChild", &luna_wrapper_wxHtmlColourCell::_bind_base_GetFirstChild},
	{"base_GetLink", &luna_wrapper_wxHtmlColourCell::_bind_base_GetLink},
	{"base_Layout", &luna_wrapper_wxHtmlColourCell::_bind_base_Layout},
	{"base_SetPos", &luna_wrapper_wxHtmlColourCell::_bind_base_SetPos},
	{"fromVoid", &luna_wrapper_wxHtmlColourCell::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlColourCell::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlColourCell::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlColourCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlColourCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlColourCell >::enumValues[] = {
	{0,0}
};


