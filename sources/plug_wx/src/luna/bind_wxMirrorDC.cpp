#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMirrorDC.h>

class luna_wrapper_wxMirrorDC {
public:
	typedef Luna< wxMirrorDC > luna_t;

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

		wxMirrorDC* self= (wxMirrorDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMirrorDC >::push(L,self,false);
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
		//wxMirrorDC* ptr= dynamic_cast< wxMirrorDC* >(Luna< wxObject >::check(L,1));
		wxMirrorDC* ptr= luna_caster< wxObject, wxMirrorDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMirrorDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,2))) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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
	// wxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror)
	static wxMirrorDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror) function, expected prototype:\nwxMirrorDC::wxMirrorDC(wxDC & dc, bool mirror)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxMirrorDC::wxMirrorDC function");
		}
		wxDC & dc=*dc_ptr;
		bool mirror=(bool)(lua_toboolean(L,2)==1);

		return new wxMirrorDC(dc, mirror);
	}

	// wxMirrorDC::wxMirrorDC(lua_Table * data, wxDC & dc, bool mirror)
	static wxMirrorDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMirrorDC::wxMirrorDC(lua_Table * data, wxDC & dc, bool mirror) function, expected prototype:\nwxMirrorDC::wxMirrorDC(lua_Table * data, wxDC & dc, bool mirror)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,2));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxMirrorDC::wxMirrorDC function");
		}
		wxDC & dc=*dc_ptr;
		bool mirror=(bool)(lua_toboolean(L,3)==1);

		return new wrapper_wxMirrorDC(L,NULL, dc, mirror);
	}

	// Overload binder for wxMirrorDC::wxMirrorDC
	static wxMirrorDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMirrorDC, cannot match any of the overloads for function wxMirrorDC:\n  wxMirrorDC(wxDC &, bool)\n  wxMirrorDC(lua_Table *, wxDC &, bool)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxMirrorDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMirrorDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMirrorDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMirrorDC* self=Luna< wxObject >::checkSubType< wxMirrorDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMirrorDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMirrorDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMirrorDC* LunaTraits< wxMirrorDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMirrorDC::_bind_ctor(L);
}

void LunaTraits< wxMirrorDC >::_bind_dtor(wxMirrorDC* obj) {
	delete obj;
}

const char LunaTraits< wxMirrorDC >::className[] = "wxMirrorDC";
const char LunaTraits< wxMirrorDC >::fullName[] = "wxMirrorDC";
const char LunaTraits< wxMirrorDC >::moduleName[] = "wx";
const char* LunaTraits< wxMirrorDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxMirrorDC >::hash = 26593093;
const int LunaTraits< wxMirrorDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMirrorDC >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMirrorDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxMirrorDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMirrorDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMirrorDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMirrorDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMirrorDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMirrorDC >::enumValues[] = {
	{0,0}
};


