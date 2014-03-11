#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogInterposerTemp.h>

class luna_wrapper_wxLogInterposerTemp {
public:
	typedef Luna< wxLogInterposerTemp > luna_t;

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

		wxLogInterposerTemp* self= (wxLogInterposerTemp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLogInterposerTemp >::push(L,self,false);
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
		//wxLogInterposerTemp* ptr= dynamic_cast< wxLogInterposerTemp* >(Luna< wxLog >::check(L,1));
		wxLogInterposerTemp* ptr= luna_caster< wxLog, wxLogInterposerTemp >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogInterposerTemp >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxLogInterposerTemp::wxLogInterposerTemp()
	static wxLogInterposerTemp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxLogInterposerTemp::wxLogInterposerTemp() function, expected prototype:\nwxLogInterposerTemp::wxLogInterposerTemp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxLogInterposerTemp();
	}

	// wxLogInterposerTemp::wxLogInterposerTemp(lua_Table * data)
	static wxLogInterposerTemp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxLogInterposerTemp::wxLogInterposerTemp(lua_Table * data) function, expected prototype:\nwxLogInterposerTemp::wxLogInterposerTemp(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxLogInterposerTemp(L,NULL);
	}

	// Overload binder for wxLogInterposerTemp::wxLogInterposerTemp
	static wxLogInterposerTemp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogInterposerTemp, cannot match any of the overloads for function wxLogInterposerTemp:\n  wxLogInterposerTemp()\n  wxLogInterposerTemp(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogInterposerTemp::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogInterposerTemp::base_Flush() function, expected prototype:\nvoid wxLogInterposerTemp::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogInterposerTemp* self=Luna< wxLog >::checkSubType< wxLogInterposerTemp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogInterposerTemp::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogInterposerTemp::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogInterposerTemp* LunaTraits< wxLogInterposerTemp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogInterposerTemp::_bind_ctor(L);
}

void LunaTraits< wxLogInterposerTemp >::_bind_dtor(wxLogInterposerTemp* obj) {
	delete obj;
}

const char LunaTraits< wxLogInterposerTemp >::className[] = "wxLogInterposerTemp";
const char LunaTraits< wxLogInterposerTemp >::fullName[] = "wxLogInterposerTemp";
const char LunaTraits< wxLogInterposerTemp >::moduleName[] = "wx";
const char* LunaTraits< wxLogInterposerTemp >::parents[] = {"wx.wxLogChain", 0};
const int LunaTraits< wxLogInterposerTemp >::hash = 76049695;
const int LunaTraits< wxLogInterposerTemp >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogInterposerTemp >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogInterposerTemp::_bind_base_Flush},
	{"fromVoid", &luna_wrapper_wxLogInterposerTemp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLogInterposerTemp::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLogInterposerTemp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogInterposerTemp >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogInterposerTemp::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogInterposerTemp >::enumValues[] = {
	{0,0}
};


