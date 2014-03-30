#include <plug_common.h>

#include <luna/wrappers/wrapper_wxVariant.h>

class luna_wrapper_wxVariant {
public:
	typedef Luna< wxVariant > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxVariant* self= (wxVariant*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxVariant >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxVariant* ptr= dynamic_cast< wxVariant* >(Luna< wxObject >::check(L,1));
		wxVariant* ptr= luna_caster< wxObject, wxVariant >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxVariant >::push(L,ptr,false);
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

wxVariant* LunaTraits< wxVariant >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxVariant >::_bind_dtor(wxVariant* obj) {
	delete obj;
}

const char LunaTraits< wxVariant >::className[] = "wxVariant";
const char LunaTraits< wxVariant >::fullName[] = "wxVariant";
const char LunaTraits< wxVariant >::moduleName[] = "wx";
const char* LunaTraits< wxVariant >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxVariant >::hash = 52623868;
const int LunaTraits< wxVariant >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxVariant >::methods[] = {
	{"fromVoid", &luna_wrapper_wxVariant::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxVariant::_bind_asVoid},
	{"getTable", &luna_wrapper_wxVariant::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxVariant >::converters[] = {
	{"wxObject", &luna_wrapper_wxVariant::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxVariant >::enumValues[] = {
	{0,0}
};


