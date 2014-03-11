#include <plug_common.h>

class luna_wrapper_wxDCTextColourChanger {
public:
	typedef Luna< wxDCTextColourChanger > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42501466) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDCTextColourChanger*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDCTextColourChanger* rhs =(Luna< wxDCTextColourChanger >::check(L,2));
		wxDCTextColourChanger* self=(Luna< wxDCTextColourChanger >::check(L,1));
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

		wxDCTextColourChanger* self= (wxDCTextColourChanger*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDCTextColourChanger >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42501466) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDCTextColourChanger >::check(L,1));
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

		wxDCTextColourChanger* self=(Luna< wxDCTextColourChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCTextColourChanger");
		
		return luna_dynamicCast(L,converters,"wxDCTextColourChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxDC >(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc)
	static wxDCTextColourChanger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc) function, expected prototype:\nwxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCTextColourChanger::wxDCTextColourChanger function");
		}
		wxDC & dc=*dc_ptr;

		return new wxDCTextColourChanger(dc);
	}

	// wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc, const wxColour & col)
	static wxDCTextColourChanger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc, const wxColour & col) function, expected prototype:\nwxDCTextColourChanger::wxDCTextColourChanger(wxDC & dc, const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCTextColourChanger::wxDCTextColourChanger function");
		}
		wxDC & dc=*dc_ptr;
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxDCTextColourChanger::wxDCTextColourChanger function");
		}
		const wxColour & col=*col_ptr;

		return new wxDCTextColourChanger(dc, col);
	}

	// Overload binder for wxDCTextColourChanger::wxDCTextColourChanger
	static wxDCTextColourChanger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDCTextColourChanger, cannot match any of the overloads for function wxDCTextColourChanger:\n  wxDCTextColourChanger(wxDC &)\n  wxDCTextColourChanger(wxDC &, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// void wxDCTextColourChanger::Set(const wxColour & col)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void wxDCTextColourChanger::Set(const wxColour & col) function, expected prototype:\nvoid wxDCTextColourChanger::Set(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxDCTextColourChanger::Set function");
		}
		const wxColour & col=*col_ptr;

		wxDCTextColourChanger* self=(Luna< wxDCTextColourChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDCTextColourChanger::Set(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxDCTextColourChanger >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(col);

		return 0;
	}


	// Operator binds:

};

wxDCTextColourChanger* LunaTraits< wxDCTextColourChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCTextColourChanger::_bind_ctor(L);
}

void LunaTraits< wxDCTextColourChanger >::_bind_dtor(wxDCTextColourChanger* obj) {
	delete obj;
}

const char LunaTraits< wxDCTextColourChanger >::className[] = "wxDCTextColourChanger";
const char LunaTraits< wxDCTextColourChanger >::fullName[] = "wxDCTextColourChanger";
const char LunaTraits< wxDCTextColourChanger >::moduleName[] = "wx";
const char* LunaTraits< wxDCTextColourChanger >::parents[] = {0};
const int LunaTraits< wxDCTextColourChanger >::hash = 42501466;
const int LunaTraits< wxDCTextColourChanger >::uniqueIDs[] = {42501466,0};

luna_RegType LunaTraits< wxDCTextColourChanger >::methods[] = {
	{"Set", &luna_wrapper_wxDCTextColourChanger::_bind_Set},
	{"dynCast", &luna_wrapper_wxDCTextColourChanger::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDCTextColourChanger::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDCTextColourChanger::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDCTextColourChanger::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCTextColourChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCTextColourChanger >::enumValues[] = {
	{0,0}
};


