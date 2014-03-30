#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAuiDefaultToolBarArt.h>

class luna_wrapper_wxAuiDefaultToolBarArt {
public:
	typedef Luna< wxAuiDefaultToolBarArt > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxAuiToolBarArt* self=(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxAuiToolBarArt,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxAuiDefaultToolBarArt* self= (wxAuiDefaultToolBarArt*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAuiDefaultToolBarArt >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19206291) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxAuiToolBarArt >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxAuiToolBarArt(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxAuiDefaultToolBarArt* ptr= dynamic_cast< wxAuiDefaultToolBarArt* >(Luna< wxAuiToolBarArt >::check(L,1));
		wxAuiDefaultToolBarArt* ptr= luna_caster< wxAuiToolBarArt, wxAuiDefaultToolBarArt >::cast(Luna< wxAuiToolBarArt >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAuiDefaultToolBarArt >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DrawBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawLabel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawDropDownButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawControlLabel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawSeparator(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawGripper(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawOverflowButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetElementSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetElementSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowDropDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,29562974) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTextOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DrawBackground(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawLabel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawDropDownButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawControlLabel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawSeparator(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawGripper(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DrawOverflowButton(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetLabelSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetToolSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,95634835) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetElementSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetElementSize(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowDropDown(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,29562974) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt()
	static wxAuiDefaultToolBarArt* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt() function, expected prototype:\nwxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAuiDefaultToolBarArt();
	}

	// wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt(lua_Table * data)
	static wxAuiDefaultToolBarArt* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt(lua_Table * data) function, expected prototype:\nwxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxAuiDefaultToolBarArt(L,NULL);
	}

	// Overload binder for wxAuiDefaultToolBarArt::wxAuiDefaultToolBarArt
	static wxAuiDefaultToolBarArt* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAuiDefaultToolBarArt, cannot match any of the overloads for function wxAuiDefaultToolBarArt:\n  wxAuiDefaultToolBarArt()\n  wxAuiDefaultToolBarArt(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone()
	static int _bind_Clone(lua_State *L) {
		if (!_lg_typecheck_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone() function, expected prototype:\nwxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAuiToolBarArt * lret = self->Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarArt >::push(L,lret,false);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetFlags(unsigned int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetFlags(unsigned int flags) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// unsigned int wxAuiDefaultToolBarArt::GetFlags()
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxAuiDefaultToolBarArt::GetFlags() function, expected prototype:\nunsigned int wxAuiDefaultToolBarArt::GetFlags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxAuiDefaultToolBarArt::GetFlags(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetFont(const wxFont & font) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiDefaultToolBarArt::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFont(font);

		return 0;
	}

	// wxFont wxAuiDefaultToolBarArt::GetFont()
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxAuiDefaultToolBarArt::GetFont() function, expected prototype:\nwxFont wxAuiDefaultToolBarArt::GetFont()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxAuiDefaultToolBarArt::GetFont(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetTextOrientation(int orientation)
	static int _bind_SetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_SetTextOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetTextOrientation(int orientation) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetTextOrientation(int orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetTextOrientation(int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextOrientation(orientation);

		return 0;
	}

	// int wxAuiDefaultToolBarArt::GetTextOrientation()
	static int _bind_GetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_GetTextOrientation(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::GetTextOrientation() function, expected prototype:\nint wxAuiDefaultToolBarArt::GetTextOrientation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::GetTextOrientation(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTextOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawBackground(lua_State *L) {
		if (!_lg_typecheck_DrawBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawBackground(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_DrawLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawButton(lua_State *L) {
		if (!_lg_typecheck_DrawButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawDropDownButton(lua_State *L) {
		if (!_lg_typecheck_DrawDropDownButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawDropDownButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawDropDownButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawDropDownButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawDropDownButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_DrawControlLabel(lua_State *L) {
		if (!_lg_typecheck_DrawControlLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawControlLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::DrawControlLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawControlLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawControlLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawSeparator(lua_State *L) {
		if (!_lg_typecheck_DrawSeparator(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawSeparator function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawSeparator function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawSeparator(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawSeparator(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_DrawGripper(lua_State *L) {
		if (!_lg_typecheck_DrawGripper(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawGripper function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawGripper function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawGripper(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawGripper(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	static int _bind_DrawOverflowButton(lua_State *L) {
		if (!_lg_typecheck_DrawOverflowButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::DrawOverflowButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::DrawOverflowButton function");
		}
		const wxRect & rect=*rect_ptr;
		int state=(int)lua_tointeger(L,5);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC &, wxWindow *, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawOverflowButton(dc, wnd, rect, state);

		return 0;
	}

	// wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_GetLabelSize(lua_State *L) {
		if (!_lg_typecheck_GetLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::GetLabelSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::GetLabelSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC &, wxWindow *, const wxAuiToolBarItem &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetLabelSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_GetToolSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::GetToolSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::GetToolSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC &, wxWindow *, const wxAuiToolBarItem &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetToolSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxAuiDefaultToolBarArt::GetElementSize(int element)
	static int _bind_GetElementSize(lua_State *L) {
		if (!_lg_typecheck_GetElementSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::GetElementSize(int element) function, expected prototype:\nint wxAuiDefaultToolBarArt::GetElementSize(int element)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int element=(int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::GetElementSize(int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetElementSize(element);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size)
	static int _bind_SetElementSize(lua_State *L) {
		if (!_lg_typecheck_SetElementSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int element_id=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::SetElementSize(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetElementSize(element_id, size);

		return 0;
	}

	// int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)
	static int _bind_ShowDropDown(lua_State *L) {
		if (!_lg_typecheck_ShowDropDown(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items) function, expected prototype:\nint wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 29562974\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxAuiToolBarItemArray* items_ptr=(Luna< wxAuiToolBarItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxAuiDefaultToolBarArt::ShowDropDown function");
		}
		const wxAuiToolBarItemArray & items=*items_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow *, const wxAuiToolBarItemArray &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShowDropDown(wnd, items);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxAuiToolBarArt * wxAuiDefaultToolBarArt::base_Clone()
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxAuiToolBarArt * wxAuiDefaultToolBarArt::base_Clone() function, expected prototype:\nwxAuiToolBarArt * wxAuiDefaultToolBarArt::base_Clone()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAuiToolBarArt * wxAuiDefaultToolBarArt::base_Clone(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAuiToolBarArt * lret = self->wxAuiDefaultToolBarArt::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAuiToolBarArt >::push(L,lret,false);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::base_SetFlags(unsigned int flags)
	static int _bind_base_SetFlags(lua_State *L) {
		if (!_lg_typecheck_base_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_SetFlags(unsigned int flags) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_SetFlags(unsigned int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int flags=(unsigned int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_SetFlags(unsigned int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::SetFlags(flags);

		return 0;
	}

	// unsigned int wxAuiDefaultToolBarArt::base_GetFlags()
	static int _bind_base_GetFlags(lua_State *L) {
		if (!_lg_typecheck_base_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxAuiDefaultToolBarArt::base_GetFlags() function, expected prototype:\nunsigned int wxAuiDefaultToolBarArt::base_GetFlags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxAuiDefaultToolBarArt::base_GetFlags(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxAuiDefaultToolBarArt::GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_SetFont(const wxFont & font) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAuiDefaultToolBarArt::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::SetFont(font);

		return 0;
	}

	// wxFont wxAuiDefaultToolBarArt::base_GetFont()
	static int _bind_base_GetFont(lua_State *L) {
		if (!_lg_typecheck_base_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxAuiDefaultToolBarArt::base_GetFont() function, expected prototype:\nwxFont wxAuiDefaultToolBarArt::base_GetFont()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxAuiDefaultToolBarArt::base_GetFont(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->wxAuiDefaultToolBarArt::GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::base_SetTextOrientation(int orientation)
	static int _bind_base_SetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_base_SetTextOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_SetTextOrientation(int orientation) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_SetTextOrientation(int orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_SetTextOrientation(int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::SetTextOrientation(orientation);

		return 0;
	}

	// int wxAuiDefaultToolBarArt::base_GetTextOrientation()
	static int _bind_base_GetTextOrientation(lua_State *L) {
		if (!_lg_typecheck_base_GetTextOrientation(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::base_GetTextOrientation() function, expected prototype:\nint wxAuiDefaultToolBarArt::base_GetTextOrientation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::base_GetTextOrientation(). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiDefaultToolBarArt::GetTextOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::base_DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_base_DrawBackground(lua_State *L) {
		if (!_lg_typecheck_base_DrawBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawBackground function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawBackground function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawBackground(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawBackground(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_base_DrawLabel(lua_State *L) {
		if (!_lg_typecheck_base_DrawLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::base_DrawLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_base_DrawButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::base_DrawButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_base_DrawDropDownButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawDropDownButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawDropDownButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::base_DrawDropDownButton function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawDropDownButton function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawDropDownButton(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawDropDownButton(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	static int _bind_base_DrawControlLabel(lua_State *L) {
		if (!_lg_typecheck_base_DrawControlLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\narg 4 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawControlLabel function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::base_DrawControlLabel function");
		}
		const wxAuiToolBarItem & item=*item_ptr;
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,5));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawControlLabel function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawControlLabel(wxDC &, wxWindow *, const wxAuiToolBarItem &, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawControlLabel(dc, wnd, item, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_base_DrawSeparator(lua_State *L) {
		if (!_lg_typecheck_base_DrawSeparator(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawSeparator function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawSeparator function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawSeparator(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawSeparator(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	static int _bind_base_DrawGripper(lua_State *L) {
		if (!_lg_typecheck_base_DrawGripper(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawGripper function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawGripper function");
		}
		const wxRect & rect=*rect_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawGripper(wxDC &, wxWindow *, const wxRect &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawGripper(dc, wnd, rect);

		return 0;
	}

	// void wxAuiDefaultToolBarArt::base_DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	static int _bind_base_DrawOverflowButton(lua_State *L) {
		if (!_lg_typecheck_base_DrawOverflowButton(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_DrawOverflowButton function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxAuiDefaultToolBarArt::base_DrawOverflowButton function");
		}
		const wxRect & rect=*rect_ptr;
		int state=(int)lua_tointeger(L,5);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_DrawOverflowButton(wxDC &, wxWindow *, const wxRect &, int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::DrawOverflowButton(dc, wnd, rect, state);

		return 0;
	}

	// wxSize wxAuiDefaultToolBarArt::base_GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_base_GetLabelSize(lua_State *L) {
		if (!_lg_typecheck_base_GetLabelSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiDefaultToolBarArt::base_GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiDefaultToolBarArt::base_GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_GetLabelSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::base_GetLabelSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiDefaultToolBarArt::base_GetLabelSize(wxDC &, wxWindow *, const wxAuiToolBarItem &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiDefaultToolBarArt::GetLabelSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAuiDefaultToolBarArt::base_GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	static int _bind_base_GetToolSize(lua_State *L) {
		if (!_lg_typecheck_base_GetToolSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAuiDefaultToolBarArt::base_GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) function, expected prototype:\nwxSize wxAuiDefaultToolBarArt::base_GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\narg 3 ID = 95634835\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxAuiDefaultToolBarArt::base_GetToolSize function");
		}
		wxDC & dc=*dc_ptr;
		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,3));
		const wxAuiToolBarItem* item_ptr=(Luna< wxAuiToolBarItem >::check(L,4));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxAuiDefaultToolBarArt::base_GetToolSize function");
		}
		const wxAuiToolBarItem & item=*item_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAuiDefaultToolBarArt::base_GetToolSize(wxDC &, wxWindow *, const wxAuiToolBarItem &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAuiDefaultToolBarArt::GetToolSize(dc, wnd, item);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxAuiDefaultToolBarArt::base_GetElementSize(int element)
	static int _bind_base_GetElementSize(lua_State *L) {
		if (!_lg_typecheck_base_GetElementSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::base_GetElementSize(int element) function, expected prototype:\nint wxAuiDefaultToolBarArt::base_GetElementSize(int element)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int element=(int)lua_tointeger(L,2);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::base_GetElementSize(int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiDefaultToolBarArt::GetElementSize(element);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAuiDefaultToolBarArt::base_SetElementSize(int element_id, int size)
	static int _bind_base_SetElementSize(lua_State *L) {
		if (!_lg_typecheck_base_SetElementSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAuiDefaultToolBarArt::base_SetElementSize(int element_id, int size) function, expected prototype:\nvoid wxAuiDefaultToolBarArt::base_SetElementSize(int element_id, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int element_id=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAuiDefaultToolBarArt::base_SetElementSize(int, int). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAuiDefaultToolBarArt::SetElementSize(element_id, size);

		return 0;
	}

	// int wxAuiDefaultToolBarArt::base_ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)
	static int _bind_base_ShowDropDown(lua_State *L) {
		if (!_lg_typecheck_base_ShowDropDown(L)) {
			luaL_error(L, "luna typecheck failed in int wxAuiDefaultToolBarArt::base_ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items) function, expected prototype:\nint wxAuiDefaultToolBarArt::base_ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 29562974\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* wnd=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const wxAuiToolBarItemArray* items_ptr=(Luna< wxAuiToolBarItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxAuiDefaultToolBarArt::base_ShowDropDown function");
		}
		const wxAuiToolBarItemArray & items=*items_ptr;

		wxAuiDefaultToolBarArt* self=Luna< wxAuiToolBarArt >::checkSubType< wxAuiDefaultToolBarArt >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAuiDefaultToolBarArt::base_ShowDropDown(wxWindow *, const wxAuiToolBarItemArray &). Got : '%s'\n%s",typeid(Luna< wxAuiToolBarArt >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAuiDefaultToolBarArt::ShowDropDown(wnd, items);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxAuiDefaultToolBarArt* LunaTraits< wxAuiDefaultToolBarArt >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAuiDefaultToolBarArt::_bind_ctor(L);
}

void LunaTraits< wxAuiDefaultToolBarArt >::_bind_dtor(wxAuiDefaultToolBarArt* obj) {
	delete obj;
}

const char LunaTraits< wxAuiDefaultToolBarArt >::className[] = "wxAuiDefaultToolBarArt";
const char LunaTraits< wxAuiDefaultToolBarArt >::fullName[] = "wxAuiDefaultToolBarArt";
const char LunaTraits< wxAuiDefaultToolBarArt >::moduleName[] = "wx";
const char* LunaTraits< wxAuiDefaultToolBarArt >::parents[] = {"wx.wxAuiToolBarArt", 0};
const int LunaTraits< wxAuiDefaultToolBarArt >::hash = 73209807;
const int LunaTraits< wxAuiDefaultToolBarArt >::uniqueIDs[] = {19206291,0};

luna_RegType LunaTraits< wxAuiDefaultToolBarArt >::methods[] = {
	{"Clone", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_Clone},
	{"SetFlags", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetFlags},
	{"GetFlags", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetFlags},
	{"SetFont", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetFont},
	{"GetFont", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetFont},
	{"SetTextOrientation", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetTextOrientation},
	{"GetTextOrientation", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetTextOrientation},
	{"DrawBackground", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawBackground},
	{"DrawLabel", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawLabel},
	{"DrawButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawButton},
	{"DrawDropDownButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawDropDownButton},
	{"DrawControlLabel", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawControlLabel},
	{"DrawSeparator", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawSeparator},
	{"DrawGripper", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawGripper},
	{"DrawOverflowButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_DrawOverflowButton},
	{"GetLabelSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetLabelSize},
	{"GetToolSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetToolSize},
	{"GetElementSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_GetElementSize},
	{"SetElementSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_SetElementSize},
	{"ShowDropDown", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_ShowDropDown},
	{"base_Clone", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_Clone},
	{"base_SetFlags", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_SetFlags},
	{"base_GetFlags", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_GetFlags},
	{"base_SetFont", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_SetFont},
	{"base_GetFont", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_GetFont},
	{"base_SetTextOrientation", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_SetTextOrientation},
	{"base_GetTextOrientation", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_GetTextOrientation},
	{"base_DrawBackground", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawBackground},
	{"base_DrawLabel", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawLabel},
	{"base_DrawButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawButton},
	{"base_DrawDropDownButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawDropDownButton},
	{"base_DrawControlLabel", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawControlLabel},
	{"base_DrawSeparator", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawSeparator},
	{"base_DrawGripper", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawGripper},
	{"base_DrawOverflowButton", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_DrawOverflowButton},
	{"base_GetLabelSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_GetLabelSize},
	{"base_GetToolSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_GetToolSize},
	{"base_GetElementSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_GetElementSize},
	{"base_SetElementSize", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_SetElementSize},
	{"base_ShowDropDown", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_base_ShowDropDown},
	{"fromVoid", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAuiDefaultToolBarArt::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAuiDefaultToolBarArt >::converters[] = {
	{"wxAuiToolBarArt", &luna_wrapper_wxAuiDefaultToolBarArt::_cast_from_wxAuiToolBarArt},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAuiDefaultToolBarArt >::enumValues[] = {
	{0,0}
};


