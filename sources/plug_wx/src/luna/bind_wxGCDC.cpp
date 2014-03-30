#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGCDC.h>

class luna_wrapper_wxGCDC {
public:
	typedef Luna< wxGCDC > luna_t;

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

		wxGCDC* self= (wxGCDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGCDC >::push(L,self,false);
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
		//wxGCDC* ptr= dynamic_cast< wxGCDC* >(Luna< wxObject >::check(L,1));
		wxGCDC* ptr= luna_caster< wxObject, wxGCDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGCDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxWindowDC >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMemoryDC >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxWindowDC >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMemoryDC >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGCDC::wxGCDC(const wxWindowDC & windowDC)
	static wxGCDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(const wxWindowDC & windowDC) function, expected prototype:\nwxGCDC::wxGCDC(const wxWindowDC & windowDC)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWindowDC* windowDC_ptr=(Luna< wxObject >::checkSubType< wxWindowDC >(L,1));
		if( !windowDC_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windowDC in wxGCDC::wxGCDC function");
		}
		const wxWindowDC & windowDC=*windowDC_ptr;

		return new wxGCDC(windowDC);
	}

	// wxGCDC::wxGCDC(const wxMemoryDC & memoryDC)
	static wxGCDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(const wxMemoryDC & memoryDC) function, expected prototype:\nwxGCDC::wxGCDC(const wxMemoryDC & memoryDC)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxMemoryDC* memoryDC_ptr=(Luna< wxObject >::checkSubType< wxMemoryDC >(L,1));
		if( !memoryDC_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg memoryDC in wxGCDC::wxGCDC function");
		}
		const wxMemoryDC & memoryDC=*memoryDC_ptr;

		return new wxGCDC(memoryDC);
	}

	// wxGCDC::wxGCDC()
	static wxGCDC* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC() function, expected prototype:\nwxGCDC::wxGCDC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGCDC();
	}

	// wxGCDC::wxGCDC(lua_Table * data, const wxWindowDC & windowDC)
	static wxGCDC* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(lua_Table * data, const wxWindowDC & windowDC) function, expected prototype:\nwxGCDC::wxGCDC(lua_Table * data, const wxWindowDC & windowDC)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWindowDC* windowDC_ptr=(Luna< wxObject >::checkSubType< wxWindowDC >(L,2));
		if( !windowDC_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg windowDC in wxGCDC::wxGCDC function");
		}
		const wxWindowDC & windowDC=*windowDC_ptr;

		return new wrapper_wxGCDC(L,NULL, windowDC);
	}

	// wxGCDC::wxGCDC(lua_Table * data, const wxMemoryDC & memoryDC)
	static wxGCDC* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(lua_Table * data, const wxMemoryDC & memoryDC) function, expected prototype:\nwxGCDC::wxGCDC(lua_Table * data, const wxMemoryDC & memoryDC)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxMemoryDC* memoryDC_ptr=(Luna< wxObject >::checkSubType< wxMemoryDC >(L,2));
		if( !memoryDC_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg memoryDC in wxGCDC::wxGCDC function");
		}
		const wxMemoryDC & memoryDC=*memoryDC_ptr;

		return new wrapper_wxGCDC(L,NULL, memoryDC);
	}

	// wxGCDC::wxGCDC(lua_Table * data)
	static wxGCDC* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxGCDC::wxGCDC(lua_Table * data) function, expected prototype:\nwxGCDC::wxGCDC(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGCDC(L,NULL);
	}

	// Overload binder for wxGCDC::wxGCDC
	static wxGCDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxGCDC, cannot match any of the overloads for function wxGCDC:\n  wxGCDC(const wxWindowDC &)\n  wxGCDC(const wxMemoryDC &)\n  wxGCDC()\n  wxGCDC(lua_Table *, const wxWindowDC &)\n  wxGCDC(lua_Table *, const wxMemoryDC &)\n  wxGCDC(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxGCDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGCDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGCDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGCDC* self=Luna< wxObject >::checkSubType< wxGCDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGCDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGCDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGCDC* LunaTraits< wxGCDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGCDC::_bind_ctor(L);
}

void LunaTraits< wxGCDC >::_bind_dtor(wxGCDC* obj) {
	delete obj;
}

const char LunaTraits< wxGCDC >::className[] = "wxGCDC";
const char LunaTraits< wxGCDC >::fullName[] = "wxGCDC";
const char LunaTraits< wxGCDC >::moduleName[] = "wx";
const char* LunaTraits< wxGCDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxGCDC >::hash = 19873033;
const int LunaTraits< wxGCDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGCDC >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxGCDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxGCDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGCDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGCDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGCDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxGCDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGCDC >::enumValues[] = {
	{0,0}
};


