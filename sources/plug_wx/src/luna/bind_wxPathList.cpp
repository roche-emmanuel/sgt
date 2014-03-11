#include <plug_common.h>

class luna_wrapper_wxPathList {
public:
	typedef Luna< wxPathList > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPathList* self= (wxPathList*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPathList >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59507769) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxArrayString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:

	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxPathList* LunaTraits< wxPathList >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPathList >::_bind_dtor(wxPathList* obj) {
	delete obj;
}

const char LunaTraits< wxPathList >::className[] = "wxPathList";
const char LunaTraits< wxPathList >::fullName[] = "wxPathList";
const char LunaTraits< wxPathList >::moduleName[] = "wx";
const char* LunaTraits< wxPathList >::parents[] = {"wx.wxArrayString", 0};
const int LunaTraits< wxPathList >::hash = 11372467;
const int LunaTraits< wxPathList >::uniqueIDs[] = {59507769,0};

luna_RegType LunaTraits< wxPathList >::methods[] = {
	{"fromVoid", &luna_wrapper_wxPathList::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPathList::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxPathList >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPathList >::enumValues[] = {
	{0,0}
};


