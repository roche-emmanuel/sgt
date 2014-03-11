#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPersistentObject.h>

class luna_wrapper_wxPersistentObject {
public:
	typedef Luna< wxPersistentObject > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxPersistentObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84824132) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPersistentObject*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPersistentObject* rhs =(Luna< wxPersistentObject >::check(L,2));
		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
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

		wxPersistentObject* self= (wxPersistentObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPersistentObject >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84824132) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPersistentObject >::check(L,1));
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

		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPersistentObject");
		
		return luna_dynamicCast(L,converters,"wxPersistentObject",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Restore(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKind(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetObject(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPersistentObject::wxPersistentObject(lua_Table * data, void * obj)
	static wxPersistentObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxPersistentObject::wxPersistentObject(lua_Table * data, void * obj) function, expected prototype:\nwxPersistentObject::wxPersistentObject(lua_Table * data, void * obj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));

		return new wrapper_wxPersistentObject(L,NULL, obj);
	}


	// Function binds:
	// void wxPersistentObject::Save() const
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luaL_error(L, "luna typecheck failed in void wxPersistentObject::Save() const function, expected prototype:\nvoid wxPersistentObject::Save() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPersistentObject::Save() const. Got : '%s'\n%s",typeid(Luna< wxPersistentObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Save();

		return 0;
	}

	// bool wxPersistentObject::Restore()
	static int _bind_Restore(lua_State *L) {
		if (!_lg_typecheck_Restore(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPersistentObject::Restore() function, expected prototype:\nbool wxPersistentObject::Restore()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPersistentObject::Restore(). Got : '%s'\n%s",typeid(Luna< wxPersistentObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Restore();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPersistentObject::GetKind() const
	static int _bind_GetKind(lua_State *L) {
		if (!_lg_typecheck_GetKind(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPersistentObject::GetKind() const function, expected prototype:\nwxString wxPersistentObject::GetKind() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPersistentObject::GetKind() const. Got : '%s'\n%s",typeid(Luna< wxPersistentObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetKind();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxPersistentObject::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPersistentObject::GetName() const function, expected prototype:\nwxString wxPersistentObject::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPersistentObject::GetName() const. Got : '%s'\n%s",typeid(Luna< wxPersistentObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void * wxPersistentObject::GetObject() const
	static int _bind_GetObject(lua_State *L) {
		if (!_lg_typecheck_GetObject(L)) {
			luaL_error(L, "luna typecheck failed in void * wxPersistentObject::GetObject() const function, expected prototype:\nvoid * wxPersistentObject::GetObject() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistentObject* self=(Luna< wxPersistentObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxPersistentObject::GetObject() const. Got : '%s'\n%s",typeid(Luna< wxPersistentObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetObject();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxPersistentObject* LunaTraits< wxPersistentObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPersistentObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxPersistentObject::Save() const
	// bool wxPersistentObject::Restore()
	// wxString wxPersistentObject::GetKind() const
	// wxString wxPersistentObject::GetName() const
}

void LunaTraits< wxPersistentObject >::_bind_dtor(wxPersistentObject* obj) {
	delete obj;
}

const char LunaTraits< wxPersistentObject >::className[] = "wxPersistentObject";
const char LunaTraits< wxPersistentObject >::fullName[] = "wxPersistentObject";
const char LunaTraits< wxPersistentObject >::moduleName[] = "wx";
const char* LunaTraits< wxPersistentObject >::parents[] = {0};
const int LunaTraits< wxPersistentObject >::hash = 84824132;
const int LunaTraits< wxPersistentObject >::uniqueIDs[] = {84824132,0};

luna_RegType LunaTraits< wxPersistentObject >::methods[] = {
	{"Save", &luna_wrapper_wxPersistentObject::_bind_Save},
	{"Restore", &luna_wrapper_wxPersistentObject::_bind_Restore},
	{"GetKind", &luna_wrapper_wxPersistentObject::_bind_GetKind},
	{"GetName", &luna_wrapper_wxPersistentObject::_bind_GetName},
	{"GetObject", &luna_wrapper_wxPersistentObject::_bind_GetObject},
	{"dynCast", &luna_wrapper_wxPersistentObject::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPersistentObject::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPersistentObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPersistentObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPersistentObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPersistentObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPersistentObject >::enumValues[] = {
	{0,0}
};


