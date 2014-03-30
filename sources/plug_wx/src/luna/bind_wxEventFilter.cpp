#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEventFilter.h>

class luna_wrapper_wxEventFilter {
public:
	typedef Luna< wxEventFilter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxEventFilter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81056638) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxEventFilter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxEventFilter* rhs =(Luna< wxEventFilter >::check(L,2));
		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
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

		wxEventFilter* self= (wxEventFilter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxEventFilter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81056638) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxEventFilter >::check(L,1));
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

		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxEventFilter");
		
		return luna_dynamicCast(L,converters,"wxEventFilter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_FilterEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEventFilter::wxEventFilter(lua_Table * data)
	static wxEventFilter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxEventFilter::wxEventFilter(lua_Table * data) function, expected prototype:\nwxEventFilter::wxEventFilter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxEventFilter(L,NULL);
	}


	// Function binds:
	// int wxEventFilter::FilterEvent(wxEvent & event)
	static int _bind_FilterEvent(lua_State *L) {
		if (!_lg_typecheck_FilterEvent(L)) {
			luaL_error(L, "luna typecheck failed in int wxEventFilter::FilterEvent(wxEvent & event) function, expected prototype:\nint wxEventFilter::FilterEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxEventFilter::FilterEvent function");
		}
		wxEvent & event=*event_ptr;

		wxEventFilter* self=(Luna< wxEventFilter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxEventFilter::FilterEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxEventFilter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FilterEvent(event);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxEventFilter* LunaTraits< wxEventFilter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEventFilter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxEventFilter::FilterEvent(wxEvent & event)
}

void LunaTraits< wxEventFilter >::_bind_dtor(wxEventFilter* obj) {
	delete obj;
}

const char LunaTraits< wxEventFilter >::className[] = "wxEventFilter";
const char LunaTraits< wxEventFilter >::fullName[] = "wxEventFilter";
const char LunaTraits< wxEventFilter >::moduleName[] = "wx";
const char* LunaTraits< wxEventFilter >::parents[] = {0};
const int LunaTraits< wxEventFilter >::hash = 81056638;
const int LunaTraits< wxEventFilter >::uniqueIDs[] = {81056638,0};

luna_RegType LunaTraits< wxEventFilter >::methods[] = {
	{"FilterEvent", &luna_wrapper_wxEventFilter::_bind_FilterEvent},
	{"dynCast", &luna_wrapper_wxEventFilter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxEventFilter::_bind___eq},
	{"fromVoid", &luna_wrapper_wxEventFilter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxEventFilter::_bind_asVoid},
	{"getTable", &luna_wrapper_wxEventFilter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxEventFilter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxEventFilter >::enumValues[] = {
	{"Event_Skip", wxEventFilter::Event_Skip},
	{"Event_Ignore", wxEventFilter::Event_Ignore},
	{"Event_Processed", wxEventFilter::Event_Processed},
	{0,0}
};


