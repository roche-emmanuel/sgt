#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGLContext.h>

class luna_wrapper_wxGLContext {
public:
	typedef Luna< wxGLContext > luna_t;

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

		wxGLContext* self= (wxGLContext*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGLContext >::push(L,self,false);
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
		//wxGLContext* ptr= dynamic_cast< wxGLContext* >(Luna< wxObject >::check(L,1));
		wxGLContext* ptr= luna_caster< wxObject, wxGLContext >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGLContext >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxGLCanvas >(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxGLContext >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxGLCanvas >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxGLContext >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGLContext::wxGLContext(wxGLCanvas * win, const wxGLContext * other = NULL)
	static wxGLContext* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGLContext::wxGLContext(wxGLCanvas * win, const wxGLContext * other = NULL) function, expected prototype:\nwxGLContext::wxGLContext(wxGLCanvas * win, const wxGLContext * other = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxGLCanvas* win=(Luna< wxObject >::checkSubType< wxGLCanvas >(L,1));
		const wxGLContext* other=luatop>1 ? (Luna< wxObject >::checkSubType< wxGLContext >(L,2)) : (const wxGLContext*)NULL;

		return new wxGLContext(win, other);
	}

	// wxGLContext::wxGLContext(lua_Table * data, wxGLCanvas * win, const wxGLContext * other = NULL)
	static wxGLContext* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGLContext::wxGLContext(lua_Table * data, wxGLCanvas * win, const wxGLContext * other = NULL) function, expected prototype:\nwxGLContext::wxGLContext(lua_Table * data, wxGLCanvas * win, const wxGLContext * other = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxGLCanvas* win=(Luna< wxObject >::checkSubType< wxGLCanvas >(L,2));
		const wxGLContext* other=luatop>2 ? (Luna< wxObject >::checkSubType< wxGLContext >(L,3)) : (const wxGLContext*)NULL;

		return new wrapper_wxGLContext(L,NULL, win, other);
	}

	// Overload binder for wxGLContext::wxGLContext
	static wxGLContext* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGLContext, cannot match any of the overloads for function wxGLContext:\n  wxGLContext(wxGLCanvas *, const wxGLContext *)\n  wxGLContext(lua_Table *, wxGLCanvas *, const wxGLContext *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGLContext::SetCurrent(const wxGLCanvas & win) const
	static int _bind_SetCurrent(lua_State *L) {
		if (!_lg_typecheck_SetCurrent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGLContext::SetCurrent(const wxGLCanvas & win) const function, expected prototype:\nbool wxGLContext::SetCurrent(const wxGLCanvas & win) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGLCanvas* win_ptr=(Luna< wxObject >::checkSubType< wxGLCanvas >(L,2));
		if( !win_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg win in wxGLContext::SetCurrent function");
		}
		const wxGLCanvas & win=*win_ptr;

		wxGLContext* self=Luna< wxObject >::checkSubType< wxGLContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGLContext::SetCurrent(const wxGLCanvas &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetCurrent(win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxGLContext::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGLContext::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGLContext::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGLContext* self=Luna< wxObject >::checkSubType< wxGLContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGLContext::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGLContext::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxGLContext::base_SetCurrent(const wxGLCanvas & win) const
	static int _bind_base_SetCurrent(lua_State *L) {
		if (!_lg_typecheck_base_SetCurrent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGLContext::base_SetCurrent(const wxGLCanvas & win) const function, expected prototype:\nbool wxGLContext::base_SetCurrent(const wxGLCanvas & win) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGLCanvas* win_ptr=(Luna< wxObject >::checkSubType< wxGLCanvas >(L,2));
		if( !win_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg win in wxGLContext::base_SetCurrent function");
		}
		const wxGLCanvas & win=*win_ptr;

		wxGLContext* self=Luna< wxObject >::checkSubType< wxGLContext >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGLContext::base_SetCurrent(const wxGLCanvas &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGLContext::SetCurrent(win);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxGLContext* LunaTraits< wxGLContext >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGLContext::_bind_ctor(L);
}

void LunaTraits< wxGLContext >::_bind_dtor(wxGLContext* obj) {
	delete obj;
}

const char LunaTraits< wxGLContext >::className[] = "wxGLContext";
const char LunaTraits< wxGLContext >::fullName[] = "wxGLContext";
const char LunaTraits< wxGLContext >::moduleName[] = "wx";
const char* LunaTraits< wxGLContext >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGLContext >::hash = 13437527;
const int LunaTraits< wxGLContext >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGLContext >::methods[] = {
	{"SetCurrent", &luna_wrapper_wxGLContext::_bind_SetCurrent},
	{"base_GetClassInfo", &luna_wrapper_wxGLContext::_bind_base_GetClassInfo},
	{"base_SetCurrent", &luna_wrapper_wxGLContext::_bind_base_SetCurrent},
	{"fromVoid", &luna_wrapper_wxGLContext::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGLContext::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGLContext::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGLContext >::converters[] = {
	{"wxObject", &luna_wrapper_wxGLContext::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGLContext >::enumValues[] = {
	{0,0}
};


