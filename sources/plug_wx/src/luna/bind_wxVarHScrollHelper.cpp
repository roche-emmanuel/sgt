#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVarHScrollHelper.h>

class luna_wrapper_wxVarHScrollHelper {
public:
	typedef Luna< wxVarHScrollHelper > luna_t;

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

		wxVarHScrollHelper* self= (wxVarHScrollHelper*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxVarHScrollHelper >::push(L,self,false);
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
		//wxVarHScrollHelper* ptr= dynamic_cast< wxVarHScrollHelper* >(Luna< wxVarScrollHelperBase >::check(L,1));
		wxVarHScrollHelper* ptr= luna_caster< wxVarScrollHelperBase, wxVarHScrollHelper >::cast(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVarHScrollHelper >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleColumnsBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisibleColumnsEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsColumnVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshColumns(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollColumnPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollColumns(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollToColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
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

	inline static bool _lg_typecheck_base_RefreshColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RefreshColumns(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollColumnPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollColumns(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxVarHScrollHelper::wxVarHScrollHelper(lua_Table * data, wxWindow * winToScroll)
	static wxVarHScrollHelper* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxVarHScrollHelper::wxVarHScrollHelper(lua_Table * data, wxWindow * winToScroll) function, expected prototype:\nwxVarHScrollHelper::wxVarHScrollHelper(lua_Table * data, wxWindow * winToScroll)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* winToScroll=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		return new wrapper_wxVarHScrollHelper(L,NULL, winToScroll);
	}


	// Function binds:
	// size_t wxVarHScrollHelper::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxVarHScrollHelper::GetColumnCount() const function, expected prototype:\nsize_t wxVarHScrollHelper::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxVarHScrollHelper::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarHScrollHelper::GetVisibleColumnsBegin() const
	static int _bind_GetVisibleColumnsBegin(lua_State *L) {
		if (!_lg_typecheck_GetVisibleColumnsBegin(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxVarHScrollHelper::GetVisibleColumnsBegin() const function, expected prototype:\nsize_t wxVarHScrollHelper::GetVisibleColumnsBegin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxVarHScrollHelper::GetVisibleColumnsBegin() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetVisibleColumnsBegin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxVarHScrollHelper::GetVisibleColumnsEnd() const
	static int _bind_GetVisibleColumnsEnd(lua_State *L) {
		if (!_lg_typecheck_GetVisibleColumnsEnd(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxVarHScrollHelper::GetVisibleColumnsEnd() const function, expected prototype:\nsize_t wxVarHScrollHelper::GetVisibleColumnsEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxVarHScrollHelper::GetVisibleColumnsEnd() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetVisibleColumnsEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxVarHScrollHelper::IsColumnVisible(size_t column) const
	static int _bind_IsColumnVisible(lua_State *L) {
		if (!_lg_typecheck_IsColumnVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::IsColumnVisible(size_t column) const function, expected prototype:\nbool wxVarHScrollHelper::IsColumnVisible(size_t column) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::IsColumnVisible(size_t) const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsColumnVisible(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarHScrollHelper::RefreshColumn(size_t column)
	static int _bind_RefreshColumn(lua_State *L) {
		if (!_lg_typecheck_RefreshColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::RefreshColumn(size_t column) function, expected prototype:\nvoid wxVarHScrollHelper::RefreshColumn(size_t column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::RefreshColumn(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshColumn(column);

		return 0;
	}

	// void wxVarHScrollHelper::RefreshColumns(size_t from, size_t to)
	static int _bind_RefreshColumns(lua_State *L) {
		if (!_lg_typecheck_RefreshColumns(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::RefreshColumns(size_t from, size_t to) function, expected prototype:\nvoid wxVarHScrollHelper::RefreshColumns(size_t from, size_t to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t from=(size_t)lua_tointeger(L,2);
		size_t to=(size_t)lua_tointeger(L,3);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::RefreshColumns(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshColumns(from, to);

		return 0;
	}

	// bool wxVarHScrollHelper::ScrollColumnPages(int pages)
	static int _bind_ScrollColumnPages(lua_State *L) {
		if (!_lg_typecheck_ScrollColumnPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::ScrollColumnPages(int pages) function, expected prototype:\nbool wxVarHScrollHelper::ScrollColumnPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::ScrollColumnPages(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollColumnPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarHScrollHelper::ScrollColumns(int columns)
	static int _bind_ScrollColumns(lua_State *L) {
		if (!_lg_typecheck_ScrollColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::ScrollColumns(int columns) function, expected prototype:\nbool wxVarHScrollHelper::ScrollColumns(int columns)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int columns=(int)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::ScrollColumns(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollColumns(columns);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarHScrollHelper::ScrollToColumn(size_t column)
	static int _bind_ScrollToColumn(lua_State *L) {
		if (!_lg_typecheck_ScrollToColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::ScrollToColumn(size_t column) function, expected prototype:\nbool wxVarHScrollHelper::ScrollToColumn(size_t column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::ScrollToColumn(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollToColumn(column);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxVarHScrollHelper::SetColumnCount(size_t columnCount)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::SetColumnCount(size_t columnCount) function, expected prototype:\nvoid wxVarHScrollHelper::SetColumnCount(size_t columnCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t columnCount=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::SetColumnCount(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnCount(columnCount);

		return 0;
	}

	// wxWindow * wxVarHScrollHelper::base_GetTargetWindow() const
	static int _bind_base_GetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetTargetWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxVarHScrollHelper::base_GetTargetWindow() const function, expected prototype:\nwxWindow * wxVarHScrollHelper::base_GetTargetWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxVarHScrollHelper::base_GetTargetWindow() const. Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxVarHScrollHelper::GetTargetWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxVarHScrollHelper::base_RefreshAll()
	static int _bind_base_RefreshAll(lua_State *L) {
		if (!_lg_typecheck_base_RefreshAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::base_RefreshAll() function, expected prototype:\nvoid wxVarHScrollHelper::base_RefreshAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::base_RefreshAll(). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarHScrollHelper::RefreshAll();

		return 0;
	}

	// void wxVarHScrollHelper::base_SetTargetWindow(wxWindow * target)
	static int _bind_base_SetTargetWindow(lua_State *L) {
		if (!_lg_typecheck_base_SetTargetWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::base_SetTargetWindow(wxWindow * target) function, expected prototype:\nvoid wxVarHScrollHelper::base_SetTargetWindow(wxWindow * target)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* target=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::base_SetTargetWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarHScrollHelper::SetTargetWindow(target);

		return 0;
	}

	// void wxVarHScrollHelper::base_UpdateScrollbar()
	static int _bind_base_UpdateScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_UpdateScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::base_UpdateScrollbar() function, expected prototype:\nvoid wxVarHScrollHelper::base_UpdateScrollbar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::base_UpdateScrollbar(). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarHScrollHelper::UpdateScrollbar();

		return 0;
	}

	// void wxVarHScrollHelper::base_RefreshColumn(size_t column)
	static int _bind_base_RefreshColumn(lua_State *L) {
		if (!_lg_typecheck_base_RefreshColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::base_RefreshColumn(size_t column) function, expected prototype:\nvoid wxVarHScrollHelper::base_RefreshColumn(size_t column)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t column=(size_t)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::base_RefreshColumn(size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarHScrollHelper::RefreshColumn(column);

		return 0;
	}

	// void wxVarHScrollHelper::base_RefreshColumns(size_t from, size_t to)
	static int _bind_base_RefreshColumns(lua_State *L) {
		if (!_lg_typecheck_base_RefreshColumns(L)) {
			luaL_error(L, "luna typecheck failed in void wxVarHScrollHelper::base_RefreshColumns(size_t from, size_t to) function, expected prototype:\nvoid wxVarHScrollHelper::base_RefreshColumns(size_t from, size_t to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t from=(size_t)lua_tointeger(L,2);
		size_t to=(size_t)lua_tointeger(L,3);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxVarHScrollHelper::base_RefreshColumns(size_t, size_t). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxVarHScrollHelper::RefreshColumns(from, to);

		return 0;
	}

	// bool wxVarHScrollHelper::base_ScrollColumnPages(int pages)
	static int _bind_base_ScrollColumnPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollColumnPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::base_ScrollColumnPages(int pages) function, expected prototype:\nbool wxVarHScrollHelper::base_ScrollColumnPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::base_ScrollColumnPages(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxVarHScrollHelper::ScrollColumnPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxVarHScrollHelper::base_ScrollColumns(int columns)
	static int _bind_base_ScrollColumns(lua_State *L) {
		if (!_lg_typecheck_base_ScrollColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxVarHScrollHelper::base_ScrollColumns(int columns) function, expected prototype:\nbool wxVarHScrollHelper::base_ScrollColumns(int columns)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int columns=(int)lua_tointeger(L,2);

		wxVarHScrollHelper* self=Luna< wxVarScrollHelperBase >::checkSubType< wxVarHScrollHelper >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxVarHScrollHelper::base_ScrollColumns(int). Got : '%s'\n%s",typeid(Luna< wxVarScrollHelperBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxVarHScrollHelper::ScrollColumns(columns);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxVarHScrollHelper* LunaTraits< wxVarHScrollHelper >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxVarHScrollHelper::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxVarHScrollHelper::OnGetColumnWidth(size_t column) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
}

void LunaTraits< wxVarHScrollHelper >::_bind_dtor(wxVarHScrollHelper* obj) {
	delete obj;
}

const char LunaTraits< wxVarHScrollHelper >::className[] = "wxVarHScrollHelper";
const char LunaTraits< wxVarHScrollHelper >::fullName[] = "wxVarHScrollHelper";
const char LunaTraits< wxVarHScrollHelper >::moduleName[] = "wx";
const char* LunaTraits< wxVarHScrollHelper >::parents[] = {"wx.wxVarScrollHelperBase", 0};
const int LunaTraits< wxVarHScrollHelper >::hash = 49341946;
const int LunaTraits< wxVarHScrollHelper >::uniqueIDs[] = {94004845,0};

luna_RegType LunaTraits< wxVarHScrollHelper >::methods[] = {
	{"GetColumnCount", &luna_wrapper_wxVarHScrollHelper::_bind_GetColumnCount},
	{"GetVisibleColumnsBegin", &luna_wrapper_wxVarHScrollHelper::_bind_GetVisibleColumnsBegin},
	{"GetVisibleColumnsEnd", &luna_wrapper_wxVarHScrollHelper::_bind_GetVisibleColumnsEnd},
	{"IsColumnVisible", &luna_wrapper_wxVarHScrollHelper::_bind_IsColumnVisible},
	{"RefreshColumn", &luna_wrapper_wxVarHScrollHelper::_bind_RefreshColumn},
	{"RefreshColumns", &luna_wrapper_wxVarHScrollHelper::_bind_RefreshColumns},
	{"ScrollColumnPages", &luna_wrapper_wxVarHScrollHelper::_bind_ScrollColumnPages},
	{"ScrollColumns", &luna_wrapper_wxVarHScrollHelper::_bind_ScrollColumns},
	{"ScrollToColumn", &luna_wrapper_wxVarHScrollHelper::_bind_ScrollToColumn},
	{"SetColumnCount", &luna_wrapper_wxVarHScrollHelper::_bind_SetColumnCount},
	{"base_GetTargetWindow", &luna_wrapper_wxVarHScrollHelper::_bind_base_GetTargetWindow},
	{"base_RefreshAll", &luna_wrapper_wxVarHScrollHelper::_bind_base_RefreshAll},
	{"base_SetTargetWindow", &luna_wrapper_wxVarHScrollHelper::_bind_base_SetTargetWindow},
	{"base_UpdateScrollbar", &luna_wrapper_wxVarHScrollHelper::_bind_base_UpdateScrollbar},
	{"base_RefreshColumn", &luna_wrapper_wxVarHScrollHelper::_bind_base_RefreshColumn},
	{"base_RefreshColumns", &luna_wrapper_wxVarHScrollHelper::_bind_base_RefreshColumns},
	{"base_ScrollColumnPages", &luna_wrapper_wxVarHScrollHelper::_bind_base_ScrollColumnPages},
	{"base_ScrollColumns", &luna_wrapper_wxVarHScrollHelper::_bind_base_ScrollColumns},
	{"fromVoid", &luna_wrapper_wxVarHScrollHelper::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxVarHScrollHelper::_bind_asVoid},
	{"getTable", &luna_wrapper_wxVarHScrollHelper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxVarHScrollHelper >::converters[] = {
	{"wxVarScrollHelperBase", &luna_wrapper_wxVarHScrollHelper::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVarHScrollHelper >::enumValues[] = {
	{0,0}
};


