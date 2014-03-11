#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextXMLHandler.h>

class luna_wrapper_wxRichTextXMLHandler {
public:
	typedef Luna< wxRichTextXMLHandler > luna_t;

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

		wxRichTextXMLHandler* self= (wxRichTextXMLHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextXMLHandler >::push(L,self,false);
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
		//wxRichTextXMLHandler* ptr= dynamic_cast< wxRichTextXMLHandler* >(Luna< wxObject >::check(L,1));
		wxRichTextXMLHandler* ptr= luna_caster< wxObject, wxRichTextXMLHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextXMLHandler >::push(L,ptr,false);
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

wxRichTextXMLHandler* LunaTraits< wxRichTextXMLHandler >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxRichTextFileHandler::SetVisible(bool visible)
}

void LunaTraits< wxRichTextXMLHandler >::_bind_dtor(wxRichTextXMLHandler* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextXMLHandler >::className[] = "wxRichTextXMLHandler";
const char LunaTraits< wxRichTextXMLHandler >::fullName[] = "wxRichTextXMLHandler";
const char LunaTraits< wxRichTextXMLHandler >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextXMLHandler >::parents[] = {"wx.wxRichTextFileHandler", 0};
const int LunaTraits< wxRichTextXMLHandler >::hash = 54343960;
const int LunaTraits< wxRichTextXMLHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextXMLHandler >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextXMLHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextXMLHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextXMLHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextXMLHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextXMLHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextXMLHandler >::enumValues[] = {
	{0,0}
};


