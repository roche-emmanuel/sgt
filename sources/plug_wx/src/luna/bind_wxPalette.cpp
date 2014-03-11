#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPalette.h>

class luna_wrapper_wxPalette {
public:
	typedef Luna< wxPalette > luna_t;

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

		wxPalette* self= (wxPalette*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPalette >::push(L,self,false);
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
		//wxPalette* ptr= dynamic_cast< wxPalette* >(Luna< wxObject >::check(L,1));
		wxPalette* ptr= luna_caster< wxObject, wxPalette >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPalette >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPalette >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxPalette >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColoursCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPixel(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRGB(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColoursCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Constructor binds:
	// wxPalette::wxPalette()
	static wxPalette* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette::wxPalette() function, expected prototype:\nwxPalette::wxPalette()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPalette();
	}

	// wxPalette::wxPalette(const wxPalette & palette)
	static wxPalette* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette::wxPalette(const wxPalette & palette) function, expected prototype:\nwxPalette::wxPalette(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,1));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxPalette::wxPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		return new wxPalette(palette);
	}

	// wxPalette::wxPalette(int n, unsigned char * red, unsigned char * green, unsigned char * blue)
	static wxPalette* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette::wxPalette(int n, unsigned char * red, unsigned char * green, unsigned char * blue) function, expected prototype:\nwxPalette::wxPalette(int n, unsigned char * red, unsigned char * green, unsigned char * blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,1);
		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		return new wxPalette(n, &red, &green, &blue);
	}

	// wxPalette::wxPalette(lua_Table * data)
	static wxPalette* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette::wxPalette(lua_Table * data) function, expected prototype:\nwxPalette::wxPalette(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxPalette(L,NULL);
	}

	// wxPalette::wxPalette(lua_Table * data, const wxPalette & palette)
	static wxPalette* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette::wxPalette(lua_Table * data, const wxPalette & palette) function, expected prototype:\nwxPalette::wxPalette(lua_Table * data, const wxPalette & palette)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxPalette::wxPalette function");
		}
		const wxPalette & palette=*palette_ptr;

		return new wrapper_wxPalette(L,NULL, palette);
	}

	// wxPalette::wxPalette(lua_Table * data, int n, unsigned char * red, unsigned char * green, unsigned char * blue)
	static wxPalette* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette::wxPalette(lua_Table * data, int n, unsigned char * red, unsigned char * green, unsigned char * blue) function, expected prototype:\nwxPalette::wxPalette(lua_Table * data, int n, unsigned char * red, unsigned char * green, unsigned char * blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		unsigned char red = (unsigned char)(lua_tointeger(L,3));
		unsigned char green = (unsigned char)(lua_tointeger(L,4));
		unsigned char blue = (unsigned char)(lua_tointeger(L,5));

		return new wrapper_wxPalette(L,NULL, n, &red, &green, &blue);
	}

	// Overload binder for wxPalette::wxPalette
	static wxPalette* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxPalette, cannot match any of the overloads for function wxPalette:\n  wxPalette()\n  wxPalette(const wxPalette &)\n  wxPalette(int, unsigned char *, unsigned char *, unsigned char *)\n  wxPalette(lua_Table *)\n  wxPalette(lua_Table *, const wxPalette &)\n  wxPalette(lua_Table *, int, unsigned char *, unsigned char *, unsigned char *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxPalette::Create(int n, const unsigned char * red, const unsigned char * green, const unsigned char * blue)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPalette::Create(int n, const unsigned char * red, const unsigned char * green, const unsigned char * blue) function, expected prototype:\nbool wxPalette::Create(int n, const unsigned char * red, const unsigned char * green, const unsigned char * blue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		unsigned char red = (unsigned char)(lua_tointeger(L,3));
		unsigned char green = (unsigned char)(lua_tointeger(L,4));
		unsigned char blue = (unsigned char)(lua_tointeger(L,5));

		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPalette::Create(int, const unsigned char *, const unsigned char *, const unsigned char *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(n, &red, &green, &blue);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxPalette::GetColoursCount() const
	static int _bind_GetColoursCount(lua_State *L) {
		if (!_lg_typecheck_GetColoursCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxPalette::GetColoursCount() const function, expected prototype:\nint wxPalette::GetColoursCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPalette::GetColoursCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColoursCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPalette::GetPixel(unsigned char red, unsigned char green, unsigned char blue) const
	static int _bind_GetPixel(lua_State *L) {
		if (!_lg_typecheck_GetPixel(L)) {
			luaL_error(L, "luna typecheck failed in int wxPalette::GetPixel(unsigned char red, unsigned char green, unsigned char blue) const function, expected prototype:\nint wxPalette::GetPixel(unsigned char red, unsigned char green, unsigned char blue) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char red = (unsigned char)(lua_tointeger(L,2));
		unsigned char green = (unsigned char)(lua_tointeger(L,3));
		unsigned char blue = (unsigned char)(lua_tointeger(L,4));

		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPalette::GetPixel(unsigned char, unsigned char, unsigned char) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPixel(red, green, blue);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPalette::GetRGB(int pixel, unsigned char * red, unsigned char * green, unsigned char * blue) const
	static int _bind_GetRGB(lua_State *L) {
		if (!_lg_typecheck_GetRGB(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPalette::GetRGB(int pixel, unsigned char * red, unsigned char * green, unsigned char * blue) const function, expected prototype:\nbool wxPalette::GetRGB(int pixel, unsigned char * red, unsigned char * green, unsigned char * blue) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pixel=(int)lua_tointeger(L,2);
		unsigned char red = (unsigned char)(lua_tointeger(L,3));
		unsigned char green = (unsigned char)(lua_tointeger(L,4));
		unsigned char blue = (unsigned char)(lua_tointeger(L,5));

		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPalette::GetRGB(int, unsigned char *, unsigned char *, unsigned char *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetRGB(pixel, &red, &green, &blue);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPalette::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPalette::IsOk() const function, expected prototype:\nbool wxPalette::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPalette::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxPalette::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPalette::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPalette::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPalette::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPalette::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// int wxPalette::base_GetColoursCount() const
	static int _bind_base_GetColoursCount(lua_State *L) {
		if (!_lg_typecheck_base_GetColoursCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxPalette::base_GetColoursCount() const function, expected prototype:\nint wxPalette::base_GetColoursCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPalette::base_GetColoursCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPalette::GetColoursCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPalette::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPalette::base_IsOk() const function, expected prototype:\nbool wxPalette::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPalette::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPalette::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:
	// wxPalette & wxPalette::operator=(const wxPalette & palette)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxPalette & wxPalette::operator=(const wxPalette & palette) function, expected prototype:\nwxPalette & wxPalette::operator=(const wxPalette & palette)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPalette* palette_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !palette_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg palette in wxPalette::operator= function");
		}
		const wxPalette & palette=*palette_ptr;

		wxPalette* self=Luna< wxObject >::checkSubType< wxPalette >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPalette & wxPalette::operator=(const wxPalette &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPalette* lret = &self->operator=(palette);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPalette >::push(L,lret,false);

		return 1;
	}


};

wxPalette* LunaTraits< wxPalette >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPalette::_bind_ctor(L);
}

void LunaTraits< wxPalette >::_bind_dtor(wxPalette* obj) {
	delete obj;
}

const char LunaTraits< wxPalette >::className[] = "wxPalette";
const char LunaTraits< wxPalette >::fullName[] = "wxPalette";
const char LunaTraits< wxPalette >::moduleName[] = "wx";
const char* LunaTraits< wxPalette >::parents[] = {"wx.wxGDIObject", 0};
const int LunaTraits< wxPalette >::hash = 21960337;
const int LunaTraits< wxPalette >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPalette >::methods[] = {
	{"Create", &luna_wrapper_wxPalette::_bind_Create},
	{"GetColoursCount", &luna_wrapper_wxPalette::_bind_GetColoursCount},
	{"GetPixel", &luna_wrapper_wxPalette::_bind_GetPixel},
	{"GetRGB", &luna_wrapper_wxPalette::_bind_GetRGB},
	{"IsOk", &luna_wrapper_wxPalette::_bind_IsOk},
	{"base_GetClassInfo", &luna_wrapper_wxPalette::_bind_base_GetClassInfo},
	{"base_GetColoursCount", &luna_wrapper_wxPalette::_bind_base_GetColoursCount},
	{"base_IsOk", &luna_wrapper_wxPalette::_bind_base_IsOk},
	{"op_assign", &luna_wrapper_wxPalette::_bind_op_assign},
	{"fromVoid", &luna_wrapper_wxPalette::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPalette::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPalette::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPalette >::converters[] = {
	{"wxObject", &luna_wrapper_wxPalette::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPalette >::enumValues[] = {
	{0,0}
};


