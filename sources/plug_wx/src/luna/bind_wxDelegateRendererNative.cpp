#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDelegateRendererNative.h>

class luna_wrapper_wxDelegateRendererNative {
public:
	typedef Luna< wxDelegateRendererNative > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRendererNative* self=(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxRendererNative,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxDelegateRendererNative* self= (wxDelegateRendererNative*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDelegateRendererNative >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18398493) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRendererNative >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxRendererNative(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxDelegateRendererNative* ptr= dynamic_cast< wxDelegateRendererNative* >(Luna< wxRendererNative >::check(L,1));
		wxDelegateRendererNative* ptr= luna_caster< wxRendererNative, wxDelegateRendererNative >::cast(Luna< wxRendererNative >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDelegateRendererNative >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18398493) ) return false;
		if( (!(Luna< wxRendererNative >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_DrawHeaderButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,67488995)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawHeaderButtonContents(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,67488995)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeaderButtonHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeaderButtonMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTreeItemButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSplitterBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSplitterSash(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawComboBoxDropButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawDropArrow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawCheckBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckBoxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPushButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawItemSelectionRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawFocusRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSplitterParams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DrawHeaderButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,67488995)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawHeaderButtonContents(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,67488995)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHeaderButtonHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHeaderButtonMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawTreeItemButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawSplitterBorder(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawSplitterSash(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawComboBoxDropButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawDropArrow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawCheckBox(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCheckBoxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawPushButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawItemSelectionRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawFocusRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSplitterParams(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetVersion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDelegateRendererNative::wxDelegateRendererNative(lua_Table * data)
	static wxDelegateRendererNative* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDelegateRendererNative::wxDelegateRendererNative(lua_Table * data) function, expected prototype:\nwxDelegateRendererNative::wxDelegateRendererNative(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDelegateRendererNative(L,NULL);
	}

	// wxDelegateRendererNative::wxDelegateRendererNative(lua_Table * data, wxRendererNative & rendererNative)
	static wxDelegateRendererNative* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDelegateRendererNative::wxDelegateRendererNative(lua_Table * data, wxRendererNative & rendererNative) function, expected prototype:\nwxDelegateRendererNative::wxDelegateRendererNative(lua_Table * data, wxRendererNative & rendererNative)\nClass arguments details:\narg 2 ID = 18398493\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRendererNative* rendererNative_ptr=(Luna< wxRendererNative >::check(L,2));
		if( !rendererNative_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rendererNative in wxDelegateRendererNative::wxDelegateRendererNative function");
		}
		wxRendererNative & rendererNative=*rendererNative_ptr;

		return new wrapper_wxDelegateRendererNative(L,NULL, rendererNative);
	}

	// Overload binder for wxDelegateRendererNative::wxDelegateRendererNative
	static wxDelegateRendererNative* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDelegateRendererNative, cannot match any of the overloads for function wxDelegateRendererNative:\n  wxDelegateRendererNative(lua_Table *)\n  wxDelegateRendererNative(lua_Table *, wxRendererNative &)\n");
		return NULL;
	}


	// Function binds:
	// int wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_DrawHeaderButton(lua_State *L) {
		if (!_lg_typecheck_DrawHeaderButton(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawHeaderButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawHeaderButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : (wxHeaderSortIconType)::wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::DrawHeaderButton(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DrawHeaderButton(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_DrawHeaderButtonContents(lua_State *L) {
		if (!_lg_typecheck_DrawHeaderButtonContents(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawHeaderButtonContents function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawHeaderButtonContents function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : (wxHeaderSortIconType)::wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DrawHeaderButtonContents(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win)
	static int _bind_GetHeaderButtonHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeaderButtonHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win) function, expected prototype:\nint wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeaderButtonHeight(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win)
	static int _bind_GetHeaderButtonMargin(lua_State *L) {
		if (!_lg_typecheck_GetHeaderButtonMargin(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win) function, expected prototype:\nint wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeaderButtonMargin(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawTreeItemButton(lua_State *L) {
		if (!_lg_typecheck_DrawTreeItemButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawTreeItemButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawTreeItemButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawTreeItemButton(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawTreeItemButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawSplitterBorder(lua_State *L) {
		if (!_lg_typecheck_DrawSplitterBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawSplitterBorder function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawSplitterBorder function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawSplitterBorder(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSplitterBorder(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	static int _bind_DrawSplitterSash(lua_State *L) {
		if (!_lg_typecheck_DrawSplitterSash(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawSplitterSash function");
		}
		wxDC & dc=*dc_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDelegateRendererNative::DrawSplitterSash function");
		}
		const wxSize & size=*size_ptr;
		int position=(int)lua_tointeger(L,5);
		wxOrientation orient=(wxOrientation)lua_tointeger(L,6);
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawSplitterSash(wxWindow *, wxDC &, const wxSize &, int, wxOrientation, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSplitterSash(win, dc, size, position, orient, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawComboBoxDropButton(lua_State *L) {
		if (!_lg_typecheck_DrawComboBoxDropButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawComboBoxDropButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawComboBoxDropButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawComboBoxDropButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawDropArrow(lua_State *L) {
		if (!_lg_typecheck_DrawDropArrow(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawDropArrow function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawDropArrow function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawDropArrow(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawDropArrow(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawCheckBox(lua_State *L) {
		if (!_lg_typecheck_DrawCheckBox(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawCheckBox function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawCheckBox function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawCheckBox(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawCheckBox(win, dc, rect, flags);

		return 0;
	}

	// wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win)
	static int _bind_GetCheckBoxSize(lua_State *L) {
		if (!_lg_typecheck_GetCheckBoxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win) function, expected prototype:\nwxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetCheckBoxSize(win);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawPushButton(lua_State *L) {
		if (!_lg_typecheck_DrawPushButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawPushButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawPushButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawPushButton(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawPushButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawItemSelectionRect(lua_State *L) {
		if (!_lg_typecheck_DrawItemSelectionRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawItemSelectionRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawItemSelectionRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawItemSelectionRect(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_DrawFocusRect(lua_State *L) {
		if (!_lg_typecheck_DrawFocusRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::DrawFocusRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::DrawFocusRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::DrawFocusRect(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawFocusRect(win, dc, rect, flags);

		return 0;
	}

	// wxSplitterRenderParams wxDelegateRendererNative::GetSplitterParams(const wxWindow * win)
	static int _bind_GetSplitterParams(lua_State *L) {
		if (!_lg_typecheck_GetSplitterParams(L)) {
			luaL_error(L, "luna typecheck failed in wxSplitterRenderParams wxDelegateRendererNative::GetSplitterParams(const wxWindow * win) function, expected prototype:\nwxSplitterRenderParams wxDelegateRendererNative::GetSplitterParams(const wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSplitterRenderParams wxDelegateRendererNative::GetSplitterParams(const wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSplitterRenderParams stack_lret = self->GetSplitterParams(win);
		wxSplitterRenderParams* lret = new wxSplitterRenderParams(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSplitterRenderParams >::push(L,lret,true);

		return 1;
	}

	// wxRendererVersion wxDelegateRendererNative::GetVersion() const
	static int _bind_GetVersion(lua_State *L) {
		if (!_lg_typecheck_GetVersion(L)) {
			luaL_error(L, "luna typecheck failed in wxRendererVersion wxDelegateRendererNative::GetVersion() const function, expected prototype:\nwxRendererVersion wxDelegateRendererNative::GetVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRendererVersion wxDelegateRendererNative::GetVersion() const. Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRendererVersion stack_lret = self->GetVersion();
		wxRendererVersion* lret = new wxRendererVersion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererVersion >::push(L,lret,true);

		return 1;
	}

	// int wxDelegateRendererNative::base_DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_base_DrawHeaderButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawHeaderButton(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::base_DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxDelegateRendererNative::base_DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawHeaderButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawHeaderButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : (wxHeaderSortIconType)::wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::base_DrawHeaderButton(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDelegateRendererNative::DrawHeaderButton(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::base_DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	static int _bind_base_DrawHeaderButtonContents(lua_State *L) {
		if (!_lg_typecheck_base_DrawHeaderButtonContents(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::base_DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) function, expected prototype:\nint wxDelegateRendererNative::base_DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\narg 6 ID = 67488995\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawHeaderButtonContents function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawHeaderButtonContents function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		wxHeaderSortIconType sortArrow=luatop>5 ? (wxHeaderSortIconType)lua_tointeger(L,6) : (wxHeaderSortIconType)::wxHDR_SORT_ICON_NONE;
		wxHeaderButtonParams* params=luatop>6 ? (Luna< wxHeaderButtonParams >::check(L,7)) : (wxHeaderButtonParams*)NULL;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::base_DrawHeaderButtonContents(wxWindow *, wxDC &, const wxRect &, int, wxHeaderSortIconType, wxHeaderButtonParams *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDelegateRendererNative::DrawHeaderButtonContents(win, dc, rect, flags, sortArrow, params);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::base_GetHeaderButtonHeight(wxWindow * win)
	static int _bind_base_GetHeaderButtonHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeaderButtonHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::base_GetHeaderButtonHeight(wxWindow * win) function, expected prototype:\nint wxDelegateRendererNative::base_GetHeaderButtonHeight(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::base_GetHeaderButtonHeight(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDelegateRendererNative::GetHeaderButtonHeight(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxDelegateRendererNative::base_GetHeaderButtonMargin(wxWindow * win)
	static int _bind_base_GetHeaderButtonMargin(lua_State *L) {
		if (!_lg_typecheck_base_GetHeaderButtonMargin(L)) {
			luaL_error(L, "luna typecheck failed in int wxDelegateRendererNative::base_GetHeaderButtonMargin(wxWindow * win) function, expected prototype:\nint wxDelegateRendererNative::base_GetHeaderButtonMargin(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDelegateRendererNative::base_GetHeaderButtonMargin(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDelegateRendererNative::GetHeaderButtonMargin(win);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDelegateRendererNative::base_DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawTreeItemButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawTreeItemButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawTreeItemButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawTreeItemButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawTreeItemButton(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawTreeItemButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawSplitterBorder(lua_State *L) {
		if (!_lg_typecheck_base_DrawSplitterBorder(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawSplitterBorder function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawSplitterBorder function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawSplitterBorder(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawSplitterBorder(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	static int _bind_base_DrawSplitterSash(lua_State *L) {
		if (!_lg_typecheck_base_DrawSplitterSash(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawSplitterSash function");
		}
		wxDC & dc=*dc_ptr;
		const wxSize* size_ptr=(Luna< wxSize >::check(L,4));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxDelegateRendererNative::base_DrawSplitterSash function");
		}
		const wxSize & size=*size_ptr;
		int position=(int)lua_tointeger(L,5);
		wxOrientation orient=(wxOrientation)lua_tointeger(L,6);
		int flags=luatop>6 ? (int)lua_tointeger(L,7) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawSplitterSash(wxWindow *, wxDC &, const wxSize &, int, wxOrientation, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawSplitterSash(win, dc, size, position, orient, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawComboBoxDropButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawComboBoxDropButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawComboBoxDropButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawComboBoxDropButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawComboBoxDropButton(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawComboBoxDropButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawDropArrow(lua_State *L) {
		if (!_lg_typecheck_base_DrawDropArrow(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawDropArrow function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawDropArrow function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawDropArrow(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawDropArrow(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawCheckBox(lua_State *L) {
		if (!_lg_typecheck_base_DrawCheckBox(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawCheckBox function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawCheckBox function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawCheckBox(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawCheckBox(win, dc, rect, flags);

		return 0;
	}

	// wxSize wxDelegateRendererNative::base_GetCheckBoxSize(wxWindow * win)
	static int _bind_base_GetCheckBoxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetCheckBoxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDelegateRendererNative::base_GetCheckBoxSize(wxWindow * win) function, expected prototype:\nwxSize wxDelegateRendererNative::base_GetCheckBoxSize(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDelegateRendererNative::base_GetCheckBoxSize(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxDelegateRendererNative::GetCheckBoxSize(win);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxDelegateRendererNative::base_DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawPushButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawPushButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawPushButton function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawPushButton function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawPushButton(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawPushButton(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawItemSelectionRect(lua_State *L) {
		if (!_lg_typecheck_base_DrawItemSelectionRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawItemSelectionRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawItemSelectionRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawItemSelectionRect(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawItemSelectionRect(win, dc, rect, flags);

		return 0;
	}

	// void wxDelegateRendererNative::base_DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	static int _bind_base_DrawFocusRect(lua_State *L) {
		if (!_lg_typecheck_base_DrawFocusRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxDelegateRendererNative::base_DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) function, expected prototype:\nvoid wxDelegateRendererNative::base_DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDelegateRendererNative::base_DrawFocusRect function");
		}
		wxDC & dc=*dc_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxDelegateRendererNative::base_DrawFocusRect function");
		}
		const wxRect & rect=*rect_ptr;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDelegateRendererNative::base_DrawFocusRect(wxWindow *, wxDC &, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDelegateRendererNative::DrawFocusRect(win, dc, rect, flags);

		return 0;
	}

	// wxSplitterRenderParams wxDelegateRendererNative::base_GetSplitterParams(const wxWindow * win)
	static int _bind_base_GetSplitterParams(lua_State *L) {
		if (!_lg_typecheck_base_GetSplitterParams(L)) {
			luaL_error(L, "luna typecheck failed in wxSplitterRenderParams wxDelegateRendererNative::base_GetSplitterParams(const wxWindow * win) function, expected prototype:\nwxSplitterRenderParams wxDelegateRendererNative::base_GetSplitterParams(const wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSplitterRenderParams wxDelegateRendererNative::base_GetSplitterParams(const wxWindow *). Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSplitterRenderParams stack_lret = self->wxDelegateRendererNative::GetSplitterParams(win);
		wxSplitterRenderParams* lret = new wxSplitterRenderParams(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSplitterRenderParams >::push(L,lret,true);

		return 1;
	}

	// wxRendererVersion wxDelegateRendererNative::base_GetVersion() const
	static int _bind_base_GetVersion(lua_State *L) {
		if (!_lg_typecheck_base_GetVersion(L)) {
			luaL_error(L, "luna typecheck failed in wxRendererVersion wxDelegateRendererNative::base_GetVersion() const function, expected prototype:\nwxRendererVersion wxDelegateRendererNative::base_GetVersion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDelegateRendererNative* self=Luna< wxRendererNative >::checkSubType< wxDelegateRendererNative >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRendererVersion wxDelegateRendererNative::base_GetVersion() const. Got : '%s'\n%s",typeid(Luna< wxRendererNative >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRendererVersion stack_lret = self->wxDelegateRendererNative::GetVersion();
		wxRendererVersion* lret = new wxRendererVersion(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRendererVersion >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxDelegateRendererNative* LunaTraits< wxDelegateRendererNative >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDelegateRendererNative::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	// void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)
}

void LunaTraits< wxDelegateRendererNative >::_bind_dtor(wxDelegateRendererNative* obj) {
	delete obj;
}

const char LunaTraits< wxDelegateRendererNative >::className[] = "wxDelegateRendererNative";
const char LunaTraits< wxDelegateRendererNative >::fullName[] = "wxDelegateRendererNative";
const char LunaTraits< wxDelegateRendererNative >::moduleName[] = "wx";
const char* LunaTraits< wxDelegateRendererNative >::parents[] = {"wx.wxRendererNative", 0};
const int LunaTraits< wxDelegateRendererNative >::hash = 10273346;
const int LunaTraits< wxDelegateRendererNative >::uniqueIDs[] = {18398493,0};

luna_RegType LunaTraits< wxDelegateRendererNative >::methods[] = {
	{"DrawHeaderButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawHeaderButton},
	{"DrawHeaderButtonContents", &luna_wrapper_wxDelegateRendererNative::_bind_DrawHeaderButtonContents},
	{"GetHeaderButtonHeight", &luna_wrapper_wxDelegateRendererNative::_bind_GetHeaderButtonHeight},
	{"GetHeaderButtonMargin", &luna_wrapper_wxDelegateRendererNative::_bind_GetHeaderButtonMargin},
	{"DrawTreeItemButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawTreeItemButton},
	{"DrawSplitterBorder", &luna_wrapper_wxDelegateRendererNative::_bind_DrawSplitterBorder},
	{"DrawSplitterSash", &luna_wrapper_wxDelegateRendererNative::_bind_DrawSplitterSash},
	{"DrawComboBoxDropButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawComboBoxDropButton},
	{"DrawDropArrow", &luna_wrapper_wxDelegateRendererNative::_bind_DrawDropArrow},
	{"DrawCheckBox", &luna_wrapper_wxDelegateRendererNative::_bind_DrawCheckBox},
	{"GetCheckBoxSize", &luna_wrapper_wxDelegateRendererNative::_bind_GetCheckBoxSize},
	{"DrawPushButton", &luna_wrapper_wxDelegateRendererNative::_bind_DrawPushButton},
	{"DrawItemSelectionRect", &luna_wrapper_wxDelegateRendererNative::_bind_DrawItemSelectionRect},
	{"DrawFocusRect", &luna_wrapper_wxDelegateRendererNative::_bind_DrawFocusRect},
	{"GetSplitterParams", &luna_wrapper_wxDelegateRendererNative::_bind_GetSplitterParams},
	{"GetVersion", &luna_wrapper_wxDelegateRendererNative::_bind_GetVersion},
	{"base_DrawHeaderButton", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawHeaderButton},
	{"base_DrawHeaderButtonContents", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawHeaderButtonContents},
	{"base_GetHeaderButtonHeight", &luna_wrapper_wxDelegateRendererNative::_bind_base_GetHeaderButtonHeight},
	{"base_GetHeaderButtonMargin", &luna_wrapper_wxDelegateRendererNative::_bind_base_GetHeaderButtonMargin},
	{"base_DrawTreeItemButton", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawTreeItemButton},
	{"base_DrawSplitterBorder", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawSplitterBorder},
	{"base_DrawSplitterSash", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawSplitterSash},
	{"base_DrawComboBoxDropButton", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawComboBoxDropButton},
	{"base_DrawDropArrow", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawDropArrow},
	{"base_DrawCheckBox", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawCheckBox},
	{"base_GetCheckBoxSize", &luna_wrapper_wxDelegateRendererNative::_bind_base_GetCheckBoxSize},
	{"base_DrawPushButton", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawPushButton},
	{"base_DrawItemSelectionRect", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawItemSelectionRect},
	{"base_DrawFocusRect", &luna_wrapper_wxDelegateRendererNative::_bind_base_DrawFocusRect},
	{"base_GetSplitterParams", &luna_wrapper_wxDelegateRendererNative::_bind_base_GetSplitterParams},
	{"base_GetVersion", &luna_wrapper_wxDelegateRendererNative::_bind_base_GetVersion},
	{"fromVoid", &luna_wrapper_wxDelegateRendererNative::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDelegateRendererNative::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDelegateRendererNative::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDelegateRendererNative >::converters[] = {
	{"wxRendererNative", &luna_wrapper_wxDelegateRendererNative::_cast_from_wxRendererNative},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDelegateRendererNative >::enumValues[] = {
	{0,0}
};


