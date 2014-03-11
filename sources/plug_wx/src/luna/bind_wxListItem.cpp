#include <plug_common.h>

#include <luna/wrappers/wrapper_wxListItem.h>

class luna_wrapper_wxListItem {
public:
	typedef Luna< wxListItem > luna_t;

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

		wxListItem* self= (wxListItem*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxListItem >::push(L,self,false);
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
		//wxListItem* ptr= dynamic_cast< wxListItem* >(Luna< wxObject >::check(L,1));
		wxListItem* ptr= luna_caster< wxObject, wxListItem >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListItem >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlign(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStateMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxListItem::wxListItem()
	static wxListItem* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxListItem::wxListItem() function, expected prototype:\nwxListItem::wxListItem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxListItem();
	}

	// wxListItem::wxListItem(lua_Table * data)
	static wxListItem* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxListItem::wxListItem(lua_Table * data) function, expected prototype:\nwxListItem::wxListItem(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxListItem(L,NULL);
	}

	// Overload binder for wxListItem::wxListItem
	static wxListItem* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxListItem, cannot match any of the overloads for function wxListItem:\n  wxListItem()\n  wxListItem(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxListItem::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::Clear() function, expected prototype:\nvoid wxListItem::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// wxListColumnFormat wxListItem::GetAlign() const
	static int _bind_GetAlign(lua_State *L) {
		if (!_lg_typecheck_GetAlign(L)) {
			luaL_error(L, "luna typecheck failed in wxListColumnFormat wxListItem::GetAlign() const function, expected prototype:\nwxListColumnFormat wxListItem::GetAlign() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxListColumnFormat wxListItem::GetAlign() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxListColumnFormat lret = self->GetAlign();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxListItem::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxListItem::GetBackgroundColour() const function, expected prototype:\nwxColour wxListItem::GetBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxListItem::GetBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxListItem::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxListItem::GetColumn() const function, expected prototype:\nint wxListItem::GetColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListItem::GetColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxListItem::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxListItem::GetData() const function, expected prototype:\nsize_t wxListItem::GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxListItem::GetData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxListItem::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxListItem::GetFont() const function, expected prototype:\nwxFont wxListItem::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxListItem::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// long wxListItem::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luaL_error(L, "luna typecheck failed in long wxListItem::GetId() const function, expected prototype:\nlong wxListItem::GetId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListItem::GetId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListItem::GetImage() const
	static int _bind_GetImage(lua_State *L) {
		if (!_lg_typecheck_GetImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxListItem::GetImage() const function, expected prototype:\nint wxListItem::GetImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListItem::GetImage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetImage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListItem::GetMask() const
	static int _bind_GetMask(lua_State *L) {
		if (!_lg_typecheck_GetMask(L)) {
			luaL_error(L, "luna typecheck failed in long wxListItem::GetMask() const function, expected prototype:\nlong wxListItem::GetMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListItem::GetMask() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListItem::GetState() const
	static int _bind_GetState(lua_State *L) {
		if (!_lg_typecheck_GetState(L)) {
			luaL_error(L, "luna typecheck failed in long wxListItem::GetState() const function, expected prototype:\nlong wxListItem::GetState() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListItem::GetState() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetState();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxListItem::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxListItem::GetText() const function, expected prototype:\nconst wxString & wxListItem::GetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxListItem::GetText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxListItem::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxListItem::GetTextColour() const function, expected prototype:\nwxColour wxListItem::GetTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxListItem::GetTextColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxListItem::GetWidth() const
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxListItem::GetWidth() const function, expected prototype:\nint wxListItem::GetWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListItem::GetWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxListItem::SetAlign(wxListColumnFormat align)
	static int _bind_SetAlign(lua_State *L) {
		if (!_lg_typecheck_SetAlign(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetAlign(wxListColumnFormat align) function, expected prototype:\nvoid wxListItem::SetAlign(wxListColumnFormat align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxListColumnFormat align=(wxListColumnFormat)lua_tointeger(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetAlign(wxListColumnFormat). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlign(align);

		return 0;
	}

	// void wxListItem::SetBackgroundColour(const wxColour & colBack)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetBackgroundColour(const wxColour & colBack) function, expected prototype:\nvoid wxListItem::SetBackgroundColour(const wxColour & colBack)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colBack_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colBack_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colBack in wxListItem::SetBackgroundColour function");
		}
		const wxColour & colBack=*colBack_ptr;

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBackgroundColour(colBack);

		return 0;
	}

	// void wxListItem::SetColumn(int col)
	static int _bind_SetColumn(lua_State *L) {
		if (!_lg_typecheck_SetColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetColumn(int col) function, expected prototype:\nvoid wxListItem::SetColumn(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetColumn(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumn(col);

		return 0;
	}

	// void wxListItem::SetData(long data)
	static int _bind_SetData_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetData(long data) function, expected prototype:\nvoid wxListItem::SetData(long data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long data=(long)lua_tonumber(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetData(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetData(data);

		return 0;
	}

	// void wxListItem::SetData(void * data)
	static int _bind_SetData_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetData(void * data) function, expected prototype:\nvoid wxListItem::SetData(void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* data=(Luna< void >::check(L,2));

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetData(void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetData(data);

		return 0;
	}

	// Overload binder for wxListItem::SetData
	static int _bind_SetData(lua_State *L) {
		if (_lg_typecheck_SetData_overload_1(L)) return _bind_SetData_overload_1(L);
		if (_lg_typecheck_SetData_overload_2(L)) return _bind_SetData_overload_2(L);

		luaL_error(L, "error in function SetData, cannot match any of the overloads for function SetData:\n  SetData(long)\n  SetData(void *)\n");
		return 0;
	}

	// void wxListItem::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetFont(const wxFont & font) function, expected prototype:\nvoid wxListItem::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListItem::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// void wxListItem::SetId(long id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetId(long id) function, expected prototype:\nvoid wxListItem::SetId(long id)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long id=(long)lua_tonumber(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetId(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetId(id);

		return 0;
	}

	// void wxListItem::SetImage(int image)
	static int _bind_SetImage(lua_State *L) {
		if (!_lg_typecheck_SetImage(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetImage(int image) function, expected prototype:\nvoid wxListItem::SetImage(int image)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int image=(int)lua_tointeger(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetImage(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetImage(image);

		return 0;
	}

	// void wxListItem::SetMask(long mask)
	static int _bind_SetMask(lua_State *L) {
		if (!_lg_typecheck_SetMask(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetMask(long mask) function, expected prototype:\nvoid wxListItem::SetMask(long mask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long mask=(long)lua_tonumber(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetMask(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMask(mask);

		return 0;
	}

	// void wxListItem::SetState(long state)
	static int _bind_SetState(lua_State *L) {
		if (!_lg_typecheck_SetState(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetState(long state) function, expected prototype:\nvoid wxListItem::SetState(long state)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long state=(long)lua_tonumber(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetState(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetState(state);

		return 0;
	}

	// void wxListItem::SetStateMask(long stateMask)
	static int _bind_SetStateMask(lua_State *L) {
		if (!_lg_typecheck_SetStateMask(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetStateMask(long stateMask) function, expected prototype:\nvoid wxListItem::SetStateMask(long stateMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long stateMask=(long)lua_tonumber(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetStateMask(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStateMask(stateMask);

		return 0;
	}

	// void wxListItem::SetText(const wxString & text)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetText(const wxString & text) function, expected prototype:\nvoid wxListItem::SetText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetText(text);

		return 0;
	}

	// void wxListItem::SetTextColour(const wxColour & colText)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetTextColour(const wxColour & colText) function, expected prototype:\nvoid wxListItem::SetTextColour(const wxColour & colText)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colText_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colText_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colText in wxListItem::SetTextColour function");
		}
		const wxColour & colText=*colText_ptr;

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(colText);

		return 0;
	}

	// void wxListItem::SetWidth(int width)
	static int _bind_SetWidth(lua_State *L) {
		if (!_lg_typecheck_SetWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxListItem::SetWidth(int width) function, expected prototype:\nvoid wxListItem::SetWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListItem::SetWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWidth(width);

		return 0;
	}

	// wxClassInfo * wxListItem::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxListItem::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxListItem::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListItem* self=Luna< wxObject >::checkSubType< wxListItem >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxListItem::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxListItem::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxListItem* LunaTraits< wxListItem >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxListItem::_bind_ctor(L);
}

void LunaTraits< wxListItem >::_bind_dtor(wxListItem* obj) {
	delete obj;
}

const char LunaTraits< wxListItem >::className[] = "wxListItem";
const char LunaTraits< wxListItem >::fullName[] = "wxListItem";
const char LunaTraits< wxListItem >::moduleName[] = "wx";
const char* LunaTraits< wxListItem >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxListItem >::hash = 43327645;
const int LunaTraits< wxListItem >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxListItem >::methods[] = {
	{"Clear", &luna_wrapper_wxListItem::_bind_Clear},
	{"GetAlign", &luna_wrapper_wxListItem::_bind_GetAlign},
	{"GetBackgroundColour", &luna_wrapper_wxListItem::_bind_GetBackgroundColour},
	{"GetColumn", &luna_wrapper_wxListItem::_bind_GetColumn},
	{"GetData", &luna_wrapper_wxListItem::_bind_GetData},
	{"GetFont", &luna_wrapper_wxListItem::_bind_GetFont},
	{"GetId", &luna_wrapper_wxListItem::_bind_GetId},
	{"GetImage", &luna_wrapper_wxListItem::_bind_GetImage},
	{"GetMask", &luna_wrapper_wxListItem::_bind_GetMask},
	{"GetState", &luna_wrapper_wxListItem::_bind_GetState},
	{"GetText", &luna_wrapper_wxListItem::_bind_GetText},
	{"GetTextColour", &luna_wrapper_wxListItem::_bind_GetTextColour},
	{"GetWidth", &luna_wrapper_wxListItem::_bind_GetWidth},
	{"SetAlign", &luna_wrapper_wxListItem::_bind_SetAlign},
	{"SetBackgroundColour", &luna_wrapper_wxListItem::_bind_SetBackgroundColour},
	{"SetColumn", &luna_wrapper_wxListItem::_bind_SetColumn},
	{"SetData", &luna_wrapper_wxListItem::_bind_SetData},
	{"SetFont", &luna_wrapper_wxListItem::_bind_SetFont},
	{"SetId", &luna_wrapper_wxListItem::_bind_SetId},
	{"SetImage", &luna_wrapper_wxListItem::_bind_SetImage},
	{"SetMask", &luna_wrapper_wxListItem::_bind_SetMask},
	{"SetState", &luna_wrapper_wxListItem::_bind_SetState},
	{"SetStateMask", &luna_wrapper_wxListItem::_bind_SetStateMask},
	{"SetText", &luna_wrapper_wxListItem::_bind_SetText},
	{"SetTextColour", &luna_wrapper_wxListItem::_bind_SetTextColour},
	{"SetWidth", &luna_wrapper_wxListItem::_bind_SetWidth},
	{"base_GetClassInfo", &luna_wrapper_wxListItem::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxListItem::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxListItem::_bind_asVoid},
	{"getTable", &luna_wrapper_wxListItem::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxListItem >::converters[] = {
	{"wxObject", &luna_wrapper_wxListItem::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListItem >::enumValues[] = {
	{0,0}
};


