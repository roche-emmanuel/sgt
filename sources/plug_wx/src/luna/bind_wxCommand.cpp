#include <plug_common.h>

#include <luna/wrappers/wrapper_wxCommand.h>

class luna_wrapper_wxCommand {
public:
	typedef Luna< wxCommand > luna_t;

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

		wxCommand* self= (wxCommand*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCommand >::push(L,self,false);
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
		//wxCommand* ptr= dynamic_cast< wxCommand* >(Luna< wxObject >::check(L,1));
		wxCommand* ptr= luna_caster< wxObject, wxCommand >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxCommand >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Do(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCommand::wxCommand(lua_Table * data, bool canUndo = false, const wxString & name = wxEmptyString)
	static wxCommand* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxCommand::wxCommand(lua_Table * data, bool canUndo = false, const wxString & name = wxEmptyString) function, expected prototype:\nwxCommand::wxCommand(lua_Table * data, bool canUndo = false, const wxString & name = wxEmptyString)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool canUndo=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;
		wxString name(lua_tostring(L,3),lua_objlen(L,3));

		return new wrapper_wxCommand(L,NULL, canUndo, name);
	}


	// Function binds:
	// bool wxCommand::CanUndo() const
	static int _bind_CanUndo(lua_State *L) {
		if (!_lg_typecheck_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCommand::CanUndo() const function, expected prototype:\nbool wxCommand::CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCommand::CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCommand::Do()
	static int _bind_Do(lua_State *L) {
		if (!_lg_typecheck_Do(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCommand::Do() function, expected prototype:\nbool wxCommand::Do()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCommand::Do(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Do();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxCommand::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxCommand::GetName() const function, expected prototype:\nwxString wxCommand::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxCommand::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxCommand::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCommand::Undo() function, expected prototype:\nbool wxCommand::Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCommand::Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Undo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxCommand::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxCommand::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxCommand::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxCommand::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxCommand::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxCommand::base_CanUndo() const
	static int _bind_base_CanUndo(lua_State *L) {
		if (!_lg_typecheck_base_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCommand::base_CanUndo() const function, expected prototype:\nbool wxCommand::base_CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCommand::base_CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxCommand::CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxCommand::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxCommand::base_GetName() const function, expected prototype:\nwxString wxCommand::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCommand* self=Luna< wxObject >::checkSubType< wxCommand >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxCommand::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxCommand::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxCommand* LunaTraits< wxCommand >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCommand::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxCommand::Do()
	// bool wxCommand::Undo()
}

void LunaTraits< wxCommand >::_bind_dtor(wxCommand* obj) {
	delete obj;
}

const char LunaTraits< wxCommand >::className[] = "wxCommand";
const char LunaTraits< wxCommand >::fullName[] = "wxCommand";
const char LunaTraits< wxCommand >::moduleName[] = "wx";
const char* LunaTraits< wxCommand >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxCommand >::hash = 86364916;
const int LunaTraits< wxCommand >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxCommand >::methods[] = {
	{"CanUndo", &luna_wrapper_wxCommand::_bind_CanUndo},
	{"Do", &luna_wrapper_wxCommand::_bind_Do},
	{"GetName", &luna_wrapper_wxCommand::_bind_GetName},
	{"Undo", &luna_wrapper_wxCommand::_bind_Undo},
	{"base_GetClassInfo", &luna_wrapper_wxCommand::_bind_base_GetClassInfo},
	{"base_CanUndo", &luna_wrapper_wxCommand::_bind_base_CanUndo},
	{"base_GetName", &luna_wrapper_wxCommand::_bind_base_GetName},
	{"fromVoid", &luna_wrapper_wxCommand::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCommand::_bind_asVoid},
	{"getTable", &luna_wrapper_wxCommand::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxCommand >::converters[] = {
	{"wxObject", &luna_wrapper_wxCommand::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxCommand >::enumValues[] = {
	{0,0}
};


