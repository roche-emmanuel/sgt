#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageOutput.h>

class luna_wrapper_wxMessageOutput {
public:
	typedef Luna< wxMessageOutput > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxMessageOutput,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086186) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMessageOutput*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMessageOutput* rhs =(Luna< wxMessageOutput >::check(L,2));
		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
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

		wxMessageOutput* self= (wxMessageOutput*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMessageOutput >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086186) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxMessageOutput >::check(L,1));
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

		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMessageOutput");
		
		return luna_dynamicCast(L,converters,"wxMessageOutput",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,42086186)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Output(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static wxMessageOutput * wxMessageOutput::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static wxMessageOutput * wxMessageOutput::Get() function, expected prototype:\nstatic wxMessageOutput * wxMessageOutput::Get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMessageOutput * lret = wxMessageOutput::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMessageOutput >::push(L,lret,false);

		return 1;
	}

	// static wxMessageOutput * wxMessageOutput::Set(wxMessageOutput * msgout)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in static wxMessageOutput * wxMessageOutput::Set(wxMessageOutput * msgout) function, expected prototype:\nstatic wxMessageOutput * wxMessageOutput::Set(wxMessageOutput * msgout)\nClass arguments details:\narg 1 ID = 42086186\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMessageOutput* msgout=(Luna< wxMessageOutput >::check(L,1));

		wxMessageOutput * lret = wxMessageOutput::Set(msgout);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMessageOutput >::push(L,lret,false);

		return 1;
	}

	// void wxMessageOutput::Output(const wxString & str)
	static int _bind_Output(lua_State *L) {
		if (!_lg_typecheck_Output(L)) {
			luaL_error(L, "luna typecheck failed in void wxMessageOutput::Output(const wxString & str) function, expected prototype:\nvoid wxMessageOutput::Output(const wxString & str)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString str(lua_tostring(L,2),lua_objlen(L,2));

		wxMessageOutput* self=(Luna< wxMessageOutput >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMessageOutput::Output(const wxString &). Got : '%s'\n%s",typeid(Luna< wxMessageOutput >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Output(str);

		return 0;
	}


	// Operator binds:

};

wxMessageOutput* LunaTraits< wxMessageOutput >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)
}

void LunaTraits< wxMessageOutput >::_bind_dtor(wxMessageOutput* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutput >::className[] = "wxMessageOutput";
const char LunaTraits< wxMessageOutput >::fullName[] = "wxMessageOutput";
const char LunaTraits< wxMessageOutput >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutput >::parents[] = {0};
const int LunaTraits< wxMessageOutput >::hash = 42086186;
const int LunaTraits< wxMessageOutput >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutput >::methods[] = {
	{"Get", &luna_wrapper_wxMessageOutput::_bind_Get},
	{"Set", &luna_wrapper_wxMessageOutput::_bind_Set},
	{"Output", &luna_wrapper_wxMessageOutput::_bind_Output},
	{"dynCast", &luna_wrapper_wxMessageOutput::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMessageOutput::_bind___eq},
	{"fromVoid", &luna_wrapper_wxMessageOutput::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMessageOutput::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMessageOutput::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutput >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutput >::enumValues[] = {
	{0,0}
};


