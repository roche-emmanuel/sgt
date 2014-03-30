#include <plug_common.h>

class luna_wrapper_wxConfigPathChanger {
public:
	typedef Luna< wxConfigPathChanger > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70518091) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxConfigPathChanger*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxConfigPathChanger* rhs =(Luna< wxConfigPathChanger >::check(L,2));
		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
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

		wxConfigPathChanger* self= (wxConfigPathChanger*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxConfigPathChanger >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,70518091) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxConfigPathChanger >::check(L,1));
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

		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxConfigPathChanger");
		
		return luna_dynamicCast(L,converters,"wxConfigPathChanger",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Name(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UpdateIfDeleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxConfigPathChanger::wxConfigPathChanger(const wxConfigBase * pContainer, const wxString & strEntry)
	static wxConfigPathChanger* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxConfigPathChanger::wxConfigPathChanger(const wxConfigBase * pContainer, const wxString & strEntry) function, expected prototype:\nwxConfigPathChanger::wxConfigPathChanger(const wxConfigBase * pContainer, const wxString & strEntry)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxConfigBase* pContainer=(Luna< wxObject >::checkSubType< wxConfigBase >(L,1));
		wxString strEntry(lua_tostring(L,2),lua_objlen(L,2));

		return new wxConfigPathChanger(pContainer, strEntry);
	}


	// Function binds:
	// const wxString & wxConfigPathChanger::Name() const
	static int _bind_Name(lua_State *L) {
		if (!_lg_typecheck_Name(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxConfigPathChanger::Name() const function, expected prototype:\nconst wxString & wxConfigPathChanger::Name() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxConfigPathChanger::Name() const. Got : '%s'\n%s",typeid(Luna< wxConfigPathChanger >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->Name();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxConfigPathChanger::UpdateIfDeleted()
	static int _bind_UpdateIfDeleted(lua_State *L) {
		if (!_lg_typecheck_UpdateIfDeleted(L)) {
			luaL_error(L, "luna typecheck failed in void wxConfigPathChanger::UpdateIfDeleted() function, expected prototype:\nvoid wxConfigPathChanger::UpdateIfDeleted()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConfigPathChanger* self=(Luna< wxConfigPathChanger >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxConfigPathChanger::UpdateIfDeleted(). Got : '%s'\n%s",typeid(Luna< wxConfigPathChanger >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateIfDeleted();

		return 0;
	}


	// Operator binds:

};

wxConfigPathChanger* LunaTraits< wxConfigPathChanger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxConfigPathChanger::_bind_ctor(L);
}

void LunaTraits< wxConfigPathChanger >::_bind_dtor(wxConfigPathChanger* obj) {
	delete obj;
}

const char LunaTraits< wxConfigPathChanger >::className[] = "wxConfigPathChanger";
const char LunaTraits< wxConfigPathChanger >::fullName[] = "wxConfigPathChanger";
const char LunaTraits< wxConfigPathChanger >::moduleName[] = "wx";
const char* LunaTraits< wxConfigPathChanger >::parents[] = {0};
const int LunaTraits< wxConfigPathChanger >::hash = 70518091;
const int LunaTraits< wxConfigPathChanger >::uniqueIDs[] = {70518091,0};

luna_RegType LunaTraits< wxConfigPathChanger >::methods[] = {
	{"Name", &luna_wrapper_wxConfigPathChanger::_bind_Name},
	{"UpdateIfDeleted", &luna_wrapper_wxConfigPathChanger::_bind_UpdateIfDeleted},
	{"dynCast", &luna_wrapper_wxConfigPathChanger::_bind_dynCast},
	{"__eq", &luna_wrapper_wxConfigPathChanger::_bind___eq},
	{"fromVoid", &luna_wrapper_wxConfigPathChanger::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxConfigPathChanger::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxConfigPathChanger >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxConfigPathChanger >::enumValues[] = {
	{0,0}
};


