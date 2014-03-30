#include <plug_common.h>

#include <luna/wrappers/wrapper_wxModule.h>

class luna_wrapper_wxModule {
public:
	typedef Luna< wxModule > luna_t;

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

		wxModule* self= (wxModule*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxModule >::push(L,self,false);
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
		//wxModule* ptr= dynamic_cast< wxModule* >(Luna< wxObject >::check(L,1));
		wxModule* ptr= luna_caster< wxObject, wxModule >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxModule >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_OnExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnInit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxModule::wxModule(lua_Table * data)
	static wxModule* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxModule::wxModule(lua_Table * data) function, expected prototype:\nwxModule::wxModule(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxModule(L,NULL);
	}


	// Function binds:
	// void wxModule::OnExit()
	static int _bind_OnExit(lua_State *L) {
		if (!_lg_typecheck_OnExit(L)) {
			luaL_error(L, "luna typecheck failed in void wxModule::OnExit() function, expected prototype:\nvoid wxModule::OnExit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxModule* self=Luna< wxObject >::checkSubType< wxModule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxModule::OnExit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnExit();

		return 0;
	}

	// bool wxModule::OnInit()
	static int _bind_OnInit(lua_State *L) {
		if (!_lg_typecheck_OnInit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxModule::OnInit() function, expected prototype:\nbool wxModule::OnInit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxModule* self=Luna< wxObject >::checkSubType< wxModule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxModule::OnInit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnInit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxModule::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxModule::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxModule::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxModule* self=Luna< wxObject >::checkSubType< wxModule >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxModule::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxModule::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxModule* LunaTraits< wxModule >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxModule::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxModule::OnExit()
	// bool wxModule::OnInit()
}

void LunaTraits< wxModule >::_bind_dtor(wxModule* obj) {
	delete obj;
}

const char LunaTraits< wxModule >::className[] = "wxModule";
const char LunaTraits< wxModule >::fullName[] = "wxModule";
const char LunaTraits< wxModule >::moduleName[] = "wx";
const char* LunaTraits< wxModule >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxModule >::hash = 11397996;
const int LunaTraits< wxModule >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxModule >::methods[] = {
	{"OnExit", &luna_wrapper_wxModule::_bind_OnExit},
	{"OnInit", &luna_wrapper_wxModule::_bind_OnInit},
	{"base_GetClassInfo", &luna_wrapper_wxModule::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxModule::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxModule::_bind_asVoid},
	{"getTable", &luna_wrapper_wxModule::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxModule >::converters[] = {
	{"wxObject", &luna_wrapper_wxModule::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxModule >::enumValues[] = {
	{0,0}
};


