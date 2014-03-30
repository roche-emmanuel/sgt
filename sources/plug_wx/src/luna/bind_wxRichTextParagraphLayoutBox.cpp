#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextParagraphLayoutBox.h>

class luna_wrapper_wxRichTextParagraphLayoutBox {
public:
	typedef Luna< wxRichTextParagraphLayoutBox > luna_t;

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

		wxRichTextParagraphLayoutBox* self= (wxRichTextParagraphLayoutBox*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextParagraphLayoutBox >::push(L,self,false);
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
		//wxRichTextParagraphLayoutBox* ptr= dynamic_cast< wxRichTextParagraphLayoutBox* >(Luna< wxObject >::check(L,1));
		wxRichTextParagraphLayoutBox* ptr= luna_caster< wxObject, wxRichTextParagraphLayoutBox >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextParagraphLayoutBox >::push(L,ptr,false);
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

wxRichTextParagraphLayoutBox* LunaTraits< wxRichTextParagraphLayoutBox >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextParagraphLayoutBox >::_bind_dtor(wxRichTextParagraphLayoutBox* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextParagraphLayoutBox >::className[] = "wxRichTextParagraphLayoutBox";
const char LunaTraits< wxRichTextParagraphLayoutBox >::fullName[] = "wxRichTextParagraphLayoutBox";
const char LunaTraits< wxRichTextParagraphLayoutBox >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextParagraphLayoutBox >::parents[] = {"wx.wxRichTextCompositeObject", 0};
const int LunaTraits< wxRichTextParagraphLayoutBox >::hash = 37403293;
const int LunaTraits< wxRichTextParagraphLayoutBox >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextParagraphLayoutBox >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextParagraphLayoutBox::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextParagraphLayoutBox::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextParagraphLayoutBox::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextParagraphLayoutBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextParagraphLayoutBox::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextParagraphLayoutBox >::enumValues[] = {
	{0,0}
};


