#include <plug_common.h>

class luna_wrapper_wxPenList {
public:
	typedef Luna< wxPenList > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37568612) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPenList*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPenList* rhs =(Luna< wxPenList >::check(L,2));
		wxPenList* self=(Luna< wxPenList >::check(L,1));
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

		wxPenList* self= (wxPenList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPenList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,37568612) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPenList >::check(L,1));
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

		wxPenList* self=(Luna< wxPenList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPenList");
		
		return luna_dynamicCast(L,converters,"wxPenList",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FindOrCreatePen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPenList::wxPenList()
	static wxPenList* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxPenList::wxPenList() function, expected prototype:\nwxPenList::wxPenList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxPenList();
	}


	// Function binds:
	// wxPen * wxPenList::FindOrCreatePen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)
	static int _bind_FindOrCreatePen(lua_State *L) {
		if (!_lg_typecheck_FindOrCreatePen(L)) {
			luaL_error(L, "luna typecheck failed in wxPen * wxPenList::FindOrCreatePen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID) function, expected prototype:\nwxPen * wxPenList::FindOrCreatePen(const wxColour & colour, int width = 1, wxPenStyle style = ::wxPENSTYLE_SOLID)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxPenList::FindOrCreatePen function");
		}
		const wxColour & colour=*colour_ptr;
		int width=luatop>2 ? (int)lua_tointeger(L,3) : (int)1;
		wxPenStyle style=luatop>3 ? (wxPenStyle)lua_tointeger(L,4) : (wxPenStyle)::wxPENSTYLE_SOLID;

		wxPenList* self=(Luna< wxPenList >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPen * wxPenList::FindOrCreatePen(const wxColour &, int, wxPenStyle). Got : '%s'\n%s",typeid(Luna< wxPenList >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPen * lret = self->FindOrCreatePen(colour, width, style);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPen >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPenList* LunaTraits< wxPenList >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPenList::_bind_ctor(L);
}

void LunaTraits< wxPenList >::_bind_dtor(wxPenList* obj) {
	delete obj;
}

const char LunaTraits< wxPenList >::className[] = "wxPenList";
const char LunaTraits< wxPenList >::fullName[] = "wxPenList";
const char LunaTraits< wxPenList >::moduleName[] = "wx";
const char* LunaTraits< wxPenList >::parents[] = {0};
const int LunaTraits< wxPenList >::hash = 37568612;
const int LunaTraits< wxPenList >::uniqueIDs[] = {37568612,0};

luna_RegType LunaTraits< wxPenList >::methods[] = {
	{"FindOrCreatePen", &luna_wrapper_wxPenList::_bind_FindOrCreatePen},
	{"dynCast", &luna_wrapper_wxPenList::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPenList::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPenList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPenList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPenList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPenList >::enumValues[] = {
	{0,0}
};


