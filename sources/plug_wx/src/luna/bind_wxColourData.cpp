#include <plug_common.h>

#include <luna/wrappers/wrapper_wxColourData.h>

class luna_wrapper_wxColourData {
public:
	typedef Luna< wxColourData > luna_t;

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

		wxColourData* self= (wxColourData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxColourData >::push(L,self,false);
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
		//wxColourData* ptr= dynamic_cast< wxColourData* >(Luna< wxObject >::check(L,1));
		wxColourData* ptr= luna_caster< wxObject, wxColourData >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColourData >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetChooseFull(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCustomColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetChooseFull(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCustomColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FromString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// wxColourData::wxColourData()
	static wxColourData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxColourData::wxColourData() function, expected prototype:\nwxColourData::wxColourData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxColourData();
	}

	// wxColourData::wxColourData(lua_Table * data)
	static wxColourData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxColourData::wxColourData(lua_Table * data) function, expected prototype:\nwxColourData::wxColourData(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxColourData(L,NULL);
	}

	// Overload binder for wxColourData::wxColourData
	static wxColourData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxColourData, cannot match any of the overloads for function wxColourData:\n  wxColourData()\n  wxColourData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxColourData::GetChooseFull() const
	static int _bind_GetChooseFull(lua_State *L) {
		if (!_lg_typecheck_GetChooseFull(L)) {
			luaL_error(L, "luna typecheck failed in bool wxColourData::GetChooseFull() const function, expected prototype:\nbool wxColourData::GetChooseFull() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxColourData::GetChooseFull() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetChooseFull();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour & wxColourData::GetColour()
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour & wxColourData::GetColour() function, expected prototype:\nwxColour & wxColourData::GetColour()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour & wxColourData::GetColour(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColour* lret = &self->GetColour();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,false);

		return 1;
	}

	// wxColour wxColourData::GetCustomColour(int i) const
	static int _bind_GetCustomColour(lua_State *L) {
		if (!_lg_typecheck_GetCustomColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxColourData::GetCustomColour(int i) const function, expected prototype:\nwxColour wxColourData::GetCustomColour(int i) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxColourData::GetCustomColour(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetCustomColour(i);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxColourData::SetChooseFull(bool flag)
	static int _bind_SetChooseFull(lua_State *L) {
		if (!_lg_typecheck_SetChooseFull(L)) {
			luaL_error(L, "luna typecheck failed in void wxColourData::SetChooseFull(bool flag) function, expected prototype:\nvoid wxColourData::SetChooseFull(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxColourData::SetChooseFull(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetChooseFull(flag);

		return 0;
	}

	// void wxColourData::SetColour(const wxColour & colour)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxColourData::SetColour(const wxColour & colour) function, expected prototype:\nvoid wxColourData::SetColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourData::SetColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxColourData::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(colour);

		return 0;
	}

	// void wxColourData::SetCustomColour(int i, const wxColour & colour)
	static int _bind_SetCustomColour(lua_State *L) {
		if (!_lg_typecheck_SetCustomColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxColourData::SetCustomColour(int i, const wxColour & colour) function, expected prototype:\nvoid wxColourData::SetCustomColour(int i, const wxColour & colour)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourData::SetCustomColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxColourData::SetCustomColour(int, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCustomColour(i, colour);

		return 0;
	}

	// wxString wxColourData::ToString() const
	static int _bind_ToString(lua_State *L) {
		if (!_lg_typecheck_ToString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxColourData::ToString() const function, expected prototype:\nwxString wxColourData::ToString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxColourData::ToString() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ToString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxColourData::FromString(const wxString & str)
	static int _bind_FromString(lua_State *L) {
		if (!_lg_typecheck_FromString(L)) {
			luaL_error(L, "luna typecheck failed in bool wxColourData::FromString(const wxString & str) function, expected prototype:\nbool wxColourData::FromString(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxColourData::FromString(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->FromString(str);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxColourData::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxColourData::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxColourData::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxColourData::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxColourData::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:
	// wxColourData & wxColourData::operator=(const wxColourData & data)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxColourData & wxColourData::operator=(const wxColourData & data) function, expected prototype:\nwxColourData & wxColourData::operator=(const wxColourData & data)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColourData* data_ptr=(Luna< wxObject >::checkSubType< wxColourData >(L,2));
		if( !data_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg data in wxColourData::operator= function");
		}
		const wxColourData & data=*data_ptr;

		wxColourData* self=Luna< wxObject >::checkSubType< wxColourData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColourData & wxColourData::operator=(const wxColourData &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxColourData* lret = &self->operator=(data);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColourData >::push(L,lret,false);

		return 1;
	}


};

wxColourData* LunaTraits< wxColourData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColourData::_bind_ctor(L);
}

void LunaTraits< wxColourData >::_bind_dtor(wxColourData* obj) {
	delete obj;
}

const char LunaTraits< wxColourData >::className[] = "wxColourData";
const char LunaTraits< wxColourData >::fullName[] = "wxColourData";
const char LunaTraits< wxColourData >::moduleName[] = "wx";
const char* LunaTraits< wxColourData >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxColourData >::hash = 34771222;
const int LunaTraits< wxColourData >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxColourData >::methods[] = {
	{"GetChooseFull", &luna_wrapper_wxColourData::_bind_GetChooseFull},
	{"GetColour", &luna_wrapper_wxColourData::_bind_GetColour},
	{"GetCustomColour", &luna_wrapper_wxColourData::_bind_GetCustomColour},
	{"SetChooseFull", &luna_wrapper_wxColourData::_bind_SetChooseFull},
	{"SetColour", &luna_wrapper_wxColourData::_bind_SetColour},
	{"SetCustomColour", &luna_wrapper_wxColourData::_bind_SetCustomColour},
	{"ToString", &luna_wrapper_wxColourData::_bind_ToString},
	{"FromString", &luna_wrapper_wxColourData::_bind_FromString},
	{"base_GetClassInfo", &luna_wrapper_wxColourData::_bind_base_GetClassInfo},
	{"op_assign", &luna_wrapper_wxColourData::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxColourData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxColourData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxColourData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourData >::converters[] = {
	{"wxObject", &luna_wrapper_wxColourData::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourData >::enumValues[] = {
	{0,0}
};


