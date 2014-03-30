#include <plug_common.h>

#include <luna/wrappers/wrapper_wxObject.h>

class luna_wrapper_wxObject {
public:
	typedef Luna< wxObject > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxObject*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* rhs =(Luna< wxObject >::check(L,2));
		wxObject* self=(Luna< wxObject >::check(L,1));
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

		wxObject* self= (wxObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxObject >::push(L,self,false);
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

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxObject");
		
		return luna_dynamicCast(L,converters,"wxObject",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRefData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsKindOf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSameAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Ref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRefData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,60960840)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnShare(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxObject::wxObject()
	static wxObject* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxObject::wxObject() function, expected prototype:\nwxObject::wxObject()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxObject();
	}

	// wxObject::wxObject(const wxObject & other)
	static wxObject* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxObject::wxObject(const wxObject & other) function, expected prototype:\nwxObject::wxObject(const wxObject & other)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxObject* other_ptr=(Luna< wxObject >::check(L,1));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxObject::wxObject function");
		}
		const wxObject & other=*other_ptr;

		return new wxObject(other);
	}

	// wxObject::wxObject(lua_Table * data)
	static wxObject* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxObject::wxObject(lua_Table * data) function, expected prototype:\nwxObject::wxObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxObject(L,NULL);
	}

	// wxObject::wxObject(lua_Table * data, const wxObject & other)
	static wxObject* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxObject::wxObject(lua_Table * data, const wxObject & other) function, expected prototype:\nwxObject::wxObject(lua_Table * data, const wxObject & other)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxObject* other_ptr=(Luna< wxObject >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxObject::wxObject function");
		}
		const wxObject & other=*other_ptr;

		return new wrapper_wxObject(L,NULL, other);
	}

	// Overload binder for wxObject::wxObject
	static wxObject* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxObject, cannot match any of the overloads for function wxObject:\n  wxObject()\n  wxObject(const wxObject &)\n  wxObject(lua_Table *)\n  wxObject(lua_Table *, const wxObject &)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxObject::GetClassInfo() const
	static int _bind_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxObject::GetClassInfo() const function, expected prototype:\nwxClassInfo * wxObject::GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxObject::GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxObjectRefData * wxObject::GetRefData() const
	static int _bind_GetRefData(lua_State *L) {
		if (!_lg_typecheck_GetRefData(L)) {
			luaL_error(L, "luna typecheck failed in wxObjectRefData * wxObject::GetRefData() const function, expected prototype:\nwxObjectRefData * wxObject::GetRefData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxObjectRefData * wxObject::GetRefData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxObjectRefData * lret = self->GetRefData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxObjectRefData >::push(L,lret,false);

		return 1;
	}

	// bool wxObject::IsKindOf(const wxClassInfo * info) const
	static int _bind_IsKindOf(lua_State *L) {
		if (!_lg_typecheck_IsKindOf(L)) {
			luaL_error(L, "luna typecheck failed in bool wxObject::IsKindOf(const wxClassInfo * info) const function, expected prototype:\nbool wxObject::IsKindOf(const wxClassInfo * info) const\nClass arguments details:\narg 1 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxClassInfo* info=(Luna< wxClassInfo >::check(L,2));

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxObject::IsKindOf(const wxClassInfo *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsKindOf(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxObject::IsSameAs(const wxObject & obj) const
	static int _bind_IsSameAs(lua_State *L) {
		if (!_lg_typecheck_IsSameAs(L)) {
			luaL_error(L, "luna typecheck failed in bool wxObject::IsSameAs(const wxObject & obj) const function, expected prototype:\nbool wxObject::IsSameAs(const wxObject & obj) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxObject* obj_ptr=(Luna< wxObject >::check(L,2));
		if( !obj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg obj in wxObject::IsSameAs function");
		}
		const wxObject & obj=*obj_ptr;

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxObject::IsSameAs(const wxObject &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSameAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxObject::Ref(const wxObject & clone)
	static int _bind_Ref(lua_State *L) {
		if (!_lg_typecheck_Ref(L)) {
			luaL_error(L, "luna typecheck failed in void wxObject::Ref(const wxObject & clone) function, expected prototype:\nvoid wxObject::Ref(const wxObject & clone)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxObject* clone_ptr=(Luna< wxObject >::check(L,2));
		if( !clone_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg clone in wxObject::Ref function");
		}
		const wxObject & clone=*clone_ptr;

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxObject::Ref(const wxObject &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Ref(clone);

		return 0;
	}

	// void wxObject::SetRefData(wxObjectRefData * data)
	static int _bind_SetRefData(lua_State *L) {
		if (!_lg_typecheck_SetRefData(L)) {
			luaL_error(L, "luna typecheck failed in void wxObject::SetRefData(wxObjectRefData * data) function, expected prototype:\nvoid wxObject::SetRefData(wxObjectRefData * data)\nClass arguments details:\narg 1 ID = 60960840\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObjectRefData* data=(Luna< wxObjectRefData >::check(L,2));

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxObject::SetRefData(wxObjectRefData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRefData(data);

		return 0;
	}

	// void wxObject::UnRef()
	static int _bind_UnRef(lua_State *L) {
		if (!_lg_typecheck_UnRef(L)) {
			luaL_error(L, "luna typecheck failed in void wxObject::UnRef() function, expected prototype:\nvoid wxObject::UnRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxObject::UnRef(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnRef();

		return 0;
	}

	// void wxObject::UnShare()
	static int _bind_UnShare(lua_State *L) {
		if (!_lg_typecheck_UnShare(L)) {
			luaL_error(L, "luna typecheck failed in void wxObject::UnShare() function, expected prototype:\nvoid wxObject::UnShare()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxObject::UnShare(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnShare();

		return 0;
	}

	// wxClassInfo * wxObject::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxObject::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxObject::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxObject::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxObject::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxObject* LunaTraits< wxObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxObject::_bind_ctor(L);
}

void LunaTraits< wxObject >::_bind_dtor(wxObject* obj) {
	delete obj;
}

const char LunaTraits< wxObject >::className[] = "wxObject";
const char LunaTraits< wxObject >::fullName[] = "wxObject";
const char LunaTraits< wxObject >::moduleName[] = "wx";
const char* LunaTraits< wxObject >::parents[] = {0};
const int LunaTraits< wxObject >::hash = 56813631;
const int LunaTraits< wxObject >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxObject >::methods[] = {
	{"GetClassInfo", &luna_wrapper_wxObject::_bind_GetClassInfo},
	{"GetRefData", &luna_wrapper_wxObject::_bind_GetRefData},
	{"IsKindOf", &luna_wrapper_wxObject::_bind_IsKindOf},
	{"IsSameAs", &luna_wrapper_wxObject::_bind_IsSameAs},
	{"Ref", &luna_wrapper_wxObject::_bind_Ref},
	{"SetRefData", &luna_wrapper_wxObject::_bind_SetRefData},
	{"UnRef", &luna_wrapper_wxObject::_bind_UnRef},
	{"UnShare", &luna_wrapper_wxObject::_bind_UnShare},
	{"base_GetClassInfo", &luna_wrapper_wxObject::_bind_base_GetClassInfo},
	{"dynCast", &luna_wrapper_wxObject::_bind_dynCast},
	{"__eq", &luna_wrapper_wxObject::_bind___eq},
	{"fromVoid", &luna_wrapper_wxObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxObject >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxObject >::enumValues[] = {
	{0,0}
};


