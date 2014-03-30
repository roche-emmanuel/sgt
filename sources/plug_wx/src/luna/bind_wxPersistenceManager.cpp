#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPersistenceManager.h>

class luna_wrapper_wxPersistenceManager {
public:
	typedef Luna< wxPersistenceManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxPersistenceManager,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61208595) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxPersistenceManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxPersistenceManager* rhs =(Luna< wxPersistenceManager >::check(L,2));
		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
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

		wxPersistenceManager* self= (wxPersistenceManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPersistenceManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61208595) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxPersistenceManager >::check(L,1));
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

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxPersistenceManager");
		
		return luna_dynamicCast(L,converters,"wxPersistenceManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,61208595) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableSaving(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DisableRestoring(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Register(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,84824132)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Find(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unregister(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Save(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Restore(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SaveAndUnregister(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RegisterAndRestore(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,84824132)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static void wxPersistenceManager::Set(wxPersistenceManager & manager)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in static void wxPersistenceManager::Set(wxPersistenceManager & manager) function, expected prototype:\nstatic void wxPersistenceManager::Set(wxPersistenceManager & manager)\nClass arguments details:\narg 1 ID = 61208595\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPersistenceManager* manager_ptr=(Luna< wxPersistenceManager >::check(L,1));
		if( !manager_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg manager in wxPersistenceManager::Set function");
		}
		wxPersistenceManager & manager=*manager_ptr;

		wxPersistenceManager::Set(manager);

		return 0;
	}

	// static wxPersistenceManager & wxPersistenceManager::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static wxPersistenceManager & wxPersistenceManager::Get() function, expected prototype:\nstatic wxPersistenceManager & wxPersistenceManager::Get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const wxPersistenceManager* lret = &wxPersistenceManager::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPersistenceManager >::push(L,lret,false);

		return 1;
	}

	// void wxPersistenceManager::DisableSaving()
	static int _bind_DisableSaving(lua_State *L) {
		if (!_lg_typecheck_DisableSaving(L)) {
			luaL_error(L, "luna typecheck failed in void wxPersistenceManager::DisableSaving() function, expected prototype:\nvoid wxPersistenceManager::DisableSaving()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPersistenceManager::DisableSaving(). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableSaving();

		return 0;
	}

	// void wxPersistenceManager::DisableRestoring()
	static int _bind_DisableRestoring(lua_State *L) {
		if (!_lg_typecheck_DisableRestoring(L)) {
			luaL_error(L, "luna typecheck failed in void wxPersistenceManager::DisableRestoring() function, expected prototype:\nvoid wxPersistenceManager::DisableRestoring()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPersistenceManager::DisableRestoring(). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableRestoring();

		return 0;
	}

	// wxPersistentObject * wxPersistenceManager::Register(void * obj, wxPersistentObject * po)
	static int _bind_Register(lua_State *L) {
		if (!_lg_typecheck_Register(L)) {
			luaL_error(L, "luna typecheck failed in wxPersistentObject * wxPersistenceManager::Register(void * obj, wxPersistentObject * po) function, expected prototype:\nwxPersistentObject * wxPersistenceManager::Register(void * obj, wxPersistentObject * po)\nClass arguments details:\narg 2 ID = 84824132\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));
		wxPersistentObject* po=(Luna< wxPersistentObject >::check(L,3));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPersistentObject * wxPersistenceManager::Register(void *, wxPersistentObject *). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPersistentObject * lret = self->Register(obj, po);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPersistentObject >::push(L,lret,false);

		return 1;
	}

	// wxPersistentObject * wxPersistenceManager::Find(void * obj) const
	static int _bind_Find(lua_State *L) {
		if (!_lg_typecheck_Find(L)) {
			luaL_error(L, "luna typecheck failed in wxPersistentObject * wxPersistenceManager::Find(void * obj) const function, expected prototype:\nwxPersistentObject * wxPersistenceManager::Find(void * obj) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPersistentObject * wxPersistenceManager::Find(void *) const. Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPersistentObject * lret = self->Find(obj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPersistentObject >::push(L,lret,false);

		return 1;
	}

	// void wxPersistenceManager::Unregister(void * obj)
	static int _bind_Unregister(lua_State *L) {
		if (!_lg_typecheck_Unregister(L)) {
			luaL_error(L, "luna typecheck failed in void wxPersistenceManager::Unregister(void * obj) function, expected prototype:\nvoid wxPersistenceManager::Unregister(void * obj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPersistenceManager::Unregister(void *). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Unregister(obj);

		return 0;
	}

	// void wxPersistenceManager::Save(void * obj)
	static int _bind_Save(lua_State *L) {
		if (!_lg_typecheck_Save(L)) {
			luaL_error(L, "luna typecheck failed in void wxPersistenceManager::Save(void * obj) function, expected prototype:\nvoid wxPersistenceManager::Save(void * obj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPersistenceManager::Save(void *). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Save(obj);

		return 0;
	}

	// bool wxPersistenceManager::Restore(void * obj)
	static int _bind_Restore(lua_State *L) {
		if (!_lg_typecheck_Restore(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPersistenceManager::Restore(void * obj) function, expected prototype:\nbool wxPersistenceManager::Restore(void * obj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPersistenceManager::Restore(void *). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Restore(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPersistenceManager::SaveAndUnregister(void * obj)
	static int _bind_SaveAndUnregister(lua_State *L) {
		if (!_lg_typecheck_SaveAndUnregister(L)) {
			luaL_error(L, "luna typecheck failed in void wxPersistenceManager::SaveAndUnregister(void * obj) function, expected prototype:\nvoid wxPersistenceManager::SaveAndUnregister(void * obj)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPersistenceManager::SaveAndUnregister(void *). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SaveAndUnregister(obj);

		return 0;
	}

	// bool wxPersistenceManager::RegisterAndRestore(void * obj, wxPersistentObject * po)
	static int _bind_RegisterAndRestore(lua_State *L) {
		if (!_lg_typecheck_RegisterAndRestore(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPersistenceManager::RegisterAndRestore(void * obj, wxPersistentObject * po) function, expected prototype:\nbool wxPersistenceManager::RegisterAndRestore(void * obj, wxPersistentObject * po)\nClass arguments details:\narg 2 ID = 84824132\n\n%s",luna_dumpStack(L).c_str());
		}

		void* obj=(Luna< void >::check(L,2));
		wxPersistentObject* po=(Luna< wxPersistentObject >::check(L,3));

		wxPersistenceManager* self=(Luna< wxPersistenceManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPersistenceManager::RegisterAndRestore(void *, wxPersistentObject *). Got : '%s'\n%s",typeid(Luna< wxPersistenceManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RegisterAndRestore(obj, po);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxPersistenceManager* LunaTraits< wxPersistenceManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPersistenceManager >::_bind_dtor(wxPersistenceManager* obj) {
	delete obj;
}

const char LunaTraits< wxPersistenceManager >::className[] = "wxPersistenceManager";
const char LunaTraits< wxPersistenceManager >::fullName[] = "wxPersistenceManager";
const char LunaTraits< wxPersistenceManager >::moduleName[] = "wx";
const char* LunaTraits< wxPersistenceManager >::parents[] = {0};
const int LunaTraits< wxPersistenceManager >::hash = 61208595;
const int LunaTraits< wxPersistenceManager >::uniqueIDs[] = {61208595,0};

luna_RegType LunaTraits< wxPersistenceManager >::methods[] = {
	{"Set", &luna_wrapper_wxPersistenceManager::_bind_Set},
	{"Get", &luna_wrapper_wxPersistenceManager::_bind_Get},
	{"DisableSaving", &luna_wrapper_wxPersistenceManager::_bind_DisableSaving},
	{"DisableRestoring", &luna_wrapper_wxPersistenceManager::_bind_DisableRestoring},
	{"Register", &luna_wrapper_wxPersistenceManager::_bind_Register},
	{"Find", &luna_wrapper_wxPersistenceManager::_bind_Find},
	{"Unregister", &luna_wrapper_wxPersistenceManager::_bind_Unregister},
	{"Save", &luna_wrapper_wxPersistenceManager::_bind_Save},
	{"Restore", &luna_wrapper_wxPersistenceManager::_bind_Restore},
	{"SaveAndUnregister", &luna_wrapper_wxPersistenceManager::_bind_SaveAndUnregister},
	{"RegisterAndRestore", &luna_wrapper_wxPersistenceManager::_bind_RegisterAndRestore},
	{"dynCast", &luna_wrapper_wxPersistenceManager::_bind_dynCast},
	{"__eq", &luna_wrapper_wxPersistenceManager::_bind___eq},
	{"fromVoid", &luna_wrapper_wxPersistenceManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPersistenceManager::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPersistenceManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPersistenceManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxPersistenceManager >::enumValues[] = {
	{0,0}
};


