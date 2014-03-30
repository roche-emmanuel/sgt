#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogInterposer.h>

class luna_wrapper_wxLogInterposer {
public:
	typedef Luna< wxLogInterposer > luna_t;

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

		wxLogInterposer* self= (wxLogInterposer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLogInterposer >::push(L,self,false);
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
		//wxLogInterposer* ptr= dynamic_cast< wxLogInterposer* >(Luna< wxLog >::check(L,1));
		wxLogInterposer* ptr= luna_caster< wxLog, wxLogInterposer >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogInterposer >::push(L,ptr,false);
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
	// wxLogInterposer::wxLogInterposer()
	static wxLogInterposer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxLogInterposer::wxLogInterposer() function, expected prototype:\nwxLogInterposer::wxLogInterposer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxLogInterposer();
	}

	// wxLogInterposer::wxLogInterposer(lua_Table * data)
	static wxLogInterposer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxLogInterposer::wxLogInterposer(lua_Table * data) function, expected prototype:\nwxLogInterposer::wxLogInterposer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxLogInterposer(L,NULL);
	}

	// Overload binder for wxLogInterposer::wxLogInterposer
	static wxLogInterposer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxLogInterposer, cannot match any of the overloads for function wxLogInterposer:\n  wxLogInterposer()\n  wxLogInterposer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void wxLogInterposer::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogInterposer::base_Flush() function, expected prototype:\nvoid wxLogInterposer::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogInterposer* self=Luna< wxLog >::checkSubType< wxLogInterposer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogInterposer::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogInterposer::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogInterposer* LunaTraits< wxLogInterposer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxLogInterposer::_bind_ctor(L);
}

void LunaTraits< wxLogInterposer >::_bind_dtor(wxLogInterposer* obj) {
	delete obj;
}

const char LunaTraits< wxLogInterposer >::className[] = "wxLogInterposer";
const char LunaTraits< wxLogInterposer >::fullName[] = "wxLogInterposer";
const char LunaTraits< wxLogInterposer >::moduleName[] = "wx";
const char* LunaTraits< wxLogInterposer >::parents[] = {"wx.wxLogChain", 0};
const int LunaTraits< wxLogInterposer >::hash = 78430902;
const int LunaTraits< wxLogInterposer >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogInterposer >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogInterposer::_bind_base_Flush},
	{"fromVoid", &luna_wrapper_wxLogInterposer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLogInterposer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLogInterposer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogInterposer >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogInterposer::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogInterposer >::enumValues[] = {
	{0,0}
};


