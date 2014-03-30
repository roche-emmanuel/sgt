#include <plug_common.h>

#include <luna/wrappers/wrapper_wxLogStream.h>

class luna_wrapper_wxLogStream {
public:
	typedef Luna< wxLogStream > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLog* self=(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxLog,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxLogStream* self= (wxLogStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLogStream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13550494) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLog >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxLog(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxLogStream* ptr= dynamic_cast< wxLogStream* >(Luna< wxLog >::check(L,1));
		wxLogStream* ptr= luna_caster< wxLog, wxLogStream >::cast(Luna< wxLog >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxLogStream >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_Flush(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void wxLogStream::base_Flush()
	static int _bind_base_Flush(lua_State *L) {
		if (!_lg_typecheck_base_Flush(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogStream::base_Flush() function, expected prototype:\nvoid wxLogStream::base_Flush()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogStream* self=Luna< wxLog >::checkSubType< wxLogStream >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogStream::base_Flush(). Got : '%s'\n%s",typeid(Luna< wxLog >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxLogStream::Flush();

		return 0;
	}


	// Operator binds:

};

wxLogStream* LunaTraits< wxLogStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLogStream >::_bind_dtor(wxLogStream* obj) {
	delete obj;
}

const char LunaTraits< wxLogStream >::className[] = "wxLogStream";
const char LunaTraits< wxLogStream >::fullName[] = "wxLogStream";
const char LunaTraits< wxLogStream >::moduleName[] = "wx";
const char* LunaTraits< wxLogStream >::parents[] = {"wx.wxLog", 0};
const int LunaTraits< wxLogStream >::hash = 63672516;
const int LunaTraits< wxLogStream >::uniqueIDs[] = {13550494,0};

luna_RegType LunaTraits< wxLogStream >::methods[] = {
	{"base_Flush", &luna_wrapper_wxLogStream::_bind_base_Flush},
	{"fromVoid", &luna_wrapper_wxLogStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLogStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxLogStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogStream >::converters[] = {
	{"wxLog", &luna_wrapper_wxLogStream::_cast_from_wxLog},
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogStream >::enumValues[] = {
	{0,0}
};


