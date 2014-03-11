#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageOutputMessageBox.h>

class luna_wrapper_wxMessageOutputMessageBox {
public:
	typedef Luna< wxMessageOutputMessageBox > luna_t;

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

		wxMessageOutputMessageBox* self= (wxMessageOutputMessageBox*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMessageOutputMessageBox >::push(L,self,false);
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
		//wxMessageOutputMessageBox* ptr= dynamic_cast< wxMessageOutputMessageBox* >(Luna< wxMessageOutput >::check(L,1));
		wxMessageOutputMessageBox* ptr= luna_caster< wxMessageOutput, wxMessageOutputMessageBox >::cast(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputMessageBox >::push(L,ptr,false);
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
	// wxMessageOutputMessageBox::wxMessageOutputMessageBox(lua_Table * data)
	static wxMessageOutputMessageBox* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMessageOutputMessageBox::wxMessageOutputMessageBox(lua_Table * data) function, expected prototype:\nwxMessageOutputMessageBox::wxMessageOutputMessageBox(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMessageOutputMessageBox(L,NULL);
	}


	// Function binds:

	// Operator binds:

};

wxMessageOutputMessageBox* LunaTraits< wxMessageOutputMessageBox >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMessageOutputMessageBox::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)
}

void LunaTraits< wxMessageOutputMessageBox >::_bind_dtor(wxMessageOutputMessageBox* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputMessageBox >::className[] = "wxMessageOutputMessageBox";
const char LunaTraits< wxMessageOutputMessageBox >::fullName[] = "wxMessageOutputMessageBox";
const char LunaTraits< wxMessageOutputMessageBox >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputMessageBox >::parents[] = {"wx.wxMessageOutput", 0};
const int LunaTraits< wxMessageOutputMessageBox >::hash = 31008124;
const int LunaTraits< wxMessageOutputMessageBox >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputMessageBox >::methods[] = {
	{"fromVoid", &luna_wrapper_wxMessageOutputMessageBox::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMessageOutputMessageBox::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMessageOutputMessageBox::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputMessageBox >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputMessageBox::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputMessageBox >::enumValues[] = {
	{0,0}
};


