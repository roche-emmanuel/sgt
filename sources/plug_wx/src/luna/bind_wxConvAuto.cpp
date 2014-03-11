#include <plug_common.h>

class luna_wrapper_wxConvAuto {
public:
	typedef Luna< wxConvAuto > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13306988) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxConvAuto*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxConvAuto* rhs =(Luna< wxConvAuto >::check(L,2));
		wxConvAuto* self=(Luna< wxConvAuto >::check(L,1));
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

		wxConvAuto* self= (wxConvAuto*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxConvAuto >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,13306988) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxConvAuto >::check(L,1));
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

		wxConvAuto* self=(Luna< wxConvAuto >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxConvAuto");
		
		return luna_dynamicCast(L,converters,"wxConvAuto",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBOM(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBOMChars(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableFallbackEncoding(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFallbackEncoding(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFallbackEncoding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DetectBOM(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxConvAuto::wxConvAuto(wxFontEncoding enc = ::wxFONTENCODING_DEFAULT)
	static wxConvAuto* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxConvAuto::wxConvAuto(wxFontEncoding enc = ::wxFONTENCODING_DEFAULT) function, expected prototype:\nwxConvAuto::wxConvAuto(wxFontEncoding enc = ::wxFONTENCODING_DEFAULT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFontEncoding enc=luatop>0 ? (wxFontEncoding)lua_tointeger(L,1) : (wxFontEncoding)::wxFONTENCODING_DEFAULT;

		return new wxConvAuto(enc);
	}


	// Function binds:
	// wxBOM wxConvAuto::GetBOM() const
	static int _bind_GetBOM(lua_State *L) {
		if (!_lg_typecheck_GetBOM(L)) {
			luaL_error(L, "luna typecheck failed in wxBOM wxConvAuto::GetBOM() const function, expected prototype:\nwxBOM wxConvAuto::GetBOM() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConvAuto* self=(Luna< wxConvAuto >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBOM wxConvAuto::GetBOM() const. Got : '%s'\n%s",typeid(Luna< wxConvAuto >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBOM lret = self->GetBOM();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * wxConvAuto::GetBOMChars(wxBOM bom, size_t * count)
	static int _bind_GetBOMChars(lua_State *L) {
		if (!_lg_typecheck_GetBOMChars(L)) {
			luaL_error(L, "luna typecheck failed in const char * wxConvAuto::GetBOMChars(wxBOM bom, size_t * count) function, expected prototype:\nconst char * wxConvAuto::GetBOMChars(wxBOM bom, size_t * count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBOM bom=(wxBOM)lua_tointeger(L,2);
		size_t* count=(size_t*)Luna< void >::check(L,3);

		wxConvAuto* self=(Luna< wxConvAuto >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * wxConvAuto::GetBOMChars(wxBOM, size_t *). Got : '%s'\n%s",typeid(Luna< wxConvAuto >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GetBOMChars(bom, count);
		lua_pushstring(L,lret);

		return 1;
	}

	// static void wxConvAuto::DisableFallbackEncoding()
	static int _bind_DisableFallbackEncoding(lua_State *L) {
		if (!_lg_typecheck_DisableFallbackEncoding(L)) {
			luaL_error(L, "luna typecheck failed in static void wxConvAuto::DisableFallbackEncoding() function, expected prototype:\nstatic void wxConvAuto::DisableFallbackEncoding()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxConvAuto::DisableFallbackEncoding();

		return 0;
	}

	// static wxFontEncoding wxConvAuto::GetFallbackEncoding()
	static int _bind_GetFallbackEncoding(lua_State *L) {
		if (!_lg_typecheck_GetFallbackEncoding(L)) {
			luaL_error(L, "luna typecheck failed in static wxFontEncoding wxConvAuto::GetFallbackEncoding() function, expected prototype:\nstatic wxFontEncoding wxConvAuto::GetFallbackEncoding()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFontEncoding lret = wxConvAuto::GetFallbackEncoding();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxConvAuto::SetFallbackEncoding(wxFontEncoding enc)
	static int _bind_SetFallbackEncoding(lua_State *L) {
		if (!_lg_typecheck_SetFallbackEncoding(L)) {
			luaL_error(L, "luna typecheck failed in static void wxConvAuto::SetFallbackEncoding(wxFontEncoding enc) function, expected prototype:\nstatic void wxConvAuto::SetFallbackEncoding(wxFontEncoding enc)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding enc=(wxFontEncoding)lua_tointeger(L,1);

		wxConvAuto::SetFallbackEncoding(enc);

		return 0;
	}

	// static wxBOM wxConvAuto::DetectBOM(const char * src, size_t srcLen)
	static int _bind_DetectBOM(lua_State *L) {
		if (!_lg_typecheck_DetectBOM(L)) {
			luaL_error(L, "luna typecheck failed in static wxBOM wxConvAuto::DetectBOM(const char * src, size_t srcLen) function, expected prototype:\nstatic wxBOM wxConvAuto::DetectBOM(const char * src, size_t srcLen)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * src=(const char *)lua_tostring(L,1);
		size_t srcLen=(size_t)lua_tointeger(L,2);

		wxBOM lret = wxConvAuto::DetectBOM(src, srcLen);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxConvAuto* LunaTraits< wxConvAuto >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxConvAuto::_bind_ctor(L);
}

void LunaTraits< wxConvAuto >::_bind_dtor(wxConvAuto* obj) {
	delete obj;
}

const char LunaTraits< wxConvAuto >::className[] = "wxConvAuto";
const char LunaTraits< wxConvAuto >::fullName[] = "wxConvAuto";
const char LunaTraits< wxConvAuto >::moduleName[] = "wx";
const char* LunaTraits< wxConvAuto >::parents[] = {0};
const int LunaTraits< wxConvAuto >::hash = 13306988;
const int LunaTraits< wxConvAuto >::uniqueIDs[] = {13306988,0};

luna_RegType LunaTraits< wxConvAuto >::methods[] = {
	{"GetBOM", &luna_wrapper_wxConvAuto::_bind_GetBOM},
	{"GetBOMChars", &luna_wrapper_wxConvAuto::_bind_GetBOMChars},
	{"DisableFallbackEncoding", &luna_wrapper_wxConvAuto::_bind_DisableFallbackEncoding},
	{"GetFallbackEncoding", &luna_wrapper_wxConvAuto::_bind_GetFallbackEncoding},
	{"SetFallbackEncoding", &luna_wrapper_wxConvAuto::_bind_SetFallbackEncoding},
	{"DetectBOM", &luna_wrapper_wxConvAuto::_bind_DetectBOM},
	{"dynCast", &luna_wrapper_wxConvAuto::_bind_dynCast},
	{"__eq", &luna_wrapper_wxConvAuto::_bind___eq},
	{"fromVoid", &luna_wrapper_wxConvAuto::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxConvAuto::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxConvAuto >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxConvAuto >::enumValues[] = {
	{0,0}
};


