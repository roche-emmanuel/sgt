#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextCharacterStyleDefinition.h>

class luna_wrapper_wxRichTextCharacterStyleDefinition {
public:
	typedef Luna< wxRichTextCharacterStyleDefinition > luna_t;

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

		wxRichTextCharacterStyleDefinition* self= (wxRichTextCharacterStyleDefinition*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextCharacterStyleDefinition >::push(L,self,false);
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
		//wxRichTextCharacterStyleDefinition* ptr= dynamic_cast< wxRichTextCharacterStyleDefinition* >(Luna< wxObject >::check(L,1));
		wxRichTextCharacterStyleDefinition* ptr= luna_caster< wxObject, wxRichTextCharacterStyleDefinition >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextCharacterStyleDefinition >::push(L,ptr,false);
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

wxRichTextCharacterStyleDefinition* LunaTraits< wxRichTextCharacterStyleDefinition >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextCharacterStyleDefinition >::_bind_dtor(wxRichTextCharacterStyleDefinition* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextCharacterStyleDefinition >::className[] = "wxRichTextCharacterStyleDefinition";
const char LunaTraits< wxRichTextCharacterStyleDefinition >::fullName[] = "wxRichTextCharacterStyleDefinition";
const char LunaTraits< wxRichTextCharacterStyleDefinition >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextCharacterStyleDefinition >::parents[] = {"wx.wxRichTextStyleDefinition", 0};
const int LunaTraits< wxRichTextCharacterStyleDefinition >::hash = 469276;
const int LunaTraits< wxRichTextCharacterStyleDefinition >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextCharacterStyleDefinition >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextCharacterStyleDefinition::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextCharacterStyleDefinition::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextCharacterStyleDefinition::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextCharacterStyleDefinition >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextCharacterStyleDefinition::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextCharacterStyleDefinition >::enumValues[] = {
	{0,0}
};


