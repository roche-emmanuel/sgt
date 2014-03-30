#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStackFrame.h>

class luna_wrapper_wxStackFrame {
public:
	typedef Luna< wxStackFrame > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxStackFrame,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95458903) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxStackFrame*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStackFrame* rhs =(Luna< wxStackFrame >::check(L,2));
		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
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

		wxStackFrame* self= (wxStackFrame*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStackFrame >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95458903) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxStackFrame >::check(L,1));
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

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxStackFrame");
		
		return luna_dynamicCast(L,converters,"wxStackFrame",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFileName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParam(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetParamCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasSourceLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetParam(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetParamCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void * wxStackFrame::GetAddress() const
	static int _bind_GetAddress(lua_State *L) {
		if (!_lg_typecheck_GetAddress(L)) {
			luaL_error(L, "luna typecheck failed in void * wxStackFrame::GetAddress() const function, expected prototype:\nvoid * wxStackFrame::GetAddress() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxStackFrame::GetAddress() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetAddress();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// wxString wxStackFrame::GetFileName() const
	static int _bind_GetFileName(lua_State *L) {
		if (!_lg_typecheck_GetFileName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStackFrame::GetFileName() const function, expected prototype:\nwxString wxStackFrame::GetFileName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStackFrame::GetFileName() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFileName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxStackFrame::GetLevel() const
	static int _bind_GetLevel(lua_State *L) {
		if (!_lg_typecheck_GetLevel(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetLevel() const function, expected prototype:\nsize_t wxStackFrame::GetLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetLevel() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxStackFrame::GetLine() const
	static int _bind_GetLine(lua_State *L) {
		if (!_lg_typecheck_GetLine(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetLine() const function, expected prototype:\nsize_t wxStackFrame::GetLine() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetLine() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetLine();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStackFrame::GetModule() const
	static int _bind_GetModule(lua_State *L) {
		if (!_lg_typecheck_GetModule(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStackFrame::GetModule() const function, expected prototype:\nwxString wxStackFrame::GetModule() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStackFrame::GetModule() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetModule();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxStackFrame::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStackFrame::GetName() const function, expected prototype:\nwxString wxStackFrame::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStackFrame::GetName() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// size_t wxStackFrame::GetOffset() const
	static int _bind_GetOffset(lua_State *L) {
		if (!_lg_typecheck_GetOffset(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetOffset() const function, expected prototype:\nsize_t wxStackFrame::GetOffset() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetOffset() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetOffset();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const
	static int _bind_GetParam(lua_State *L) {
		if (!_lg_typecheck_GetParam(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const function, expected prototype:\nbool wxStackFrame::GetParam(size_t n, wxString * type, wxString * name, wxString * value) const\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t n=(size_t)lua_tointeger(L,2);
		wxString type(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString value(lua_tostring(L,5),lua_objlen(L,5));

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStackFrame::GetParam(size_t, wxString *, wxString *, wxString *) const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetParam(n, &type, &name, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxStackFrame::GetParamCount() const
	static int _bind_GetParamCount(lua_State *L) {
		if (!_lg_typecheck_GetParamCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::GetParamCount() const function, expected prototype:\nsize_t wxStackFrame::GetParamCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::GetParamCount() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetParamCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStackFrame::HasSourceLocation() const
	static int _bind_HasSourceLocation(lua_State *L) {
		if (!_lg_typecheck_HasSourceLocation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStackFrame::HasSourceLocation() const function, expected prototype:\nbool wxStackFrame::HasSourceLocation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStackFrame::HasSourceLocation() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasSourceLocation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStackFrame::base_GetParam(size_t n, wxString * type, wxString * name, wxString * value) const
	static int _bind_base_GetParam(lua_State *L) {
		if (!_lg_typecheck_base_GetParam(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStackFrame::base_GetParam(size_t n, wxString * type, wxString * name, wxString * value) const function, expected prototype:\nbool wxStackFrame::base_GetParam(size_t n, wxString * type, wxString * name, wxString * value) const\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t n=(size_t)lua_tointeger(L,2);
		wxString type(lua_tostring(L,3),lua_objlen(L,3));
		wxString name(lua_tostring(L,4),lua_objlen(L,4));
		wxString value(lua_tostring(L,5),lua_objlen(L,5));

		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStackFrame::base_GetParam(size_t, wxString *, wxString *, wxString *) const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStackFrame::GetParam(n, &type, &name, &value);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxStackFrame::base_GetParamCount() const
	static int _bind_base_GetParamCount(lua_State *L) {
		if (!_lg_typecheck_base_GetParamCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxStackFrame::base_GetParamCount() const function, expected prototype:\nsize_t wxStackFrame::base_GetParamCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStackFrame* self=(Luna< wxStackFrame >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxStackFrame::base_GetParamCount() const. Got : '%s'\n%s",typeid(Luna< wxStackFrame >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxStackFrame::GetParamCount();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxStackFrame* LunaTraits< wxStackFrame >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxStackFrame >::_bind_dtor(wxStackFrame* obj) {
	delete obj;
}

const char LunaTraits< wxStackFrame >::className[] = "wxStackFrame";
const char LunaTraits< wxStackFrame >::fullName[] = "wxStackFrame";
const char LunaTraits< wxStackFrame >::moduleName[] = "wx";
const char* LunaTraits< wxStackFrame >::parents[] = {0};
const int LunaTraits< wxStackFrame >::hash = 95458903;
const int LunaTraits< wxStackFrame >::uniqueIDs[] = {95458903,0};

luna_RegType LunaTraits< wxStackFrame >::methods[] = {
	{"GetAddress", &luna_wrapper_wxStackFrame::_bind_GetAddress},
	{"GetFileName", &luna_wrapper_wxStackFrame::_bind_GetFileName},
	{"GetLevel", &luna_wrapper_wxStackFrame::_bind_GetLevel},
	{"GetLine", &luna_wrapper_wxStackFrame::_bind_GetLine},
	{"GetModule", &luna_wrapper_wxStackFrame::_bind_GetModule},
	{"GetName", &luna_wrapper_wxStackFrame::_bind_GetName},
	{"GetOffset", &luna_wrapper_wxStackFrame::_bind_GetOffset},
	{"GetParam", &luna_wrapper_wxStackFrame::_bind_GetParam},
	{"GetParamCount", &luna_wrapper_wxStackFrame::_bind_GetParamCount},
	{"HasSourceLocation", &luna_wrapper_wxStackFrame::_bind_HasSourceLocation},
	{"base_GetParam", &luna_wrapper_wxStackFrame::_bind_base_GetParam},
	{"base_GetParamCount", &luna_wrapper_wxStackFrame::_bind_base_GetParamCount},
	{"dynCast", &luna_wrapper_wxStackFrame::_bind_dynCast},
	{"__eq", &luna_wrapper_wxStackFrame::_bind___eq},
	{"fromVoid", &luna_wrapper_wxStackFrame::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStackFrame::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStackFrame::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStackFrame >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxStackFrame >::enumValues[] = {
	{0,0}
};


