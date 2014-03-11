#include <plug_common.h>

class luna_wrapper_wxColourDatabase {
public:
	typedef Luna< wxColourDatabase > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52531141) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxColourDatabase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxColourDatabase* rhs =(Luna< wxColourDatabase >::check(L,2));
		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
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

		wxColourDatabase* self= (wxColourDatabase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxColourDatabase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,52531141) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxColourDatabase >::check(L,1));
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

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxColourDatabase");
		
		return luna_dynamicCast(L,converters,"wxColourDatabase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxColourDatabase::wxColourDatabase()
	static wxColourDatabase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxColourDatabase::wxColourDatabase() function, expected prototype:\nwxColourDatabase::wxColourDatabase()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxColourDatabase();
	}


	// Function binds:
	// void wxColourDatabase::AddColour(const wxString & colourName, const wxColour & colour)
	static int _bind_AddColour(lua_State *L) {
		if (!_lg_typecheck_AddColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxColourDatabase::AddColour(const wxString & colourName, const wxColour & colour) function, expected prototype:\nvoid wxColourDatabase::AddColour(const wxString & colourName, const wxColour & colour)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString colourName(lua_tostring(L,2),lua_objlen(L,2));
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourDatabase::AddColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxColourDatabase::AddColour(const wxString &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxColourDatabase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddColour(colourName, colour);

		return 0;
	}

	// wxColour wxColourDatabase::Find(const wxString & colourName) const
	static int _bind_Find(lua_State *L) {
		if (!_lg_typecheck_Find(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxColourDatabase::Find(const wxString & colourName) const function, expected prototype:\nwxColour wxColourDatabase::Find(const wxString & colourName) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString colourName(lua_tostring(L,2),lua_objlen(L,2));

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxColourDatabase::Find(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxColourDatabase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->Find(colourName);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxString wxColourDatabase::FindName(const wxColour & colour) const
	static int _bind_FindName(lua_State *L) {
		if (!_lg_typecheck_FindName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxColourDatabase::FindName(const wxColour & colour) const function, expected prototype:\nwxString wxColourDatabase::FindName(const wxColour & colour) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourDatabase::FindName function");
		}
		const wxColour & colour=*colour_ptr;

		wxColourDatabase* self=(Luna< wxColourDatabase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxColourDatabase::FindName(const wxColour &) const. Got : '%s'\n%s",typeid(Luna< wxColourDatabase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->FindName(colour);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxColourDatabase* LunaTraits< wxColourDatabase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColourDatabase::_bind_ctor(L);
}

void LunaTraits< wxColourDatabase >::_bind_dtor(wxColourDatabase* obj) {
	delete obj;
}

const char LunaTraits< wxColourDatabase >::className[] = "wxColourDatabase";
const char LunaTraits< wxColourDatabase >::fullName[] = "wxColourDatabase";
const char LunaTraits< wxColourDatabase >::moduleName[] = "wx";
const char* LunaTraits< wxColourDatabase >::parents[] = {0};
const int LunaTraits< wxColourDatabase >::hash = 52531141;
const int LunaTraits< wxColourDatabase >::uniqueIDs[] = {52531141,0};

luna_RegType LunaTraits< wxColourDatabase >::methods[] = {
	{"AddColour", &luna_wrapper_wxColourDatabase::_bind_AddColour},
	{"Find", &luna_wrapper_wxColourDatabase::_bind_Find},
	{"FindName", &luna_wrapper_wxColourDatabase::_bind_FindName},
	{"dynCast", &luna_wrapper_wxColourDatabase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxColourDatabase::_bind___eq},
	{"fromVoid", &luna_wrapper_wxColourDatabase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxColourDatabase::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourDatabase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourDatabase >::enumValues[] = {
	{0,0}
};


