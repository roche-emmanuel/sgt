#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGDIObject.h>

class luna_wrapper_wxGDIObject {
public:
	typedef Luna< wxGDIObject > luna_t;

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

		wxGDIObject* self= (wxGDIObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGDIObject >::push(L,self,false);
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
		//wxGDIObject* ptr= dynamic_cast< wxGDIObject* >(Luna< wxObject >::check(L,1));
		wxGDIObject* ptr= luna_caster< wxObject, wxGDIObject >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGDIObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxClassInfo * wxGDIObject::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGDIObject::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGDIObject::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGDIObject* self=Luna< wxObject >::checkSubType< wxGDIObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGDIObject::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGDIObject::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGDIObject* LunaTraits< wxGDIObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxGDIObject >::_bind_dtor(wxGDIObject* obj) {
	delete obj;
}

const char LunaTraits< wxGDIObject >::className[] = "wxGDIObject";
const char LunaTraits< wxGDIObject >::fullName[] = "wxGDIObject";
const char LunaTraits< wxGDIObject >::moduleName[] = "wx";
const char* LunaTraits< wxGDIObject >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxGDIObject >::hash = 10022955;
const int LunaTraits< wxGDIObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGDIObject >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxGDIObject::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxGDIObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGDIObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGDIObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGDIObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxGDIObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGDIObject >::enumValues[] = {
	{0,0}
};


