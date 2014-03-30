#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextStyleListBox.h>

class luna_wrapper_wxRichTextStyleListBox {
public:
	typedef Luna< wxRichTextStyleListBox > luna_t;

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

		wxRichTextStyleListBox* self= (wxRichTextStyleListBox*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextStyleListBox >::push(L,self,false);
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
		//wxRichTextStyleListBox* ptr= dynamic_cast< wxRichTextStyleListBox* >(Luna< wxObject >::check(L,1));
		wxRichTextStyleListBox* ptr= luna_caster< wxObject, wxRichTextStyleListBox >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleListBox >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxVarScrollHelperBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxRichTextStyleListBox* ptr= dynamic_cast< wxRichTextStyleListBox* >(Luna< wxVarScrollHelperBase >::check(L,1));
		wxRichTextStyleListBox* ptr= luna_caster< wxVarScrollHelperBase, wxRichTextStyleListBox >::cast(Luna< wxVarScrollHelperBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextStyleListBox >::push(L,ptr,false);
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

wxRichTextStyleListBox* LunaTraits< wxRichTextStyleListBox >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxVListBox::OnDrawItem(wxDC & dc, const wxRect & rect, size_t n) const
	// int wxVListBox::OnMeasureItem(size_t n) const
	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
}

void LunaTraits< wxRichTextStyleListBox >::_bind_dtor(wxRichTextStyleListBox* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextStyleListBox >::className[] = "wxRichTextStyleListBox";
const char LunaTraits< wxRichTextStyleListBox >::fullName[] = "wxRichTextStyleListBox";
const char LunaTraits< wxRichTextStyleListBox >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextStyleListBox >::parents[] = {"wx.wxHtmlListBox", 0};
const int LunaTraits< wxRichTextStyleListBox >::hash = 25476459;
const int LunaTraits< wxRichTextStyleListBox >::uniqueIDs[] = {56813631, 53506535, 94004845,0};

luna_RegType LunaTraits< wxRichTextStyleListBox >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextStyleListBox::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextStyleListBox::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextStyleListBox::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextStyleListBox >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextStyleListBox::_cast_from_wxObject},
	{"wxVarScrollHelperBase", &luna_wrapper_wxRichTextStyleListBox::_cast_from_wxVarScrollHelperBase},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextStyleListBox >::enumValues[] = {
	{0,0}
};


