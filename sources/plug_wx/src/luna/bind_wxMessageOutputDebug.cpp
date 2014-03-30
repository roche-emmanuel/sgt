#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageOutputDebug.h>

class luna_wrapper_wxMessageOutputDebug {
public:
	typedef Luna< wxMessageOutputDebug > luna_t;

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

		wxMessageOutputDebug* self= (wxMessageOutputDebug*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMessageOutputDebug >::push(L,self,false);
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
		//wxMessageOutputDebug* ptr= dynamic_cast< wxMessageOutputDebug* >(Luna< wxMessageOutput >::check(L,1));
		wxMessageOutputDebug* ptr= luna_caster< wxMessageOutput, wxMessageOutputDebug >::cast(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputDebug >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMessageOutputDebug::wxMessageOutputDebug(lua_Table * data)
	static wxMessageOutputDebug* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMessageOutputDebug::wxMessageOutputDebug(lua_Table * data) function, expected prototype:\nwxMessageOutputDebug::wxMessageOutputDebug(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMessageOutputDebug(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

wxMessageOutputDebug* LunaTraits< wxMessageOutputDebug >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMessageOutputDebug::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)
}

void LunaTraits< wxMessageOutputDebug >::_bind_dtor(wxMessageOutputDebug* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputDebug >::className[] = "wxMessageOutputDebug";
const char LunaTraits< wxMessageOutputDebug >::fullName[] = "wxMessageOutputDebug";
const char LunaTraits< wxMessageOutputDebug >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputDebug >::parents[] = {"wx.wxMessageOutputStderr", 0};
const int LunaTraits< wxMessageOutputDebug >::hash = 47074281;
const int LunaTraits< wxMessageOutputDebug >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputDebug >::methods[] = {
	{"fromVoid", &luna_wrapper_wxMessageOutputDebug::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMessageOutputDebug::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMessageOutputDebug::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputDebug >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputDebug::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputDebug >::enumValues[] = {
	{0,0}
};


