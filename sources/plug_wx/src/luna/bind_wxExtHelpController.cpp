#include <plug_common.h>

#include <luna/wrappers/wrapper_wxExtHelpController.h>

class luna_wrapper_wxExtHelpController {
public:
	typedef Luna< wxExtHelpController > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHelpController* self=(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxHelpController,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		wxExtHelpController* self= (wxExtHelpController*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxExtHelpController >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,15941327) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHelpController >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxHelpController(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxExtHelpController* ptr= dynamic_cast< wxExtHelpController* >(Luna< wxHelpController >::check(L,1));
		wxExtHelpController* ptr= luna_caster< wxHelpController, wxExtHelpController >::cast(Luna< wxHelpController >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxExtHelpController >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxExtHelpController* LunaTraits< wxExtHelpController >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxExtHelpController >::_bind_dtor(wxExtHelpController* obj) {
	delete obj;
}

const char LunaTraits< wxExtHelpController >::className[] = "wxExtHelpController";
const char LunaTraits< wxExtHelpController >::fullName[] = "wxExtHelpController";
const char LunaTraits< wxExtHelpController >::moduleName[] = "wx";
const char* LunaTraits< wxExtHelpController >::parents[] = {"wx.wxHelpController", 0};
const int LunaTraits< wxExtHelpController >::hash = 16544864;
const int LunaTraits< wxExtHelpController >::uniqueIDs[] = {15941327,0};

luna_RegType LunaTraits< wxExtHelpController >::methods[] = {
	{"fromVoid", &luna_wrapper_wxExtHelpController::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxExtHelpController::_bind_asVoid},
	{"getTable", &luna_wrapper_wxExtHelpController::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxExtHelpController >::converters[] = {
	{"wxHelpController", &luna_wrapper_wxExtHelpController::_cast_from_wxHelpController},
	{0,0}
};

luna_RegEnumType LunaTraits< wxExtHelpController >::enumValues[] = {
	{0,0}
};


