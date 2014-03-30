#include <plug_common.h>

class luna_wrapper_wxDisplay {
public:
	typedef Luna< wxDisplay > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7734307) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDisplay*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDisplay* rhs =(Luna< wxDisplay >::check(L,2));
		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxDisplay* self= (wxDisplay*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDisplay >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,7734307) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDisplay");
		
		return luna_dynamicCast(L,converters,"wxDisplay",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ChangeMode(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientArea(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,44802589) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPrimary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFromPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDisplay::wxDisplay(unsigned int index = 0)
	static wxDisplay* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDisplay::wxDisplay(unsigned int index = 0) function, expected prototype:\nwxDisplay::wxDisplay(unsigned int index = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int index=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new wxDisplay(index);
	}


	// Function binds:
	// bool wxDisplay::ChangeMode(const wxVideoMode & mode = wxDefaultVideoMode)
	static int _bind_ChangeMode(lua_State *L) {
		if (!_lg_typecheck_ChangeMode(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDisplay::ChangeMode(const wxVideoMode & mode = wxDefaultVideoMode) function, expected prototype:\nbool wxDisplay::ChangeMode(const wxVideoMode & mode = wxDefaultVideoMode)\nClass arguments details:\narg 1 ID = 44802589\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxVideoMode* mode_ptr=luatop>1 ? (Luna< wxVideoMode >::check(L,2)) : NULL;
		if( luatop>1 && !mode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mode in wxDisplay::ChangeMode function");
		}
		const wxVideoMode & mode=luatop>1 ? *mode_ptr : (const wxVideoMode&)wxDefaultVideoMode;

		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDisplay::ChangeMode(const wxVideoMode &). Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ChangeMode(mode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxRect wxDisplay::GetClientArea() const
	static int _bind_GetClientArea(lua_State *L) {
		if (!_lg_typecheck_GetClientArea(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxDisplay::GetClientArea() const function, expected prototype:\nwxRect wxDisplay::GetClientArea() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxDisplay::GetClientArea() const. Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetClientArea();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxVideoMode wxDisplay::GetCurrentMode() const
	static int _bind_GetCurrentMode(lua_State *L) {
		if (!_lg_typecheck_GetCurrentMode(L)) {
			luaL_error(L, "luna typecheck failed in wxVideoMode wxDisplay::GetCurrentMode() const function, expected prototype:\nwxVideoMode wxDisplay::GetCurrentMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVideoMode wxDisplay::GetCurrentMode() const. Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVideoMode stack_lret = self->GetCurrentMode();
		wxVideoMode* lret = new wxVideoMode(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVideoMode >::push(L,lret,true);

		return 1;
	}

	// wxRect wxDisplay::GetGeometry() const
	static int _bind_GetGeometry(lua_State *L) {
		if (!_lg_typecheck_GetGeometry(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxDisplay::GetGeometry() const function, expected prototype:\nwxRect wxDisplay::GetGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxDisplay::GetGeometry() const. Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetGeometry();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxArrayVideoModes wxDisplay::GetModes(const wxVideoMode & mode = wxDefaultVideoMode) const
	static int _bind_GetModes(lua_State *L) {
		if (!_lg_typecheck_GetModes(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayVideoModes wxDisplay::GetModes(const wxVideoMode & mode = wxDefaultVideoMode) const function, expected prototype:\nwxArrayVideoModes wxDisplay::GetModes(const wxVideoMode & mode = wxDefaultVideoMode) const\nClass arguments details:\narg 1 ID = 44802589\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxVideoMode* mode_ptr=luatop>1 ? (Luna< wxVideoMode >::check(L,2)) : NULL;
		if( luatop>1 && !mode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mode in wxDisplay::GetModes function");
		}
		const wxVideoMode & mode=luatop>1 ? *mode_ptr : (const wxVideoMode&)wxDefaultVideoMode;

		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayVideoModes wxDisplay::GetModes(const wxVideoMode &) const. Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayVideoModes stack_lret = self->GetModes(mode);
		wxArrayVideoModes* lret = new wxArrayVideoModes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayVideoModes >::push(L,lret,true);

		return 1;
	}

	// wxString wxDisplay::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDisplay::GetName() const function, expected prototype:\nwxString wxDisplay::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDisplay::GetName() const. Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDisplay::IsPrimary() const
	static int _bind_IsPrimary(lua_State *L) {
		if (!_lg_typecheck_IsPrimary(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDisplay::IsPrimary() const function, expected prototype:\nbool wxDisplay::IsPrimary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplay* self=(Luna< wxDisplay >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDisplay::IsPrimary() const. Got : '%s'\n%s",typeid(Luna< wxDisplay >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsPrimary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static unsigned int wxDisplay::GetCount()
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in static unsigned int wxDisplay::GetCount() function, expected prototype:\nstatic unsigned int wxDisplay::GetCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		unsigned int lret = wxDisplay::GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int wxDisplay::GetFromPoint(const wxPoint & pt)
	static int _bind_GetFromPoint(lua_State *L) {
		if (!_lg_typecheck_GetFromPoint(L)) {
			luaL_error(L, "luna typecheck failed in static int wxDisplay::GetFromPoint(const wxPoint & pt) function, expected prototype:\nstatic int wxDisplay::GetFromPoint(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,1));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxDisplay::GetFromPoint function");
		}
		const wxPoint & pt=*pt_ptr;

		int lret = wxDisplay::GetFromPoint(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static int wxDisplay::GetFromWindow(const wxWindow * win)
	static int _bind_GetFromWindow(lua_State *L) {
		if (!_lg_typecheck_GetFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in static int wxDisplay::GetFromWindow(const wxWindow * win) function, expected prototype:\nstatic int wxDisplay::GetFromWindow(const wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,1));

		int lret = wxDisplay::GetFromWindow(win);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDisplay* LunaTraits< wxDisplay >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDisplay::_bind_ctor(L);
}

void LunaTraits< wxDisplay >::_bind_dtor(wxDisplay* obj) {
	delete obj;
}

const char LunaTraits< wxDisplay >::className[] = "wxDisplay";
const char LunaTraits< wxDisplay >::fullName[] = "wxDisplay";
const char LunaTraits< wxDisplay >::moduleName[] = "wx";
const char* LunaTraits< wxDisplay >::parents[] = {0};
const int LunaTraits< wxDisplay >::hash = 7734307;
const int LunaTraits< wxDisplay >::uniqueIDs[] = {7734307,0};

luna_RegType LunaTraits< wxDisplay >::methods[] = {
	{"ChangeMode", &luna_wrapper_wxDisplay::_bind_ChangeMode},
	{"GetClientArea", &luna_wrapper_wxDisplay::_bind_GetClientArea},
	{"GetCurrentMode", &luna_wrapper_wxDisplay::_bind_GetCurrentMode},
	{"GetGeometry", &luna_wrapper_wxDisplay::_bind_GetGeometry},
	{"GetModes", &luna_wrapper_wxDisplay::_bind_GetModes},
	{"GetName", &luna_wrapper_wxDisplay::_bind_GetName},
	{"IsPrimary", &luna_wrapper_wxDisplay::_bind_IsPrimary},
	{"GetCount", &luna_wrapper_wxDisplay::_bind_GetCount},
	{"GetFromPoint", &luna_wrapper_wxDisplay::_bind_GetFromPoint},
	{"GetFromWindow", &luna_wrapper_wxDisplay::_bind_GetFromWindow},
	{"dynCast", &luna_wrapper_wxDisplay::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDisplay::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDisplay::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDisplay::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDisplay >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDisplay >::enumValues[] = {
	{0,0}
};


