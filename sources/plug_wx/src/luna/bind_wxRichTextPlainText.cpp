#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextPlainText.h>

class luna_wrapper_wxRichTextPlainText {
public:
	typedef Luna< wxRichTextPlainText > luna_t;

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

		wxRichTextPlainText* self= (wxRichTextPlainText*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextPlainText >::push(L,self,false);
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
		//wxRichTextPlainText* ptr= dynamic_cast< wxRichTextPlainText* >(Luna< wxObject >::check(L,1));
		wxRichTextPlainText* ptr= luna_caster< wxObject, wxRichTextPlainText >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextPlainText >::push(L,ptr,false);
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

wxRichTextPlainText* LunaTraits< wxRichTextPlainText >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextPlainText >::_bind_dtor(wxRichTextPlainText* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextPlainText >::className[] = "wxRichTextPlainText";
const char LunaTraits< wxRichTextPlainText >::fullName[] = "wxRichTextPlainText";
const char LunaTraits< wxRichTextPlainText >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextPlainText >::parents[] = {"wx.wxRichTextObject", 0};
const int LunaTraits< wxRichTextPlainText >::hash = 49337308;
const int LunaTraits< wxRichTextPlainText >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextPlainText >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextPlainText::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextPlainText::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextPlainText::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextPlainText >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextPlainText::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextPlainText >::enumValues[] = {
	{0,0}
};


