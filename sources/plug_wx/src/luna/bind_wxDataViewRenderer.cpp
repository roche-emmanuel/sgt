#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewRenderer.h>

class luna_wrapper_wxDataViewRenderer {
public:
	typedef Luna< wxDataViewRenderer > luna_t;

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

		wxDataViewRenderer* self= (wxDataViewRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewRenderer >::push(L,self,false);
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
		//wxDataViewRenderer* ptr= dynamic_cast< wxDataViewRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewRenderer* ptr= luna_caster< wxObject, wxDataViewRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Render(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableEllipsize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableEllipsize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEllipsizeMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVariantType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,185523)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewRenderer::wxDataViewRenderer(lua_Table * data, const wxString & varianttype, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)
	static wxDataViewRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewRenderer::wxDataViewRenderer(lua_Table * data, const wxString & varianttype, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) function, expected prototype:\nwxDataViewRenderer::wxDataViewRenderer(lua_Table * data, const wxString & varianttype, wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int align=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxDataViewRenderer(L,NULL, varianttype, mode, align);
	}


	// Function binds:
	// wxSize wxDataViewRenderer::GetSize() const
	static int _bind_GetSize(lua_State *L) {
		if (!_lg_typecheck_GetSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxDataViewRenderer::GetSize() const function, expected prototype:\nwxSize wxDataViewRenderer::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxDataViewRenderer::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	static int _bind_Render(lua_State *L) {
		if (!_lg_typecheck_Render(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3) function, expected prototype:\nbool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)\nClass arguments details:\narg 1 ID = 20234418\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect* _arg1_ptr=(Luna< wxRect >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in wxDataViewRenderer::Render function");
		}
		wxRect _arg1=*_arg1_ptr;
		wxDC* _arg2=(Luna< wxObject >::checkSubType< wxDC >(L,3));
		int _arg3=(int)lua_tointeger(L,4);

		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewRenderer::Render(wxRect, wxDC *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Render(_arg1, _arg2, _arg3);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode mode = ::wxELLIPSIZE_MIDDLE)
	static int _bind_EnableEllipsize(lua_State *L) {
		if (!_lg_typecheck_EnableEllipsize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode mode = ::wxELLIPSIZE_MIDDLE) function, expected prototype:\nvoid wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode mode = ::wxELLIPSIZE_MIDDLE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxEllipsizeMode mode=luatop>1 ? (wxEllipsizeMode)lua_tointeger(L,2) : (wxEllipsizeMode)::wxELLIPSIZE_MIDDLE;

		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::EnableEllipsize(wxEllipsizeMode). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableEllipsize(mode);

		return 0;
	}

	// void wxDataViewRenderer::DisableEllipsize()
	static int _bind_DisableEllipsize(lua_State *L) {
		if (!_lg_typecheck_DisableEllipsize(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::DisableEllipsize() function, expected prototype:\nvoid wxDataViewRenderer::DisableEllipsize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::DisableEllipsize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableEllipsize();

		return 0;
	}

	// int wxDataViewRenderer::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewRenderer::GetAlignment() const function, expected prototype:\nint wxDataViewRenderer::GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewRenderer::GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const
	static int _bind_GetEllipsizeMode(lua_State *L) {
		if (!_lg_typecheck_GetEllipsizeMode(L)) {
			luaL_error(L, "luna typecheck failed in wxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const function, expected prototype:\nwxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEllipsizeMode wxDataViewRenderer::GetEllipsizeMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEllipsizeMode lret = self->GetEllipsizeMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewRenderer::GetMode() const
	static int _bind_GetMode(lua_State *L) {
		if (!_lg_typecheck_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewRenderer::GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewRenderer::GetMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewRenderer::GetMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewCellMode lret = self->GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewColumn * wxDataViewRenderer::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewColumn * wxDataViewRenderer::GetOwner() const function, expected prototype:\nwxDataViewColumn * wxDataViewRenderer::GetOwner() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewColumn * wxDataViewRenderer::GetOwner() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewColumn * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewColumn >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewRenderer::GetVariantType() const
	static int _bind_GetVariantType(lua_State *L) {
		if (!_lg_typecheck_GetVariantType(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewRenderer::GetVariantType() const function, expected prototype:\nwxString wxDataViewRenderer::GetVariantType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewRenderer::GetVariantType() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetVariantType();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxDataViewRenderer::SetAlignment(int align)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::SetAlignment(int align) function, expected prototype:\nvoid wxDataViewRenderer::SetAlignment(int align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::SetAlignment(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlignment(align);

		return 0;
	}

	// void wxDataViewRenderer::SetOwner(wxDataViewColumn * owner)
	static int _bind_SetOwner(lua_State *L) {
		if (!_lg_typecheck_SetOwner(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::SetOwner(wxDataViewColumn * owner) function, expected prototype:\nvoid wxDataViewRenderer::SetOwner(wxDataViewColumn * owner)\nClass arguments details:\narg 1 ID = 185523\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewColumn* owner=(Luna< wxHeaderColumn >::checkSubType< wxDataViewColumn >(L,2));

		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::SetOwner(wxDataViewColumn *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOwner(owner);

		return 0;
	}

	// wxClassInfo * wxDataViewRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewRenderer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewRenderer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDataViewRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewRenderer::base_GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewRenderer::base_GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewRenderer::base_GetMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewRenderer::base_GetMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewCellMode lret = self->wxDataViewRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewRenderer::base_SetAlignment(int align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewRenderer* self=Luna< wxObject >::checkSubType< wxDataViewRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewRenderer::base_SetAlignment(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewRenderer::SetAlignment(align);

		return 0;
	}


	// Operator binds:

};

wxDataViewRenderer* LunaTraits< wxDataViewRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxSize wxDataViewRenderer::GetSize() const
	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewRenderer >::_bind_dtor(wxDataViewRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewRenderer >::className[] = "wxDataViewRenderer";
const char LunaTraits< wxDataViewRenderer >::fullName[] = "wxDataViewRenderer";
const char LunaTraits< wxDataViewRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewRenderer >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxDataViewRenderer >::hash = 62992239;
const int LunaTraits< wxDataViewRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewRenderer >::methods[] = {
	{"GetSize", &luna_wrapper_wxDataViewRenderer::_bind_GetSize},
	{"Render", &luna_wrapper_wxDataViewRenderer::_bind_Render},
	{"EnableEllipsize", &luna_wrapper_wxDataViewRenderer::_bind_EnableEllipsize},
	{"DisableEllipsize", &luna_wrapper_wxDataViewRenderer::_bind_DisableEllipsize},
	{"GetAlignment", &luna_wrapper_wxDataViewRenderer::_bind_GetAlignment},
	{"GetEllipsizeMode", &luna_wrapper_wxDataViewRenderer::_bind_GetEllipsizeMode},
	{"GetMode", &luna_wrapper_wxDataViewRenderer::_bind_GetMode},
	{"GetOwner", &luna_wrapper_wxDataViewRenderer::_bind_GetOwner},
	{"GetVariantType", &luna_wrapper_wxDataViewRenderer::_bind_GetVariantType},
	{"SetAlignment", &luna_wrapper_wxDataViewRenderer::_bind_SetAlignment},
	{"SetOwner", &luna_wrapper_wxDataViewRenderer::_bind_SetOwner},
	{"base_GetClassInfo", &luna_wrapper_wxDataViewRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewRenderer::_bind_base_SetAlignment},
	{"fromVoid", &luna_wrapper_wxDataViewRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewRenderer >::enumValues[] = {
	{0,0}
};


