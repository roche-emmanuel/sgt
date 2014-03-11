#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridCellAttrProvider.h>

class luna_wrapper_wxGridCellAttrProvider {
public:
	typedef Luna< wxGridCellAttrProvider > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxClientDataContainer* self=(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxClientDataContainer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxGridCellAttrProvider* self= (wxGridCellAttrProvider*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellAttrProvider >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96494917) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxClientDataContainer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxClientDataContainer(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxGridCellAttrProvider* ptr= dynamic_cast< wxGridCellAttrProvider* >(Luna< wxClientDataContainer >::check(L,1));
		wxGridCellAttrProvider* ptr= luna_caster< wxClientDataContainer, wxGridCellAttrProvider >::cast(Luna< wxClientDataContainer >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridCellAttrProvider >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnHeaderRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRowHeaderRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCornerRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetRowAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetColAttr(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,25758569)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetColumnHeaderRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetRowHeaderRenderer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCornerRenderer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridCellAttrProvider::wxGridCellAttrProvider()
	static wxGridCellAttrProvider* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttrProvider::wxGridCellAttrProvider() function, expected prototype:\nwxGridCellAttrProvider::wxGridCellAttrProvider()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGridCellAttrProvider();
	}

	// wxGridCellAttrProvider::wxGridCellAttrProvider(lua_Table * data)
	static wxGridCellAttrProvider* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttrProvider::wxGridCellAttrProvider(lua_Table * data) function, expected prototype:\nwxGridCellAttrProvider::wxGridCellAttrProvider(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridCellAttrProvider(L,NULL);
	}

	// Overload binder for wxGridCellAttrProvider::wxGridCellAttrProvider
	static wxGridCellAttrProvider* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGridCellAttrProvider, cannot match any of the overloads for function wxGridCellAttrProvider:\n  wxGridCellAttrProvider()\n  wxGridCellAttrProvider(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const function, expected prototype:\nwxGridCellAttr * wxGridCellAttrProvider::GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellAttr::wxAttrKind kind=(wxGridCellAttr::wxAttrKind)lua_tointeger(L,4);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridCellAttrProvider::GetAttr(int, int, wxGridCellAttr::wxAttrKind) const. Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttr * lret = self->GetAttr(row, col, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col)
	static int _bind_SetAttr(lua_State *L) {
		if (!_lg_typecheck_SetAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col) function, expected prototype:\nvoid wxGridCellAttrProvider::SetAttr(wxGridCellAttr * attr, int row, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::SetAttr(wxGridCellAttr *, int, int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAttr(attr, row, col);

		return 0;
	}

	// void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row)
	static int _bind_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_SetRowAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row) function, expected prototype:\nvoid wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr * attr, int row)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::SetRowAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowAttr(attr, row);

		return 0;
	}

	// void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col)
	static int _bind_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_SetColAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col) function, expected prototype:\nvoid wxGridCellAttrProvider::SetColAttr(wxGridCellAttr * attr, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int col=(int)lua_tointeger(L,3);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::SetColAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColAttr(attr, col);

		return 0;
	}

	// const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col)
	static int _bind_GetColumnHeaderRenderer(lua_State *L) {
		if (!_lg_typecheck_GetColumnHeaderRenderer(L)) {
			luaL_error(L, "luna typecheck failed in const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col) function, expected prototype:\nconst wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::GetColumnHeaderRenderer(int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridColumnHeaderRenderer* lret = &self->GetColumnHeaderRenderer(col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridColumnHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row)
	static int _bind_GetRowHeaderRenderer(lua_State *L) {
		if (!_lg_typecheck_GetRowHeaderRenderer(L)) {
			luaL_error(L, "luna typecheck failed in const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row) function, expected prototype:\nconst wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxGridRowHeaderRenderer & wxGridCellAttrProvider::GetRowHeaderRenderer(int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridRowHeaderRenderer* lret = &self->GetRowHeaderRenderer(row);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridRowHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer()
	static int _bind_GetCornerRenderer(lua_State *L) {
		if (!_lg_typecheck_GetCornerRenderer(L)) {
			luaL_error(L, "luna typecheck failed in const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer() function, expected prototype:\nconst wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::GetCornerRenderer(). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridCornerHeaderRenderer* lret = &self->GetCornerRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCornerHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// wxGridCellAttr * wxGridCellAttrProvider::base_GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellAttr * wxGridCellAttrProvider::base_GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const function, expected prototype:\nwxGridCellAttr * wxGridCellAttrProvider::base_GetAttr(int row, int col, wxGridCellAttr::wxAttrKind kind) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);
		wxGridCellAttr::wxAttrKind kind=(wxGridCellAttr::wxAttrKind)lua_tointeger(L,4);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellAttr * wxGridCellAttrProvider::base_GetAttr(int, int, wxGridCellAttr::wxAttrKind) const. Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellAttr * lret = self->wxGridCellAttrProvider::GetAttr(row, col, kind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellAttr >::push(L,lret,false);

		return 1;
	}

	// void wxGridCellAttrProvider::base_SetAttr(wxGridCellAttr * attr, int row, int col)
	static int _bind_base_SetAttr(lua_State *L) {
		if (!_lg_typecheck_base_SetAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::base_SetAttr(wxGridCellAttr * attr, int row, int col) function, expected prototype:\nvoid wxGridCellAttrProvider::base_SetAttr(wxGridCellAttr * attr, int row, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);
		int col=(int)lua_tointeger(L,4);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::base_SetAttr(wxGridCellAttr *, int, int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellAttrProvider::SetAttr(attr, row, col);

		return 0;
	}

	// void wxGridCellAttrProvider::base_SetRowAttr(wxGridCellAttr * attr, int row)
	static int _bind_base_SetRowAttr(lua_State *L) {
		if (!_lg_typecheck_base_SetRowAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::base_SetRowAttr(wxGridCellAttr * attr, int row) function, expected prototype:\nvoid wxGridCellAttrProvider::base_SetRowAttr(wxGridCellAttr * attr, int row)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int row=(int)lua_tointeger(L,3);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::base_SetRowAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellAttrProvider::SetRowAttr(attr, row);

		return 0;
	}

	// void wxGridCellAttrProvider::base_SetColAttr(wxGridCellAttr * attr, int col)
	static int _bind_base_SetColAttr(lua_State *L) {
		if (!_lg_typecheck_base_SetColAttr(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellAttrProvider::base_SetColAttr(wxGridCellAttr * attr, int col) function, expected prototype:\nvoid wxGridCellAttrProvider::base_SetColAttr(wxGridCellAttr * attr, int col)\nClass arguments details:\narg 1 ID = 25758569\n\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellAttr* attr=(Luna< wxGridCellAttr >::check(L,2));
		int col=(int)lua_tointeger(L,3);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellAttrProvider::base_SetColAttr(wxGridCellAttr *, int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGridCellAttrProvider::SetColAttr(attr, col);

		return 0;
	}

	// const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::base_GetColumnHeaderRenderer(int col)
	static int _bind_base_GetColumnHeaderRenderer(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnHeaderRenderer(L)) {
			luaL_error(L, "luna typecheck failed in const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::base_GetColumnHeaderRenderer(int col) function, expected prototype:\nconst wxGridColumnHeaderRenderer & wxGridCellAttrProvider::base_GetColumnHeaderRenderer(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxGridColumnHeaderRenderer & wxGridCellAttrProvider::base_GetColumnHeaderRenderer(int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridColumnHeaderRenderer* lret = &self->wxGridCellAttrProvider::GetColumnHeaderRenderer(col);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridColumnHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxGridRowHeaderRenderer & wxGridCellAttrProvider::base_GetRowHeaderRenderer(int row)
	static int _bind_base_GetRowHeaderRenderer(lua_State *L) {
		if (!_lg_typecheck_base_GetRowHeaderRenderer(L)) {
			luaL_error(L, "luna typecheck failed in const wxGridRowHeaderRenderer & wxGridCellAttrProvider::base_GetRowHeaderRenderer(int row) function, expected prototype:\nconst wxGridRowHeaderRenderer & wxGridCellAttrProvider::base_GetRowHeaderRenderer(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxGridRowHeaderRenderer & wxGridCellAttrProvider::base_GetRowHeaderRenderer(int). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridRowHeaderRenderer* lret = &self->wxGridCellAttrProvider::GetRowHeaderRenderer(row);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridRowHeaderRenderer >::push(L,lret,false);

		return 1;
	}

	// const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::base_GetCornerRenderer()
	static int _bind_base_GetCornerRenderer(lua_State *L) {
		if (!_lg_typecheck_base_GetCornerRenderer(L)) {
			luaL_error(L, "luna typecheck failed in const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::base_GetCornerRenderer() function, expected prototype:\nconst wxGridCornerHeaderRenderer & wxGridCellAttrProvider::base_GetCornerRenderer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellAttrProvider* self=Luna< wxClientDataContainer >::checkSubType< wxGridCellAttrProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxGridCornerHeaderRenderer & wxGridCellAttrProvider::base_GetCornerRenderer(). Got : '%s'\n%s",typeid(Luna< wxClientDataContainer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridCornerHeaderRenderer* lret = &self->wxGridCellAttrProvider::GetCornerRenderer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCornerHeaderRenderer >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGridCellAttrProvider* LunaTraits< wxGridCellAttrProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellAttrProvider::_bind_ctor(L);
}

void LunaTraits< wxGridCellAttrProvider >::_bind_dtor(wxGridCellAttrProvider* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellAttrProvider >::className[] = "wxGridCellAttrProvider";
const char LunaTraits< wxGridCellAttrProvider >::fullName[] = "wxGridCellAttrProvider";
const char LunaTraits< wxGridCellAttrProvider >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellAttrProvider >::parents[] = {"wx.wxClientDataContainer", 0};
const int LunaTraits< wxGridCellAttrProvider >::hash = 87329435;
const int LunaTraits< wxGridCellAttrProvider >::uniqueIDs[] = {96494917,0};

luna_RegType LunaTraits< wxGridCellAttrProvider >::methods[] = {
	{"GetAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_GetAttr},
	{"SetAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_SetAttr},
	{"SetRowAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_SetRowAttr},
	{"SetColAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_SetColAttr},
	{"GetColumnHeaderRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_GetColumnHeaderRenderer},
	{"GetRowHeaderRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_GetRowHeaderRenderer},
	{"GetCornerRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_GetCornerRenderer},
	{"base_GetAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_base_GetAttr},
	{"base_SetAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_base_SetAttr},
	{"base_SetRowAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_base_SetRowAttr},
	{"base_SetColAttr", &luna_wrapper_wxGridCellAttrProvider::_bind_base_SetColAttr},
	{"base_GetColumnHeaderRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_base_GetColumnHeaderRenderer},
	{"base_GetRowHeaderRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_base_GetRowHeaderRenderer},
	{"base_GetCornerRenderer", &luna_wrapper_wxGridCellAttrProvider::_bind_base_GetCornerRenderer},
	{"fromVoid", &luna_wrapper_wxGridCellAttrProvider::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellAttrProvider::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridCellAttrProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellAttrProvider >::converters[] = {
	{"wxClientDataContainer", &luna_wrapper_wxGridCellAttrProvider::_cast_from_wxClientDataContainer},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellAttrProvider >::enumValues[] = {
	{0,0}
};


