#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRichTextImageBlock.h>

class luna_wrapper_wxRichTextImageBlock {
public:
	typedef Luna< wxRichTextImageBlock > luna_t;

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

		wxRichTextImageBlock* self= (wxRichTextImageBlock*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRichTextImageBlock >::push(L,self,false);
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
		//wxRichTextImageBlock* ptr= dynamic_cast< wxRichTextImageBlock* >(Luna< wxObject >::check(L,1));
		wxRichTextImageBlock* ptr= luna_caster< wxObject, wxRichTextImageBlock >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRichTextImageBlock >::push(L,ptr,false);
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

wxRichTextImageBlock* LunaTraits< wxRichTextImageBlock >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxRichTextImageBlock >::_bind_dtor(wxRichTextImageBlock* obj) {
	delete obj;
}

const char LunaTraits< wxRichTextImageBlock >::className[] = "wxRichTextImageBlock";
const char LunaTraits< wxRichTextImageBlock >::fullName[] = "wxRichTextImageBlock";
const char LunaTraits< wxRichTextImageBlock >::moduleName[] = "wx";
const char* LunaTraits< wxRichTextImageBlock >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxRichTextImageBlock >::hash = 45771863;
const int LunaTraits< wxRichTextImageBlock >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRichTextImageBlock >::methods[] = {
	{"fromVoid", &luna_wrapper_wxRichTextImageBlock::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRichTextImageBlock::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRichTextImageBlock::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRichTextImageBlock >::converters[] = {
	{"wxObject", &luna_wrapper_wxRichTextImageBlock::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRichTextImageBlock >::enumValues[] = {
	{0,0}
};


