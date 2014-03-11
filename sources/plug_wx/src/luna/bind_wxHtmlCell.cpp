#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlCell.h>

class luna_wrapper_wxHtmlCell {
public:
	typedef Luna< wxHtmlCell > luna_t;

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

		wxHtmlCell* self= (wxHtmlCell*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlCell >::push(L,self,false);
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
		//wxHtmlCell* ptr= dynamic_cast< wxHtmlCell* >(Luna< wxObject >::check(L,1));
		wxHtmlCell* ptr= luna_caster< wxObject, wxHtmlCell >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlCell >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AdjustPagebreak(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Draw(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,10696080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawInvisible(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,10696080) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDescent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLink(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLink(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPos(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

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
	// wxHtmlCell::wxHtmlCell()
	static wxHtmlCell* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell::wxHtmlCell() function, expected prototype:\nwxHtmlCell::wxHtmlCell()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxHtmlCell();
	}

	// wxHtmlCell::wxHtmlCell(lua_Table * data)
	static wxHtmlCell* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell::wxHtmlCell(lua_Table * data) function, expected prototype:\nwxHtmlCell::wxHtmlCell(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxHtmlCell(L,NULL);
	}

	// Overload binder for wxHtmlCell::wxHtmlCell
	static wxHtmlCell* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlCell, cannot match any of the overloads for function wxHtmlCell:\n  wxHtmlCell()\n  wxHtmlCell(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	static int _bind_AdjustPagebreak(lua_State *L) {
		if (!_lg_typecheck_AdjustPagebreak(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const function, expected prototype:\nbool wxHtmlCell::AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const\nClass arguments details:\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int* pagebreak=(int*)Luna< void >::check(L,2);
		wxArrayInt* known_pagebreaks_ptr=(Luna< wxArrayInt >::check(L,3));
		if( !known_pagebreaks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg known_pagebreaks in wxHtmlCell::AdjustPagebreak function");
		}
		wxArrayInt & known_pagebreaks=*known_pagebreaks_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlCell::AdjustPagebreak(int *, wxArrayInt &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AdjustPagebreak(pagebreak, known_pagebreaks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	static int _bind_Draw(lua_State *L) {
		if (!_lg_typecheck_Draw(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlCell::Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlCell::Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int view_y1=(int)lua_tointeger(L,5);
		int view_y2=(int)lua_tointeger(L,6);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,7));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlCell::Draw function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::Draw(wxDC &, int, int, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Draw(dc, x, y, view_y1, view_y2, info);

		return 0;
	}

	// void wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	static int _bind_DrawInvisible(lua_State *L) {
		if (!_lg_typecheck_DrawInvisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlCell::DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlCell::DrawInvisible function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,5));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlCell::DrawInvisible function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::DrawInvisible(wxDC &, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawInvisible(dc, x, y, info);

		return 0;
	}

	// const wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const
	static int _bind_Find(lua_State *L) {
		if (!_lg_typecheck_Find(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const function, expected prototype:\nconst wxHtmlCell * wxHtmlCell::Find(int condition, const void * param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int condition=(int)lua_tointeger(L,2);
		const void* param=(Luna< void >::check(L,3));

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlCell * wxHtmlCell::Find(int, const void *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlCell * lret = self->Find(condition, param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// int wxHtmlCell::GetDescent() const
	static int _bind_GetDescent(lua_State *L) {
		if (!_lg_typecheck_GetDescent(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlCell::GetDescent() const function, expected prototype:\nint wxHtmlCell::GetDescent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlCell::GetDescent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDescent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxHtmlCell * wxHtmlCell::GetFirstChild() const
	static int _bind_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlCell::GetFirstChild() const function, expected prototype:\nwxHtmlCell * wxHtmlCell::GetFirstChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlCell::GetFirstChild() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlCell * lret = self->GetFirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// int wxHtmlCell::GetHeight() const
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlCell::GetHeight() const function, expected prototype:\nint wxHtmlCell::GetHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlCell::GetHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxHtmlCell::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxHtmlCell::GetId() const function, expected prototype:\nconst wxString & wxHtmlCell::GetId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxHtmlCell::GetId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetId();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const
	static int _bind_GetLink(lua_State *L) {
		if (!_lg_typecheck_GetLink(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const function, expected prototype:\nwxHtmlLinkInfo * wxHtmlCell::GetLink(int x = 0, int y = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int y=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlLinkInfo * wxHtmlCell::GetLink(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlLinkInfo * lret = self->GetLink(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// wxHtmlCell * wxHtmlCell::GetNext() const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlCell::GetNext() const function, expected prototype:\nwxHtmlCell * wxHtmlCell::GetNext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlCell::GetNext() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlCell * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlContainerCell * wxHtmlCell::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlCell::GetParent() const function, expected prototype:\nwxHtmlContainerCell * wxHtmlCell::GetParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlCell::GetParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlContainerCell * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// int wxHtmlCell::GetPosX() const
	static int _bind_GetPosX(lua_State *L) {
		if (!_lg_typecheck_GetPosX(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlCell::GetPosX() const function, expected prototype:\nint wxHtmlCell::GetPosX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlCell::GetPosX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPosX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlCell::GetPosY() const
	static int _bind_GetPosY(lua_State *L) {
		if (!_lg_typecheck_GetPosY(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlCell::GetPosY() const function, expected prototype:\nint wxHtmlCell::GetPosY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlCell::GetPosY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPosY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlCell::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlCell::GetWidth() const function, expected prototype:\nint wxHtmlCell::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlCell::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHtmlCell::Layout(int w)
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::Layout(int w) function, expected prototype:\nvoid wxHtmlCell::Layout(int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::Layout(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Layout(w);

		return 0;
	}

	// void wxHtmlCell::SetId(const wxString & id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::SetId(const wxString & id) function, expected prototype:\nvoid wxHtmlCell::SetId(const wxString & id)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString id(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::SetId(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetId(id);

		return 0;
	}

	// void wxHtmlCell::SetLink(const wxHtmlLinkInfo & link)
	static int _bind_SetLink(lua_State *L) {
		if (!_lg_typecheck_SetLink(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::SetLink(const wxHtmlLinkInfo & link) function, expected prototype:\nvoid wxHtmlCell::SetLink(const wxHtmlLinkInfo & link)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxHtmlLinkInfo* link_ptr=(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,2));
		if( !link_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg link in wxHtmlCell::SetLink function");
		}
		const wxHtmlLinkInfo & link=*link_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::SetLink(const wxHtmlLinkInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLink(link);

		return 0;
	}

	// void wxHtmlCell::SetNext(wxHtmlCell * cell)
	static int _bind_SetNext(lua_State *L) {
		if (!_lg_typecheck_SetNext(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::SetNext(wxHtmlCell * cell) function, expected prototype:\nvoid wxHtmlCell::SetNext(wxHtmlCell * cell)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlCell* cell=(Luna< wxObject >::checkSubType< wxHtmlCell >(L,2));

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::SetNext(wxHtmlCell *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNext(cell);

		return 0;
	}

	// void wxHtmlCell::SetParent(wxHtmlContainerCell * p)
	static int _bind_SetParent(lua_State *L) {
		if (!_lg_typecheck_SetParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::SetParent(wxHtmlContainerCell * p) function, expected prototype:\nvoid wxHtmlCell::SetParent(wxHtmlContainerCell * p)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlContainerCell* p=(Luna< wxObject >::checkSubType< wxHtmlContainerCell >(L,2));

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::SetParent(wxHtmlContainerCell *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParent(p);

		return 0;
	}

	// void wxHtmlCell::SetPos(int x, int y)
	static int _bind_SetPos(lua_State *L) {
		if (!_lg_typecheck_SetPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::SetPos(int x, int y) function, expected prototype:\nvoid wxHtmlCell::SetPos(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::SetPos(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPos(x, y);

		return 0;
	}

	// wxClassInfo * wxHtmlCell::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlCell::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlCell::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlCell::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlCell::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const
	static int _bind_base_AdjustPagebreak(lua_State *L) {
		if (!_lg_typecheck_base_AdjustPagebreak(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const function, expected prototype:\nbool wxHtmlCell::base_AdjustPagebreak(int * pagebreak, wxArrayInt & known_pagebreaks) const\nClass arguments details:\narg 2 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		int* pagebreak=(int*)Luna< void >::check(L,2);
		wxArrayInt* known_pagebreaks_ptr=(Luna< wxArrayInt >::check(L,3));
		if( !known_pagebreaks_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg known_pagebreaks in wxHtmlCell::base_AdjustPagebreak function");
		}
		wxArrayInt & known_pagebreaks=*known_pagebreaks_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlCell::base_AdjustPagebreak(int *, wxArrayInt &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlCell::AdjustPagebreak(pagebreak, known_pagebreaks);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)
	static int _bind_base_Draw(lua_State *L) {
		if (!_lg_typecheck_base_Draw(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlCell::base_Draw(wxDC & dc, int x, int y, int view_y1, int view_y2, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlCell::base_Draw function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		int view_y1=(int)lua_tointeger(L,5);
		int view_y2=(int)lua_tointeger(L,6);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,7));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlCell::base_Draw function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::base_Draw(wxDC &, int, int, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlCell::Draw(dc, x, y, view_y1, view_y2, info);

		return 0;
	}

	// void wxHtmlCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)
	static int _bind_base_DrawInvisible(lua_State *L) {
		if (!_lg_typecheck_base_DrawInvisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info) function, expected prototype:\nvoid wxHtmlCell::base_DrawInvisible(wxDC & dc, int x, int y, wxHtmlRenderingInfo & info)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 10696080\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxHtmlCell::base_DrawInvisible function");
		}
		wxDC & dc=*dc_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);
		wxHtmlRenderingInfo* info_ptr=(Luna< wxHtmlRenderingInfo >::check(L,5));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxHtmlCell::base_DrawInvisible function");
		}
		wxHtmlRenderingInfo & info=*info_ptr;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::base_DrawInvisible(wxDC &, int, int, wxHtmlRenderingInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlCell::DrawInvisible(dc, x, y, info);

		return 0;
	}

	// const wxHtmlCell * wxHtmlCell::base_Find(int condition, const void * param) const
	static int _bind_base_Find(lua_State *L) {
		if (!_lg_typecheck_base_Find(L)) {
			luaL_error(L, "luna typecheck failed in const wxHtmlCell * wxHtmlCell::base_Find(int condition, const void * param) const function, expected prototype:\nconst wxHtmlCell * wxHtmlCell::base_Find(int condition, const void * param) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int condition=(int)lua_tointeger(L,2);
		const void* param=(Luna< void >::check(L,3));

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxHtmlCell * wxHtmlCell::base_Find(int, const void *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxHtmlCell * lret = self->wxHtmlCell::Find(condition, param);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlCell * wxHtmlCell::base_GetFirstChild() const
	static int _bind_base_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_base_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlCell::base_GetFirstChild() const function, expected prototype:\nwxHtmlCell * wxHtmlCell::base_GetFirstChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlCell::base_GetFirstChild() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlCell * lret = self->wxHtmlCell::GetFirstChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// wxHtmlLinkInfo * wxHtmlCell::base_GetLink(int x = 0, int y = 0) const
	static int _bind_base_GetLink(lua_State *L) {
		if (!_lg_typecheck_base_GetLink(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlLinkInfo * wxHtmlCell::base_GetLink(int x = 0, int y = 0) const function, expected prototype:\nwxHtmlLinkInfo * wxHtmlCell::base_GetLink(int x = 0, int y = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int y=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlLinkInfo * wxHtmlCell::base_GetLink(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlLinkInfo * lret = self->wxHtmlCell::GetLink(x, y);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlLinkInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlCell::base_Layout(int w)
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::base_Layout(int w) function, expected prototype:\nvoid wxHtmlCell::base_Layout(int w)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int w=(int)lua_tointeger(L,2);

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::base_Layout(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlCell::Layout(w);

		return 0;
	}

	// void wxHtmlCell::base_SetPos(int x, int y)
	static int _bind_base_SetPos(lua_State *L) {
		if (!_lg_typecheck_base_SetPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCell::base_SetPos(int x, int y) function, expected prototype:\nvoid wxHtmlCell::base_SetPos(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlCell* self=Luna< wxObject >::checkSubType< wxHtmlCell >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCell::base_SetPos(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlCell::SetPos(x, y);

		return 0;
	}


	// Operator binds:

};

wxHtmlCell* LunaTraits< wxHtmlCell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlCell::_bind_ctor(L);
}

void LunaTraits< wxHtmlCell >::_bind_dtor(wxHtmlCell* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlCell >::className[] = "wxHtmlCell";
const char LunaTraits< wxHtmlCell >::fullName[] = "wxHtmlCell";
const char LunaTraits< wxHtmlCell >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlCell >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlCell >::hash = 76063739;
const int LunaTraits< wxHtmlCell >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlCell >::methods[] = {
	{"AdjustPagebreak", &luna_wrapper_wxHtmlCell::_bind_AdjustPagebreak},
	{"Draw", &luna_wrapper_wxHtmlCell::_bind_Draw},
	{"DrawInvisible", &luna_wrapper_wxHtmlCell::_bind_DrawInvisible},
	{"Find", &luna_wrapper_wxHtmlCell::_bind_Find},
	{"GetDescent", &luna_wrapper_wxHtmlCell::_bind_GetDescent},
	{"GetFirstChild", &luna_wrapper_wxHtmlCell::_bind_GetFirstChild},
	{"GetHeight", &luna_wrapper_wxHtmlCell::_bind_GetHeight},
	{"GetId", &luna_wrapper_wxHtmlCell::_bind_GetId},
	{"GetLink", &luna_wrapper_wxHtmlCell::_bind_GetLink},
	{"GetNext", &luna_wrapper_wxHtmlCell::_bind_GetNext},
	{"GetParent", &luna_wrapper_wxHtmlCell::_bind_GetParent},
	{"GetPosX", &luna_wrapper_wxHtmlCell::_bind_GetPosX},
	{"GetPosY", &luna_wrapper_wxHtmlCell::_bind_GetPosY},
	{"GetWidth", &luna_wrapper_wxHtmlCell::_bind_GetWidth},
	{"Layout", &luna_wrapper_wxHtmlCell::_bind_Layout},
	{"SetId", &luna_wrapper_wxHtmlCell::_bind_SetId},
	{"SetLink", &luna_wrapper_wxHtmlCell::_bind_SetLink},
	{"SetNext", &luna_wrapper_wxHtmlCell::_bind_SetNext},
	{"SetParent", &luna_wrapper_wxHtmlCell::_bind_SetParent},
	{"SetPos", &luna_wrapper_wxHtmlCell::_bind_SetPos},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlCell::_bind_base_GetClassInfo},
	{"base_AdjustPagebreak", &luna_wrapper_wxHtmlCell::_bind_base_AdjustPagebreak},
	{"base_Draw", &luna_wrapper_wxHtmlCell::_bind_base_Draw},
	{"base_DrawInvisible", &luna_wrapper_wxHtmlCell::_bind_base_DrawInvisible},
	{"base_Find", &luna_wrapper_wxHtmlCell::_bind_base_Find},
	{"base_GetFirstChild", &luna_wrapper_wxHtmlCell::_bind_base_GetFirstChild},
	{"base_GetLink", &luna_wrapper_wxHtmlCell::_bind_base_GetLink},
	{"base_Layout", &luna_wrapper_wxHtmlCell::_bind_base_Layout},
	{"base_SetPos", &luna_wrapper_wxHtmlCell::_bind_base_SetPos},
	{"fromVoid", &luna_wrapper_wxHtmlCell::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlCell::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlCell::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlCell >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlCell::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlCell >::enumValues[] = {
	{0,0}
};


