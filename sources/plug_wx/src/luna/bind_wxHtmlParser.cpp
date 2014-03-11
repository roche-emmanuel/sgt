#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlParser.h>

class luna_wrapper_wxHtmlParser {
public:
	typedef Luna< wxHtmlParser > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxHtmlParser,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65918681) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxHtmlParser*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlParser* rhs =(Luna< wxHtmlParser >::check(L,2));
		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxHtmlParser* self= (wxHtmlParser*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlParser >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65918681) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxHtmlParser");
		
		return luna_dynamicCast(L,converters,"wxHtmlParser",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddTagHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DoParsing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoneParser(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFS(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetProduct(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSource(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitParser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Parse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopTagHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PushTagHandler(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFS(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StopParsing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddTagHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoneParser(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitParser(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_StopParsing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlParser::wxHtmlParser(lua_Table * data)
	static wxHtmlParser* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlParser::wxHtmlParser(lua_Table * data) function, expected prototype:\nwxHtmlParser::wxHtmlParser(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxHtmlParser(L,NULL);
	}


	// Function binds:
	// void wxHtmlParser::AddTagHandler(wxHtmlTagHandler * handler)
	static int _bind_AddTagHandler(lua_State *L) {
		if (!_lg_typecheck_AddTagHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::AddTagHandler(wxHtmlTagHandler * handler) function, expected prototype:\nvoid wxHtmlParser::AddTagHandler(wxHtmlTagHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlTagHandler* handler=(Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::AddTagHandler(wxHtmlTagHandler *). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddTagHandler(handler);

		return 0;
	}

	// void wxHtmlParser::DoParsing()
	static int _bind_DoParsing(lua_State *L) {
		if (!_lg_typecheck_DoParsing(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::DoParsing() function, expected prototype:\nvoid wxHtmlParser::DoParsing()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::DoParsing(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DoParsing();

		return 0;
	}

	// void wxHtmlParser::DoneParser()
	static int _bind_DoneParser(lua_State *L) {
		if (!_lg_typecheck_DoneParser(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::DoneParser() function, expected prototype:\nvoid wxHtmlParser::DoneParser()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::DoneParser(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DoneParser();

		return 0;
	}

	// wxFileSystem * wxHtmlParser::GetFS() const
	static int _bind_GetFS(lua_State *L) {
		if (!_lg_typecheck_GetFS(L)) {
			luaL_error(L, "luna typecheck failed in wxFileSystem * wxHtmlParser::GetFS() const function, expected prototype:\nwxFileSystem * wxHtmlParser::GetFS() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileSystem * wxHtmlParser::GetFS() const. Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileSystem * lret = self->GetFS();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileSystem >::push(L,lret,false);

		return 1;
	}

	// wxObject * wxHtmlParser::GetProduct()
	static int _bind_GetProduct(lua_State *L) {
		if (!_lg_typecheck_GetProduct(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxHtmlParser::GetProduct() function, expected prototype:\nwxObject * wxHtmlParser::GetProduct()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxHtmlParser::GetProduct(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->GetProduct();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// const wxString * wxHtmlParser::GetSource()
	static int _bind_GetSource(lua_State *L) {
		if (!_lg_typecheck_GetSource(L)) {
			luaL_error(L, "luna typecheck failed in const wxString * wxHtmlParser::GetSource() function, expected prototype:\nconst wxString * wxHtmlParser::GetSource()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString * wxHtmlParser::GetSource(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString * lret = self->GetSource();
		lua_pushlstring(L,lret->data(),lret->size());

		return 1;
	}

	// void wxHtmlParser::InitParser(const wxString & source)
	static int _bind_InitParser(lua_State *L) {
		if (!_lg_typecheck_InitParser(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::InitParser(const wxString & source) function, expected prototype:\nvoid wxHtmlParser::InitParser(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::InitParser(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InitParser(source);

		return 0;
	}

	// wxObject * wxHtmlParser::Parse(const wxString & source)
	static int _bind_Parse(lua_State *L) {
		if (!_lg_typecheck_Parse(L)) {
			luaL_error(L, "luna typecheck failed in wxObject * wxHtmlParser::Parse(const wxString & source) function, expected prototype:\nwxObject * wxHtmlParser::Parse(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObject * wxHtmlParser::Parse(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObject * lret = self->Parse(source);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObject >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlParser::PopTagHandler()
	static int _bind_PopTagHandler(lua_State *L) {
		if (!_lg_typecheck_PopTagHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::PopTagHandler() function, expected prototype:\nvoid wxHtmlParser::PopTagHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::PopTagHandler(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PopTagHandler();

		return 0;
	}

	// void wxHtmlParser::PushTagHandler(wxHtmlTagHandler * handler, const wxString & tags)
	static int _bind_PushTagHandler(lua_State *L) {
		if (!_lg_typecheck_PushTagHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::PushTagHandler(wxHtmlTagHandler * handler, const wxString & tags) function, expected prototype:\nvoid wxHtmlParser::PushTagHandler(wxHtmlTagHandler * handler, const wxString & tags)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlTagHandler* handler=(Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,2));
		wxString tags(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::PushTagHandler(wxHtmlTagHandler *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PushTagHandler(handler, tags);

		return 0;
	}

	// void wxHtmlParser::SetFS(wxFileSystem * fs)
	static int _bind_SetFS(lua_State *L) {
		if (!_lg_typecheck_SetFS(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::SetFS(wxFileSystem * fs) function, expected prototype:\nvoid wxHtmlParser::SetFS(wxFileSystem * fs)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFileSystem* fs=(Luna< wxObject >::checkSubType< wxFileSystem >(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::SetFS(wxFileSystem *). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFS(fs);

		return 0;
	}

	// void wxHtmlParser::StopParsing()
	static int _bind_StopParsing(lua_State *L) {
		if (!_lg_typecheck_StopParsing(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::StopParsing() function, expected prototype:\nvoid wxHtmlParser::StopParsing()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::StopParsing(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StopParsing();

		return 0;
	}

	// void wxHtmlParser::base_AddTagHandler(wxHtmlTagHandler * handler)
	static int _bind_base_AddTagHandler(lua_State *L) {
		if (!_lg_typecheck_base_AddTagHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::base_AddTagHandler(wxHtmlTagHandler * handler) function, expected prototype:\nvoid wxHtmlParser::base_AddTagHandler(wxHtmlTagHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlTagHandler* handler=(Luna< wxObject >::checkSubType< wxHtmlTagHandler >(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::base_AddTagHandler(wxHtmlTagHandler *). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlParser::AddTagHandler(handler);

		return 0;
	}

	// void wxHtmlParser::base_DoneParser()
	static int _bind_base_DoneParser(lua_State *L) {
		if (!_lg_typecheck_base_DoneParser(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::base_DoneParser() function, expected prototype:\nvoid wxHtmlParser::base_DoneParser()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::base_DoneParser(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlParser::DoneParser();

		return 0;
	}

	// void wxHtmlParser::base_InitParser(const wxString & source)
	static int _bind_base_InitParser(lua_State *L) {
		if (!_lg_typecheck_base_InitParser(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::base_InitParser(const wxString & source) function, expected prototype:\nvoid wxHtmlParser::base_InitParser(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::base_InitParser(const wxString &). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlParser::InitParser(source);

		return 0;
	}

	// void wxHtmlParser::base_StopParsing()
	static int _bind_base_StopParsing(lua_State *L) {
		if (!_lg_typecheck_base_StopParsing(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlParser::base_StopParsing() function, expected prototype:\nvoid wxHtmlParser::base_StopParsing()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlParser* self=(Luna< wxHtmlParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlParser::base_StopParsing(). Got : '%s'\n%s",typeid(Luna< wxHtmlParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlParser::StopParsing();

		return 0;
	}


	// Operator binds:

};

wxHtmlParser* LunaTraits< wxHtmlParser >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlParser::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxHtmlParser::AddText(const wxString & arg1)
	// wxObject * wxHtmlParser::GetProduct()
}

void LunaTraits< wxHtmlParser >::_bind_dtor(wxHtmlParser* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlParser >::className[] = "wxHtmlParser";
const char LunaTraits< wxHtmlParser >::fullName[] = "wxHtmlParser";
const char LunaTraits< wxHtmlParser >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlParser >::parents[] = {0};
const int LunaTraits< wxHtmlParser >::hash = 65918681;
const int LunaTraits< wxHtmlParser >::uniqueIDs[] = {65918681,0};

luna_RegType LunaTraits< wxHtmlParser >::methods[] = {
	{"AddTagHandler", &luna_wrapper_wxHtmlParser::_bind_AddTagHandler},
	{"DoParsing", &luna_wrapper_wxHtmlParser::_bind_DoParsing},
	{"DoneParser", &luna_wrapper_wxHtmlParser::_bind_DoneParser},
	{"GetFS", &luna_wrapper_wxHtmlParser::_bind_GetFS},
	{"GetProduct", &luna_wrapper_wxHtmlParser::_bind_GetProduct},
	{"GetSource", &luna_wrapper_wxHtmlParser::_bind_GetSource},
	{"InitParser", &luna_wrapper_wxHtmlParser::_bind_InitParser},
	{"Parse", &luna_wrapper_wxHtmlParser::_bind_Parse},
	{"PopTagHandler", &luna_wrapper_wxHtmlParser::_bind_PopTagHandler},
	{"PushTagHandler", &luna_wrapper_wxHtmlParser::_bind_PushTagHandler},
	{"SetFS", &luna_wrapper_wxHtmlParser::_bind_SetFS},
	{"StopParsing", &luna_wrapper_wxHtmlParser::_bind_StopParsing},
	{"base_AddTagHandler", &luna_wrapper_wxHtmlParser::_bind_base_AddTagHandler},
	{"base_DoneParser", &luna_wrapper_wxHtmlParser::_bind_base_DoneParser},
	{"base_InitParser", &luna_wrapper_wxHtmlParser::_bind_base_InitParser},
	{"base_StopParsing", &luna_wrapper_wxHtmlParser::_bind_base_StopParsing},
	{"dynCast", &luna_wrapper_wxHtmlParser::_bind_dynCast},
	{"__eq", &luna_wrapper_wxHtmlParser::_bind___eq},
	{"fromVoid", &luna_wrapper_wxHtmlParser::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlParser::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlParser::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlParser >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlParser >::enumValues[] = {
	{0,0}
};


