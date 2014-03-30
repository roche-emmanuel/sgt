#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEncodingConverter.h>

class luna_wrapper_wxEncodingConverter {
public:
	typedef Luna< wxEncodingConverter > luna_t;

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

		wxEncodingConverter* self= (wxEncodingConverter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxEncodingConverter >::push(L,self,false);
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
		//wxEncodingConverter* ptr= dynamic_cast< wxEncodingConverter* >(Luna< wxObject >::check(L,1));
		wxEncodingConverter* ptr= luna_caster< wxObject, wxEncodingConverter >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxEncodingConverter >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Convert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAllEquivalents(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPlatformEquivalents(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanConvert(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxEncodingConverter::wxEncodingConverter()
	static wxEncodingConverter* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxEncodingConverter::wxEncodingConverter() function, expected prototype:\nwxEncodingConverter::wxEncodingConverter()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxEncodingConverter();
	}

	// wxEncodingConverter::wxEncodingConverter(lua_Table * data)
	static wxEncodingConverter* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxEncodingConverter::wxEncodingConverter(lua_Table * data) function, expected prototype:\nwxEncodingConverter::wxEncodingConverter(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxEncodingConverter(L,NULL);
	}

	// Overload binder for wxEncodingConverter::wxEncodingConverter
	static wxEncodingConverter* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxEncodingConverter, cannot match any of the overloads for function wxEncodingConverter:\n  wxEncodingConverter()\n  wxEncodingConverter(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxEncodingConverter::Convert(const wxString & input) const
	static int _bind_Convert(lua_State *L) {
		if (!_lg_typecheck_Convert(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxEncodingConverter::Convert(const wxString & input) const function, expected prototype:\nwxString wxEncodingConverter::Convert(const wxString & input) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString input(lua_tostring(L,2),lua_objlen(L,2));

		wxEncodingConverter* self=Luna< wxObject >::checkSubType< wxEncodingConverter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxEncodingConverter::Convert(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Convert(input);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxEncodingConverter::Init(wxFontEncoding input_enc, wxFontEncoding output_enc, int method = ::wxCONVERT_STRICT)
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEncodingConverter::Init(wxFontEncoding input_enc, wxFontEncoding output_enc, int method = ::wxCONVERT_STRICT) function, expected prototype:\nbool wxEncodingConverter::Init(wxFontEncoding input_enc, wxFontEncoding output_enc, int method = ::wxCONVERT_STRICT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFontEncoding input_enc=(wxFontEncoding)lua_tointeger(L,2);
		wxFontEncoding output_enc=(wxFontEncoding)lua_tointeger(L,3);
		int method=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxCONVERT_STRICT;

		wxEncodingConverter* self=Luna< wxObject >::checkSubType< wxEncodingConverter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEncodingConverter::Init(wxFontEncoding, wxFontEncoding, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Init(input_enc, output_enc, method);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxFontEncodingArray wxEncodingConverter::GetAllEquivalents(wxFontEncoding enc)
	static int _bind_GetAllEquivalents(lua_State *L) {
		if (!_lg_typecheck_GetAllEquivalents(L)) {
			luaL_error(L, "luna typecheck failed in static wxFontEncodingArray wxEncodingConverter::GetAllEquivalents(wxFontEncoding enc) function, expected prototype:\nstatic wxFontEncodingArray wxEncodingConverter::GetAllEquivalents(wxFontEncoding enc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding enc=(wxFontEncoding)lua_tointeger(L,1);

		wxFontEncodingArray stack_lret = wxEncodingConverter::GetAllEquivalents(enc);
		wxFontEncodingArray* lret = new wxFontEncodingArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontEncodingArray >::push(L,lret,true);

		return 1;
	}

	// static wxFontEncodingArray wxEncodingConverter::GetPlatformEquivalents(wxFontEncoding enc, int platform = ::wxPLATFORM_CURRENT)
	static int _bind_GetPlatformEquivalents(lua_State *L) {
		if (!_lg_typecheck_GetPlatformEquivalents(L)) {
			luaL_error(L, "luna typecheck failed in static wxFontEncodingArray wxEncodingConverter::GetPlatformEquivalents(wxFontEncoding enc, int platform = ::wxPLATFORM_CURRENT) function, expected prototype:\nstatic wxFontEncodingArray wxEncodingConverter::GetPlatformEquivalents(wxFontEncoding enc, int platform = ::wxPLATFORM_CURRENT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFontEncoding enc=(wxFontEncoding)lua_tointeger(L,1);
		int platform=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxPLATFORM_CURRENT;

		wxFontEncodingArray stack_lret = wxEncodingConverter::GetPlatformEquivalents(enc, platform);
		wxFontEncodingArray* lret = new wxFontEncodingArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFontEncodingArray >::push(L,lret,true);

		return 1;
	}

	// static bool wxEncodingConverter::CanConvert(wxFontEncoding encIn, wxFontEncoding encOut)
	static int _bind_CanConvert(lua_State *L) {
		if (!_lg_typecheck_CanConvert(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxEncodingConverter::CanConvert(wxFontEncoding encIn, wxFontEncoding encOut) function, expected prototype:\nstatic bool wxEncodingConverter::CanConvert(wxFontEncoding encIn, wxFontEncoding encOut)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encIn=(wxFontEncoding)lua_tointeger(L,1);
		wxFontEncoding encOut=(wxFontEncoding)lua_tointeger(L,2);

		bool lret = wxEncodingConverter::CanConvert(encIn, encOut);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxEncodingConverter::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxEncodingConverter::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxEncodingConverter::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEncodingConverter* self=Luna< wxObject >::checkSubType< wxEncodingConverter >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxEncodingConverter::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxEncodingConverter::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxEncodingConverter* LunaTraits< wxEncodingConverter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxEncodingConverter::_bind_ctor(L);
}

void LunaTraits< wxEncodingConverter >::_bind_dtor(wxEncodingConverter* obj) {
	delete obj;
}

const char LunaTraits< wxEncodingConverter >::className[] = "wxEncodingConverter";
const char LunaTraits< wxEncodingConverter >::fullName[] = "wxEncodingConverter";
const char LunaTraits< wxEncodingConverter >::moduleName[] = "wx";
const char* LunaTraits< wxEncodingConverter >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxEncodingConverter >::hash = 90620277;
const int LunaTraits< wxEncodingConverter >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxEncodingConverter >::methods[] = {
	{"Convert", &luna_wrapper_wxEncodingConverter::_bind_Convert},
	{"Init", &luna_wrapper_wxEncodingConverter::_bind_Init},
	{"GetAllEquivalents", &luna_wrapper_wxEncodingConverter::_bind_GetAllEquivalents},
	{"GetPlatformEquivalents", &luna_wrapper_wxEncodingConverter::_bind_GetPlatformEquivalents},
	{"CanConvert", &luna_wrapper_wxEncodingConverter::_bind_CanConvert},
	{"base_GetClassInfo", &luna_wrapper_wxEncodingConverter::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxEncodingConverter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxEncodingConverter::_bind_asVoid},
	{"getTable", &luna_wrapper_wxEncodingConverter::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxEncodingConverter >::converters[] = {
	{"wxObject", &luna_wrapper_wxEncodingConverter::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxEncodingConverter >::enumValues[] = {
	{0,0}
};


