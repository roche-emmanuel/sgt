#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMemoryDC.h>

class luna_wrapper_wxMemoryDC {
public:
	typedef Luna< wxMemoryDC > luna_t;

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

		wxMemoryDC* self= (wxMemoryDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMemoryDC >::push(L,self,false);
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
		//wxMemoryDC* ptr= dynamic_cast< wxMemoryDC* >(Luna< wxObject >::check(L,1));
		wxMemoryDC* ptr= luna_caster< wxObject, wxMemoryDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMemoryDC >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxDC >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxDC >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxBitmap >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SelectObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectObjectAsSource(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMemoryDC::wxMemoryDC()
	static wxMemoryDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC() function, expected prototype:\nwxMemoryDC::wxMemoryDC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxMemoryDC();
	}

	// wxMemoryDC::wxMemoryDC(wxDC * dc)
	static wxMemoryDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(wxDC * dc) function, expected prototype:\nwxMemoryDC::wxMemoryDC(wxDC * dc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,1));

		return new wxMemoryDC(dc);
	}

	// wxMemoryDC::wxMemoryDC(wxBitmap & bitmap)
	static wxMemoryDC* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(wxBitmap & bitmap) function, expected prototype:\nwxMemoryDC::wxMemoryDC(wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,1));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::wxMemoryDC function");
		}
		wxBitmap & bitmap=*bitmap_ptr;

		return new wxMemoryDC(bitmap);
	}

	// wxMemoryDC::wxMemoryDC(lua_Table * data)
	static wxMemoryDC* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(lua_Table * data) function, expected prototype:\nwxMemoryDC::wxMemoryDC(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMemoryDC(L,NULL);
	}

	// wxMemoryDC::wxMemoryDC(lua_Table * data, wxDC * dc)
	static wxMemoryDC* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(lua_Table * data, wxDC * dc) function, expected prototype:\nwxMemoryDC::wxMemoryDC(lua_Table * data, wxDC * dc)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc=(Luna< wxObject >::checkSubType< wxDC >(L,2));

		return new wrapper_wxMemoryDC(L,NULL, dc);
	}

	// wxMemoryDC::wxMemoryDC(lua_Table * data, wxBitmap & bitmap)
	static wxMemoryDC* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxMemoryDC::wxMemoryDC(lua_Table * data, wxBitmap & bitmap) function, expected prototype:\nwxMemoryDC::wxMemoryDC(lua_Table * data, wxBitmap & bitmap)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::wxMemoryDC function");
		}
		wxBitmap & bitmap=*bitmap_ptr;

		return new wrapper_wxMemoryDC(L,NULL, bitmap);
	}

	// Overload binder for wxMemoryDC::wxMemoryDC
	static wxMemoryDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxMemoryDC, cannot match any of the overloads for function wxMemoryDC:\n  wxMemoryDC()\n  wxMemoryDC(wxDC *)\n  wxMemoryDC(wxBitmap &)\n  wxMemoryDC(lua_Table *)\n  wxMemoryDC(lua_Table *, wxDC *)\n  wxMemoryDC(lua_Table *, wxBitmap &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMemoryDC::SelectObject(wxBitmap & bitmap)
	static int _bind_SelectObject(lua_State *L) {
		if (!_lg_typecheck_SelectObject(L)) {
			luaL_error(L, "luna typecheck failed in void wxMemoryDC::SelectObject(wxBitmap & bitmap) function, expected prototype:\nvoid wxMemoryDC::SelectObject(wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::SelectObject function");
		}
		wxBitmap & bitmap=*bitmap_ptr;

		wxMemoryDC* self=Luna< wxObject >::checkSubType< wxMemoryDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMemoryDC::SelectObject(wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectObject(bitmap);

		return 0;
	}

	// void wxMemoryDC::SelectObjectAsSource(const wxBitmap & bitmap)
	static int _bind_SelectObjectAsSource(lua_State *L) {
		if (!_lg_typecheck_SelectObjectAsSource(L)) {
			luaL_error(L, "luna typecheck failed in void wxMemoryDC::SelectObjectAsSource(const wxBitmap & bitmap) function, expected prototype:\nvoid wxMemoryDC::SelectObjectAsSource(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxMemoryDC::SelectObjectAsSource function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxMemoryDC* self=Luna< wxObject >::checkSubType< wxMemoryDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMemoryDC::SelectObjectAsSource(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectObjectAsSource(bitmap);

		return 0;
	}

	// wxClassInfo * wxMemoryDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMemoryDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMemoryDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMemoryDC* self=Luna< wxObject >::checkSubType< wxMemoryDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMemoryDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMemoryDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxMemoryDC* LunaTraits< wxMemoryDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMemoryDC::_bind_ctor(L);
}

void LunaTraits< wxMemoryDC >::_bind_dtor(wxMemoryDC* obj) {
	delete obj;
}

const char LunaTraits< wxMemoryDC >::className[] = "wxMemoryDC";
const char LunaTraits< wxMemoryDC >::fullName[] = "wxMemoryDC";
const char LunaTraits< wxMemoryDC >::moduleName[] = "wx";
const char* LunaTraits< wxMemoryDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxMemoryDC >::hash = 30758490;
const int LunaTraits< wxMemoryDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMemoryDC >::methods[] = {
	{"SelectObject", &luna_wrapper_wxMemoryDC::_bind_SelectObject},
	{"SelectObjectAsSource", &luna_wrapper_wxMemoryDC::_bind_SelectObjectAsSource},
	{"base_GetClassInfo", &luna_wrapper_wxMemoryDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxMemoryDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMemoryDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMemoryDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMemoryDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxMemoryDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMemoryDC >::enumValues[] = {
	{0,0}
};


