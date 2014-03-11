#include <plug_common.h>

class luna_wrapper_wxBrushList {
public:
	typedef Luna< wxBrushList > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxBrushList* self= (wxBrushList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBrushList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,20060012) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxList(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxBrushList* ptr= dynamic_cast< wxBrushList* >(Luna< wxList >::check(L,1));
		wxBrushList* ptr= luna_caster< wxList, wxBrushList >::cast(Luna< wxList >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxBrushList >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_FindOrCreateBrush(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxBrush * wxBrushList::FindOrCreateBrush(const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID)
	static int _bind_FindOrCreateBrush(lua_State *L) {
		if (!_lg_typecheck_FindOrCreateBrush(L)) {
			luaL_error(L, "luna typecheck failed in wxBrush * wxBrushList::FindOrCreateBrush(const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID) function, expected prototype:\nwxBrush * wxBrushList::FindOrCreateBrush(const wxColour & colour, wxBrushStyle style = ::wxBRUSHSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxBrushList::FindOrCreateBrush function");
		}
		const wxColour & colour=*colour_ptr;
		wxBrushStyle style=luatop>2 ? (wxBrushStyle)lua_tointeger(L,3) : (wxBrushStyle)::wxBRUSHSTYLE_SOLID;

		wxBrushList* self=Luna< wxList >::checkSubType< wxBrushList >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBrush * wxBrushList::FindOrCreateBrush(const wxColour &, wxBrushStyle). Got : '%s'\n%s",typeid(Luna< wxList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBrush * lret = self->FindOrCreateBrush(colour, style);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBrush >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxBrushList* LunaTraits< wxBrushList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxBrushList >::_bind_dtor(wxBrushList* obj) {
	delete obj;
}

const char LunaTraits< wxBrushList >::className[] = "wxBrushList";
const char LunaTraits< wxBrushList >::fullName[] = "wxBrushList";
const char LunaTraits< wxBrushList >::moduleName[] = "wx";
const char* LunaTraits< wxBrushList >::parents[] = {"wx.wxList", 0};
const int LunaTraits< wxBrushList >::hash = 20784273;
const int LunaTraits< wxBrushList >::uniqueIDs[] = {20060012,0};

luna_RegType LunaTraits< wxBrushList >::methods[] = {
	{"FindOrCreateBrush", &luna_wrapper_wxBrushList::_bind_FindOrCreateBrush},
	{"fromVoid", &luna_wrapper_wxBrushList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBrushList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxBrushList >::converters[] = {
	{"wxList", &luna_wrapper_wxBrushList::_cast_from_wxList},
	{0,0}
};

luna_RegEnumType LunaTraits< wxBrushList >::enumValues[] = {
	{0,0}
};


