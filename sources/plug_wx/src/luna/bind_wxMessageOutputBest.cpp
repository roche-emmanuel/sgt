#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMessageOutputBest.h>

class luna_wrapper_wxMessageOutputBest {
public:
	typedef Luna< wxMessageOutputBest > luna_t;

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

		wxMessageOutputBest* self= (wxMessageOutputBest*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMessageOutputBest >::push(L,self,false);
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
		//wxMessageOutputBest* ptr= dynamic_cast< wxMessageOutputBest* >(Luna< wxMessageOutput >::check(L,1));
		wxMessageOutputBest* ptr= luna_caster< wxMessageOutput, wxMessageOutputBest >::cast(Luna< wxMessageOutput >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMessageOutputBest >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMessageOutputBest::wxMessageOutputBest(lua_Table * data, wxMessageOutputFlags flags = ::wxMSGOUT_PREFER_STDERR)
	static wxMessageOutputBest* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMessageOutputBest::wxMessageOutputBest(lua_Table * data, wxMessageOutputFlags flags = ::wxMSGOUT_PREFER_STDERR) function, expected prototype:\nwxMessageOutputBest::wxMessageOutputBest(lua_Table * data, wxMessageOutputFlags flags = ::wxMSGOUT_PREFER_STDERR)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxMessageOutputFlags flags=luatop>1 ? (wxMessageOutputFlags)lua_tointeger(L,2) : (wxMessageOutputFlags)::wxMSGOUT_PREFER_STDERR;

		return new wrapper_wxMessageOutputBest(L,NULL, flags);
	}


	// Function binds:

	// Operator binds:

};

wxMessageOutputBest* LunaTraits< wxMessageOutputBest >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMessageOutputBest::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxMessageOutput::Output(const wxString & str)
}

void LunaTraits< wxMessageOutputBest >::_bind_dtor(wxMessageOutputBest* obj) {
	delete obj;
}

const char LunaTraits< wxMessageOutputBest >::className[] = "wxMessageOutputBest";
const char LunaTraits< wxMessageOutputBest >::fullName[] = "wxMessageOutputBest";
const char LunaTraits< wxMessageOutputBest >::moduleName[] = "wx";
const char* LunaTraits< wxMessageOutputBest >::parents[] = {"wx.wxMessageOutputStderr", 0};
const int LunaTraits< wxMessageOutputBest >::hash = 72427222;
const int LunaTraits< wxMessageOutputBest >::uniqueIDs[] = {42086186,0};

luna_RegType LunaTraits< wxMessageOutputBest >::methods[] = {
	{"fromVoid", &luna_wrapper_wxMessageOutputBest::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMessageOutputBest::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMessageOutputBest::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMessageOutputBest >::converters[] = {
	{"wxMessageOutput", &luna_wrapper_wxMessageOutputBest::_cast_from_wxMessageOutput},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMessageOutputBest >::enumValues[] = {
	{0,0}
};


