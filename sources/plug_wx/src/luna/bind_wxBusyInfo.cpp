#include <plug_common.h>

#include <luna/wrappers/wrapper_wxBusyInfo.h>

class luna_wrapper_wxBusyInfo {
public:
	typedef Luna< wxBusyInfo > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxBusyInfo* self=(Luna< wxBusyInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxBusyInfo,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71864441) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxBusyInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxBusyInfo* rhs =(Luna< wxBusyInfo >::check(L,2));
		wxBusyInfo* self=(Luna< wxBusyInfo >::check(L,1));
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

		wxBusyInfo* self= (wxBusyInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxBusyInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71864441) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxBusyInfo >::check(L,1));
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

		wxBusyInfo* self=(Luna< wxBusyInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxBusyInfo");
		
		return luna_dynamicCast(L,converters,"wxBusyInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxBusyInfo::wxBusyInfo(const wxString & msg, wxWindow * parent = NULL)
	static wxBusyInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxBusyInfo::wxBusyInfo(const wxString & msg, wxWindow * parent = NULL) function, expected prototype:\nwxBusyInfo::wxBusyInfo(const wxString & msg, wxWindow * parent = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString msg(lua_tostring(L,1),lua_objlen(L,1));
		wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (wxWindow*)NULL;

		return new wxBusyInfo(msg, parent);
	}

	// wxBusyInfo::wxBusyInfo(lua_Table * data, const wxString & msg, wxWindow * parent = NULL)
	static wxBusyInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxBusyInfo::wxBusyInfo(lua_Table * data, const wxString & msg, wxWindow * parent = NULL) function, expected prototype:\nwxBusyInfo::wxBusyInfo(lua_Table * data, const wxString & msg, wxWindow * parent = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString msg(lua_tostring(L,2),lua_objlen(L,2));
		wxWindow* parent=luatop>2 ? (Luna< wxObject >::checkSubType< wxWindow >(L,3)) : (wxWindow*)NULL;

		return new wrapper_wxBusyInfo(L,NULL, msg, parent);
	}

	// Overload binder for wxBusyInfo::wxBusyInfo
	static wxBusyInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxBusyInfo, cannot match any of the overloads for function wxBusyInfo:\n  wxBusyInfo(const wxString &, wxWindow *)\n  wxBusyInfo(lua_Table *, const wxString &, wxWindow *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxBusyInfo* LunaTraits< wxBusyInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxBusyInfo::_bind_ctor(L);
}

void LunaTraits< wxBusyInfo >::_bind_dtor(wxBusyInfo* obj) {
	delete obj;
}

const char LunaTraits< wxBusyInfo >::className[] = "wxBusyInfo";
const char LunaTraits< wxBusyInfo >::fullName[] = "wxBusyInfo";
const char LunaTraits< wxBusyInfo >::moduleName[] = "wx";
const char* LunaTraits< wxBusyInfo >::parents[] = {0};
const int LunaTraits< wxBusyInfo >::hash = 71864441;
const int LunaTraits< wxBusyInfo >::uniqueIDs[] = {71864441,0};

luna_RegType LunaTraits< wxBusyInfo >::methods[] = {
	{"dynCast", &luna_wrapper_wxBusyInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxBusyInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxBusyInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxBusyInfo::_bind_asVoid},
	{"getTable", &luna_wrapper_wxBusyInfo::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxBusyInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxBusyInfo >::enumValues[] = {
	{0,0}
};


