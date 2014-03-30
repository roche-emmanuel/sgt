#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewTextRenderer.h>

class luna_wrapper_wxDataViewTextRenderer {
public:
	typedef Luna< wxDataViewTextRenderer > luna_t;

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

		wxDataViewTextRenderer* self= (wxDataViewTextRenderer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewTextRenderer >::push(L,self,false);
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
		//wxDataViewTextRenderer* ptr= dynamic_cast< wxDataViewTextRenderer* >(Luna< wxObject >::check(L,1));
		wxDataViewTextRenderer* ptr= luna_caster< wxObject, wxDataViewTextRenderer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTextRenderer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
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
	// wxDataViewTextRenderer::wxDataViewTextRenderer(lua_Table * data, const wxString & varianttype = "string", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)
	static wxDataViewTextRenderer* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewTextRenderer::wxDataViewTextRenderer(lua_Table * data, const wxString & varianttype = \"string\", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1) function, expected prototype:\nwxDataViewTextRenderer::wxDataViewTextRenderer(lua_Table * data, const wxString & varianttype = \"string\", wxDataViewCellMode mode = ::wxDATAVIEW_CELL_INERT, int align = -1)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));
		wxDataViewCellMode mode=luatop>2 ? (wxDataViewCellMode)lua_tointeger(L,3) : (wxDataViewCellMode)::wxDATAVIEW_CELL_INERT;
		int align=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		return new wrapper_wxDataViewTextRenderer(L,NULL, varianttype, mode, align);
	}


	// Function binds:
	// wxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDataViewTextRenderer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDataViewTextRenderer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxDataViewTextRenderer::base_GetAlignment() const
	static int _bind_base_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewTextRenderer::base_GetAlignment() const function, expected prototype:\nint wxDataViewTextRenderer::base_GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewTextRenderer::base_GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewTextRenderer::GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const
	static int _bind_base_GetMode(lua_State *L) {
		if (!_lg_typecheck_base_GetMode(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const function, expected prototype:\nwxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewCellMode wxDataViewTextRenderer::base_GetMode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewCellMode lret = self->wxDataViewTextRenderer::GetMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxDataViewTextRenderer::base_SetAlignment(int align)
	static int _bind_base_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_base_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTextRenderer::base_SetAlignment(int align) function, expected prototype:\nvoid wxDataViewTextRenderer::base_SetAlignment(int align)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int align=(int)lua_tointeger(L,2);

		wxDataViewTextRenderer* self=Luna< wxObject >::checkSubType< wxDataViewTextRenderer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTextRenderer::base_SetAlignment(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewTextRenderer::SetAlignment(align);

		return 0;
	}


	// Operator binds:

};

wxDataViewTextRenderer* LunaTraits< wxDataViewTextRenderer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewTextRenderer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxSize wxDataViewRenderer::GetSize() const
	// bool wxDataViewRenderer::Render(wxRect arg1, wxDC * arg2, int arg3)
	// bool wxDataViewRenderer::GetValue(wxVariant & value) const
	// bool wxDataViewRenderer::SetValue(const wxVariant & value)
}

void LunaTraits< wxDataViewTextRenderer >::_bind_dtor(wxDataViewTextRenderer* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTextRenderer >::className[] = "wxDataViewTextRenderer";
const char LunaTraits< wxDataViewTextRenderer >::fullName[] = "wxDataViewTextRenderer";
const char LunaTraits< wxDataViewTextRenderer >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTextRenderer >::parents[] = {"wx.wxDataViewRenderer", 0};
const int LunaTraits< wxDataViewTextRenderer >::hash = 91728515;
const int LunaTraits< wxDataViewTextRenderer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDataViewTextRenderer >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDataViewTextRenderer::_bind_base_GetClassInfo},
	{"base_GetAlignment", &luna_wrapper_wxDataViewTextRenderer::_bind_base_GetAlignment},
	{"base_GetMode", &luna_wrapper_wxDataViewTextRenderer::_bind_base_GetMode},
	{"base_SetAlignment", &luna_wrapper_wxDataViewTextRenderer::_bind_base_SetAlignment},
	{"fromVoid", &luna_wrapper_wxDataViewTextRenderer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewTextRenderer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewTextRenderer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTextRenderer >::converters[] = {
	{"wxObject", &luna_wrapper_wxDataViewTextRenderer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTextRenderer >::enumValues[] = {
	{0,0}
};


