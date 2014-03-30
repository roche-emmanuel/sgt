#include <plug_common.h>

#include <luna/wrappers/wrapper_wxScreenDC.h>

class luna_wrapper_wxScreenDC {
public:
	typedef Luna< wxScreenDC > luna_t;

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

		wxScreenDC* self= (wxScreenDC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxScreenDC >::push(L,self,false);
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
		//wxScreenDC* ptr= dynamic_cast< wxScreenDC* >(Luna< wxObject >::check(L,1));
		wxScreenDC* ptr= luna_caster< wxObject, wxScreenDC >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxScreenDC >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_EndDrawingOnTop(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_StartDrawingOnTop_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StartDrawingOnTop_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,20234418)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxRect >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxScreenDC::wxScreenDC()
	static wxScreenDC* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxScreenDC::wxScreenDC() function, expected prototype:\nwxScreenDC::wxScreenDC()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxScreenDC();
	}

	// wxScreenDC::wxScreenDC(lua_Table * data)
	static wxScreenDC* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxScreenDC::wxScreenDC(lua_Table * data) function, expected prototype:\nwxScreenDC::wxScreenDC(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxScreenDC(L,NULL);
	}

	// Overload binder for wxScreenDC::wxScreenDC
	static wxScreenDC* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxScreenDC, cannot match any of the overloads for function wxScreenDC:\n  wxScreenDC()\n  wxScreenDC(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// static bool wxScreenDC::EndDrawingOnTop()
	static int _bind_EndDrawingOnTop(lua_State *L) {
		if (!_lg_typecheck_EndDrawingOnTop(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxScreenDC::EndDrawingOnTop() function, expected prototype:\nstatic bool wxScreenDC::EndDrawingOnTop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxScreenDC::EndDrawingOnTop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxScreenDC::StartDrawingOnTop(wxWindow * window)
	static int _bind_StartDrawingOnTop_overload_1(lua_State *L) {
		if (!_lg_typecheck_StartDrawingOnTop_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxScreenDC::StartDrawingOnTop(wxWindow * window) function, expected prototype:\nstatic bool wxScreenDC::StartDrawingOnTop(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		bool lret = wxScreenDC::StartDrawingOnTop(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxScreenDC::StartDrawingOnTop(wxRect * rect = NULL)
	static int _bind_StartDrawingOnTop_overload_2(lua_State *L) {
		if (!_lg_typecheck_StartDrawingOnTop_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxScreenDC::StartDrawingOnTop(wxRect * rect = NULL) function, expected prototype:\nstatic bool wxScreenDC::StartDrawingOnTop(wxRect * rect = NULL)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxRect* rect=luatop>0 ? (Luna< wxRect >::check(L,1)) : (wxRect*)NULL;

		bool lret = wxScreenDC::StartDrawingOnTop(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxScreenDC::StartDrawingOnTop
	static int _bind_StartDrawingOnTop(lua_State *L) {
		if (_lg_typecheck_StartDrawingOnTop_overload_1(L)) return _bind_StartDrawingOnTop_overload_1(L);
		if (_lg_typecheck_StartDrawingOnTop_overload_2(L)) return _bind_StartDrawingOnTop_overload_2(L);

		luaL_error(L, "error in function StartDrawingOnTop, cannot match any of the overloads for function StartDrawingOnTop:\n  StartDrawingOnTop(wxWindow *)\n  StartDrawingOnTop(wxRect *)\n");
		return 0;
	}

	// wxClassInfo * wxScreenDC::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxScreenDC::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxScreenDC::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxScreenDC* self=Luna< wxObject >::checkSubType< wxScreenDC >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxScreenDC::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxScreenDC::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxScreenDC* LunaTraits< wxScreenDC >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxScreenDC::_bind_ctor(L);
}

void LunaTraits< wxScreenDC >::_bind_dtor(wxScreenDC* obj) {
	delete obj;
}

const char LunaTraits< wxScreenDC >::className[] = "wxScreenDC";
const char LunaTraits< wxScreenDC >::fullName[] = "wxScreenDC";
const char LunaTraits< wxScreenDC >::moduleName[] = "wx";
const char* LunaTraits< wxScreenDC >::parents[] = {"wx.wxDC", 0};
const int LunaTraits< wxScreenDC >::hash = 64934749;
const int LunaTraits< wxScreenDC >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxScreenDC >::methods[] = {
	{"EndDrawingOnTop", &luna_wrapper_wxScreenDC::_bind_EndDrawingOnTop},
	{"StartDrawingOnTop", &luna_wrapper_wxScreenDC::_bind_StartDrawingOnTop},
	{"base_GetClassInfo", &luna_wrapper_wxScreenDC::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxScreenDC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxScreenDC::_bind_asVoid},
	{"getTable", &luna_wrapper_wxScreenDC::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxScreenDC >::converters[] = {
	{"wxObject", &luna_wrapper_wxScreenDC::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxScreenDC >::enumValues[] = {
	{0,0}
};


