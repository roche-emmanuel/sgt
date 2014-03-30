#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTarInputStream.h>

class luna_wrapper_wxTarInputStream {
public:
	typedef Luna< wxTarInputStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTarInputStream,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47912811) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTarInputStream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTarInputStream* rhs =(Luna< wxTarInputStream >::check(L,2));
		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
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

		wxTarInputStream* self= (wxTarInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTarInputStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,47912811) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTarInputStream >::check(L,1));
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

		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTarInputStream");
		
		return luna_dynamicCast(L,converters,"wxTarInputStream",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CloseEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OpenEntry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,73261869) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CloseEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxTarInputStream::CloseEntry()
	static int _bind_CloseEntry(lua_State *L) {
		if (!_lg_typecheck_CloseEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTarInputStream::CloseEntry() function, expected prototype:\nbool wxTarInputStream::CloseEntry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTarInputStream::CloseEntry(). Got : '%s'\n%s",typeid(Luna< wxTarInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CloseEntry();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTarEntry * wxTarInputStream::GetNextEntry()
	static int _bind_GetNextEntry(lua_State *L) {
		if (!_lg_typecheck_GetNextEntry(L)) {
			luaL_error(L, "luna typecheck failed in wxTarEntry * wxTarInputStream::GetNextEntry() function, expected prototype:\nwxTarEntry * wxTarInputStream::GetNextEntry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTarEntry * wxTarInputStream::GetNextEntry(). Got : '%s'\n%s",typeid(Luna< wxTarInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTarEntry * lret = self->GetNextEntry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTarEntry >::push(L,lret,false);

		return 1;
	}

	// bool wxTarInputStream::OpenEntry(wxTarEntry & entry)
	static int _bind_OpenEntry(lua_State *L) {
		if (!_lg_typecheck_OpenEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTarInputStream::OpenEntry(wxTarEntry & entry) function, expected prototype:\nbool wxTarInputStream::OpenEntry(wxTarEntry & entry)\nClass arguments details:\narg 1 ID = 73261869\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTarEntry* entry_ptr=(Luna< wxTarEntry >::check(L,2));
		if( !entry_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg entry in wxTarInputStream::OpenEntry function");
		}
		wxTarEntry & entry=*entry_ptr;

		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTarInputStream::OpenEntry(wxTarEntry &). Got : '%s'\n%s",typeid(Luna< wxTarInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OpenEntry(entry);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTarInputStream::base_CloseEntry()
	static int _bind_base_CloseEntry(lua_State *L) {
		if (!_lg_typecheck_base_CloseEntry(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTarInputStream::base_CloseEntry() function, expected prototype:\nbool wxTarInputStream::base_CloseEntry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTarInputStream* self=(Luna< wxTarInputStream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTarInputStream::base_CloseEntry(). Got : '%s'\n%s",typeid(Luna< wxTarInputStream >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTarInputStream::CloseEntry();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxTarInputStream* LunaTraits< wxTarInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxTarInputStream >::_bind_dtor(wxTarInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxTarInputStream >::className[] = "wxTarInputStream";
const char LunaTraits< wxTarInputStream >::fullName[] = "wxTarInputStream";
const char LunaTraits< wxTarInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxTarInputStream >::parents[] = {0};
const int LunaTraits< wxTarInputStream >::hash = 47912811;
const int LunaTraits< wxTarInputStream >::uniqueIDs[] = {47912811,0};

luna_RegType LunaTraits< wxTarInputStream >::methods[] = {
	{"CloseEntry", &luna_wrapper_wxTarInputStream::_bind_CloseEntry},
	{"GetNextEntry", &luna_wrapper_wxTarInputStream::_bind_GetNextEntry},
	{"OpenEntry", &luna_wrapper_wxTarInputStream::_bind_OpenEntry},
	{"base_CloseEntry", &luna_wrapper_wxTarInputStream::_bind_base_CloseEntry},
	{"dynCast", &luna_wrapper_wxTarInputStream::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTarInputStream::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTarInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTarInputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTarInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTarInputStream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTarInputStream >::enumValues[] = {
	{0,0}
};


