#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVarVScrollHelper.h>

class luna_wrapper_wxVarVScrollHelper {
public:
	typedef Luna< wxVarVScrollHelper > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxVarScrollHelperBase* self=(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxVarScrollHelperBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxVarVScrollHelper* self= (wxVarVScrollHelper*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxVarVScrollHelper >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,94004845) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxVarVScrollHelper* ptr= dynamic_cast< wxVarVScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		wxVarVScrollHelper* ptr= luna_caster< wxVarScrollHelperBase, wxVarVScrollHelper >::cast(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVarVScrollHelper >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetRowCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleRowsBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleRowsEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRowVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshRows(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollRowPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollToRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTargetWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RefreshAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetTargetWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UpdateScrollbar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RefreshRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RefreshRows(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollRowPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollRows(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxVarVScrollHelper::wxVarVScrollHelper(lua_Table * data, wxWindow * winToScroll)
	static wxVarVScrollHelper* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxVarVScrollHelper::wxVarVScrollHelper(lua_Table * data, wxWindow * winToScroll) function, expected prototype:\nwxVarVScrollHelper::wxVarVScrollHelper(lua_Table * data, wxWindow * winToScroll)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* winToScroll=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		return new wrapper_wxVarVScrollHelper(L,NULL, winToScroll);
	}


	// Function binds:
	// size_t wxVarVScrollHelper::GetRowCount() const
	static int _bind_GetRowCount(lua_State *L) {
		if (!_lg_typecheck_GetRowCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxVarVScrollHelper::GetRowCount() const function, expected prototype:\nsize_t wxVarVScrollHelper::GetRowCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxVarVScrollHelper::GetRowCount() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetRowCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarVScrollHelper::GetVisibleRowsBegin() const
	static int _bind_GetVisibleRowsBegin(lua_State *L) {
		if (!_lg_typecheck_GetVisibleRowsBegin(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxVarVScrollHelper::GetVisibleRowsBegin() const function, expected prototype:\nsize_t wxVarVScrollHelper::GetVisibleRowsBegin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxVarVScrollHelper::GetVisibleRowsBegin() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetVisibleRowsBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarVScrollHelper::GetVisibleRowsEnd() const
	static int _bind_GetVisibleRowsEnd(lua_State *L) {
		if (!_lg_typecheck_GetVisibleRowsEnd(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxVarVScrollHelper::GetVisibleRowsEnd() const function, expected prototype:\nsize_t wxVarVScrollHelper::GetVisibleRowsEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxVarVScrollHelper::GetVisibleRowsEnd() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetVisibleRowsEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxVarVScrollHelper::IsRowVisible(size_t row) const
	static int _bind_IsRowVisible(lua_State *L) {
		if (!_lg_typecheck_IsRowVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::IsRowVisible(size_t row) const function, expected prototype:\nbool wxVarVScrollHelper::IsRowVisible(size_t row) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::IsRowVisible(size_t) const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRowVisible(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarVScrollHelper::RefreshRow(size_t row)
	static int _bind_RefreshRow(lua_State *L) {
		if (!_lg_typecheck_RefreshRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::RefreshRow(size_t row) function, expected prototype:\nvoid wxVarVScrollHelper::RefreshRow(size_t row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::RefreshRow(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshRow(row);

		return 0;
	}

	// void wxVarVScrollHelper::RefreshRows(size_t from, size_t to)
	static int _bind_RefreshRows(lua_State *L) {
		if (!_lg_typecheck_RefreshRows(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::RefreshRows(size_t from, size_t to) function, expected prototype:\nvoid wxVarVScrollHelper::RefreshRows(size_t from, size_t to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t from=(size_t)lua_tointeger(L,2);
		size_t to=(size_t)lua_tointeger(L,3);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::RefreshRows(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshRows(from, to);

		return 0;
	}

	// bool wxVarVScrollHelper::ScrollRowPages(int pages)
	static int _bind_ScrollRowPages(lua_State *L) {
		if (!_lg_typecheck_ScrollRowPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::ScrollRowPages(int pages) function, expected prototype:\nbool wxVarVScrollHelper::ScrollRowPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::ScrollRowPages(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollRowPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarVScrollHelper::ScrollRows(int rows)
	static int _bind_ScrollRows(lua_State *L) {
		if (!_lg_typecheck_ScrollRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::ScrollRows(int rows) function, expected prototype:\nbool wxVarVScrollHelper::ScrollRows(int rows)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::ScrollRows(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollRows(rows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarVScrollHelper::ScrollToRow(size_t row)
	static int _bind_ScrollToRow(lua_State *L) {
		if (!_lg_typecheck_ScrollToRow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::ScrollToRow(size_t row) function, expected prototype:\nbool wxVarVScrollHelper::ScrollToRow(size_t row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::ScrollToRow(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollToRow(row);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarVScrollHelper::SetRowCount(size_t rowCount)
	static int _bind_SetRowCount(lua_State *L) {
		if (!_lg_typecheck_SetRowCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::SetRowCount(size_t rowCount) function, expected prototype:\nvoid wxVarVScrollHelper::SetRowCount(size_t rowCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t rowCount=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::SetRowCount(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowCount(rowCount);

		return 0;
	}

	// wxWindow * wxVarVScrollHelper::base_GetTargetWindow() const
	static int _bind_base_GetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetTargetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxVarVScrollHelper::base_GetTargetWindow() const function, expected prototype:\nwxWindow * wxVarVScrollHelper::base_GetTargetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxVarVScrollHelper::base_GetTargetWindow() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxVarVScrollHelper::GetTargetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxVarVScrollHelper::base_RefreshAll()
	static int _bind_base_RefreshAll(lua_State *L) {
		if (!_lg_typecheck_base_RefreshAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::base_RefreshAll() function, expected prototype:\nvoid wxVarVScrollHelper::base_RefreshAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::base_RefreshAll(). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarVScrollHelper::RefreshAll();

		return 0;
	}

	// void wxVarVScrollHelper::base_SetTargetWindow(wxWindow * target)
	static int _bind_base_SetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_base_SetTargetWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::base_SetTargetWindow(wxWindow * target) function, expected prototype:\nvoid wxVarVScrollHelper::base_SetTargetWindow(wxWindow * target)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* target=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::base_SetTargetWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarVScrollHelper::SetTargetWindow(target);

		return 0;
	}

	// void wxVarVScrollHelper::base_UpdateScrollbar()
	static int _bind_base_UpdateScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_UpdateScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::base_UpdateScrollbar() function, expected prototype:\nvoid wxVarVScrollHelper::base_UpdateScrollbar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::base_UpdateScrollbar(). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarVScrollHelper::UpdateScrollbar();

		return 0;
	}

	// void wxVarVScrollHelper::base_RefreshRow(size_t row)
	static int _bind_base_RefreshRow(lua_State *L) {
		if (!_lg_typecheck_base_RefreshRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::base_RefreshRow(size_t row) function, expected prototype:\nvoid wxVarVScrollHelper::base_RefreshRow(size_t row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t row=(size_t)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::base_RefreshRow(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarVScrollHelper::RefreshRow(row);

		return 0;
	}

	// void wxVarVScrollHelper::base_RefreshRows(size_t from, size_t to)
	static int _bind_base_RefreshRows(lua_State *L) {
		if (!_lg_typecheck_base_RefreshRows(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarVScrollHelper::base_RefreshRows(size_t from, size_t to) function, expected prototype:\nvoid wxVarVScrollHelper::base_RefreshRows(size_t from, size_t to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t from=(size_t)lua_tointeger(L,2);
		size_t to=(size_t)lua_tointeger(L,3);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarVScrollHelper::base_RefreshRows(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarVScrollHelper::RefreshRows(from, to);

		return 0;
	}

	// bool wxVarVScrollHelper::base_ScrollRowPages(int pages)
	static int _bind_base_ScrollRowPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollRowPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::base_ScrollRowPages(int pages) function, expected prototype:\nbool wxVarVScrollHelper::base_ScrollRowPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::base_ScrollRowPages(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxVarVScrollHelper::ScrollRowPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarVScrollHelper::base_ScrollRows(int rows)
	static int _bind_base_ScrollRows(lua_State *L) {
		if (!_lg_typecheck_base_ScrollRows(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarVScrollHelper::base_ScrollRows(int rows) function, expected prototype:\nbool wxVarVScrollHelper::base_ScrollRows(int rows)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rows=(int)lua_tointeger(L,2);

		wxVarVScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarVScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarVScrollHelper::base_ScrollRows(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxVarVScrollHelper::ScrollRows(rows);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxVarVScrollHelper* LunaTraits< wxVarVScrollHelper >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxVarVScrollHelper::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
}

void LunaTraits< wxVarVScrollHelper >::_bind_dtor(wxVarVScrollHelper* obj) {
	delete obj;
}

const char LunaTraits< wxVarVScrollHelper >::className[] = "wxVarVScrollHelper";
const char LunaTraits< wxVarVScrollHelper >::fullName[] = "wxVarVScrollHelper";
const char LunaTraits< wxVarVScrollHelper >::moduleName[] = "wx";
const char* LunaTraits< wxVarVScrollHelper >::parents[] = {"wx.wxVarScrollHelperBase", 0};
const int LunaTraits< wxVarVScrollHelper >::hash = 49888195;
const int LunaTraits< wxVarVScrollHelper >::uniqueIDs[] = {94004845,0};

luna_RegType LunaTraits< wxVarVScrollHelper >::methods[] = {
	{"GetRowCount", &luna_wrapper_wxVarVScrollHelper::_bind_GetRowCount},
	{"GetVisibleRowsBegin", &luna_wrapper_wxVarVScrollHelper::_bind_GetVisibleRowsBegin},
	{"GetVisibleRowsEnd", &luna_wrapper_wxVarVScrollHelper::_bind_GetVisibleRowsEnd},
	{"IsRowVisible", &luna_wrapper_wxVarVScrollHelper::_bind_IsRowVisible},
	{"RefreshRow", &luna_wrapper_wxVarVScrollHelper::_bind_RefreshRow},
	{"RefreshRows", &luna_wrapper_wxVarVScrollHelper::_bind_RefreshRows},
	{"ScrollRowPages", &luna_wrapper_wxVarVScrollHelper::_bind_ScrollRowPages},
	{"ScrollRows", &luna_wrapper_wxVarVScrollHelper::_bind_ScrollRows},
	{"ScrollToRow", &luna_wrapper_wxVarVScrollHelper::_bind_ScrollToRow},
	{"SetRowCount", &luna_wrapper_wxVarVScrollHelper::_bind_SetRowCount},
	{"base_GetTargetWindow", &luna_wrapper_wxVarVScrollHelper::_bind_base_GetTargetWindow},
	{"base_RefreshAll", &luna_wrapper_wxVarVScrollHelper::_bind_base_RefreshAll},
	{"base_SetTargetWindow", &luna_wrapper_wxVarVScrollHelper::_bind_base_SetTargetWindow},
	{"base_UpdateScrollbar", &luna_wrapper_wxVarVScrollHelper::_bind_base_UpdateScrollbar},
	{"base_RefreshRow", &luna_wrapper_wxVarVScrollHelper::_bind_base_RefreshRow},
	{"base_RefreshRows", &luna_wrapper_wxVarVScrollHelper::_bind_base_RefreshRows},
	{"base_ScrollRowPages", &luna_wrapper_wxVarVScrollHelper::_bind_base_ScrollRowPages},
	{"base_ScrollRows", &luna_wrapper_wxVarVScrollHelper::_bind_base_ScrollRows},
	{"fromVoid", &luna_wrapper_wxVarVScrollHelper::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxVarVScrollHelper::_bind_asVoid},
	{"getTable", &luna_wrapper_wxVarVScrollHelper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxVarVScrollHelper >::converters[] = {
	{"wxVarScrollHelperBase", &luna_wrapper_wxVarVScrollHelper::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVarVScrollHelper >::enumValues[] = {
	{0,0}
};


