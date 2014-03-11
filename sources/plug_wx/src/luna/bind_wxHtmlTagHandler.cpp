#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlTagHandler.h>

class luna_wrapper_wxHtmlTagHandler {
public:
	typedef Luna< wxHtmlTagHandler > luna_t;

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

		wxHtmlTagHandler* self= (wxHtmlTagHandler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlTagHandler >::push(L,self,false);
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
		//wxHtmlTagHandler* ptr= dynamic_cast< wxHtmlTagHandler* >(Luna< wxObject >::check(L,1));
		wxHtmlTagHandler* ptr= luna_caster< wxObject, wxHtmlTagHandler >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlTagHandler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetSupportedTags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HandleTag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,66986009) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetParser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65918681)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetParser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,65918681)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlTagHandler::wxHtmlTagHandler(lua_Table * data)
	static wxHtmlTagHandler* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlTagHandler::wxHtmlTagHandler(lua_Table * data) function, expected prototype:\nwxHtmlTagHandler::wxHtmlTagHandler(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxHtmlTagHandler(L,NULL);
	}


	// Function binds:
	// wxString wxHtmlTagHandler::GetSupportedTags()
	static int _bind_GetSupportedTags(lua_State *L) {
		if (!_lg_typecheck_GetSupportedTags(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlTagHandler::GetSupportedTags() function, expected prototype:\nwxString wxHtmlTagHandler::GetSupportedTags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlTagHandler::GetSupportedTags(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetSupportedTags();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)
	static int _bind_HandleTag(lua_State *L) {
		if (!_lg_typecheck_HandleTag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag) function, expected prototype:\nbool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)\nClass arguments details:\narg 1 ID = 66986009\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxHtmlTag* tag_ptr=(Luna< wxHtmlTag >::check(L,2));
		if( !tag_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tag in wxHtmlTagHandler::HandleTag function");
		}
		const wxHtmlTag & tag=*tag_ptr;

		wxHtmlTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlTagHandler::HandleTag(const wxHtmlTag &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HandleTag(tag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlTagHandler::SetParser(wxHtmlParser * parser)
	static int _bind_SetParser(lua_State *L) {
		if (!_lg_typecheck_SetParser(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlTagHandler::SetParser(wxHtmlParser * parser) function, expected prototype:\nvoid wxHtmlTagHandler::SetParser(wxHtmlParser * parser)\nClass arguments details:\narg 1 ID = 65918681\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlParser* parser=(Luna< wxHtmlParser >::check(L,2));

		wxHtmlTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlTagHandler::SetParser(wxHtmlParser *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetParser(parser);

		return 0;
	}

	// wxClassInfo * wxHtmlTagHandler::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlTagHandler::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlTagHandler::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlTagHandler::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlTagHandler::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlTagHandler::base_SetParser(wxHtmlParser * parser)
	static int _bind_base_SetParser(lua_State *L) {
		if (!_lg_typecheck_base_SetParser(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlTagHandler::base_SetParser(wxHtmlParser * parser) function, expected prototype:\nvoid wxHtmlTagHandler::base_SetParser(wxHtmlParser * parser)\nClass arguments details:\narg 1 ID = 65918681\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlParser* parser=(Luna< wxHtmlParser >::check(L,2));

		wxHtmlTagHandler* self=Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlTagHandler::base_SetParser(wxHtmlParser *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlTagHandler::SetParser(parser);

		return 0;
	}


	// Operator binds:

};

wxHtmlTagHandler* LunaTraits< wxHtmlTagHandler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlTagHandler::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxString wxHtmlTagHandler::GetSupportedTags()
	// bool wxHtmlTagHandler::HandleTag(const wxHtmlTag & tag)
}

void LunaTraits< wxHtmlTagHandler >::_bind_dtor(wxHtmlTagHandler* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlTagHandler >::className[] = "wxHtmlTagHandler";
const char LunaTraits< wxHtmlTagHandler >::fullName[] = "wxHtmlTagHandler";
const char LunaTraits< wxHtmlTagHandler >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlTagHandler >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxHtmlTagHandler >::hash = 37580747;
const int LunaTraits< wxHtmlTagHandler >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlTagHandler >::methods[] = {
	{"GetSupportedTags", &luna_wrapper_wxHtmlTagHandler::_bind_GetSupportedTags},
	{"HandleTag", &luna_wrapper_wxHtmlTagHandler::_bind_HandleTag},
	{"SetParser", &luna_wrapper_wxHtmlTagHandler::_bind_SetParser},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlTagHandler::_bind_base_GetClassInfo},
	{"base_SetParser", &luna_wrapper_wxHtmlTagHandler::_bind_base_SetParser},
	{"fromVoid", &luna_wrapper_wxHtmlTagHandler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlTagHandler::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlTagHandler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlTagHandler >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlTagHandler::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlTagHandler >::enumValues[] = {
	{0,0}
};


