#include <plug_common.h>

#include <luna/wrappers/wrapper_wxArtProvider.h>

class luna_wrapper_wxArtProvider {
public:
	typedef Luna< wxArtProvider > luna_t;

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

		wxArtProvider* self= (wxArtProvider*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxArtProvider >::push(L,self,false);
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
		//wxArtProvider* ptr= dynamic_cast< wxArtProvider* >(Luna< wxObject >::check(L,1));
		wxArtProvider* ptr= luna_caster< wxObject, wxArtProvider >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxArtProvider >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Delete(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIcon(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNativeSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSizeHint(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetIconBundle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasNativeProvider(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pop(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Push(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static bool wxArtProvider::Delete(wxArtProvider * provider)
	static int _bind_Delete(lua_State *L) {
		if (!_lg_typecheck_Delete(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxArtProvider::Delete(wxArtProvider * provider) function, expected prototype:\nstatic bool wxArtProvider::Delete(wxArtProvider * provider)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArtProvider* provider=(Luna< wxObject >::checkSubType< wxArtProvider >(L,1));

		bool lret = wxArtProvider::Delete(provider);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxBitmap wxArtProvider::GetBitmap(const wxString & id, const wxString & client = wxART_OTHER, const wxSize & size = wxDefaultSize)
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in static wxBitmap wxArtProvider::GetBitmap(const wxString & id, const wxString & client = wxART_OTHER, const wxSize & size = wxDefaultSize) function, expected prototype:\nstatic wxBitmap wxArtProvider::GetBitmap(const wxString & id, const wxString & client = wxART_OTHER, const wxSize & size = wxDefaultSize)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString id(lua_tostring(L,1),lua_objlen(L,1));
		wxString client(lua_tostring(L,2),lua_objlen(L,2));
		const wxSize* size_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxArtProvider::GetBitmap function");
		}
		const wxSize & size=luatop>2 ? *size_ptr : (const wxSize&)wxDefaultSize;

		wxBitmap stack_lret = wxArtProvider::GetBitmap(id, client, size);
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// static wxIcon wxArtProvider::GetIcon(const wxString & id, const wxString & client = wxART_OTHER, const wxSize & size = wxDefaultSize)
	static int _bind_GetIcon(lua_State *L) {
		if (!_lg_typecheck_GetIcon(L)) {
			luaL_error(L, "luna typecheck failed in static wxIcon wxArtProvider::GetIcon(const wxString & id, const wxString & client = wxART_OTHER, const wxSize & size = wxDefaultSize) function, expected prototype:\nstatic wxIcon wxArtProvider::GetIcon(const wxString & id, const wxString & client = wxART_OTHER, const wxSize & size = wxDefaultSize)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString id(lua_tostring(L,1),lua_objlen(L,1));
		wxString client(lua_tostring(L,2),lua_objlen(L,2));
		const wxSize* size_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxArtProvider::GetIcon function");
		}
		const wxSize & size=luatop>2 ? *size_ptr : (const wxSize&)wxDefaultSize;

		wxIcon stack_lret = wxArtProvider::GetIcon(id, client, size);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}

	// static wxSize wxArtProvider::GetNativeSizeHint(const wxString & client)
	static int _bind_GetNativeSizeHint(lua_State *L) {
		if (!_lg_typecheck_GetNativeSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in static wxSize wxArtProvider::GetNativeSizeHint(const wxString & client) function, expected prototype:\nstatic wxSize wxArtProvider::GetNativeSizeHint(const wxString & client)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString client(lua_tostring(L,1),lua_objlen(L,1));

		wxSize stack_lret = wxArtProvider::GetNativeSizeHint(client);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// static wxSize wxArtProvider::GetSizeHint(const wxString & client, bool platform_default = false)
	static int _bind_GetSizeHint(lua_State *L) {
		if (!_lg_typecheck_GetSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in static wxSize wxArtProvider::GetSizeHint(const wxString & client, bool platform_default = false) function, expected prototype:\nstatic wxSize wxArtProvider::GetSizeHint(const wxString & client, bool platform_default = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString client(lua_tostring(L,1),lua_objlen(L,1));
		bool platform_default=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxSize stack_lret = wxArtProvider::GetSizeHint(client, platform_default);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// static wxIconBundle wxArtProvider::GetIconBundle(const wxString & id, const wxString & client = wxART_OTHER)
	static int _bind_GetIconBundle(lua_State *L) {
		if (!_lg_typecheck_GetIconBundle(L)) {
			luaL_error(L, "luna typecheck failed in static wxIconBundle wxArtProvider::GetIconBundle(const wxString & id, const wxString & client = wxART_OTHER) function, expected prototype:\nstatic wxIconBundle wxArtProvider::GetIconBundle(const wxString & id, const wxString & client = wxART_OTHER)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString id(lua_tostring(L,1),lua_objlen(L,1));
		wxString client(lua_tostring(L,2),lua_objlen(L,2));

		wxIconBundle stack_lret = wxArtProvider::GetIconBundle(id, client);
		wxIconBundle* lret = new wxIconBundle(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIconBundle >::push(L,lret,true);

		return 1;
	}

	// static bool wxArtProvider::HasNativeProvider()
	static int _bind_HasNativeProvider(lua_State *L) {
		if (!_lg_typecheck_HasNativeProvider(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxArtProvider::HasNativeProvider() function, expected prototype:\nstatic bool wxArtProvider::HasNativeProvider()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxArtProvider::HasNativeProvider();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxArtProvider::Insert(wxArtProvider * provider)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luaL_error(L, "luna typecheck failed in static void wxArtProvider::Insert(wxArtProvider * provider) function, expected prototype:\nstatic void wxArtProvider::Insert(wxArtProvider * provider)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArtProvider* provider=(Luna< wxObject >::checkSubType< wxArtProvider >(L,1));

		wxArtProvider::Insert(provider);

		return 0;
	}

	// static bool wxArtProvider::Pop()
	static int _bind_Pop(lua_State *L) {
		if (!_lg_typecheck_Pop(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxArtProvider::Pop() function, expected prototype:\nstatic bool wxArtProvider::Pop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxArtProvider::Pop();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxArtProvider::Push(wxArtProvider * provider)
	static int _bind_Push(lua_State *L) {
		if (!_lg_typecheck_Push(L)) {
			luaL_error(L, "luna typecheck failed in static void wxArtProvider::Push(wxArtProvider * provider) function, expected prototype:\nstatic void wxArtProvider::Push(wxArtProvider * provider)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArtProvider* provider=(Luna< wxObject >::checkSubType< wxArtProvider >(L,1));

		wxArtProvider::Push(provider);

		return 0;
	}

	// static void wxArtProvider::PushBack(wxArtProvider * provider)
	static int _bind_PushBack(lua_State *L) {
		if (!_lg_typecheck_PushBack(L)) {
			luaL_error(L, "luna typecheck failed in static void wxArtProvider::PushBack(wxArtProvider * provider) function, expected prototype:\nstatic void wxArtProvider::PushBack(wxArtProvider * provider)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArtProvider* provider=(Luna< wxObject >::checkSubType< wxArtProvider >(L,1));

		wxArtProvider::PushBack(provider);

		return 0;
	}

	// static bool wxArtProvider::Remove(wxArtProvider * provider)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxArtProvider::Remove(wxArtProvider * provider) function, expected prototype:\nstatic bool wxArtProvider::Remove(wxArtProvider * provider)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArtProvider* provider=(Luna< wxObject >::checkSubType< wxArtProvider >(L,1));

		bool lret = wxArtProvider::Remove(provider);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxArtProvider::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxArtProvider::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxArtProvider::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxArtProvider* self=Luna< wxObject >::checkSubType< wxArtProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxArtProvider::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxArtProvider::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxArtProvider* LunaTraits< wxArtProvider >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxArtProvider >::_bind_dtor(wxArtProvider* obj) {
	delete obj;
}

const char LunaTraits< wxArtProvider >::className[] = "wxArtProvider";
const char LunaTraits< wxArtProvider >::fullName[] = "wxArtProvider";
const char LunaTraits< wxArtProvider >::moduleName[] = "wx";
const char* LunaTraits< wxArtProvider >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxArtProvider >::hash = 17671624;
const int LunaTraits< wxArtProvider >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxArtProvider >::methods[] = {
	{"Delete", &luna_wrapper_wxArtProvider::_bind_Delete},
	{"GetBitmap", &luna_wrapper_wxArtProvider::_bind_GetBitmap},
	{"GetIcon", &luna_wrapper_wxArtProvider::_bind_GetIcon},
	{"GetNativeSizeHint", &luna_wrapper_wxArtProvider::_bind_GetNativeSizeHint},
	{"GetSizeHint", &luna_wrapper_wxArtProvider::_bind_GetSizeHint},
	{"GetIconBundle", &luna_wrapper_wxArtProvider::_bind_GetIconBundle},
	{"HasNativeProvider", &luna_wrapper_wxArtProvider::_bind_HasNativeProvider},
	{"Insert", &luna_wrapper_wxArtProvider::_bind_Insert},
	{"Pop", &luna_wrapper_wxArtProvider::_bind_Pop},
	{"Push", &luna_wrapper_wxArtProvider::_bind_Push},
	{"PushBack", &luna_wrapper_wxArtProvider::_bind_PushBack},
	{"Remove", &luna_wrapper_wxArtProvider::_bind_Remove},
	{"base_GetClassInfo", &luna_wrapper_wxArtProvider::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxArtProvider::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxArtProvider::_bind_asVoid},
	{"getTable", &luna_wrapper_wxArtProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxArtProvider >::converters[] = {
	{"wxObject", &luna_wrapper_wxArtProvider::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxArtProvider >::enumValues[] = {
	{0,0}
};


