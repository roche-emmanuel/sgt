#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileDataObject.h>

class luna_wrapper_wxFileDataObject {
public:
	typedef Luna< wxFileDataObject > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataObject* self=(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDataObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxFileDataObject* self= (wxFileDataObject*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileDataObject >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55398761) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxDataObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxFileDataObject* ptr= dynamic_cast< wxFileDataObject* >(Luna< wxDataObject >::check(L,1));
		wxFileDataObject* ptr= luna_caster< wxDataObject, wxFileDataObject >::cast(Luna< wxDataObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDataObject >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilenames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDataHere(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDataSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileDataObject::wxFileDataObject(lua_Table * data)
	static wxFileDataObject* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxFileDataObject::wxFileDataObject(lua_Table * data) function, expected prototype:\nwxFileDataObject::wxFileDataObject(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxFileDataObject(L,NULL);
	}


	// Function binds:
	// void wxFileDataObject::AddFile(const wxString & file)
	static int _bind_AddFile(lua_State *L) {
		if (!_lg_typecheck_AddFile(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDataObject::AddFile(const wxString & file) function, expected prototype:\nvoid wxFileDataObject::AddFile(const wxString & file)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString file(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDataObject* self=Luna< wxDataObject >::checkSubType< wxFileDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDataObject::AddFile(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFile(file);

		return 0;
	}

	// const wxArrayString & wxFileDataObject::GetFilenames() const
	static int _bind_GetFilenames(lua_State *L) {
		if (!_lg_typecheck_GetFilenames(L)) {
			luaL_error(L, "luna typecheck failed in const wxArrayString & wxFileDataObject::GetFilenames() const function, expected prototype:\nconst wxArrayString & wxFileDataObject::GetFilenames() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDataObject* self=Luna< wxDataObject >::checkSubType< wxFileDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxArrayString & wxFileDataObject::GetFilenames() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxArrayString* lret = &self->GetFilenames();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,false);

		return 1;
	}

	// bool wxFileDataObject::base_GetDataHere(void * buf) const
	static int _bind_base_GetDataHere(lua_State *L) {
		if (!_lg_typecheck_base_GetDataHere(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDataObject::base_GetDataHere(void * buf) const function, expected prototype:\nbool wxFileDataObject::base_GetDataHere(void * buf) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buf=(Luna< void >::check(L,2));

		wxFileDataObject* self=Luna< wxDataObject >::checkSubType< wxFileDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDataObject::base_GetDataHere(void *) const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDataObject::GetDataHere(buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxFileDataObject::base_GetDataSize() const
	static int _bind_base_GetDataSize(lua_State *L) {
		if (!_lg_typecheck_base_GetDataSize(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxFileDataObject::base_GetDataSize() const function, expected prototype:\nsize_t wxFileDataObject::base_GetDataSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDataObject* self=Luna< wxDataObject >::checkSubType< wxFileDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxFileDataObject::base_GetDataSize() const. Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxFileDataObject::GetDataSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFileDataObject::base_SetData(size_t len, const void * buf)
	static int _bind_base_SetData(lua_State *L) {
		if (!_lg_typecheck_base_SetData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDataObject::base_SetData(size_t len, const void * buf) function, expected prototype:\nbool wxFileDataObject::base_SetData(size_t len, const void * buf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t len=(size_t)lua_tointeger(L,2);
		const void* buf=(Luna< void >::check(L,3));

		wxFileDataObject* self=Luna< wxDataObject >::checkSubType< wxFileDataObject >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDataObject::base_SetData(size_t, const void *). Got : '%s'\n%s",typeid(Luna< wxDataObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDataObject::SetData(len, buf);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFileDataObject* LunaTraits< wxFileDataObject >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileDataObject::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataObject::GetAllFormats(wxDataFormat * formats, wxDataObject::Direction dir = wxDataObject::Get) const
	// bool wxDataObject::GetDataHere(const wxDataFormat & format, void * buf) const
	// size_t wxDataObject::GetDataSize(const wxDataFormat & format) const
	// size_t wxDataObject::GetFormatCount(wxDataObject::Direction dir = wxDataObject::Get) const
	// wxDataFormat wxDataObject::GetPreferredFormat(wxDataObject::Direction dir = wxDataObject::Get) const
}

void LunaTraits< wxFileDataObject >::_bind_dtor(wxFileDataObject* obj) {
	delete obj;
}

const char LunaTraits< wxFileDataObject >::className[] = "wxFileDataObject";
const char LunaTraits< wxFileDataObject >::fullName[] = "wxFileDataObject";
const char LunaTraits< wxFileDataObject >::moduleName[] = "wx";
const char* LunaTraits< wxFileDataObject >::parents[] = {"wx.wxDataObjectSimple", 0};
const int LunaTraits< wxFileDataObject >::hash = 82680185;
const int LunaTraits< wxFileDataObject >::uniqueIDs[] = {55398761,0};

luna_RegType LunaTraits< wxFileDataObject >::methods[] = {
	{"AddFile", &luna_wrapper_wxFileDataObject::_bind_AddFile},
	{"GetFilenames", &luna_wrapper_wxFileDataObject::_bind_GetFilenames},
	{"base_GetDataHere", &luna_wrapper_wxFileDataObject::_bind_base_GetDataHere},
	{"base_GetDataSize", &luna_wrapper_wxFileDataObject::_bind_base_GetDataSize},
	{"base_SetData", &luna_wrapper_wxFileDataObject::_bind_base_SetData},
	{"fromVoid", &luna_wrapper_wxFileDataObject::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileDataObject::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileDataObject::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDataObject >::converters[] = {
	{"wxDataObject", &luna_wrapper_wxFileDataObject::_cast_from_wxDataObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDataObject >::enumValues[] = {
	{0,0}
};


