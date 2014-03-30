#include <plug_common.h>

class luna_wrapper_wxKeyboardState {
public:
	typedef Luna< wxKeyboardState > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxKeyboardState* self= (wxKeyboardState*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxKeyboardState >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxKeyboardState* self=(Luna< wxKeyboardState >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxKeyboardState");
		
		return luna_dynamicCast(L,converters,"wxKeyboardState",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && lua_isboolean(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasModifiers(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ControlDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RawControlDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShiftDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AltDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CmdDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetControlDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRawControlDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShiftDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAltDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMetaDown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxKeyboardState::wxKeyboardState(bool controlDown = false, bool shiftDown = false, bool altDown = false, bool metaDown = false)
	static wxKeyboardState* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxKeyboardState::wxKeyboardState(bool controlDown = false, bool shiftDown = false, bool altDown = false, bool metaDown = false) function, expected prototype:\nwxKeyboardState::wxKeyboardState(bool controlDown = false, bool shiftDown = false, bool altDown = false, bool metaDown = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool controlDown=luatop>0 ? (bool)(lua_toboolean(L,1)==1) : (bool)false;
		bool shiftDown=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;
		bool altDown=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		bool metaDown=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		return new wxKeyboardState(controlDown, shiftDown, altDown, metaDown);
	}


	// Function binds:
	// int wxKeyboardState::GetModifiers() const
	static int _bind_GetModifiers(lua_State *L) {
		if (!_lg_typecheck_GetModifiers(L)) {
			luaL_error(L, "luna typecheck failed in int wxKeyboardState::GetModifiers() const function, expected prototype:\nint wxKeyboardState::GetModifiers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxKeyboardState::GetModifiers() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetModifiers();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxKeyboardState::HasModifiers() const
	static int _bind_HasModifiers(lua_State *L) {
		if (!_lg_typecheck_HasModifiers(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::HasModifiers() const function, expected prototype:\nbool wxKeyboardState::HasModifiers() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::HasModifiers() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasModifiers();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::ControlDown() const function, expected prototype:\nbool wxKeyboardState::ControlDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::ControlDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::RawControlDown() const
	static int _bind_RawControlDown(lua_State *L) {
		if (!_lg_typecheck_RawControlDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::RawControlDown() const function, expected prototype:\nbool wxKeyboardState::RawControlDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::RawControlDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RawControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::ShiftDown() const function, expected prototype:\nbool wxKeyboardState::ShiftDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::ShiftDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::MetaDown() const function, expected prototype:\nbool wxKeyboardState::MetaDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::MetaDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::AltDown() const function, expected prototype:\nbool wxKeyboardState::AltDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::AltDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxKeyboardState::CmdDown() const
	static int _bind_CmdDown(lua_State *L) {
		if (!_lg_typecheck_CmdDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxKeyboardState::CmdDown() const function, expected prototype:\nbool wxKeyboardState::CmdDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxKeyboardState::CmdDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CmdDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxKeyboardState::SetControlDown(bool down)
	static int _bind_SetControlDown(lua_State *L) {
		if (!_lg_typecheck_SetControlDown(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetControlDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetControlDown(bool down)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetControlDown(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetControlDown(down);

		return 0;
	}

	// void wxKeyboardState::SetRawControlDown(bool down)
	static int _bind_SetRawControlDown(lua_State *L) {
		if (!_lg_typecheck_SetRawControlDown(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetRawControlDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetRawControlDown(bool down)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetRawControlDown(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRawControlDown(down);

		return 0;
	}

	// void wxKeyboardState::SetShiftDown(bool down)
	static int _bind_SetShiftDown(lua_State *L) {
		if (!_lg_typecheck_SetShiftDown(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetShiftDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetShiftDown(bool down)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetShiftDown(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetShiftDown(down);

		return 0;
	}

	// void wxKeyboardState::SetAltDown(bool down)
	static int _bind_SetAltDown(lua_State *L) {
		if (!_lg_typecheck_SetAltDown(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetAltDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetAltDown(bool down)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetAltDown(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAltDown(down);

		return 0;
	}

	// void wxKeyboardState::SetMetaDown(bool down)
	static int _bind_SetMetaDown(lua_State *L) {
		if (!_lg_typecheck_SetMetaDown(L)) {
			luaL_error(L, "luna typecheck failed in void wxKeyboardState::SetMetaDown(bool down) function, expected prototype:\nvoid wxKeyboardState::SetMetaDown(bool down)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool down=(bool)(lua_toboolean(L,2)==1);

		wxKeyboardState* self=Luna< wxObject >::checkSubType< wxKeyboardState >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxKeyboardState::SetMetaDown(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMetaDown(down);

		return 0;
	}


	// Operator binds:

};

wxKeyboardState* LunaTraits< wxKeyboardState >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxKeyboardState::_bind_ctor(L);
}

void LunaTraits< wxKeyboardState >::_bind_dtor(wxKeyboardState* obj) {
	delete obj;
}

const char LunaTraits< wxKeyboardState >::className[] = "wxKeyboardState";
const char LunaTraits< wxKeyboardState >::fullName[] = "wxKeyboardState";
const char LunaTraits< wxKeyboardState >::moduleName[] = "wx";
const char* LunaTraits< wxKeyboardState >::parents[] = {0};
const int LunaTraits< wxKeyboardState >::hash = 92036952;
const int LunaTraits< wxKeyboardState >::uniqueIDs[] = {92036952,0};

luna_RegType LunaTraits< wxKeyboardState >::methods[] = {
	{"GetModifiers", &luna_wrapper_wxKeyboardState::_bind_GetModifiers},
	{"HasModifiers", &luna_wrapper_wxKeyboardState::_bind_HasModifiers},
	{"ControlDown", &luna_wrapper_wxKeyboardState::_bind_ControlDown},
	{"RawControlDown", &luna_wrapper_wxKeyboardState::_bind_RawControlDown},
	{"ShiftDown", &luna_wrapper_wxKeyboardState::_bind_ShiftDown},
	{"MetaDown", &luna_wrapper_wxKeyboardState::_bind_MetaDown},
	{"AltDown", &luna_wrapper_wxKeyboardState::_bind_AltDown},
	{"CmdDown", &luna_wrapper_wxKeyboardState::_bind_CmdDown},
	{"SetControlDown", &luna_wrapper_wxKeyboardState::_bind_SetControlDown},
	{"SetRawControlDown", &luna_wrapper_wxKeyboardState::_bind_SetRawControlDown},
	{"SetShiftDown", &luna_wrapper_wxKeyboardState::_bind_SetShiftDown},
	{"SetAltDown", &luna_wrapper_wxKeyboardState::_bind_SetAltDown},
	{"SetMetaDown", &luna_wrapper_wxKeyboardState::_bind_SetMetaDown},
	{"dynCast", &luna_wrapper_wxKeyboardState::_bind_dynCast},
	{"__eq", &luna_wrapper_wxKeyboardState::_bind___eq},
	{"fromVoid", &luna_wrapper_wxKeyboardState::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxKeyboardState::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxKeyboardState >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxKeyboardState >::enumValues[] = {
	{0,0}
};


