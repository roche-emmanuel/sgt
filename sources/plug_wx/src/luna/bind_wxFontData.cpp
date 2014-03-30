#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFontData.h>

class luna_wrapper_wxFontData {
public:
	typedef Luna< wxFontData > luna_t;

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

		wxFontData* self= (wxFontData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFontData >::push(L,self,false);
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
		//wxFontData* ptr= dynamic_cast< wxFontData* >(Luna< wxObject >::check(L,1));
		wxFontData* ptr= luna_caster< wxObject, wxFontData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFontData >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_EnableEffects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAllowSymbols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChosenFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEnableEffects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInitialFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetShowHelp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAllowSymbols(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChosenFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInitialFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShowHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxFontData::wxFontData()
	static wxFontData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFontData::wxFontData() function, expected prototype:\nwxFontData::wxFontData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFontData();
	}

	// wxFontData::wxFontData(lua_Table * data)
	static wxFontData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFontData::wxFontData(lua_Table * data) function, expected prototype:\nwxFontData::wxFontData(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFontData(L,NULL);
	}

	// Overload binder for wxFontData::wxFontData
	static wxFontData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFontData, cannot match any of the overloads for function wxFontData:\n  wxFontData()\n  wxFontData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxFontData::EnableEffects(bool enable)
	static int _bind_EnableEffects(lua_State *L) {
		if (!_lg_typecheck_EnableEffects(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::EnableEffects(bool enable) function, expected prototype:\nvoid wxFontData::EnableEffects(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::EnableEffects(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableEffects(enable);

		return 0;
	}

	// bool wxFontData::GetAllowSymbols() const
	static int _bind_GetAllowSymbols(lua_State *L) {
		if (!_lg_typecheck_GetAllowSymbols(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontData::GetAllowSymbols() const function, expected prototype:\nbool wxFontData::GetAllowSymbols() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontData::GetAllowSymbols() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetAllowSymbols();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFont wxFontData::GetChosenFont() const
	static int _bind_GetChosenFont(lua_State *L) {
		if (!_lg_typecheck_GetChosenFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFontData::GetChosenFont() const function, expected prototype:\nwxFont wxFontData::GetChosenFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFontData::GetChosenFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetChosenFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// const wxColour & wxFontData::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in const wxColour & wxFontData::GetColour() const function, expected prototype:\nconst wxColour & wxFontData::GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxColour & wxFontData::GetColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// bool wxFontData::GetEnableEffects() const
	static int _bind_GetEnableEffects(lua_State *L) {
		if (!_lg_typecheck_GetEnableEffects(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontData::GetEnableEffects() const function, expected prototype:\nbool wxFontData::GetEnableEffects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontData::GetEnableEffects() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetEnableEffects();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxFont wxFontData::GetInitialFont() const
	static int _bind_GetInitialFont(lua_State *L) {
		if (!_lg_typecheck_GetInitialFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxFontData::GetInitialFont() const function, expected prototype:\nwxFont wxFontData::GetInitialFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxFontData::GetInitialFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetInitialFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// bool wxFontData::GetShowHelp() const
	static int _bind_GetShowHelp(lua_State *L) {
		if (!_lg_typecheck_GetShowHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontData::GetShowHelp() const function, expected prototype:\nbool wxFontData::GetShowHelp() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontData::GetShowHelp() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetShowHelp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFontData::SetAllowSymbols(bool allowSymbols)
	static int _bind_SetAllowSymbols(lua_State *L) {
		if (!_lg_typecheck_SetAllowSymbols(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::SetAllowSymbols(bool allowSymbols) function, expected prototype:\nvoid wxFontData::SetAllowSymbols(bool allowSymbols)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool allowSymbols=(bool)(lua_toboolean(L,2)==1);

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::SetAllowSymbols(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAllowSymbols(allowSymbols);

		return 0;
	}

	// void wxFontData::SetChosenFont(const wxFont & font)
	static int _bind_SetChosenFont(lua_State *L) {
		if (!_lg_typecheck_SetChosenFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::SetChosenFont(const wxFont & font) function, expected prototype:\nvoid wxFontData::SetChosenFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontData::SetChosenFont function");
		}
		const wxFont & font=*font_ptr;

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::SetChosenFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetChosenFont(font);

		return 0;
	}

	// void wxFontData::SetColour(const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxFontData::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxFontData::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxFontData::SetInitialFont(const wxFont & font)
	static int _bind_SetInitialFont(lua_State *L) {
		if (!_lg_typecheck_SetInitialFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::SetInitialFont(const wxFont & font) function, expected prototype:\nvoid wxFontData::SetInitialFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFontData::SetInitialFont function");
		}
		const wxFont & font=*font_ptr;

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::SetInitialFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInitialFont(font);

		return 0;
	}

	// void wxFontData::SetRange(int min, int max)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::SetRange(int min, int max) function, expected prototype:\nvoid wxFontData::SetRange(int min, int max)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int min=(int)lua_tointeger(L,2);
		int max=(int)lua_tointeger(L,3);

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::SetRange(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRange(min, max);

		return 0;
	}

	// void wxFontData::SetShowHelp(bool showHelp)
	static int _bind_SetShowHelp(lua_State *L) {
		if (!_lg_typecheck_SetShowHelp(L)) {
			luaL_error(L, "luna typecheck failed in void wxFontData::SetShowHelp(bool showHelp) function, expected prototype:\nvoid wxFontData::SetShowHelp(bool showHelp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool showHelp=(bool)(lua_toboolean(L,2)==1);

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFontData::SetShowHelp(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetShowHelp(showHelp);

		return 0;
	}

	// wxClassInfo * wxFontData::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFontData::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFontData::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFontData::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFontData::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// wxFontData & wxFontData::operator=(const wxFontData & data)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxFontData & wxFontData::operator=(const wxFontData & data) function, expected prototype:\nwxFontData & wxFontData::operator=(const wxFontData & data)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFontData* data_ptr=(Luna< wxObject >::checkSubType< wxFontData >(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxFontData::operator= function");
		}
		const wxFontData & data=*data_ptr;

		wxFontData* self=Luna< wxObject >::checkSubType< wxFontData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFontData & wxFontData::operator=(const wxFontData &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxFontData* lret = &self->operator=(data);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontData >::push(L,lret,false);

		return 1;
	}


};

wxFontData* LunaTraits< wxFontData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFontData::_bind_ctor(L);
}

void LunaTraits< wxFontData >::_bind_dtor(wxFontData* obj) {
	delete obj;
}

const char LunaTraits< wxFontData >::className[] = "wxFontData";
const char LunaTraits< wxFontData >::fullName[] = "wxFontData";
const char LunaTraits< wxFontData >::moduleName[] = "wx";
const char* LunaTraits< wxFontData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxFontData >::hash = 49365966;
const int LunaTraits< wxFontData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFontData >::methods[] = {
	{"EnableEffects", &luna_wrapper_wxFontData::_bind_EnableEffects},
	{"GetAllowSymbols", &luna_wrapper_wxFontData::_bind_GetAllowSymbols},
	{"GetChosenFont", &luna_wrapper_wxFontData::_bind_GetChosenFont},
	{"GetColour", &luna_wrapper_wxFontData::_bind_GetColour},
	{"GetEnableEffects", &luna_wrapper_wxFontData::_bind_GetEnableEffects},
	{"GetInitialFont", &luna_wrapper_wxFontData::_bind_GetInitialFont},
	{"GetShowHelp", &luna_wrapper_wxFontData::_bind_GetShowHelp},
	{"SetAllowSymbols", &luna_wrapper_wxFontData::_bind_SetAllowSymbols},
	{"SetChosenFont", &luna_wrapper_wxFontData::_bind_SetChosenFont},
	{"SetColour", &luna_wrapper_wxFontData::_bind_SetColour},
	{"SetInitialFont", &luna_wrapper_wxFontData::_bind_SetInitialFont},
	{"SetRange", &luna_wrapper_wxFontData::_bind_SetRange},
	{"SetShowHelp", &luna_wrapper_wxFontData::_bind_SetShowHelp},
	{"base_GetClassInfo", &luna_wrapper_wxFontData::_bind_base_GetClassInfo},
	{"op_assign", &luna_wrapper_wxFontData::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxFontData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFontData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFontData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontData >::converters[] = {
	{"wxObject", &luna_wrapper_wxFontData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontData >::enumValues[] = {
	{0,0}
};


