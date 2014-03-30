#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageOutputStderr.h>

class luna_wrapper_wxMessageOutputStderr {
public:
	typedef Luna< wxMessageOutputStderr > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMessageOutputStderr* self= (wxMessageOutputStderr*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMessageOutputStderr >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_wxMessageOutput(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxMessageOutputStderr* ptr= dynamic_cast< wxMessageOutputStderr* >(Luna< wxMessageOutput >::check(L,1));
		wxMessageOutputStderr* ptr= luna_caster< wxMessageOutput, wxMessageOutputStderr >::cast(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputStderr >::push(L,ptr,false);
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

wxMessageOutputStderr* LunaTraits< wxMessageOutputStderr >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)
}

void LunaTraits< wxMessageOutputStderr >::_bind_dtor(wxMessageOutputStderr* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputStderr >::className[] = "wxMessageOutputStderr";
const char LunaTraits< wxMessageOutputStderr >::fullName[] = "wxMessageOutputStderr";
const char LunaTraits< wxMessageOutputStderr >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputStderr >::parents[] = {"wx.wxMessageOutput", 0};
const int LunaTraits< wxMessageOutputStderr >::hash = 2637053;
const int LunaTraits< wxMessageOutputStderr >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputStderr >::methods[] = {
	{"fromVoid", &luna_wrapper_wxMessageOutputStderr::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMessageOutputStderr::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMessageOutputStderr::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputStderr >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputStderr::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputStderr >::enumValues[] = {
	{0,0}
};


