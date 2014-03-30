#include <plug_common.h>

#include <luna/wrappers/wrapper_wxXmlAttribute.h>

class luna_wrapper_wxXmlAttribute {
public:
	typedef Luna< wxXmlAttribute > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxXmlAttribute,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23837631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxXmlAttribute*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlAttribute* rhs =(Luna< wxXmlAttribute >::check(L,2));
		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
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

		wxXmlAttribute* self= (wxXmlAttribute*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxXmlAttribute >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23837631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxXmlAttribute >::check(L,1));
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

		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxXmlAttribute");
		
		return luna_dynamicCast(L,converters,"wxXmlAttribute",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,23837631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxXmlAttribute >::check(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,23837631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxXmlAttribute >::check(L,4)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNext(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,23837631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxXmlAttribute::wxXmlAttribute()
	static wxXmlAttribute* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlAttribute::wxXmlAttribute() function, expected prototype:\nwxXmlAttribute::wxXmlAttribute()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxXmlAttribute();
	}

	// wxXmlAttribute::wxXmlAttribute(const wxString & name, const wxString & value, wxXmlAttribute * next = NULL)
	static wxXmlAttribute* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlAttribute::wxXmlAttribute(const wxString & name, const wxString & value, wxXmlAttribute * next = NULL) function, expected prototype:\nwxXmlAttribute::wxXmlAttribute(const wxString & name, const wxString & value, wxXmlAttribute * next = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 23837631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxString value(lua_tostring(L,2),lua_objlen(L,2));
		wxXmlAttribute* next=luatop>2 ? (Luna< wxXmlAttribute >::check(L,3)) : (wxXmlAttribute*)NULL;

		return new wxXmlAttribute(name, value, next);
	}

	// wxXmlAttribute::wxXmlAttribute(lua_Table * data)
	static wxXmlAttribute* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlAttribute::wxXmlAttribute(lua_Table * data) function, expected prototype:\nwxXmlAttribute::wxXmlAttribute(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxXmlAttribute(L,NULL);
	}

	// wxXmlAttribute::wxXmlAttribute(lua_Table * data, const wxString & name, const wxString & value, wxXmlAttribute * next = NULL)
	static wxXmlAttribute* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlAttribute::wxXmlAttribute(lua_Table * data, const wxString & name, const wxString & value, wxXmlAttribute * next = NULL) function, expected prototype:\nwxXmlAttribute::wxXmlAttribute(lua_Table * data, const wxString & name, const wxString & value, wxXmlAttribute * next = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 23837631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		wxXmlAttribute* next=luatop>3 ? (Luna< wxXmlAttribute >::check(L,4)) : (wxXmlAttribute*)NULL;

		return new wrapper_wxXmlAttribute(L,NULL, name, value, next);
	}

	// Overload binder for wxXmlAttribute::wxXmlAttribute
	static wxXmlAttribute* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxXmlAttribute, cannot match any of the overloads for function wxXmlAttribute:\n  wxXmlAttribute()\n  wxXmlAttribute(const wxString &, const wxString &, wxXmlAttribute *)\n  wxXmlAttribute(lua_Table *)\n  wxXmlAttribute(lua_Table *, const wxString &, const wxString &, wxXmlAttribute *)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxXmlAttribute::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlAttribute::GetName() const function, expected prototype:\nwxString wxXmlAttribute::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlAttribute::GetName() const. Got : '%s'\n%s",typeid(Luna< wxXmlAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxXmlAttribute * wxXmlAttribute::GetNext() const
	static int _bind_GetNext(lua_State *L) {
		if (!_lg_typecheck_GetNext(L)) {
			luaL_error(L, "luna typecheck failed in wxXmlAttribute * wxXmlAttribute::GetNext() const function, expected prototype:\nwxXmlAttribute * wxXmlAttribute::GetNext() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxXmlAttribute * wxXmlAttribute::GetNext() const. Got : '%s'\n%s",typeid(Luna< wxXmlAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxXmlAttribute * lret = self->GetNext();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxXmlAttribute >::push(L,lret,false);

		return 1;
	}

	// wxString wxXmlAttribute::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxXmlAttribute::GetValue() const function, expected prototype:\nwxString wxXmlAttribute::GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxXmlAttribute::GetValue() const. Got : '%s'\n%s",typeid(Luna< wxXmlAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxXmlAttribute::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlAttribute::SetName(const wxString & name) function, expected prototype:\nvoid wxXmlAttribute::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlAttribute::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxXmlAttribute::SetNext(wxXmlAttribute * next)
	static int _bind_SetNext(lua_State *L) {
		if (!_lg_typecheck_SetNext(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlAttribute::SetNext(wxXmlAttribute * next) function, expected prototype:\nvoid wxXmlAttribute::SetNext(wxXmlAttribute * next)\nClass arguments details:\narg 1 ID = 23837631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxXmlAttribute* next=(Luna< wxXmlAttribute >::check(L,2));

		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlAttribute::SetNext(wxXmlAttribute *). Got : '%s'\n%s",typeid(Luna< wxXmlAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNext(next);

		return 0;
	}

	// void wxXmlAttribute::SetValue(const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxXmlAttribute::SetValue(const wxString & value) function, expected prototype:\nvoid wxXmlAttribute::SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxXmlAttribute* self=(Luna< wxXmlAttribute >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxXmlAttribute::SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxXmlAttribute >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(value);

		return 0;
	}


	// Operator binds:

};

wxXmlAttribute* LunaTraits< wxXmlAttribute >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxXmlAttribute::_bind_ctor(L);
}

void LunaTraits< wxXmlAttribute >::_bind_dtor(wxXmlAttribute* obj) {
	delete obj;
}

const char LunaTraits< wxXmlAttribute >::className[] = "wxXmlAttribute";
const char LunaTraits< wxXmlAttribute >::fullName[] = "wxXmlAttribute";
const char LunaTraits< wxXmlAttribute >::moduleName[] = "wx";
const char* LunaTraits< wxXmlAttribute >::parents[] = {0};
const int LunaTraits< wxXmlAttribute >::hash = 23837631;
const int LunaTraits< wxXmlAttribute >::uniqueIDs[] = {23837631,0};

luna_RegType LunaTraits< wxXmlAttribute >::methods[] = {
	{"GetName", &luna_wrapper_wxXmlAttribute::_bind_GetName},
	{"GetNext", &luna_wrapper_wxXmlAttribute::_bind_GetNext},
	{"GetValue", &luna_wrapper_wxXmlAttribute::_bind_GetValue},
	{"SetName", &luna_wrapper_wxXmlAttribute::_bind_SetName},
	{"SetNext", &luna_wrapper_wxXmlAttribute::_bind_SetNext},
	{"SetValue", &luna_wrapper_wxXmlAttribute::_bind_SetValue},
	{"dynCast", &luna_wrapper_wxXmlAttribute::_bind_dynCast},
	{"__eq", &luna_wrapper_wxXmlAttribute::_bind___eq},
	{"fromVoid", &luna_wrapper_wxXmlAttribute::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxXmlAttribute::_bind_asVoid},
	{"getTable", &luna_wrapper_wxXmlAttribute::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxXmlAttribute >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxXmlAttribute >::enumValues[] = {
	{0,0}
};


