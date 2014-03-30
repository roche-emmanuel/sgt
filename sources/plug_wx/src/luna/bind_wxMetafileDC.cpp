#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMetafileDC.h>

class luna_wrapper_wxMetafileDC {
public:
	typedef Luna< wxMetafileDC > luna_t;

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

		wxMetafileDC* self= (wxMetafileDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMetafileDC >::push(L,self,false);
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
		//wxMetafileDC* ptr= dynamic_cast< wxMetafileDC* >(Luna< wxObject >::check(L,1));
		wxMetafileDC* ptr= luna_caster< wxObject, wxMetafileDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMetafileDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Close(lua_State *L) {
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

	// Function binds:
	// wxMetafile * wxMetafileDC::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in wxMetafile * wxMetafileDC::Close() function, expected prototype:\nwxMetafile * wxMetafileDC::Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMetafileDC* self=Luna< wxObject >::checkSubType< wxMetafileDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMetafile * wxMetafileDC::Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMetafile * lret = self->Close();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMetafile >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxMetafileDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMetafileDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMetafileDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMetafileDC* self=Luna< wxObject >::checkSubType< wxMetafileDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMetafileDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMetafileDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMetafileDC* LunaTraits< wxMetafileDC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxMetafileDC >::_bind_dtor(wxMetafileDC* obj) {
	delete obj;
}

const char LunaTraits< wxMetafileDC >::className[] = "wxMetafileDC";
const char LunaTraits< wxMetafileDC >::fullName[] = "wxMetafileDC";
const char LunaTraits< wxMetafileDC >::moduleName[] = "wx";
const char* LunaTraits< wxMetafileDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxMetafileDC >::hash = 65035357;
const int LunaTraits< wxMetafileDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMetafileDC >::methods[] = {
	{"Close", &luna_wrapper_wxMetafileDC::_bind_Close},
	{"base_GetClassInfo", &luna_wrapper_wxMetafileDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxMetafileDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMetafileDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMetafileDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMetafileDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMetafileDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMetafileDC >::enumValues[] = {
	{0,0}
};


