#include <plug_common.h>

class luna_wrapper_wxCmdLineParser {
public:
	typedef Luna< wxCmdLineParser > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87987501) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCmdLineParser*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxCmdLineParser* rhs =(Luna< wxCmdLineParser >::check(L,2));
		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
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

		wxCmdLineParser* self= (wxCmdLineParser*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCmdLineParser >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,87987501) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxCmdLineParser >::check(L,1));
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

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCmdLineParser");
		
		return luna_dynamicCast(L,converters,"wxCmdLineParser",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,62727294)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxCmdLineEntryDesc >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,62727294)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxCmdLineEntryDesc >::check(L,1)) ) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddLongOption(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddLongSwitch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddOption(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddSwitch(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddUsageText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreLongOptionsEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableLongOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableLongOptions(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Found_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Found_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Found_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Found_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Found_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,57497519)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxDateTime >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FoundSwitch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParam(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParamCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Parse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCmdLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDesc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,62727294)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLogo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSwitchChars(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Usage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUsageString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ConvertStringToArgs(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCmdLineParser::wxCmdLineParser()
	static wxCmdLineParser* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxCmdLineParser::wxCmdLineParser() function, expected prototype:\nwxCmdLineParser::wxCmdLineParser()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxCmdLineParser();
	}

	// wxCmdLineParser::wxCmdLineParser(const wxString & cmdline)
	static wxCmdLineParser* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxCmdLineParser::wxCmdLineParser(const wxString & cmdline) function, expected prototype:\nwxCmdLineParser::wxCmdLineParser(const wxString & cmdline)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString cmdline(lua_tostring(L,1),lua_objlen(L,1));

		return new wxCmdLineParser(cmdline);
	}

	// wxCmdLineParser::wxCmdLineParser(const wxCmdLineEntryDesc * desc)
	static wxCmdLineParser* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxCmdLineParser::wxCmdLineParser(const wxCmdLineEntryDesc * desc) function, expected prototype:\nwxCmdLineParser::wxCmdLineParser(const wxCmdLineEntryDesc * desc)\nClass arguments details:\narg 1 ID = 62727294\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCmdLineEntryDesc* desc=(Luna< wxCmdLineEntryDesc >::check(L,1));

		return new wxCmdLineParser(desc);
	}

	// wxCmdLineParser::wxCmdLineParser(const wxCmdLineEntryDesc * desc, const wxString & cmdline)
	static wxCmdLineParser* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxCmdLineParser::wxCmdLineParser(const wxCmdLineEntryDesc * desc, const wxString & cmdline) function, expected prototype:\nwxCmdLineParser::wxCmdLineParser(const wxCmdLineEntryDesc * desc, const wxString & cmdline)\nClass arguments details:\narg 1 ID = 62727294\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCmdLineEntryDesc* desc=(Luna< wxCmdLineEntryDesc >::check(L,1));
		wxString cmdline(lua_tostring(L,2),lua_objlen(L,2));

		return new wxCmdLineParser(desc, cmdline);
	}

	// Overload binder for wxCmdLineParser::wxCmdLineParser
	static wxCmdLineParser* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxCmdLineParser, cannot match any of the overloads for function wxCmdLineParser:\n  wxCmdLineParser()\n  wxCmdLineParser(const wxString &)\n  wxCmdLineParser(const wxCmdLineEntryDesc *)\n  wxCmdLineParser(const wxCmdLineEntryDesc *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxCmdLineParser::AddLongOption(const wxString & lng, const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0)
	static int _bind_AddLongOption(lua_State *L) {
		if (!_lg_typecheck_AddLongOption(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::AddLongOption(const wxString & lng, const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0) function, expected prototype:\nvoid wxCmdLineParser::AddLongOption(const wxString & lng, const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString lng(lua_tostring(L,2),lua_objlen(L,2));
		wxString desc(lua_tostring(L,3),lua_objlen(L,3));
		wxCmdLineParamType type=luatop>3 ? (wxCmdLineParamType)lua_tointeger(L,4) : (wxCmdLineParamType)::wxCMD_LINE_VAL_STRING;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::AddLongOption(const wxString &, const wxString &, wxCmdLineParamType, int). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddLongOption(lng, desc, type, flags);

		return 0;
	}

	// void wxCmdLineParser::AddLongSwitch(const wxString & lng, const wxString & desc = wxEmptyString, int flags = 0)
	static int _bind_AddLongSwitch(lua_State *L) {
		if (!_lg_typecheck_AddLongSwitch(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::AddLongSwitch(const wxString & lng, const wxString & desc = wxEmptyString, int flags = 0) function, expected prototype:\nvoid wxCmdLineParser::AddLongSwitch(const wxString & lng, const wxString & desc = wxEmptyString, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString lng(lua_tostring(L,2),lua_objlen(L,2));
		wxString desc(lua_tostring(L,3),lua_objlen(L,3));
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::AddLongSwitch(const wxString &, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddLongSwitch(lng, desc, flags);

		return 0;
	}

	// void wxCmdLineParser::AddOption(const wxString & name, const wxString & lng = wxEmptyString, const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0)
	static int _bind_AddOption(lua_State *L) {
		if (!_lg_typecheck_AddOption(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::AddOption(const wxString & name, const wxString & lng = wxEmptyString, const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0) function, expected prototype:\nvoid wxCmdLineParser::AddOption(const wxString & name, const wxString & lng = wxEmptyString, const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString lng(lua_tostring(L,3),lua_objlen(L,3));
		wxString desc(lua_tostring(L,4),lua_objlen(L,4));
		wxCmdLineParamType type=luatop>4 ? (wxCmdLineParamType)lua_tointeger(L,5) : (wxCmdLineParamType)::wxCMD_LINE_VAL_STRING;
		int flags=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::AddOption(const wxString &, const wxString &, const wxString &, wxCmdLineParamType, int). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddOption(name, lng, desc, type, flags);

		return 0;
	}

	// void wxCmdLineParser::AddParam(const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0)
	static int _bind_AddParam(lua_State *L) {
		if (!_lg_typecheck_AddParam(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::AddParam(const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0) function, expected prototype:\nvoid wxCmdLineParser::AddParam(const wxString & desc = wxEmptyString, wxCmdLineParamType type = ::wxCMD_LINE_VAL_STRING, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString desc(lua_tostring(L,2),lua_objlen(L,2));
		wxCmdLineParamType type=luatop>2 ? (wxCmdLineParamType)lua_tointeger(L,3) : (wxCmdLineParamType)::wxCMD_LINE_VAL_STRING;
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::AddParam(const wxString &, wxCmdLineParamType, int). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddParam(desc, type, flags);

		return 0;
	}

	// void wxCmdLineParser::AddSwitch(const wxString & name, const wxString & lng = wxEmptyString, const wxString & desc = wxEmptyString, int flags = 0)
	static int _bind_AddSwitch(lua_State *L) {
		if (!_lg_typecheck_AddSwitch(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::AddSwitch(const wxString & name, const wxString & lng = wxEmptyString, const wxString & desc = wxEmptyString, int flags = 0) function, expected prototype:\nvoid wxCmdLineParser::AddSwitch(const wxString & name, const wxString & lng = wxEmptyString, const wxString & desc = wxEmptyString, int flags = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString lng(lua_tostring(L,3),lua_objlen(L,3));
		wxString desc(lua_tostring(L,4),lua_objlen(L,4));
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::AddSwitch(const wxString &, const wxString &, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddSwitch(name, lng, desc, flags);

		return 0;
	}

	// void wxCmdLineParser::AddUsageText(const wxString & text)
	static int _bind_AddUsageText(lua_State *L) {
		if (!_lg_typecheck_AddUsageText(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::AddUsageText(const wxString & text) function, expected prototype:\nvoid wxCmdLineParser::AddUsageText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::AddUsageText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddUsageText(text);

		return 0;
	}

	// bool wxCmdLineParser::AreLongOptionsEnabled() const
	static int _bind_AreLongOptionsEnabled(lua_State *L) {
		if (!_lg_typecheck_AreLongOptionsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCmdLineParser::AreLongOptionsEnabled() const function, expected prototype:\nbool wxCmdLineParser::AreLongOptionsEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCmdLineParser::AreLongOptionsEnabled() const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AreLongOptionsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxCmdLineParser::DisableLongOptions()
	static int _bind_DisableLongOptions(lua_State *L) {
		if (!_lg_typecheck_DisableLongOptions(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::DisableLongOptions() function, expected prototype:\nvoid wxCmdLineParser::DisableLongOptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::DisableLongOptions(). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableLongOptions();

		return 0;
	}

	// void wxCmdLineParser::EnableLongOptions(bool enable = true)
	static int _bind_EnableLongOptions(lua_State *L) {
		if (!_lg_typecheck_EnableLongOptions(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::EnableLongOptions(bool enable = true) function, expected prototype:\nvoid wxCmdLineParser::EnableLongOptions(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::EnableLongOptions(bool). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableLongOptions(enable);

		return 0;
	}

	// bool wxCmdLineParser::Found(const wxString & name) const
	static int _bind_Found_overload_1(lua_State *L) {
		if (!_lg_typecheck_Found_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCmdLineParser::Found(const wxString & name) const function, expected prototype:\nbool wxCmdLineParser::Found(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCmdLineParser::Found(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Found(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCmdLineParser::Found(const wxString & name, wxString * value) const
	static int _bind_Found_overload_2(lua_State *L) {
		if (!_lg_typecheck_Found_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCmdLineParser::Found(const wxString & name, wxString * value) const function, expected prototype:\nbool wxCmdLineParser::Found(const wxString & name, wxString * value) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCmdLineParser::Found(const wxString &, wxString *) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Found(name, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCmdLineParser::Found(const wxString & name, long * value) const
	static int _bind_Found_overload_3(lua_State *L) {
		if (!_lg_typecheck_Found_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCmdLineParser::Found(const wxString & name, long * value) const function, expected prototype:\nbool wxCmdLineParser::Found(const wxString & name, long * value) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		long* value=(long*)Luna< void >::check(L,3);

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCmdLineParser::Found(const wxString &, long *) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Found(name, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCmdLineParser::Found(const wxString & name, double * value) const
	static int _bind_Found_overload_4(lua_State *L) {
		if (!_lg_typecheck_Found_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCmdLineParser::Found(const wxString & name, double * value) const function, expected prototype:\nbool wxCmdLineParser::Found(const wxString & name, double * value) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		double* value=(double*)Luna< void >::check(L,3);

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCmdLineParser::Found(const wxString &, double *) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Found(name, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxCmdLineParser::Found(const wxString & name, wxDateTime * value) const
	static int _bind_Found_overload_5(lua_State *L) {
		if (!_lg_typecheck_Found_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCmdLineParser::Found(const wxString & name, wxDateTime * value) const function, expected prototype:\nbool wxCmdLineParser::Found(const wxString & name, wxDateTime * value) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 57497519\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxDateTime* value=(Luna< wxDateTime >::check(L,3));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCmdLineParser::Found(const wxString &, wxDateTime *) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Found(name, value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxCmdLineParser::Found
	static int _bind_Found(lua_State *L) {
		if (_lg_typecheck_Found_overload_1(L)) return _bind_Found_overload_1(L);
		if (_lg_typecheck_Found_overload_2(L)) return _bind_Found_overload_2(L);
		if (_lg_typecheck_Found_overload_3(L)) return _bind_Found_overload_3(L);
		if (_lg_typecheck_Found_overload_4(L)) return _bind_Found_overload_4(L);
		if (_lg_typecheck_Found_overload_5(L)) return _bind_Found_overload_5(L);

		luaL_error(L, "error in function Found, cannot match any of the overloads for function Found:\n  Found(const wxString &)\n  Found(const wxString &, wxString *)\n  Found(const wxString &, long *)\n  Found(const wxString &, double *)\n  Found(const wxString &, wxDateTime *)\n");
		return 0;
	}

	// wxCmdLineSwitchState wxCmdLineParser::FoundSwitch(const wxString & name) const
	static int _bind_FoundSwitch(lua_State *L) {
		if (!_lg_typecheck_FoundSwitch(L)) {
			luaL_error(L, "luna typecheck failed in wxCmdLineSwitchState wxCmdLineParser::FoundSwitch(const wxString & name) const function, expected prototype:\nwxCmdLineSwitchState wxCmdLineParser::FoundSwitch(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCmdLineSwitchState wxCmdLineParser::FoundSwitch(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCmdLineSwitchState lret = self->FoundSwitch(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxCmdLineParser::GetParam(size_t n = 0) const
	static int _bind_GetParam(lua_State *L) {
		if (!_lg_typecheck_GetParam(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxCmdLineParser::GetParam(size_t n = 0) const function, expected prototype:\nwxString wxCmdLineParser::GetParam(size_t n = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t n=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)0;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxCmdLineParser::GetParam(size_t) const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetParam(n);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxCmdLineParser::GetParamCount() const
	static int _bind_GetParamCount(lua_State *L) {
		if (!_lg_typecheck_GetParamCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxCmdLineParser::GetParamCount() const function, expected prototype:\nsize_t wxCmdLineParser::GetParamCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxCmdLineParser::GetParamCount() const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetParamCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxCmdLineParser::Parse(bool giveUsage = true)
	static int _bind_Parse(lua_State *L) {
		if (!_lg_typecheck_Parse(L)) {
			luaL_error(L, "luna typecheck failed in int wxCmdLineParser::Parse(bool giveUsage = true) function, expected prototype:\nint wxCmdLineParser::Parse(bool giveUsage = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool giveUsage=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxCmdLineParser::Parse(bool). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Parse(giveUsage);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxCmdLineParser::SetCmdLine(const wxString & cmdline)
	static int _bind_SetCmdLine(lua_State *L) {
		if (!_lg_typecheck_SetCmdLine(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::SetCmdLine(const wxString & cmdline) function, expected prototype:\nvoid wxCmdLineParser::SetCmdLine(const wxString & cmdline)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString cmdline(lua_tostring(L,2),lua_objlen(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::SetCmdLine(const wxString &). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCmdLine(cmdline);

		return 0;
	}

	// void wxCmdLineParser::SetDesc(const wxCmdLineEntryDesc * desc)
	static int _bind_SetDesc(lua_State *L) {
		if (!_lg_typecheck_SetDesc(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::SetDesc(const wxCmdLineEntryDesc * desc) function, expected prototype:\nvoid wxCmdLineParser::SetDesc(const wxCmdLineEntryDesc * desc)\nClass arguments details:\narg 1 ID = 62727294\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCmdLineEntryDesc* desc=(Luna< wxCmdLineEntryDesc >::check(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::SetDesc(const wxCmdLineEntryDesc *). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDesc(desc);

		return 0;
	}

	// void wxCmdLineParser::SetLogo(const wxString & logo)
	static int _bind_SetLogo(lua_State *L) {
		if (!_lg_typecheck_SetLogo(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::SetLogo(const wxString & logo) function, expected prototype:\nvoid wxCmdLineParser::SetLogo(const wxString & logo)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString logo(lua_tostring(L,2),lua_objlen(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::SetLogo(const wxString &). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLogo(logo);

		return 0;
	}

	// void wxCmdLineParser::SetSwitchChars(const wxString & switchChars)
	static int _bind_SetSwitchChars(lua_State *L) {
		if (!_lg_typecheck_SetSwitchChars(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::SetSwitchChars(const wxString & switchChars) function, expected prototype:\nvoid wxCmdLineParser::SetSwitchChars(const wxString & switchChars)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString switchChars(lua_tostring(L,2),lua_objlen(L,2));

		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::SetSwitchChars(const wxString &). Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSwitchChars(switchChars);

		return 0;
	}

	// void wxCmdLineParser::Usage() const
	static int _bind_Usage(lua_State *L) {
		if (!_lg_typecheck_Usage(L)) {
			luaL_error(L, "luna typecheck failed in void wxCmdLineParser::Usage() const function, expected prototype:\nvoid wxCmdLineParser::Usage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxCmdLineParser::Usage() const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Usage();

		return 0;
	}

	// wxString wxCmdLineParser::GetUsageString() const
	static int _bind_GetUsageString(lua_State *L) {
		if (!_lg_typecheck_GetUsageString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxCmdLineParser::GetUsageString() const function, expected prototype:\nwxString wxCmdLineParser::GetUsageString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCmdLineParser* self=(Luna< wxCmdLineParser >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxCmdLineParser::GetUsageString() const. Got : '%s'\n%s",typeid(Luna< wxCmdLineParser >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetUsageString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxArrayString wxCmdLineParser::ConvertStringToArgs(const wxString & cmdline, wxCmdLineSplitType flags = ::wxCMD_LINE_SPLIT_DOS)
	static int _bind_ConvertStringToArgs(lua_State *L) {
		if (!_lg_typecheck_ConvertStringToArgs(L)) {
			luaL_error(L, "luna typecheck failed in static wxArrayString wxCmdLineParser::ConvertStringToArgs(const wxString & cmdline, wxCmdLineSplitType flags = ::wxCMD_LINE_SPLIT_DOS) function, expected prototype:\nstatic wxArrayString wxCmdLineParser::ConvertStringToArgs(const wxString & cmdline, wxCmdLineSplitType flags = ::wxCMD_LINE_SPLIT_DOS)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString cmdline(lua_tostring(L,1),lua_objlen(L,1));
		wxCmdLineSplitType flags=luatop>1 ? (wxCmdLineSplitType)lua_tointeger(L,2) : (wxCmdLineSplitType)::wxCMD_LINE_SPLIT_DOS;

		wxArrayString stack_lret = wxCmdLineParser::ConvertStringToArgs(cmdline, flags);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxCmdLineParser* LunaTraits< wxCmdLineParser >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCmdLineParser::_bind_ctor(L);
}

void LunaTraits< wxCmdLineParser >::_bind_dtor(wxCmdLineParser* obj) {
	delete obj;
}

const char LunaTraits< wxCmdLineParser >::className[] = "wxCmdLineParser";
const char LunaTraits< wxCmdLineParser >::fullName[] = "wxCmdLineParser";
const char LunaTraits< wxCmdLineParser >::moduleName[] = "wx";
const char* LunaTraits< wxCmdLineParser >::parents[] = {0};
const int LunaTraits< wxCmdLineParser >::hash = 87987501;
const int LunaTraits< wxCmdLineParser >::uniqueIDs[] = {87987501,0};

luna_RegType LunaTraits< wxCmdLineParser >::methods[] = {
	{"AddLongOption", &luna_wrapper_wxCmdLineParser::_bind_AddLongOption},
	{"AddLongSwitch", &luna_wrapper_wxCmdLineParser::_bind_AddLongSwitch},
	{"AddOption", &luna_wrapper_wxCmdLineParser::_bind_AddOption},
	{"AddParam", &luna_wrapper_wxCmdLineParser::_bind_AddParam},
	{"AddSwitch", &luna_wrapper_wxCmdLineParser::_bind_AddSwitch},
	{"AddUsageText", &luna_wrapper_wxCmdLineParser::_bind_AddUsageText},
	{"AreLongOptionsEnabled", &luna_wrapper_wxCmdLineParser::_bind_AreLongOptionsEnabled},
	{"DisableLongOptions", &luna_wrapper_wxCmdLineParser::_bind_DisableLongOptions},
	{"EnableLongOptions", &luna_wrapper_wxCmdLineParser::_bind_EnableLongOptions},
	{"Found", &luna_wrapper_wxCmdLineParser::_bind_Found},
	{"FoundSwitch", &luna_wrapper_wxCmdLineParser::_bind_FoundSwitch},
	{"GetParam", &luna_wrapper_wxCmdLineParser::_bind_GetParam},
	{"GetParamCount", &luna_wrapper_wxCmdLineParser::_bind_GetParamCount},
	{"Parse", &luna_wrapper_wxCmdLineParser::_bind_Parse},
	{"SetCmdLine", &luna_wrapper_wxCmdLineParser::_bind_SetCmdLine},
	{"SetDesc", &luna_wrapper_wxCmdLineParser::_bind_SetDesc},
	{"SetLogo", &luna_wrapper_wxCmdLineParser::_bind_SetLogo},
	{"SetSwitchChars", &luna_wrapper_wxCmdLineParser::_bind_SetSwitchChars},
	{"Usage", &luna_wrapper_wxCmdLineParser::_bind_Usage},
	{"GetUsageString", &luna_wrapper_wxCmdLineParser::_bind_GetUsageString},
	{"ConvertStringToArgs", &luna_wrapper_wxCmdLineParser::_bind_ConvertStringToArgs},
	{"dynCast", &luna_wrapper_wxCmdLineParser::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCmdLineParser::_bind___eq},
	{"fromVoid", &luna_wrapper_wxCmdLineParser::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCmdLineParser::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxCmdLineParser >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCmdLineParser >::enumValues[] = {
	{0,0}
};


