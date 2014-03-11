#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFFileInputStream.h>

class luna_wrapper_wxFFileInputStream {
public:
	typedef Luna< wxFFileInputStream > luna_t;

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

		wxFFileInputStream* self= (wxFFileInputStream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFFileInputStream >::push(L,self,false);
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
		//wxFFileInputStream* ptr= dynamic_cast< wxFFileInputStream* >(Luna< wxObject >::check(L,1));
		wxFFileInputStream* ptr= luna_caster< wxObject, wxFFileInputStream >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFFileInputStream >::push(L,ptr,false);
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

wxFFileInputStream* LunaTraits< wxFFileInputStream >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// size_t wxInputStream::OnSysRead(void * buffer, size_t bufsize)
}

void LunaTraits< wxFFileInputStream >::_bind_dtor(wxFFileInputStream* obj) {
	delete obj;
}

const char LunaTraits< wxFFileInputStream >::className[] = "wxFFileInputStream";
const char LunaTraits< wxFFileInputStream >::fullName[] = "wxFFileInputStream";
const char LunaTraits< wxFFileInputStream >::moduleName[] = "wx";
const char* LunaTraits< wxFFileInputStream >::parents[] = {"wx.wxInputStream", 0};
const int LunaTraits< wxFFileInputStream >::hash = 78781212;
const int LunaTraits< wxFFileInputStream >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxFFileInputStream >::methods[] = {
	{"fromVoid", &luna_wrapper_wxFFileInputStream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFFileInputStream::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFFileInputStream::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFFileInputStream >::converters[] = {
	{"wxObject", &luna_wrapper_wxFFileInputStream::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFFileInputStream >::enumValues[] = {
	{0,0}
};


