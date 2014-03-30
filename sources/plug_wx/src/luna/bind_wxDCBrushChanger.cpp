#include <plug_common.h>

class luna_wrapper_wxDCBrushChanger {
public:
	typedef Luna< wxDCBrushChanger > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15629306) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDCBrushChanger*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDCBrushChanger* rhs =(Luna< wxDCBrushChanger >::check(L,2));
		wxDCBrushChanger* self=(Luna< wxDCBrushChanger >::check(L,1));
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

		wxDCBrushChanger* self= (wxDCBrushChanger*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDCBrushChanger >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15629306) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDCBrushChanger >::check(L,1));
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

		wxDCBrushChanger* self=(Luna< wxDCBrushChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDCBrushChanger");
		
		return luna_dynamicCast(L,converters,"wxDCBrushChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDCBrushChanger::wxDCBrushChanger(wxDC & dc, const wxBrush & brush)
	static wxDCBrushChanger* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDCBrushChanger::wxDCBrushChanger(wxDC & dc, const wxBrush & brush) function, expected prototype:\nwxDCBrushChanger::wxDCBrushChanger(wxDC & dc, const wxBrush & brush)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDC* dc_ptr=(Luna< wxObject >::checkSubType< wxDC >(L,1));
		if( !dc_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dc in wxDCBrushChanger::wxDCBrushChanger function");
		}
		wxDC & dc=*dc_ptr;
		const wxBrush* brush_ptr=(Luna< wxObject >::checkSubType< wxBrush >(L,2));
		if( !brush_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brush in wxDCBrushChanger::wxDCBrushChanger function");
		}
		const wxBrush & brush=*brush_ptr;

		return new wxDCBrushChanger(dc, brush);
	}


	// Function binds:

	// Operator binds:

};

wxDCBrushChanger* LunaTraits< wxDCBrushChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDCBrushChanger::_bind_ctor(L);
}

void LunaTraits< wxDCBrushChanger >::_bind_dtor(wxDCBrushChanger* obj) {
	delete obj;
}

const char LunaTraits< wxDCBrushChanger >::className[] = "wxDCBrushChanger";
const char LunaTraits< wxDCBrushChanger >::fullName[] = "wxDCBrushChanger";
const char LunaTraits< wxDCBrushChanger >::moduleName[] = "wx";
const char* LunaTraits< wxDCBrushChanger >::parents[] = {0};
const int LunaTraits< wxDCBrushChanger >::hash = 15629306;
const int LunaTraits< wxDCBrushChanger >::uniqueIDs[] = {15629306,0};

luna_RegType LunaTraits< wxDCBrushChanger >::methods[] = {
	{"dynCast", &luna_wrapper_wxDCBrushChanger::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDCBrushChanger::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDCBrushChanger::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDCBrushChanger::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDCBrushChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDCBrushChanger >::enumValues[] = {
	{0,0}
};


