#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSound.h>

class luna_wrapper_wxSound {
public:
	typedef Luna< wxSound > luna_t;

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

		wxSound* self= (wxSound*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSound >::push(L,self,false);
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
		//wxSound* ptr= dynamic_cast< wxSound* >(Luna< wxObject >::check(L,1));
		wxSound* ptr= luna_caster< wxObject, wxSound >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSound >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Play_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Play_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Stop(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSound::wxSound()
	static wxSound* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSound::wxSound() function, expected prototype:\nwxSound::wxSound()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxSound();
	}

	// wxSound::wxSound(const wxString & fileName, bool isResource = false)
	static wxSound* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSound::wxSound(const wxString & fileName, bool isResource = false) function, expected prototype:\nwxSound::wxSound(const wxString & fileName, bool isResource = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fileName(lua_tostring(L,1),lua_objlen(L,1));
		bool isResource=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		return new wxSound(fileName, isResource);
	}

	// wxSound::wxSound(size_t size, const void * data)
	static wxSound* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSound::wxSound(size_t size, const void * data) function, expected prototype:\nwxSound::wxSound(size_t size, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,1);
		const void* data=(Luna< void >::check(L,2));

		return new wxSound(size, data);
	}

	// wxSound::wxSound(lua_Table * data)
	static wxSound* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSound::wxSound(lua_Table * data) function, expected prototype:\nwxSound::wxSound(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxSound(L,NULL);
	}

	// wxSound::wxSound(lua_Table * data, const wxString & fileName, bool isResource = false)
	static wxSound* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in wxSound::wxSound(lua_Table * data, const wxString & fileName, bool isResource = false) function, expected prototype:\nwxSound::wxSound(lua_Table * data, const wxString & fileName, bool isResource = false)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));
		bool isResource=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new wrapper_wxSound(L,NULL, fileName, isResource);
	}

	// wxSound::wxSound(lua_Table * data, size_t size, const void * data)
	static wxSound* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in wxSound::wxSound(lua_Table * data, size_t size, const void * data) function, expected prototype:\nwxSound::wxSound(lua_Table * data, size_t size, const void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t size=(size_t)lua_tointeger(L,2);
		const void* data=(Luna< void >::check(L,3));

		return new wrapper_wxSound(L,NULL, size, data);
	}

	// Overload binder for wxSound::wxSound
	static wxSound* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function wxSound, cannot match any of the overloads for function wxSound:\n  wxSound()\n  wxSound(const wxString &, bool)\n  wxSound(size_t, const void *)\n  wxSound(lua_Table *)\n  wxSound(lua_Table *, const wxString &, bool)\n  wxSound(lua_Table *, size_t, const void *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSound::Create(const wxString & fileName, bool isResource = false)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSound::Create(const wxString & fileName, bool isResource = false) function, expected prototype:\nbool wxSound::Create(const wxString & fileName, bool isResource = false)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString fileName(lua_tostring(L,2),lua_objlen(L,2));
		bool isResource=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxSound* self=Luna< wxObject >::checkSubType< wxSound >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSound::Create(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(fileName, isResource);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSound::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSound::IsOk() const function, expected prototype:\nbool wxSound::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSound* self=Luna< wxObject >::checkSubType< wxSound >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSound::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSound::Play(unsigned int flags = wxSOUND_ASYNC) const
	static int _bind_Play_overload_1(lua_State *L) {
		if (!_lg_typecheck_Play_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSound::Play(unsigned int flags = wxSOUND_ASYNC) const function, expected prototype:\nbool wxSound::Play(unsigned int flags = wxSOUND_ASYNC) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned flags=luatop>1 ? (unsigned)lua_tointeger(L,2) : (unsigned)wxSOUND_ASYNC;

		wxSound* self=Luna< wxObject >::checkSubType< wxSound >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSound::Play(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Play(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool wxSound::Play(const wxString & filename, unsigned int flags = wxSOUND_ASYNC)
	static int _bind_Play_overload_2(lua_State *L) {
		if (!_lg_typecheck_Play_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxSound::Play(const wxString & filename, unsigned int flags = wxSOUND_ASYNC) function, expected prototype:\nstatic bool wxSound::Play(const wxString & filename, unsigned int flags = wxSOUND_ASYNC)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString filename(lua_tostring(L,1),lua_objlen(L,1));
		unsigned flags=luatop>1 ? (unsigned)lua_tointeger(L,2) : (unsigned)wxSOUND_ASYNC;

		bool lret = wxSound::Play(filename, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxSound::Play
	static int _bind_Play(lua_State *L) {
		if (_lg_typecheck_Play_overload_1(L)) return _bind_Play_overload_1(L);
		if (_lg_typecheck_Play_overload_2(L)) return _bind_Play_overload_2(L);

		luaL_error(L, "error in function Play, cannot match any of the overloads for function Play:\n  Play(unsigned int)\n  Play(const wxString &, unsigned int)\n");
		return 0;
	}

	// static void wxSound::Stop()
	static int _bind_Stop(lua_State *L) {
		if (!_lg_typecheck_Stop(L)) {
			luaL_error(L, "luna typecheck failed in static void wxSound::Stop() function, expected prototype:\nstatic void wxSound::Stop()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSound::Stop();

		return 0;
	}

	// wxClassInfo * wxSound::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSound::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSound::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSound* self=Luna< wxObject >::checkSubType< wxSound >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSound::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSound::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxSound* LunaTraits< wxSound >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSound::_bind_ctor(L);
}

void LunaTraits< wxSound >::_bind_dtor(wxSound* obj) {
	delete obj;
}

const char LunaTraits< wxSound >::className[] = "wxSound";
const char LunaTraits< wxSound >::fullName[] = "wxSound";
const char LunaTraits< wxSound >::moduleName[] = "wx";
const char* LunaTraits< wxSound >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSound >::hash = 28505559;
const int LunaTraits< wxSound >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSound >::methods[] = {
	{"Create", &luna_wrapper_wxSound::_bind_Create},
	{"IsOk", &luna_wrapper_wxSound::_bind_IsOk},
	{"Play", &luna_wrapper_wxSound::_bind_Play},
	{"Stop", &luna_wrapper_wxSound::_bind_Stop},
	{"base_GetClassInfo", &luna_wrapper_wxSound::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxSound::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSound::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSound::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSound >::converters[] = {
	{"wxObject", &luna_wrapper_wxSound::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSound >::enumValues[] = {
	{0,0}
};


