#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogGui.h>

class luna_wrapper_wxLogGui {
public:
	typedef Luna< wxLogGui > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxLog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxLogGui* self= (wxLogGui*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLogGui >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLogGui* ptr= dynamic_cast< wxLogGui* >(Luna< wxLog >::check(L,1));
		wxLogGui* ptr= luna_caster< wxLog, wxLogGui >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogGui >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogGui::wxLogGui()
	static wxLogGui* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxLogGui::wxLogGui() function, expected prototype:\nwxLogGui::wxLogGui()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxLogGui();
	}

	// wxLogGui::wxLogGui(lua_Table * data)
	static wxLogGui* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxLogGui::wxLogGui(lua_Table * data) function, expected prototype:\nwxLogGui::wxLogGui(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxLogGui(L,NULL);
	}

	// Overload binder for wxLogGui::wxLogGui
	static wxLogGui* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogGui, cannot match any of the overloads for function wxLogGui:\n  wxLogGui()\n  wxLogGui(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogGui::Flush()
	static int _bind_Flush(lua_State *L) {
		if (!_lg_typecheck_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogGui::Flush() function, expected prototype:\nvoid wxLogGui::Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogGui* self=Luna< wxLog >::checkSubType< wxLogGui >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogGui::Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Flush();

		return 0;
	}

	// void wxLogGui::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogGui::base_Flush() function, expected prototype:\nvoid wxLogGui::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogGui* self=Luna< wxLog >::checkSubType< wxLogGui >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogGui::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogGui::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogGui* LunaTraits< wxLogGui >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogGui::_bind_ctor(L);
}

void LunaTraits< wxLogGui >::_bind_dtor(wxLogGui* obj) {
	delete obj;
}

const char LunaTraits< wxLogGui >::className[] = "wxLogGui";
const char LunaTraits< wxLogGui >::fullName[] = "wxLogGui";
const char LunaTraits< wxLogGui >::moduleName[] = "wx";
const char* LunaTraits< wxLogGui >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogGui >::hash = 82814303;
const int LunaTraits< wxLogGui >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogGui >::methods[] = {
	{"Flush", &luna_wrapper_wxLogGui::_bind_Flush},
	{"base_Flush", &luna_wrapper_wxLogGui::_bind_base_Flush},
	{"fromVoid", &luna_wrapper_wxLogGui::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLogGui::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLogGui::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogGui >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogGui::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogGui >::enumValues[] = {
	{0,0}
};


