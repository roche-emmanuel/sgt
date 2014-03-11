#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDialogLayoutAdapter.h>

class luna_wrapper_wxDialogLayoutAdapter {
public:
	typedef Luna< wxDialogLayoutAdapter > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDialogLayoutAdapter,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64729109) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDialogLayoutAdapter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDialogLayoutAdapter* rhs =(Luna< wxDialogLayoutAdapter >::check(L,2));
		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
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

		wxDialogLayoutAdapter* self= (wxDialogLayoutAdapter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDialogLayoutAdapter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,64729109) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDialogLayoutAdapter >::check(L,1));
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

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDialogLayoutAdapter");
		
		return luna_dynamicCast(L,converters,"wxDialogLayoutAdapter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CanDoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDialogLayoutAdapter::wxDialogLayoutAdapter(lua_Table * data)
	static wxDialogLayoutAdapter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDialogLayoutAdapter::wxDialogLayoutAdapter(lua_Table * data) function, expected prototype:\nwxDialogLayoutAdapter::wxDialogLayoutAdapter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDialogLayoutAdapter(L,NULL);
	}


	// Function binds:
	// bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)
	static int _bind_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_CanDoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog) function, expected prototype:\nbool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDialog* dialog=(Luna< wxObject >::checkSubType< wxDialog >(L,2));

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog *). Got : '%s'\n%s",typeid(Luna< wxDialogLayoutAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanDoLayoutAdaptation(dialog);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)
	static int _bind_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_DoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog) function, expected prototype:\nbool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDialog* dialog=(Luna< wxObject >::checkSubType< wxDialog >(L,2));

		wxDialogLayoutAdapter* self=(Luna< wxDialogLayoutAdapter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog *). Got : '%s'\n%s",typeid(Luna< wxDialogLayoutAdapter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DoLayoutAdaptation(dialog);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDialogLayoutAdapter* LunaTraits< wxDialogLayoutAdapter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDialogLayoutAdapter::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxDialogLayoutAdapter::CanDoLayoutAdaptation(wxDialog * dialog)
	// bool wxDialogLayoutAdapter::DoLayoutAdaptation(wxDialog * dialog)
}

void LunaTraits< wxDialogLayoutAdapter >::_bind_dtor(wxDialogLayoutAdapter* obj) {
	delete obj;
}

const char LunaTraits< wxDialogLayoutAdapter >::className[] = "wxDialogLayoutAdapter";
const char LunaTraits< wxDialogLayoutAdapter >::fullName[] = "wxDialogLayoutAdapter";
const char LunaTraits< wxDialogLayoutAdapter >::moduleName[] = "wx";
const char* LunaTraits< wxDialogLayoutAdapter >::parents[] = {0};
const int LunaTraits< wxDialogLayoutAdapter >::hash = 64729109;
const int LunaTraits< wxDialogLayoutAdapter >::uniqueIDs[] = {64729109,0};

luna_RegType LunaTraits< wxDialogLayoutAdapter >::methods[] = {
	{"CanDoLayoutAdaptation", &luna_wrapper_wxDialogLayoutAdapter::_bind_CanDoLayoutAdaptation},
	{"DoLayoutAdaptation", &luna_wrapper_wxDialogLayoutAdapter::_bind_DoLayoutAdaptation},
	{"dynCast", &luna_wrapper_wxDialogLayoutAdapter::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDialogLayoutAdapter::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDialogLayoutAdapter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDialogLayoutAdapter::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDialogLayoutAdapter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDialogLayoutAdapter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDialogLayoutAdapter >::enumValues[] = {
	{0,0}
};


