#include <plug_common.h>

class luna_wrapper_wxLinuxDistributionInfo {
public:
	typedef Luna< wxLinuxDistributionInfo > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLinuxDistributionInfo* self= (wxLinuxDistributionInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLinuxDistributionInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82275018) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLinuxDistributionInfo >::check(L,1));
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

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLinuxDistributionInfo");
		
		return luna_dynamicCast(L,converters,"wxLinuxDistributionInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRelease(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCodeName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRelease(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCodeName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82275018) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,82275018) ) return false;
		return true;
	}


	// Constructor binds:

	// Function binds:
	// wxString wxLinuxDistributionInfo::Id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLinuxDistributionInfo::Id() function, expected prototype:\nwxString wxLinuxDistributionInfo::Id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLinuxDistributionInfo::Id(). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Id;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxLinuxDistributionInfo::Release()
	static int _bind_getRelease(lua_State *L) {
		if (!_lg_typecheck_getRelease(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLinuxDistributionInfo::Release() function, expected prototype:\nwxString wxLinuxDistributionInfo::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLinuxDistributionInfo::Release(). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Release;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxLinuxDistributionInfo::CodeName()
	static int _bind_getCodeName(lua_State *L) {
		if (!_lg_typecheck_getCodeName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLinuxDistributionInfo::CodeName() function, expected prototype:\nwxString wxLinuxDistributionInfo::CodeName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLinuxDistributionInfo::CodeName(). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->CodeName;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxLinuxDistributionInfo::Description()
	static int _bind_getDescription(lua_State *L) {
		if (!_lg_typecheck_getDescription(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLinuxDistributionInfo::Description() function, expected prototype:\nwxString wxLinuxDistributionInfo::Description()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLinuxDistributionInfo::Description(). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Description;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxLinuxDistributionInfo::Id(wxString value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void wxLinuxDistributionInfo::Id(wxString value) function, expected prototype:\nvoid wxLinuxDistributionInfo::Id(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLinuxDistributionInfo::Id(wxString). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Id = value;

		return 0;
	}

	// void wxLinuxDistributionInfo::Release(wxString value)
	static int _bind_setRelease(lua_State *L) {
		if (!_lg_typecheck_setRelease(L)) {
			luaL_error(L, "luna typecheck failed in void wxLinuxDistributionInfo::Release(wxString value) function, expected prototype:\nvoid wxLinuxDistributionInfo::Release(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLinuxDistributionInfo::Release(wxString). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Release = value;

		return 0;
	}

	// void wxLinuxDistributionInfo::CodeName(wxString value)
	static int _bind_setCodeName(lua_State *L) {
		if (!_lg_typecheck_setCodeName(L)) {
			luaL_error(L, "luna typecheck failed in void wxLinuxDistributionInfo::CodeName(wxString value) function, expected prototype:\nvoid wxLinuxDistributionInfo::CodeName(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLinuxDistributionInfo::CodeName(wxString). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CodeName = value;

		return 0;
	}

	// void wxLinuxDistributionInfo::Description(wxString value)
	static int _bind_setDescription(lua_State *L) {
		if (!_lg_typecheck_setDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxLinuxDistributionInfo::Description(wxString value) function, expected prototype:\nvoid wxLinuxDistributionInfo::Description(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLinuxDistributionInfo::Description(wxString). Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Description = value;

		return 0;
	}


	// Operator binds:
	// bool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo & ldi) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo & ldi) const function, expected prototype:\nbool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo & ldi) const\nClass arguments details:\narg 1 ID = 82275018\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxLinuxDistributionInfo* ldi_ptr=(Luna< wxLinuxDistributionInfo >::check(L,2));
		if( !ldi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ldi in wxLinuxDistributionInfo::operator== function");
		}
		const wxLinuxDistributionInfo & ldi=*ldi_ptr;

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLinuxDistributionInfo::operator==(const wxLinuxDistributionInfo &) const. Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(ldi);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo & ldi) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo & ldi) const function, expected prototype:\nbool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo & ldi) const\nClass arguments details:\narg 1 ID = 82275018\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxLinuxDistributionInfo* ldi_ptr=(Luna< wxLinuxDistributionInfo >::check(L,2));
		if( !ldi_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ldi in wxLinuxDistributionInfo::operator!= function");
		}
		const wxLinuxDistributionInfo & ldi=*ldi_ptr;

		wxLinuxDistributionInfo* self=(Luna< wxLinuxDistributionInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxLinuxDistributionInfo::operator!=(const wxLinuxDistributionInfo &) const. Got : '%s'\n%s",typeid(Luna< wxLinuxDistributionInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(ldi);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxLinuxDistributionInfo* LunaTraits< wxLinuxDistributionInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLinuxDistributionInfo >::_bind_dtor(wxLinuxDistributionInfo* obj) {
	delete obj;
}

const char LunaTraits< wxLinuxDistributionInfo >::className[] = "wxLinuxDistributionInfo";
const char LunaTraits< wxLinuxDistributionInfo >::fullName[] = "wxLinuxDistributionInfo";
const char LunaTraits< wxLinuxDistributionInfo >::moduleName[] = "wx";
const char* LunaTraits< wxLinuxDistributionInfo >::parents[] = {0};
const int LunaTraits< wxLinuxDistributionInfo >::hash = 82275018;
const int LunaTraits< wxLinuxDistributionInfo >::uniqueIDs[] = {82275018,0};

luna_RegType LunaTraits< wxLinuxDistributionInfo >::methods[] = {
	{"getId", &luna_wrapper_wxLinuxDistributionInfo::_bind_getId},
	{"getRelease", &luna_wrapper_wxLinuxDistributionInfo::_bind_getRelease},
	{"getCodeName", &luna_wrapper_wxLinuxDistributionInfo::_bind_getCodeName},
	{"getDescription", &luna_wrapper_wxLinuxDistributionInfo::_bind_getDescription},
	{"setId", &luna_wrapper_wxLinuxDistributionInfo::_bind_setId},
	{"setRelease", &luna_wrapper_wxLinuxDistributionInfo::_bind_setRelease},
	{"setCodeName", &luna_wrapper_wxLinuxDistributionInfo::_bind_setCodeName},
	{"setDescription", &luna_wrapper_wxLinuxDistributionInfo::_bind_setDescription},
	{"__eq", &luna_wrapper_wxLinuxDistributionInfo::_bind___eq},
	{"op_neq", &luna_wrapper_wxLinuxDistributionInfo::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxLinuxDistributionInfo::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxLinuxDistributionInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLinuxDistributionInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxLinuxDistributionInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLinuxDistributionInfo >::enumValues[] = {
	{0,0}
};


