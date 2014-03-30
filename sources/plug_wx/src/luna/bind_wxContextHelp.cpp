#include <plug_common.h>

#include <luna/wrappers/wrapper_wxContextHelp.h>

class luna_wrapper_wxContextHelp {
public:
	typedef Luna< wxContextHelp > luna_t;

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

		wxContextHelp* self= (wxContextHelp*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxContextHelp >::push(L,self,false);
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
		//wxContextHelp* ptr= dynamic_cast< wxContextHelp* >(Luna< wxObject >::check(L,1));
		wxContextHelp* ptr= luna_caster< wxObject, wxContextHelp >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextHelp >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_BeginContextHelp(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndContextHelp(lua_State *L) {
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
	// wxContextHelp::wxContextHelp(wxWindow * window = NULL, bool doNow = true)
	static wxContextHelp* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxContextHelp::wxContextHelp(wxWindow * window = NULL, bool doNow = true) function, expected prototype:\nwxContextHelp::wxContextHelp(wxWindow * window = NULL, bool doNow = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=luatop>0 ? (Luna< wxObject >::checkSubType< wxWindow >(L,1)) : (wxWindow*)NULL;
		bool doNow=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new wxContextHelp(window, doNow);
	}

	// wxContextHelp::wxContextHelp(lua_Table * data, wxWindow * window = NULL, bool doNow = true)
	static wxContextHelp* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxContextHelp::wxContextHelp(lua_Table * data, wxWindow * window = NULL, bool doNow = true) function, expected prototype:\nwxContextHelp::wxContextHelp(lua_Table * data, wxWindow * window = NULL, bool doNow = true)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* window=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;
		bool doNow=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_wxContextHelp(L,NULL, window, doNow);
	}

	// Overload binder for wxContextHelp::wxContextHelp
	static wxContextHelp* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxContextHelp, cannot match any of the overloads for function wxContextHelp:\n  wxContextHelp(wxWindow *, bool)\n  wxContextHelp(lua_Table *, wxWindow *, bool)\n");
		return NULL;
	}


	// Function binds:
	// bool wxContextHelp::BeginContextHelp(wxWindow * window)
	static int _bind_BeginContextHelp(lua_State *L) {
		if (!_lg_typecheck_BeginContextHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxContextHelp::BeginContextHelp(wxWindow * window) function, expected prototype:\nbool wxContextHelp::BeginContextHelp(wxWindow * window)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* window=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxContextHelp* self=Luna< wxObject >::checkSubType< wxContextHelp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxContextHelp::BeginContextHelp(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->BeginContextHelp(window);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxContextHelp::EndContextHelp()
	static int _bind_EndContextHelp(lua_State *L) {
		if (!_lg_typecheck_EndContextHelp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxContextHelp::EndContextHelp() function, expected prototype:\nbool wxContextHelp::EndContextHelp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxContextHelp* self=Luna< wxObject >::checkSubType< wxContextHelp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxContextHelp::EndContextHelp(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EndContextHelp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxContextHelp::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxContextHelp::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxContextHelp::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxContextHelp* self=Luna< wxObject >::checkSubType< wxContextHelp >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxContextHelp::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxContextHelp::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxContextHelp* LunaTraits< wxContextHelp >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxContextHelp::_bind_ctor(L);
}

void LunaTraits< wxContextHelp >::_bind_dtor(wxContextHelp* obj) {
	delete obj;
}

const char LunaTraits< wxContextHelp >::className[] = "wxContextHelp";
const char LunaTraits< wxContextHelp >::fullName[] = "wxContextHelp";
const char LunaTraits< wxContextHelp >::moduleName[] = "wx";
const char* LunaTraits< wxContextHelp >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxContextHelp >::hash = 38167988;
const int LunaTraits< wxContextHelp >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxContextHelp >::methods[] = {
	{"BeginContextHelp", &luna_wrapper_wxContextHelp::_bind_BeginContextHelp},
	{"EndContextHelp", &luna_wrapper_wxContextHelp::_bind_EndContextHelp},
	{"base_GetClassInfo", &luna_wrapper_wxContextHelp::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxContextHelp::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxContextHelp::_bind_asVoid},
	{"getTable", &luna_wrapper_wxContextHelp::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxContextHelp >::converters[] = {
	{"wxObject", &luna_wrapper_wxContextHelp::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxContextHelp >::enumValues[] = {
	{0,0}
};


