#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextObject.h>

class luna_wrapper_wxRichTextObject {
public:
	typedef Luna< wxRichTextObject > luna_t;

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

		wxRichTextObject* self= (wxRichTextObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextObject >::push(L,self,false);
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
		//wxRichTextObject* ptr= dynamic_cast< wxRichTextObject* >(Luna< wxObject >::check(L,1));
		wxRichTextObject* ptr= luna_caster< wxObject, wxRichTextObject >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextObject >::push(L,ptr,false);
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

wxRichTextObject* LunaTraits< wxRichTextObject >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxRichTextObject::Draw(wxDC & dc, const wxRichTextRange & range, const wxRichTextSelection & selection, const wxRect & rect, int descent, int style)
	// bool wxRichTextObject::Layout(wxDC & dc, const wxRect & rect, int style)
	// bool wxRichTextObject::GetRangeSize(const wxRichTextRange & range, wxSize & size, int & descent, wxDC & dc, int flags, wxPoint position = wxPoint (0, 0), wxArrayInt * partialExtents = NULL) const
}

void LunaTraits< wxRichTextObject >::_bind_dtor(wxRichTextObject* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextObject >::className[] = "wxRichTextObject";
const char LunaTraits< wxRichTextObject >::fullName[] = "wxRichTextObject";
const char LunaTraits< wxRichTextObject >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextObject >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextObject >::hash = 23258574;
const int LunaTraits< wxRichTextObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextObject >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextObject >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextObject::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextObject >::enumValues[] = {
	{0,0}
};


